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
        // ��ʼ����Դϵͳ
        YooAssets.Initialize();

        // ����Ĭ�ϵ���Դ��
        package = YooAssets.CreateAssetsPackage("DefaultPackage");

        //        ���ø���Դ��ΪĬ�ϵ���Դ��������ʹ��YooAssets��ؼ��ؽӿڼ��ظ���Դ�����ݡ�
        YooAssets.SetDefaultAssetsPackage(package);

        if (playMode == EPlayMode.EditorSimulateMode)
        {
            var initParameters = new EditorSimulateModeParameters();
            initParameters.SimulatePatchManifestPath = EditorSimulateModeHelper.SimulateBuild("DefaultPackage");
            await package.InitializeAsync(initParameters);
        }
        // ��������ģʽ
        if (playMode == EPlayMode.OfflinePlayMode)
        {
            var initParameters = new OfflinePlayModeParameters();
            await package.InitializeAsync(initParameters);

        }

        // ��������ģʽ
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
            //���³ɹ�
            packageVersion = operation.PackageVersion;
            Debug.Log($"Updated package Version : {packageVersion}");
        }
        else
        {
            //����ʧ��
            Debug.LogError(operation.Error);
        }


        var operation1 = package.UpdatePackageManifestAsync(packageVersion);
        await operation1;

        if (operation.Status == EOperationStatus.Succeed)
        {
        }
        else
        {
            //����ʧ��
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

        //û����Ҫ���ص���Դ
        if (downloader.TotalDownloadCount == 0)
        {
            return;
        }

        //��Ҫ���ص��ļ��������ܴ�С
        int totalDownloadCount = downloader.TotalDownloadCount;
        long totalDownloadBytes = downloader.TotalDownloadBytes;

        //ע��ص�����
        downloader.OnDownloadErrorCallback = OnDownloadErrorFunction;
        downloader.OnDownloadProgressCallback = OnDownloadProgressUpdateFunction;
        downloader.OnDownloadOverCallback = OnDownloadOverFunction;
        downloader.OnStartDownloadFileCallback = OnStartDownloadFileFunction;

        //��������
        downloader.BeginDownload();
        await downloader;

        //������ؽ��
        if (downloader.Status == EOperationStatus.Succeed)
        {
            //���سɹ�
            Debug.Log("�������");

        }
        else
        {
            //����ʧ��
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
       // Debug.Log("��ʼ����");
    }

    private void OnDownloadOverFunction(bool isSucceed)
    {
        //Debug.Log(isSucceed ? "���ؽ���" : "����ʧ��");
    }

    private void OnDownloadProgressUpdateFunction(int totalDownloadCount, int currentDownloadCount, long totalDownloadBytes, long currentDownloadBytes)
    {
        Debug.Log(string.Format("�������ļ���{0}����ǰ���ؽ���{1}��������byte{2},��ǰ����byte{3}", totalDownloadCount, currentDownloadCount, totalDownloadBytes, currentDownloadBytes));
    }

    private void OnDownloadErrorFunction(string fileName, string error)
    {
        Debug.LogError(string.Format("����·��{0}����������{1}", fileName, error));
    }

    // �����ļ���ѯ������
    private class QueryStreamingAssetsFileServices : IQueryServices
    {
        public bool QueryStreamingAssets(string fileName)
        {
            // StreamingAssetsHelper.cs��̫��ս�����ṩ��һ����ѯ�ű���
            string buildinFolderName = YooAssets.GetStreamingAssetBuildinFolderName();
            return BetterStreamingAssets.FileExists($"{buildinFolderName}/{fileName}");
        }
    }

    /// <summary>
    /// Ϊaot assembly����ԭʼmetadata�� ��������aot�����ȸ��¶��С�
    /// һ�����غ����AOT���ͺ�����Ӧnativeʵ�ֲ����ڣ����Զ��滻Ϊ����ģʽִ��
    /// </summary>
    IEnumerator  LoadMetadataForAOTAssemblies()
    {
        //AOT������Ӵ�
        List<string> aotMetaAssemblyFiles = new List<string>()
        {
            "mscorlib.dll",
            "System.dll",
            "System.Core.dll",
        };
        /// ע�⣬����Ԫ�����Ǹ�AOT dll����Ԫ���ݣ������Ǹ��ȸ���dll����Ԫ���ݡ�
        /// �ȸ���dll��ȱԪ���ݣ�����Ҫ���䣬�������LoadMetadataForAOTAssembly�᷵�ش���
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in aotMetaAssemblyFiles)
        {
            //byte[] dllBytes = BetterStreamingAssets.ReadAllBytes(aotDllName + ".bytes");
            var handle = package.LoadRawFileAsync(aotDllName);
            yield return handle;
            byte[] dllBytes = handle.GetRawFileData();
            // ����assembly��Ӧ��dll�����Զ�Ϊ��hook��һ��aot���ͺ�����native���������ڣ��ý������汾����
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }

    }
    /// <summary>
    /// ���ظ���assembly
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
