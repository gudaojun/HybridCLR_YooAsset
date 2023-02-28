using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using YooAsset;
using Cysharp.Threading.Tasks;
using System;
using System.IO;
using System.Threading.Tasks;
using HybridCLR;
using System.Reflection;

public class LoadDllFromYooAsset : MonoBehaviour
{
    AssetsPackage package;
    public EPlayMode playMode;

    private async Task Start()
    {
        BetterStreamingAssets.Initialize();
        await InitYooAssets();
        await UpdateDataVersion();
        await Download();
        StartCoroutine("LoadMetadataForAOTAssemblies");
        StartCoroutine("LoadHotUpdateAssembly");
    }
    private async Task InitYooAssets()
    {
        // 初始化资源系统
        YooAssets.Initialize();

        // 创建默认的资源包
        package = YooAssets.CreateAssetsPackage("DefaultPackage");

        //        设置该资源包为默认的资源包，可以使用YooAssets相关加载接口加载该资源包内容。
        YooAssets.SetDefaultAssetsPackage(package);

        if (playMode == EPlayMode.EditorSimulateMode)
        {
            var initParameters = new EditorSimulateModeParameters();
            initParameters.SimulatePatchManifestPath = EditorSimulateModeHelper.SimulateBuild("DefaultPackage");
            await package.InitializeAsync(initParameters);
        }
        // 单机运行模式
        if (playMode == EPlayMode.OfflinePlayMode)
        {
            var initParameters = new OfflinePlayModeParameters();
            await package.InitializeAsync(initParameters);

        }

        // 联机运行模式
        if (playMode == EPlayMode.HostPlayMode)
        {
            var initParameters = new HostPlayModeParameters();
            initParameters.QueryServices = new QueryStreamingAssetsFileServices();
            initParameters.DefaultHostServer = "http://192.168.1.10/CDN/PC/package";
            initParameters.FallbackHostServer = "http://192.168.1.10/CDN/PC/package";
            await package.InitializeAsync(initParameters);
        }
    }
    private async Task UpdateDataVersion()
    {
        var operation = package.UpdatePackageVersionAsync();
        await operation;
        string packageVersion = "";
        if (operation.Status == EOperationStatus.Succeed)
        {
            //更新成功
            packageVersion = operation.PackageVersion;
            Debug.Log($"Updated package Version : {packageVersion}");
        }
        else
        {
            //更新失败
            Debug.LogError(operation.Error);
        }


        var operation1 = package.UpdatePackageManifestAsync(packageVersion);
        await operation1;

        if (operation.Status == EOperationStatus.Succeed)
        {
        }
        else
        {
            //更新失败
            Debug.LogError(operation.Error);
        }

    }

    private async Task Download()
    {
        int downloadingMaxNum = 10;
        int failedTryAgain = 3;
        int timeout = 60;
        var package = YooAssets.GetAssetsPackage("DefaultPackage");
        var downloader = package.CreatePatchDownloader(downloadingMaxNum, failedTryAgain, timeout);

        //没有需要下载的资源
        if (downloader.TotalDownloadCount == 0)
        {
            return;
        }

        //需要下载的文件总数和总大小
        int totalDownloadCount = downloader.TotalDownloadCount;
        long totalDownloadBytes = downloader.TotalDownloadBytes;

        //注册回调方法
        downloader.OnDownloadErrorCallback = OnDownloadErrorFunction;
        downloader.OnDownloadProgressCallback = OnDownloadProgressUpdateFunction;
        downloader.OnDownloadOverCallback = OnDownloadOverFunction;
        downloader.OnStartDownloadFileCallback = OnStartDownloadFileFunction;

        //开启下载
        downloader.BeginDownload();
        await downloader;

        //检测下载结果
        if (downloader.Status == EOperationStatus.Succeed)
        {
            //下载成功
            Debug.Log("下载完成");

        }
        else
        {
            //下载失败
        }
    }

    private void StartGame()
    {
       
        //   AssetBundle prefabAb = AssetBundle.LoadFromMemory(BetterStreamingAssets.ReadAllBytes("prefabs"));
        AssetOperationHandle handle=package.LoadAssetAsync<GameObject>("HotUpdatePrefab");
        handle.Completed += (p) =>
        {
            var go = p.InstantiateAsync();
        };
        
    }

    private void OnStartDownloadFileFunction(string fileName, long sizeBytes)
    {
       // Debug.Log("开始下载");
    }

    private void OnDownloadOverFunction(bool isSucceed)
    {
        //Debug.Log(isSucceed ? "下载结束" : "下载失败");
    }

    private void OnDownloadProgressUpdateFunction(int totalDownloadCount, int currentDownloadCount, long totalDownloadBytes, long currentDownloadBytes)
    {
        Debug.Log(string.Format("总下载文件数{0}，当前下载进度{1}，总下载byte{2},当前下载byte{3}", totalDownloadCount, currentDownloadCount, totalDownloadBytes, currentDownloadBytes));
    }

    private void OnDownloadErrorFunction(string fileName, string error)
    {
        Debug.LogError(string.Format("错误路径{0}，错误内容{1}", fileName, error));
    }

    // 内置文件查询服务类
    private class QueryStreamingAssetsFileServices : IQueryServices
    {
        public bool QueryStreamingAssets(string fileName)
        {
            // StreamingAssetsHelper.cs是太空战机里提供的一个查询脚本。
            string buildinFolderName = YooAssets.GetStreamingAssetBuildinFolderName();
            return BetterStreamingAssets.FileExists($"{buildinFolderName}/{fileName}");
        }
    }

    /// <summary>
    /// 为aot assembly加载原始metadata， 这个代码放aot或者热更新都行。
    /// 一旦加载后，如果AOT泛型函数对应native实现不存在，则自动替换为解释模式执行
    /// </summary>
    IEnumerator  LoadMetadataForAOTAssemblies()
    {
        //AOT泛型添加处
        List<string> aotMetaAssemblyFiles = new List<string>()
        {
            "mscorlib.dll",
            "System.dll",
            "System.Core.dll",
        };
        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in aotMetaAssemblyFiles)
        {
            //byte[] dllBytes = BetterStreamingAssets.ReadAllBytes(aotDllName + ".bytes");
            var handle = package.LoadRawFileAsync(aotDllName);
            yield return handle;
            byte[] dllBytes = handle.GetRawFileData();
            // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }

    }
    /// <summary>
    /// 加载更新assembly
    /// </summary>
    /// <returns></returns>
    IEnumerator LoadHotUpdateAssembly()
    {
        var handle=package.LoadRawFileAsync("Assembly-CSharp.dll");
        yield return handle;
        byte[] assemblyData = handle.GetRawFileData();
        Assembly ass = Assembly.Load(assemblyData);

        StartGame();
    }
}
