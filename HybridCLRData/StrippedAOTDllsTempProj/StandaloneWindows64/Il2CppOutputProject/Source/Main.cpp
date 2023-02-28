#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<YooAsset.AssetOperationHandle>
struct Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16;
// System.Action`1<YooAsset.AsyncOperationBase>
struct Action_1_t2B402C842742EFCB5D9827C1981184ECC4F57FDF;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<YooAsset.RawFileOperationHandle>
struct Action_1_tAE9E4C9E74E41797813DF44AC91EEDDBBEF23457;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.List`1<YooAsset.AssetsPackage>
struct List_1_t1DA4806AB46E51E3F0B1A3DA0497AAC2FDE438B5;
// System.Collections.Generic.List`1<YooAsset.BundleInfo>
struct List_1_t943237520EBA876AFFDDA7CEB2622319659097AE;
// System.Collections.Generic.List`1<YooAsset.DownloaderBase>
struct List_1_t01C551675E768AA47C6770802F3DE41710533C48;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// AOTGenericReferences
struct AOTGenericReferences_t5F3B8F5D6BCBEBBE095EC3F80B81C095A66FC14E;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Reflection.Assembly
struct Assembly_t;
// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
// YooAsset.AssetInfo
struct AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456;
// YooAsset.AssetOperationHandle
struct AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B;
// YooAsset.AssetSystemImpl
struct AssetSystemImpl_t81D235BF692751145D6B2C3F3431BC7D8290BD38;
// YooAsset.AssetsPackage
struct AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// YooAsset.AsyncOperationBase
struct AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032;
// ConsoleToSceen
struct ConsoleToSceen_t7D05DB920A8325DB6F267120F20A516F5F4E0439;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// YooAsset.DownloaderOperation
struct DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2;
// YooAsset.EditorSimulateModeParameters
struct EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF;
// System.Exception
struct Exception_t;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// YooAsset.HostPlayModeParameters
struct HostPlayModeParameters_tC6E69199541C55D43D8BE6290108636DD4589CC5;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// YooAsset.IBundleServices
struct IBundleServices_t83ED8DA733B42205E9C88F694E45ADB313530B86;
// YooAsset.IDecryptionServices
struct IDecryptionServices_t72A8C817CBF8635B47CA0CEFA6700D0ADE92AA8B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// YooAsset.IPlayModeServices
struct IPlayModeServices_tAA52527E1B8B45CA174AECC67517825F92790C7A;
// YooAsset.IQueryServices
struct IQueryServices_tBBD2DE26F4E6FE8DC3AEDDE4F378EF0B83806C0F;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// YooAsset.InitializationOperation
struct InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F;
// YooAsset.InitializeParameters
struct InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1;
// YooAsset.InstantiateOperation
struct InstantiateOperation_t3A3C4296D9763CA01BB3F7C1285B0651AC23E66E;
// LoadDll
struct LoadDll_t6031B4BFA0C940CA9ADF12D87DC0003BB060336B;
// LoadDllFromYooAsset
struct LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// YooAsset.OfflinePlayModeParameters
struct OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9;
// YooAsset.PatchDownloaderOperation
struct PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701;
// YooAsset.ProviderBase
struct ProviderBase_t07CDF30CF91BB924A36026623C4136B7E1D0F758;
// YooAsset.RawFileOperationHandle
struct RawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// YooAsset.UpdatePackageManifestOperation
struct UpdatePackageManifestOperation_tB014E4396119B857527F7F70512C9DD1A496C145;
// YooAsset.UpdatePackageVersionOperation
struct UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// YooAsset.DownloaderOperation/OnDownloadError
struct OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206;
// YooAsset.DownloaderOperation/OnDownloadOver
struct OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6;
// YooAsset.DownloaderOperation/OnDownloadProgress
struct OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6;
// YooAsset.DownloaderOperation/OnStartDownloadFile
struct OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9;
// LoadDllFromYooAsset/<>c
struct U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5;
// LoadDllFromYooAsset/QueryStreamingAssetsFileServices
struct QueryStreamingAssetsFileServices_tABCAA88E78DDDF557EB821ABD4E16BE88720178C;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HomologousImageMode_tEC0F0043F595B001580D833592AE9E7FD4744548_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostPlayModeParameters_tC6E69199541C55D43D8BE6290108636DD4589CC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadImageErrorCode_tC778A2553ADB45B8C61EFE26C20837C23894FEB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QueryStreamingAssetsFileServices_tABCAA88E78DDDF557EB821ABD4E16BE88720178C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6;
IL2CPP_EXTERN_C String_t* _stringLiteral12C4DE0F4484ED3A7EB1EF04C63B0B3669FE5995;
IL2CPP_EXTERN_C String_t* _stringLiteral1BA46D2FDED261D9EBFFC277917E32CC44A3F821;
IL2CPP_EXTERN_C String_t* _stringLiteral23D742CB5B4468BB5AC90D51F0354E9748B085B7;
IL2CPP_EXTERN_C String_t* _stringLiteral26ECF6237476490DABC8DB457BD4BF537698CDEA;
IL2CPP_EXTERN_C String_t* _stringLiteral39ADC56EE231C04B9DCF61AC90E29EC2DE7674BE;
IL2CPP_EXTERN_C String_t* _stringLiteral48DAF8AE463975BF8EF40CCC197FC5E230E4F94E;
IL2CPP_EXTERN_C String_t* _stringLiteral6B6417EF0C209A189F13DFC69B2E9C8E57780167;
IL2CPP_EXTERN_C String_t* _stringLiteral79399E8E64B97439C0C4BD4515FD559E028BF79A;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53;
IL2CPP_EXTERN_C String_t* _stringLiteral9999EAD1C04E449384DCC261102A72E4A45FBF8E;
IL2CPP_EXTERN_C String_t* _stringLiteral9F62EC4DA34B944E10E7E174B4C54C0FB88F1021;
IL2CPP_EXTERN_C String_t* _stringLiteralA3F029047BA90CC134023587DF7DCF444B38D009;
IL2CPP_EXTERN_C String_t* _stringLiteralB369FFC16045CC74DAA85F54BF8CDE5DFAECBD40;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEC4C5477D8BA260A27C36AFD7E8C1C289169E9CF;
IL2CPP_EXTERN_C String_t* _stringLiteralF9DDA4DF980D4971E42607AE93A88D7745184EA5;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetsPackage_LoadAssetAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m5C79405470A025AE5F223C8A452F2E9FD339D185_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448_m303DAD8C02ACB274DAD2DE2A22DEAD32AF56EC54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m2616ED7DE1DA3D0BF9F98D16A67E3847DC31C0D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B_m72E71C2672320A312C20EDB1A2D26B710D357C51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_m30B2966EA7C9F070C2E92F99F18E6101BA9F50DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m8F711864EFD1D7F818C6FF30CBA98F943F326645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448_m3A35404796A8B330C72D018F3D402221DDB3302B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m66B29AAC0513C7D58F7D738F9D08B01335A177A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B_mA28CE77CDCFD9593AF754166C2E829DCA03BE611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m7C88372E6AC0732BBC757385E0640364D70C4D90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_mC0A7F9F45400C099F538AFFFE8B5F9976A46E867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleToSceen_Log_m103D43109C4BC58821A29D9E45E804E1494DCDF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m1D959087AF5DAD97E60071D83531EA087B9CA5C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumeratorAsyncExtensions_GetAwaiter_TisPatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701_m03725B6D4DFE62D6CFE95864F0E7B777A6CFB3BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumeratorAsyncExtensions_GetAwaiter_TisRawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171_m002213FD3955ED6035A8DD88C2275738A23082B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumeratorAsyncExtensions_GetAwaiter_TisUpdatePackageManifestOperation_tB014E4396119B857527F7F70512C9DD1A496C145_m2F118472B292222603D2B6534C20E756644EDD9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumeratorAsyncExtensions_GetAwaiter_TisUpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C_mDE5856CEB975ED5E40162C250D1B686D218E70E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m33A351ADA40CDA64143F349FACB5993E95C41C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoadDllFromYooAsset_OnDownloadErrorFunction_m1A534DD955D5CD845C97768B2E4A0006537A1AF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoadDllFromYooAsset_OnDownloadOverFunction_mE8F4B051DF7B3340F2653FD3F4315A6AD62E61D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoadDllFromYooAsset_OnDownloadProgressUpdateFunction_m65BC4DB89B5878C363B047EB412F6AD86B469179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoadDllFromYooAsset_OnStartDownloadFileFunction_m6E8053999B0BFF553712F670FDFF9349407093BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartGameU3Eb__6_0_mE7ED00114B59CF6D071A7517C3A11CF13D1DBFC6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCBE9122BF9BDC65523F37FACC1446BDEDE3C34D5 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// YooAsset.AssetsPackage
struct AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52  : public RuntimeObject
{
	// System.Boolean YooAsset.AssetsPackage::_isInitialize
	bool ____isInitialize_0;
	// System.String YooAsset.AssetsPackage::_initializeError
	String_t* ____initializeError_1;
	// YooAsset.EOperationStatus YooAsset.AssetsPackage::_initializeStatus
	int32_t ____initializeStatus_2;
	// YooAsset.EPlayMode YooAsset.AssetsPackage::_playMode
	int32_t ____playMode_3;
	// YooAsset.IBundleServices YooAsset.AssetsPackage::_bundleServices
	RuntimeObject* ____bundleServices_4;
	// YooAsset.IPlayModeServices YooAsset.AssetsPackage::_playModeServices
	RuntimeObject* ____playModeServices_5;
	// YooAsset.AssetSystemImpl YooAsset.AssetsPackage::_assetSystemImpl
	AssetSystemImpl_t81D235BF692751145D6B2C3F3431BC7D8290BD38* ____assetSystemImpl_6;
	// System.String YooAsset.AssetsPackage::<PackageName>k__BackingField
	String_t* ___U3CPackageNameU3Ek__BackingField_7;
};

// YooAsset.AsyncOperationBase
struct AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032  : public RuntimeObject
{
	// System.Action`1<YooAsset.AsyncOperationBase> YooAsset.AsyncOperationBase::_callback
	Action_1_t2B402C842742EFCB5D9827C1981184ECC4F57FDF* ____callback_0;
	// YooAsset.EOperationStatus YooAsset.AsyncOperationBase::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_1;
	// System.String YooAsset.AsyncOperationBase::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Single YooAsset.AsyncOperationBase::<Progress>k__BackingField
	float ___U3CProgressU3Ek__BackingField_3;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> YooAsset.AsyncOperationBase::_taskCompletionSource
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ____taskCompletionSource_4;
};

// YooAsset.InitializeParameters
struct InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1  : public RuntimeObject
{
	// System.Boolean YooAsset.InitializeParameters::LocationToLower
	bool ___LocationToLower_0;
	// YooAsset.IDecryptionServices YooAsset.InitializeParameters::DecryptionServices
	RuntimeObject* ___DecryptionServices_1;
	// System.Int32 YooAsset.InitializeParameters::AssetLoadingMaxNumber
	int32_t ___AssetLoadingMaxNumber_2;
};

// YooAsset.OperationHandleBase
struct OperationHandleBase_tADAF436129FFA906751706F53E79482B8201377C  : public RuntimeObject
{
	// YooAsset.AssetInfo YooAsset.OperationHandleBase::_assetInfo
	AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ____assetInfo_0;
	// YooAsset.ProviderBase YooAsset.OperationHandleBase::<Provider>k__BackingField
	ProviderBase_t07CDF30CF91BB924A36026623C4136B7E1D0F758* ___U3CProviderU3Ek__BackingField_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// YooAsset.YooAssets
struct YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56  : public RuntimeObject
{
};

// LoadDllFromYooAsset/<>c
struct U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5  : public RuntimeObject
{
};

// LoadDllFromYooAsset/QueryStreamingAssetsFileServices
struct QueryStreamingAssetsFileServices_tABCAA88E78DDDF557EB821ABD4E16BE88720178C  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// YooAsset.AssetOperationHandle
struct AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B  : public OperationHandleBase_tADAF436129FFA906751706F53E79482B8201377C
{
	// System.Action`1<YooAsset.AssetOperationHandle> YooAsset.AssetOperationHandle::_callback
	Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16* ____callback_2;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// YooAsset.DownloaderOperation
struct DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2  : public AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032
{
	// System.Int32 YooAsset.DownloaderOperation::_downloadingMaxNumber
	int32_t ____downloadingMaxNumber_6;
	// System.Int32 YooAsset.DownloaderOperation::_failedTryAgain
	int32_t ____failedTryAgain_7;
	// System.Int32 YooAsset.DownloaderOperation::_timeout
	int32_t ____timeout_8;
	// System.Collections.Generic.List`1<YooAsset.BundleInfo> YooAsset.DownloaderOperation::_downloadList
	List_1_t943237520EBA876AFFDDA7CEB2622319659097AE* ____downloadList_9;
	// System.Collections.Generic.List`1<YooAsset.DownloaderBase> YooAsset.DownloaderOperation::_downloaders
	List_1_t01C551675E768AA47C6770802F3DE41710533C48* ____downloaders_10;
	// System.Collections.Generic.List`1<YooAsset.DownloaderBase> YooAsset.DownloaderOperation::_removeList
	List_1_t01C551675E768AA47C6770802F3DE41710533C48* ____removeList_11;
	// System.Collections.Generic.List`1<YooAsset.DownloaderBase> YooAsset.DownloaderOperation::_failedList
	List_1_t01C551675E768AA47C6770802F3DE41710533C48* ____failedList_12;
	// System.Boolean YooAsset.DownloaderOperation::_isPause
	bool ____isPause_13;
	// System.Int64 YooAsset.DownloaderOperation::_lastDownloadBytes
	int64_t ____lastDownloadBytes_14;
	// System.Int32 YooAsset.DownloaderOperation::_lastDownloadCount
	int32_t ____lastDownloadCount_15;
	// YooAsset.DownloaderOperation/ESteps YooAsset.DownloaderOperation::_steps
	int32_t ____steps_16;
	// System.Int32 YooAsset.DownloaderOperation::<TotalDownloadCount>k__BackingField
	int32_t ___U3CTotalDownloadCountU3Ek__BackingField_17;
	// System.Int64 YooAsset.DownloaderOperation::<TotalDownloadBytes>k__BackingField
	int64_t ___U3CTotalDownloadBytesU3Ek__BackingField_18;
	// System.Int32 YooAsset.DownloaderOperation::<CurrentDownloadCount>k__BackingField
	int32_t ___U3CCurrentDownloadCountU3Ek__BackingField_19;
	// System.Int64 YooAsset.DownloaderOperation::<CurrentDownloadBytes>k__BackingField
	int64_t ___U3CCurrentDownloadBytesU3Ek__BackingField_20;
	// YooAsset.DownloaderOperation/OnDownloadOver YooAsset.DownloaderOperation::<OnDownloadOverCallback>k__BackingField
	OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6* ___U3COnDownloadOverCallbackU3Ek__BackingField_21;
	// YooAsset.DownloaderOperation/OnDownloadProgress YooAsset.DownloaderOperation::<OnDownloadProgressCallback>k__BackingField
	OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6* ___U3COnDownloadProgressCallbackU3Ek__BackingField_22;
	// YooAsset.DownloaderOperation/OnDownloadError YooAsset.DownloaderOperation::<OnDownloadErrorCallback>k__BackingField
	OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206* ___U3COnDownloadErrorCallbackU3Ek__BackingField_23;
	// YooAsset.DownloaderOperation/OnStartDownloadFile YooAsset.DownloaderOperation::<OnStartDownloadFileCallback>k__BackingField
	OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9* ___U3COnStartDownloadFileCallbackU3Ek__BackingField_24;
};

// YooAsset.EditorSimulateModeParameters
struct EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF  : public InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1
{
	// System.String YooAsset.EditorSimulateModeParameters::SimulatePatchManifestPath
	String_t* ___SimulatePatchManifestPath_3;
};

// YooAsset.HostPlayModeParameters
struct HostPlayModeParameters_tC6E69199541C55D43D8BE6290108636DD4589CC5  : public InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1
{
	// System.String YooAsset.HostPlayModeParameters::DefaultHostServer
	String_t* ___DefaultHostServer_3;
	// System.String YooAsset.HostPlayModeParameters::FallbackHostServer
	String_t* ___FallbackHostServer_4;
	// YooAsset.IQueryServices YooAsset.HostPlayModeParameters::QueryServices
	RuntimeObject* ___QueryServices_5;
};

// YooAsset.InitializationOperation
struct InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F  : public AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032
{
	// System.String YooAsset.InitializationOperation::<PackageVersion>k__BackingField
	String_t* ___U3CPackageVersionU3Ek__BackingField_5;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// YooAsset.OfflinePlayModeParameters
struct OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9  : public InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// YooAsset.RawFileOperationHandle
struct RawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171  : public OperationHandleBase_tADAF436129FFA906751706F53E79482B8201377C
{
	// System.Action`1<YooAsset.RawFileOperationHandle> YooAsset.RawFileOperationHandle::_callback
	Action_1_tAE9E4C9E74E41797813DF44AC91EEDDBBEF23457* ____callback_2;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
};

// YooAsset.UpdatePackageManifestOperation
struct UpdatePackageManifestOperation_tB014E4396119B857527F7F70512C9DD1A496C145  : public AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032
{
};

// YooAsset.UpdatePackageVersionOperation
struct UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C  : public AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032
{
	// System.String YooAsset.UpdatePackageVersionOperation::<PackageVersion>k__BackingField
	String_t* ___U3CPackageVersionU3Ek__BackingField_5;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// YooAsset.InstantiateOperation
struct InstantiateOperation_t3A3C4296D9763CA01BB3F7C1285B0651AC23E66E  : public AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032
{
	// YooAsset.AssetOperationHandle YooAsset.InstantiateOperation::_handle
	AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* ____handle_5;
	// UnityEngine.Vector3 YooAsset.InstantiateOperation::_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____position_6;
	// UnityEngine.Quaternion YooAsset.InstantiateOperation::_rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____rotation_7;
	// UnityEngine.Transform YooAsset.InstantiateOperation::_parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____parent_8;
	// YooAsset.InstantiateOperation/ESteps YooAsset.InstantiateOperation::_steps
	int32_t ____steps_9;
	// UnityEngine.GameObject YooAsset.InstantiateOperation::Result
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Result_10;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// YooAsset.PatchDownloaderOperation
struct PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701  : public DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2
{
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask/Awaiter::task
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};

// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Action`1<YooAsset.AssetOperationHandle>
struct Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// YooAsset.DownloaderOperation/OnDownloadError
struct OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206  : public MulticastDelegate_t
{
};

// YooAsset.DownloaderOperation/OnDownloadOver
struct OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6  : public MulticastDelegate_t
{
};

// YooAsset.DownloaderOperation/OnDownloadProgress
struct OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6  : public MulticastDelegate_t
{
};

// YooAsset.DownloaderOperation/OnStartDownloadFile
struct OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9  : public MulticastDelegate_t
{
};

// LoadDllFromYooAsset/<Download>d__5
struct U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448 
{
	// System.Int32 LoadDllFromYooAsset/<Download>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder LoadDllFromYooAsset/<Download>d__5::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// LoadDllFromYooAsset LoadDllFromYooAsset/<Download>d__5::<>4__this
	LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* ___U3CU3E4__this_2;
	// YooAsset.PatchDownloaderOperation LoadDllFromYooAsset/<Download>d__5::<downloader>5__2
	PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701* ___U3CdownloaderU3E5__2_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter LoadDllFromYooAsset/<Download>d__5::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_4;
};

// LoadDllFromYooAsset/<InitYooAssets>d__3
struct U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC 
{
	// System.Int32 LoadDllFromYooAsset/<InitYooAssets>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder LoadDllFromYooAsset/<InitYooAssets>d__3::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// LoadDllFromYooAsset LoadDllFromYooAsset/<InitYooAssets>d__3::<>4__this
	LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter LoadDllFromYooAsset/<InitYooAssets>d__3::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};

// LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12
struct U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B 
{
	// System.Int32 LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// LoadDllFromYooAsset LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12::<>4__this
	LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* ___U3CU3E4__this_2;
	// HybridCLR.HomologousImageMode LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12::<mode>5__2
	int32_t ___U3CmodeU3E5__2_3;
	// System.Collections.Generic.List`1/Enumerator<System.String> LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12::<>7__wrap2
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 ___U3CU3E7__wrap2_4;
	// System.String LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12::<aotDllName>5__4
	String_t* ___U3CaotDllNameU3E5__4_5;
	// YooAsset.RawFileOperationHandle LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12::<handle>5__5
	RawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171* ___U3ChandleU3E5__5_6;
	// Cysharp.Threading.Tasks.UniTask/Awaiter LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_7;
};

// LoadDllFromYooAsset/<Start>d__2
struct U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9 
{
	// System.Int32 LoadDllFromYooAsset/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder LoadDllFromYooAsset/<Start>d__2::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// LoadDllFromYooAsset LoadDllFromYooAsset/<Start>d__2::<>4__this
	LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter LoadDllFromYooAsset/<Start>d__2::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// LoadDllFromYooAsset/<UpdateDataVersion>d__4
struct U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862 
{
	// System.Int32 LoadDllFromYooAsset/<UpdateDataVersion>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder LoadDllFromYooAsset/<UpdateDataVersion>d__4::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// LoadDllFromYooAsset LoadDllFromYooAsset/<UpdateDataVersion>d__4::<>4__this
	LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* ___U3CU3E4__this_2;
	// YooAsset.UpdatePackageVersionOperation LoadDllFromYooAsset/<UpdateDataVersion>d__4::<operation>5__2
	UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C* ___U3CoperationU3E5__2_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter LoadDllFromYooAsset/<UpdateDataVersion>d__4::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AOTGenericReferences
struct AOTGenericReferences_t5F3B8F5D6BCBEBBE095EC3F80B81C095A66FC14E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ConsoleToSceen
struct ConsoleToSceen_t7D05DB920A8325DB6F267120F20A516F5F4E0439  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ConsoleToSceen::_logStr
	String_t* ____logStr_6;
	// System.Collections.Generic.List`1<System.String> ConsoleToSceen::_lines
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____lines_7;
	// System.Int32 ConsoleToSceen::fontSize
	int32_t ___fontSize_8;
};

// LoadDll
struct LoadDll_t6031B4BFA0C940CA9ADF12D87DC0003BB060336B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LoadDllFromYooAsset
struct LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// YooAsset.AssetsPackage LoadDllFromYooAsset::package
	AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* ___package_4;
	// YooAsset.EPlayMode LoadDllFromYooAsset::playMode
	int32_t ___playMode_5;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Reflection.Assembly

// System.Reflection.Assembly

// YooAsset.AssetsPackage

// YooAsset.AssetsPackage

// YooAsset.AsyncOperationBase

// YooAsset.AsyncOperationBase

// YooAsset.InitializeParameters

// YooAsset.InitializeParameters

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// YooAsset.YooAssets
struct YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields
{
	// System.Boolean YooAsset.YooAssets::_isInitialize
	bool ____isInitialize_0;
	// UnityEngine.GameObject YooAsset.YooAssets::_driver
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____driver_1;
	// System.Collections.Generic.List`1<YooAsset.AssetsPackage> YooAsset.YooAssets::_packages
	List_1_t1DA4806AB46E51E3F0B1A3DA0497AAC2FDE438B5* ____packages_2;
	// YooAsset.AssetsPackage YooAsset.YooAssets::_defaultPackage
	AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* ____defaultPackage_3;
};

// YooAsset.YooAssets

// LoadDllFromYooAsset/<>c
struct U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_StaticFields
{
	// LoadDllFromYooAsset/<>c LoadDllFromYooAsset/<>c::<>9
	U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5* ___U3CU3E9_0;
	// System.Action`1<YooAsset.AssetOperationHandle> LoadDllFromYooAsset/<>c::<>9__6_0
	Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16* ___U3CU3E9__6_0_1;
};

// LoadDllFromYooAsset/<>c

// LoadDllFromYooAsset/QueryStreamingAssetsFileServices

// LoadDllFromYooAsset/QueryStreamingAssetsFileServices

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.List`1/Enumerator<System.String>

// YooAsset.AssetOperationHandle

// YooAsset.AssetOperationHandle

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// YooAsset.DownloaderOperation

// YooAsset.DownloaderOperation

// YooAsset.EditorSimulateModeParameters

// YooAsset.EditorSimulateModeParameters

// YooAsset.HostPlayModeParameters

// YooAsset.HostPlayModeParameters

// YooAsset.InitializationOperation

// YooAsset.InitializationOperation

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// YooAsset.OfflinePlayModeParameters

// YooAsset.OfflinePlayModeParameters

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// YooAsset.RawFileOperationHandle

// YooAsset.RawFileOperationHandle

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
};

// Cysharp.Threading.Tasks.UniTask

// YooAsset.UpdatePackageManifestOperation

// YooAsset.UpdatePackageManifestOperation

// YooAsset.UpdatePackageVersionOperation

// YooAsset.UpdatePackageVersionOperation

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// YooAsset.InstantiateOperation

// YooAsset.InstantiateOperation

// YooAsset.PatchDownloaderOperation

// YooAsset.PatchDownloaderOperation

// Cysharp.Threading.Tasks.UniTask/Awaiter

// Cysharp.Threading.Tasks.UniTask/Awaiter

// UnityEngine.AssetBundle

// UnityEngine.AssetBundle

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};

// UnityEngine.GUIStyle

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Action`1<YooAsset.AssetOperationHandle>

// System.Action`1<YooAsset.AssetOperationHandle>

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Application/LogCallback

// UnityEngine.Application/LogCallback

// YooAsset.DownloaderOperation/OnDownloadError

// YooAsset.DownloaderOperation/OnDownloadError

// YooAsset.DownloaderOperation/OnDownloadOver

// YooAsset.DownloaderOperation/OnDownloadOver

// YooAsset.DownloaderOperation/OnDownloadProgress

// YooAsset.DownloaderOperation/OnDownloadProgress

// YooAsset.DownloaderOperation/OnStartDownloadFile

// YooAsset.DownloaderOperation/OnStartDownloadFile

// LoadDllFromYooAsset/<Download>d__5

// LoadDllFromYooAsset/<Download>d__5

// LoadDllFromYooAsset/<InitYooAssets>d__3

// LoadDllFromYooAsset/<InitYooAssets>d__3

// LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12

// LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12

// LoadDllFromYooAsset/<Start>d__2

// LoadDllFromYooAsset/<Start>d__2

// LoadDllFromYooAsset/<UpdateDataVersion>d__4

// LoadDllFromYooAsset/<UpdateDataVersion>d__4

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// AOTGenericReferences

// AOTGenericReferences

// ConsoleToSceen

// ConsoleToSceen

// LoadDll

// LoadDll

// LoadDllFromYooAsset

// LoadDllFromYooAsset
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.AssetBundle::LoadAsset<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetBundle_LoadAsset_TisRuntimeObject_m7F36E1C08FC32ADB47C34513522D958FA6E09C47_gshared (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<LoadDllFromYooAsset/<Start>d__2>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m7C88372E6AC0732BBC757385E0640364D70C4D90_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<LoadDllFromYooAsset/<InitYooAssets>d__3>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m66B29AAC0513C7D58F7D738F9D08B01335A177A3_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<LoadDllFromYooAsset/<UpdateDataVersion>d__4>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_mC0A7F9F45400C099F538AFFFE8B5F9976A46E867_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<LoadDllFromYooAsset/<Download>d__5>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448_m3A35404796A8B330C72D018F3D402221DDB3302B_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448* ___0_stateMachine, const RuntimeMethod* method) ;
// YooAsset.AssetOperationHandle YooAsset.AssetsPackage::LoadAssetAsync<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* AssetsPackage_LoadAssetAsync_TisRuntimeObject_m76B65BB2F2D1CD2301FD93978FB350C8DDCEFEF5_gshared (AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* __this, String_t* ___0_location, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B_mA28CE77CDCFD9593AF754166C2E829DCA03BE611_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,LoadDllFromYooAsset/<Start>d__2>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m8F711864EFD1D7F818C6FF30CBA98F943F326645_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9* ___1_stateMachine, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisRuntimeObject_m40BC371FBBB1C4DA4564A1FA6CF258FD581DD2F7_gshared (RuntimeObject* ___0_enumerator, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,LoadDllFromYooAsset/<InitYooAssets>d__3>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m2616ED7DE1DA3D0BF9F98D16A67E3847DC31C0D7_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___0_awaiter, U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,LoadDllFromYooAsset/<UpdateDataVersion>d__4>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_m30B2966EA7C9F070C2E92F99F18E6101BA9F50DA_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___0_awaiter, U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,LoadDllFromYooAsset/<Download>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448_m303DAD8C02ACB274DAD2DE2A22DEAD32AF56EC54_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___0_awaiter, U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B_m72E71C2672320A312C20EDB1A2D26B710D357C51_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___0_awaiter, U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B* ___1_stateMachine, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m33A351ADA40CDA64143F349FACB5993E95C41C7A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared)(__this, ___0_index, ___1_count, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158 (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_matrix_m7759FEC96FBCB97E02B1BA44D2EC1B3FEEFA257F (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void BetterStreamingAssets::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterStreamingAssets_Initialize_m4734FAB5D4C3B306447B4FB96033F4D6506E7CF8 (const RuntimeMethod* method) ;
// System.Void LoadDll::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_StartGame_m257348A994EE0195A9CF61D2BD58DCFA1836FD12 (LoadDll_t6031B4BFA0C940CA9ADF12D87DC0003BB060336B* __this, const RuntimeMethod* method) ;
// System.Void LoadDll::LoadMetadataForAOTAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_LoadMetadataForAOTAssemblies_mC65EE317511DF22806ABBBC9988027DDCB6D07C3 (const RuntimeMethod* method) ;
// System.Byte[] BetterStreamingAssets::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BetterStreamingAssets_ReadAllBytes_m406E443ADD97C8AE8148E8F4DCC9303B100F0C34 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_Load_mD9E9CED2EFF8BBE97ACDE83FB8ED492D1E42E975 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawAssembly, const RuntimeMethod* method) ;
// UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromMemory(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* AssetBundle_LoadFromMemory_mBA6847E4133DBBE3CCBCFFF31A40FA943DB95BBA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_binary, const RuntimeMethod* method) ;
// T UnityEngine.AssetBundle::LoadAsset<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063 (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (AssetBundle_tB38418819A49060CD738CB21541649340F082943*, String_t*, const RuntimeMethod*))AssetBundle_LoadAsset_TisRuntimeObject_m7F36E1C08FC32ADB47C34513522D958FA6E09C47_gshared)(__this, ___0_name, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// HybridCLR.LoadImageErrorCode HybridCLR.RuntimeApi::LoadMetadataForAOTAssembly(System.Byte[],HybridCLR.HomologousImageMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dllBytes, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<LoadDllFromYooAsset/<Start>d__2>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m7C88372E6AC0732BBC757385E0640364D70C4D90 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m7C88372E6AC0732BBC757385E0640364D70C4D90_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<LoadDllFromYooAsset/<InitYooAssets>d__3>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m66B29AAC0513C7D58F7D738F9D08B01335A177A3 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m66B29AAC0513C7D58F7D738F9D08B01335A177A3_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<LoadDllFromYooAsset/<UpdateDataVersion>d__4>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_mC0A7F9F45400C099F538AFFFE8B5F9976A46E867 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_mC0A7F9F45400C099F538AFFFE8B5F9976A46E867_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<LoadDllFromYooAsset/<Download>d__5>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448_m3A35404796A8B330C72D018F3D402221DDB3302B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448_m3A35404796A8B330C72D018F3D402221DDB3302B_gshared)(__this, ___0_stateMachine, method);
}
// YooAsset.AssetOperationHandle YooAsset.AssetsPackage::LoadAssetAsync<UnityEngine.GameObject>(System.String)
inline AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* AssetsPackage_LoadAssetAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m5C79405470A025AE5F223C8A452F2E9FD339D185 (AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* __this, String_t* ___0_location, const RuntimeMethod* method)
{
	return ((  AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* (*) (AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52*, String_t*, const RuntimeMethod*))AssetsPackage_LoadAssetAsync_TisRuntimeObject_m76B65BB2F2D1CD2301FD93978FB350C8DDCEFEF5_gshared)(__this, ___0_location, method);
}
// System.Void System.Action`1<YooAsset.AssetOperationHandle>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE70D3A52877906E20A369249E9B69D394820EF97 (Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void YooAsset.AssetOperationHandle::add_Completed(System.Action`1<YooAsset.AssetOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetOperationHandle_add_Completed_m9689DE23351F3251952982127CF395A7AC63CF4F (AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* __this, Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B_mA28CE77CDCFD9593AF754166C2E829DCA03BE611 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B_mA28CE77CDCFD9593AF754166C2E829DCA03BE611_gshared)(__this, ___0_stateMachine, method);
}
// System.String YooAsset.YooAssets::GetStreamingAssetBuildinFolderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* YooAssets_GetStreamingAssetBuildinFolderName_m310233391F05875E89559C66E5B0728A2B2B9DF4 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Boolean BetterStreamingAssets::FileExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BetterStreamingAssets_FileExists_m9DB4D4860ED3C0090C0005DEBA238A80E24A77E1 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task LoadDllFromYooAsset::InitYooAssets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LoadDllFromYooAsset_InitYooAssets_m6882389CDF25716CD65BAB2F65B5A920F4281E13 (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,LoadDllFromYooAsset/<Start>d__2>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m8F711864EFD1D7F818C6FF30CBA98F943F326645 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m8F711864EFD1D7F818C6FF30CBA98F943F326645_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task LoadDllFromYooAsset::UpdateDataVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LoadDllFromYooAsset_UpdateDataVersion_m8FFD72A9F1AD9B84E14FF4BB787932D5E6BD74E0 (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task LoadDllFromYooAsset::Download()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LoadDllFromYooAsset_Download_m77096B95AA6591E21217E76901B1ED3B8FF74F0A (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task LoadDllFromYooAsset::LoadMetadataForAOTAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LoadDllFromYooAsset_LoadMetadataForAOTAssemblies_m7EE4D57F38DD0952B2006072609EEBBBA75FDE5C (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void LoadDllFromYooAsset/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_m56DFC5D4E486BE3D874CEB8E5E2202BEBA171263 (U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void LoadDllFromYooAsset/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_m081F09D947C933E6EF63279AD7B2780B9A54DAF4 (U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void YooAsset.YooAssets::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_Initialize_m97959F34CFD532DDA55EC11353AB8214C8ED63EC (const RuntimeMethod* method) ;
// YooAsset.AssetsPackage YooAsset.YooAssets::CreateAssetsPackage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* YooAssets_CreateAssetsPackage_mC0BF6FE90FFDDFA5A4295F49E280A01C63CA608D (String_t* ___0_packageName, const RuntimeMethod* method) ;
// System.Void YooAsset.YooAssets::SetDefaultAssetsPackage(YooAsset.AssetsPackage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void YooAssets_SetDefaultAssetsPackage_mA846E84DE0C07A97F97B453EC1667244C4CA7FF2_inline (AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* ___0_assetsPackage, const RuntimeMethod* method) ;
// System.Void YooAsset.EditorSimulateModeParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorSimulateModeParameters__ctor_m7C97CBECF9586650FC265B658B7D58A2F106EDD8 (EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF* __this, const RuntimeMethod* method) ;
// System.String YooAsset.EditorSimulateModeHelper::SimulateBuild(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EditorSimulateModeHelper_SimulateBuild_m6BFEA7AE009EBC4736041FF11B18F86063572298 (String_t* ___0_packageName, const RuntimeMethod* method) ;
// YooAsset.InitializationOperation YooAsset.AssetsPackage::InitializeAsync(YooAsset.InitializeParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* AssetsPackage_InitializeAsync_m66C5DD6BB80EA268AFCDC77FA0DF7F20E7E24D39 (AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* __this, InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1* ___0_parameters, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<YooAsset.InitializationOperation>(T)
inline Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m1D959087AF5DAD97E60071D83531EA087B9CA5C0 (InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* ___0_enumerator, const RuntimeMethod* method)
{
	return ((  Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 (*) (InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F*, const RuntimeMethod*))EnumeratorAsyncExtensions_GetAwaiter_TisRuntimeObject_m40BC371FBBB1C4DA4564A1FA6CF258FD581DD2F7_gshared)(___0_enumerator, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask/Awaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,LoadDllFromYooAsset/<InitYooAssets>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m2616ED7DE1DA3D0BF9F98D16A67E3847DC31C0D7 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___0_awaiter, U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m2616ED7DE1DA3D0BF9F98D16A67E3847DC31C0D7_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// System.Void YooAsset.OfflinePlayModeParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OfflinePlayModeParameters__ctor_m916B527C5A8FDF1631F083C206D9E813916E9C78 (OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9* __this, const RuntimeMethod* method) ;
// System.Void YooAsset.HostPlayModeParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostPlayModeParameters__ctor_m8F4DAF7FE2CDA824450C3203B50B5DE71CD21537 (HostPlayModeParameters_tC6E69199541C55D43D8BE6290108636DD4589CC5* __this, const RuntimeMethod* method) ;
// System.Void LoadDllFromYooAsset/QueryStreamingAssetsFileServices::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryStreamingAssetsFileServices__ctor_m318E9AC38E6B83D0F635CB7EE907F843215D37F0 (QueryStreamingAssetsFileServices_tABCAA88E78DDDF557EB821ABD4E16BE88720178C* __this, const RuntimeMethod* method) ;
// System.Void LoadDllFromYooAsset/<InitYooAssets>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitYooAssetsU3Ed__3_MoveNext_m30D5BC03B1EC95DD2E0605B896C126C3AC7B049D (U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC* __this, const RuntimeMethod* method) ;
// System.Void LoadDllFromYooAsset/<InitYooAssets>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitYooAssetsU3Ed__3_SetStateMachine_mC60E97075CACF48DA91E8ED96E0E0B44B1369D84 (U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// YooAsset.UpdatePackageVersionOperation YooAsset.AssetsPackage::UpdatePackageVersionAsync(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C* AssetsPackage_UpdatePackageVersionAsync_m4FF760C3A48B4F259E000C212495E7D9928C6560 (AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* __this, bool ___0_appendTimeTicks, int32_t ___1_timeout, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<YooAsset.UpdatePackageVersionOperation>(T)
inline Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisUpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C_mDE5856CEB975ED5E40162C250D1B686D218E70E0 (UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C* ___0_enumerator, const RuntimeMethod* method)
{
	return ((  Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 (*) (UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C*, const RuntimeMethod*))EnumeratorAsyncExtensions_GetAwaiter_TisRuntimeObject_m40BC371FBBB1C4DA4564A1FA6CF258FD581DD2F7_gshared)(___0_enumerator, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,LoadDllFromYooAsset/<UpdateDataVersion>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_m30B2966EA7C9F070C2E92F99F18E6101BA9F50DA (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___0_awaiter, U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_m30B2966EA7C9F070C2E92F99F18E6101BA9F50DA_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// YooAsset.EOperationStatus YooAsset.AsyncOperationBase::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AsyncOperationBase_get_Status_m306FE61F0A22DFAA81795961A8D8D4C011C066CA_inline (AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032* __this, const RuntimeMethod* method) ;
// System.String YooAsset.UpdatePackageVersionOperation::get_PackageVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UpdatePackageVersionOperation_get_PackageVersion_m6FE2F350948E7B71BE69AC231DD9E9B67C3FC262_inline (UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C* __this, const RuntimeMethod* method) ;
// System.String YooAsset.AsyncOperationBase::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AsyncOperationBase_get_Error_m636403CB75036A9C978E52ED6E2A13CD787E0494_inline (AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032* __this, const RuntimeMethod* method) ;
// YooAsset.UpdatePackageManifestOperation YooAsset.AssetsPackage::UpdatePackageManifestAsync(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UpdatePackageManifestOperation_tB014E4396119B857527F7F70512C9DD1A496C145* AssetsPackage_UpdatePackageManifestAsync_mCBBC52E40A61B444981CE82475403F8551ACE4BE (AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* __this, String_t* ___0_packageVersion, int32_t ___1_timeout, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<YooAsset.UpdatePackageManifestOperation>(T)
inline Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisUpdatePackageManifestOperation_tB014E4396119B857527F7F70512C9DD1A496C145_m2F118472B292222603D2B6534C20E756644EDD9B (UpdatePackageManifestOperation_tB014E4396119B857527F7F70512C9DD1A496C145* ___0_enumerator, const RuntimeMethod* method)
{
	return ((  Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 (*) (UpdatePackageManifestOperation_tB014E4396119B857527F7F70512C9DD1A496C145*, const RuntimeMethod*))EnumeratorAsyncExtensions_GetAwaiter_TisRuntimeObject_m40BC371FBBB1C4DA4564A1FA6CF258FD581DD2F7_gshared)(___0_enumerator, method);
}
// System.Void LoadDllFromYooAsset/<UpdateDataVersion>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateDataVersionU3Ed__4_MoveNext_m4C263A147B7631F4BF2D089548AF647FCA32DE97 (U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862* __this, const RuntimeMethod* method) ;
// System.Void LoadDllFromYooAsset/<UpdateDataVersion>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateDataVersionU3Ed__4_SetStateMachine_m00850D45E8C55979FB0972595FBCCBA6FFF21AF0 (U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// YooAsset.AssetsPackage YooAsset.YooAssets::GetAssetsPackage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* YooAssets_GetAssetsPackage_m6223C9A2CDDD864B6C3A7E8ED1B175DA9409A012 (String_t* ___0_packageName, const RuntimeMethod* method) ;
// YooAsset.PatchDownloaderOperation YooAsset.AssetsPackage::CreatePatchDownloader(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701* AssetsPackage_CreatePatchDownloader_m4B485E3ABB5F24A5560C4946655B1F75E028C280 (AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* __this, int32_t ___0_downloadingMaxNumber, int32_t ___1_failedTryAgain, int32_t ___2_timeout, const RuntimeMethod* method) ;
// System.Int32 YooAsset.DownloaderOperation::get_TotalDownloadCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DownloaderOperation_get_TotalDownloadCount_m536A5BFFEB385106C66064BD94A272301CD6EC1C_inline (DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2* __this, const RuntimeMethod* method) ;
// System.Int64 YooAsset.DownloaderOperation::get_TotalDownloadBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t DownloaderOperation_get_TotalDownloadBytes_m4F0009CCA5AEF043B000F6B6270448CA58CFE5FA_inline (DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2* __this, const RuntimeMethod* method) ;
// System.Void YooAsset.DownloaderOperation/OnDownloadError::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDownloadError__ctor_mB790A3BCB45D13F4440EBB84170E7D84B1BCC166 (OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void YooAsset.DownloaderOperation::set_OnDownloadErrorCallback(YooAsset.DownloaderOperation/OnDownloadError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DownloaderOperation_set_OnDownloadErrorCallback_mC83AA6D2931DF85E69235C7FFF4903A427E170BA_inline (DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2* __this, OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206* ___0_value, const RuntimeMethod* method) ;
// System.Void YooAsset.DownloaderOperation/OnDownloadProgress::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDownloadProgress__ctor_m5EE3A22471494C009282038AED6C8BFE8A8AAB86 (OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void YooAsset.DownloaderOperation::set_OnDownloadProgressCallback(YooAsset.DownloaderOperation/OnDownloadProgress)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DownloaderOperation_set_OnDownloadProgressCallback_m1057544081D4EF83F2C7681E18B1B250DEF95883_inline (DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2* __this, OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6* ___0_value, const RuntimeMethod* method) ;
// System.Void YooAsset.DownloaderOperation/OnDownloadOver::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDownloadOver__ctor_m2EBEF97FDE8D0C96E26F5BA0E150AE8E5F1625B9 (OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void YooAsset.DownloaderOperation::set_OnDownloadOverCallback(YooAsset.DownloaderOperation/OnDownloadOver)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DownloaderOperation_set_OnDownloadOverCallback_mEC1CC28A211DD3649D0A559267528B4BE36F62A7_inline (DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2* __this, OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6* ___0_value, const RuntimeMethod* method) ;
// System.Void YooAsset.DownloaderOperation/OnStartDownloadFile::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartDownloadFile__ctor_m622DFE678E54A8CF3FDB035AAFADFE9F31388265 (OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void YooAsset.DownloaderOperation::set_OnStartDownloadFileCallback(YooAsset.DownloaderOperation/OnStartDownloadFile)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DownloaderOperation_set_OnStartDownloadFileCallback_mD64B6D59C362CA1F84CB20AAC83F43035E3933D6_inline (DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2* __this, OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9* ___0_value, const RuntimeMethod* method) ;
// System.Void YooAsset.DownloaderOperation::BeginDownload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloaderOperation_BeginDownload_m52627DC31BD59F76E388626ED8A7C2969B11E561 (DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<YooAsset.PatchDownloaderOperation>(T)
inline Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisPatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701_m03725B6D4DFE62D6CFE95864F0E7B777A6CFB3BE (PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701* ___0_enumerator, const RuntimeMethod* method)
{
	return ((  Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 (*) (PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701*, const RuntimeMethod*))EnumeratorAsyncExtensions_GetAwaiter_TisRuntimeObject_m40BC371FBBB1C4DA4564A1FA6CF258FD581DD2F7_gshared)(___0_enumerator, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,LoadDllFromYooAsset/<Download>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448_m303DAD8C02ACB274DAD2DE2A22DEAD32AF56EC54 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___0_awaiter, U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448_m303DAD8C02ACB274DAD2DE2A22DEAD32AF56EC54_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void LoadDllFromYooAsset/<Download>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadU3Ed__5_MoveNext_m47E0DA44ECAB4CECFE035DE9E97BADF0F51C0027 (U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448* __this, const RuntimeMethod* method) ;
// System.Void LoadDllFromYooAsset/<Download>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadU3Ed__5_SetStateMachine_mEEE576EB0A18716B1CEF89E1BF367E1DCFF61026 (U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void LoadDllFromYooAsset/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1553536EE8E5C0F6A9EC9FB6F9EC2C5F98FABB1B (U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5* __this, const RuntimeMethod* method) ;
// YooAsset.InstantiateOperation YooAsset.AssetOperationHandle::InstantiateAsync(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstantiateOperation_t3A3C4296D9763CA01BB3F7C1285B0651AC23E66E* AssetOperationHandle_InstantiateAsync_m19390FFCEFDE6A5F9848FF8F4788C7C962608B14 (AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) ;
// YooAsset.RawFileOperationHandle YooAsset.AssetsPackage::LoadRawFileAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171* AssetsPackage_LoadRawFileAsync_m8DFEF803D8E1AF9FA287B61A014D62CEE0110129 (AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* __this, String_t* ___0_location, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<YooAsset.RawFileOperationHandle>(T)
inline Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisRawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171_m002213FD3955ED6035A8DD88C2275738A23082B7 (RawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171* ___0_enumerator, const RuntimeMethod* method)
{
	return ((  Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 (*) (RawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171*, const RuntimeMethod*))EnumeratorAsyncExtensions_GetAwaiter_TisRuntimeObject_m40BC371FBBB1C4DA4564A1FA6CF258FD581DD2F7_gshared)(___0_enumerator, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B_m72E71C2672320A312C20EDB1A2D26B710D357C51 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___0_awaiter, U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B_m72E71C2672320A312C20EDB1A2D26B710D357C51_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Byte[] YooAsset.RawFileOperationHandle::GetRawFileData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RawFileOperationHandle_GetRawFileData_mDCC71B9DF13DA27B3D2E418C9C2A12493CE11619 (RawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171* __this, const RuntimeMethod* method) ;
// System.Void LoadDllFromYooAsset::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDllFromYooAsset_StartGame_mEB4ED072ACD2254017B1141F90E77B9BBCC3CEC5 (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, const RuntimeMethod* method) ;
// System.Void LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadMetadataForAOTAssembliesU3Ed__12_MoveNext_m1D729903D6694FE7BA1AE27478DFE5534BFB9063 (U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B* __this, const RuntimeMethod* method) ;
// System.Void LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadMetadataForAOTAssembliesU3Ed__12_SetStateMachine_mFEF85CA8302B26E65DBF2563341DA4D9B980037E (U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AOTGenericReferences::RefMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTGenericReferences_RefMethods_mA5A771C9A8382EAF914F6ABBEF676D717AEACA64 (AOTGenericReferences_t5F3B8F5D6BCBEBBE095EC3F80B81C095A66FC14E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AOTGenericReferences::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTGenericReferences__ctor_m33EBE58CE56CB497F20677B707051973A5CC9C72 (AOTGenericReferences_t5F3B8F5D6BCBEBBE095EC3F80B81C095A66FC14E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ConsoleToSceen::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleToSceen_OnEnable_mA65453ACA61960F02FB313A955091A5ADF4C0DE6 (ConsoleToSceen_t7D05DB920A8325DB6F267120F20A516F5F4E0439* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleToSceen_Log_m103D43109C4BC58821A29D9E45E804E1494DCDF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void OnEnable() { Application.logMessageReceived += Log; }
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)ConsoleToSceen_Log_m103D43109C4BC58821A29D9E45E804E1494DCDF4_RuntimeMethod_var), NULL);
		Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C(L_0, NULL);
		// void OnEnable() { Application.logMessageReceived += Log; }
		return;
	}
}
// System.Void ConsoleToSceen::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleToSceen_OnDisable_mC571AB369C60663AEF7AF3291C30C94404D1EBDC (ConsoleToSceen_t7D05DB920A8325DB6F267120F20A516F5F4E0439* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleToSceen_Log_m103D43109C4BC58821A29D9E45E804E1494DCDF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void OnDisable() { Application.logMessageReceived -= Log; }
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)ConsoleToSceen_Log_m103D43109C4BC58821A29D9E45E804E1494DCDF4_RuntimeMethod_var), NULL);
		Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC(L_0, NULL);
		// void OnDisable() { Application.logMessageReceived -= Log; }
		return;
	}
}
// System.Void ConsoleToSceen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleToSceen_Update_mDB5C9C4EDDA01907A710A6259C38DAD2E1A119C1 (ConsoleToSceen_t7D05DB920A8325DB6F267120F20A516F5F4E0439* __this, const RuntimeMethod* method) 
{
	{
		// void Update() { }
		return;
	}
}
// System.Void ConsoleToSceen::Log(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleToSceen_Log_m103D43109C4BC58821A29D9E45E804E1494DCDF4 (ConsoleToSceen_t7D05DB920A8325DB6F267120F20A516F5F4E0439* __this, String_t* ___0_logString, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m33A351ADA40CDA64143F349FACB5993E95C41C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// foreach (var line in logString.Split('\n'))
		String_t* L_0 = ___0_logString;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)10), 0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0098;
	}

IL_0011:
	{
		// foreach (var line in logString.Split('\n'))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (line.Length <= maxLineLength)
		String_t* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)L_7) > ((int32_t)((int32_t)120))))
		{
			goto IL_002d;
		}
	}
	{
		// _lines.Add(line);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = __this->____lines_7;
		String_t* L_9 = V_2;
		NullCheck(L_8);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, L_9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// continue;
		goto IL_0094;
	}

IL_002d:
	{
		// var lineCount = line.Length / maxLineLength + 1;
		String_t* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_11/((int32_t)120))), 1));
		// for (int i = 0; i < lineCount; i++)
		V_4 = 0;
		goto IL_008f;
	}

IL_003e:
	{
		// if ((i + 1) * maxLineLength <= line.Length)
		int32_t L_12 = V_4;
		String_t* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_12, 1)), ((int32_t)120)))) > ((int32_t)L_14)))
		{
			goto IL_0067;
		}
	}
	{
		// _lines.Add(line.Substring(i * maxLineLength, maxLineLength));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = __this->____lines_7;
		String_t* L_16 = V_2;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_16, ((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)120))), ((int32_t)120), NULL);
		NullCheck(L_15);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_15, L_18, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_0089;
	}

IL_0067:
	{
		// _lines.Add(line.Substring(i * maxLineLength, line.Length - i * maxLineLength));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = __this->____lines_7;
		String_t* L_20 = V_2;
		int32_t L_21 = V_4;
		String_t* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_22, NULL);
		int32_t L_24 = V_4;
		NullCheck(L_20);
		String_t* L_25;
		L_25 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_20, ((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)120))), ((int32_t)il2cpp_codegen_subtract(L_23, ((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)120))))), NULL);
		NullCheck(L_19);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_19, L_25, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0089:
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_008f:
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_27 = V_4;
		int32_t L_28 = V_3;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_003e;
		}
	}

IL_0094:
	{
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0098:
	{
		// foreach (var line in logString.Split('\n'))
		int32_t L_30 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// if (_lines.Count > maxLines)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_32 = __this->____lines_7;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_32, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)50))))
		{
			goto IL_00ca;
		}
	}
	{
		// _lines.RemoveRange(0, _lines.Count - maxLines);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = __this->____lines_7;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_35 = __this->____lines_7;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_35, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		NullCheck(L_34);
		List_1_RemoveRange_m33A351ADA40CDA64143F349FACB5993E95C41C7A(L_34, 0, ((int32_t)il2cpp_codegen_subtract(L_36, ((int32_t)50))), List_1_RemoveRange_m33A351ADA40CDA64143F349FACB5993E95C41C7A_RuntimeMethod_var);
	}

IL_00ca:
	{
		// _logStr = string.Join("\n", _lines);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_37 = __this->____lines_7;
		String_t* L_38;
		L_38 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_37, NULL);
		__this->____logStr_6 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____logStr_6), (void*)L_38);
		// }
		return;
	}
}
// System.Void ConsoleToSceen::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleToSceen_OnGUI_m9C806298A6383329497A77392B134CC30D1833CC (ConsoleToSceen_t7D05DB920A8325DB6F267120F20A516F5F4E0439* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity,
		//    new Vector3(Screen.width / 1200.0f, Screen.height / 800.0f, 1.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		int32_t L_2;
		L_2 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), ((float)(((float)L_2)/(1200.0f))), ((float)(((float)L_3)/(800.0f))), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_0, L_1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_matrix_m7759FEC96FBCB97E02B1BA44D2EC1B3FEEFA257F(L_5, NULL);
		// GUI.Label(new Rect(10, 10, 800, 370), _logStr, new GUIStyle() { fontSize = Math.Max(10, fontSize) });
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_6), (10.0f), (10.0f), (800.0f), (370.0f), /*hidden argument*/NULL);
		String_t* L_7 = __this->____logStr_6;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_8, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9 = L_8;
		int32_t L_10 = __this->___fontSize_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)10), L_10, NULL);
		NullCheck(L_9);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_9, L_11, NULL);
		GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E(L_6, L_7, L_9, NULL);
		// }
		return;
	}
}
// System.Void ConsoleToSceen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleToSceen__ctor_m8580FB5DF8B2CAAE776366FF421008A8A06133A3 (ConsoleToSceen_t7D05DB920A8325DB6F267120F20A516F5F4E0439* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _logStr = "";
		__this->____logStr_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____logStr_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private readonly List<string> _lines = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____lines_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lines_7), (void*)L_0);
		// public int fontSize = 15;
		__this->___fontSize_8 = ((int32_t)15);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadDll::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_Start_m66FB81AAE6120A232C47BD63D48BB48BA7247887 (LoadDll_t6031B4BFA0C940CA9ADF12D87DC0003BB060336B* __this, const RuntimeMethod* method) 
{
	{
		// BetterStreamingAssets.Initialize();
		BetterStreamingAssets_Initialize_m4734FAB5D4C3B306447B4FB96033F4D6506E7CF8(NULL);
		// StartGame();
		LoadDll_StartGame_m257348A994EE0195A9CF61D2BD58DCFA1836FD12(__this, NULL);
		// }
		return;
	}
}
// System.Void LoadDll::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_StartGame_m257348A994EE0195A9CF61D2BD58DCFA1836FD12 (LoadDll_t6031B4BFA0C940CA9ADF12D87DC0003BB060336B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39ADC56EE231C04B9DCF61AC90E29EC2DE7674BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F62EC4DA34B944E10E7E174B4C54C0FB88F1021);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB369FFC16045CC74DAA85F54BF8CDE5DFAECBD40);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadMetadataForAOTAssemblies();
		LoadDll_LoadMetadataForAOTAssemblies_mC65EE317511DF22806ABBBC9988027DDCB6D07C3(NULL);
		// System.Reflection.Assembly.Load(BetterStreamingAssets.ReadAllBytes("Assembly-CSharp.dll.bytes"));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = BetterStreamingAssets_ReadAllBytes_m406E443ADD97C8AE8148E8F4DCC9303B100F0C34(_stringLiteral39ADC56EE231C04B9DCF61AC90E29EC2DE7674BE, NULL);
		Assembly_t* L_1;
		L_1 = Assembly_Load_mD9E9CED2EFF8BBE97ACDE83FB8ED492D1E42E975(L_0, NULL);
		// AssetBundle prefabAb = AssetBundle.LoadFromMemory(BetterStreamingAssets.ReadAllBytes("prefabs"));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BetterStreamingAssets_ReadAllBytes_m406E443ADD97C8AE8148E8F4DCC9303B100F0C34(_stringLiteral9F62EC4DA34B944E10E7E174B4C54C0FB88F1021, NULL);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_3;
		L_3 = AssetBundle_LoadFromMemory_mBA6847E4133DBBE3CCBCFFF31A40FA943DB95BBA(L_2, NULL);
		// GameObject testPrefab = Instantiate(prefabAb.LoadAsset<GameObject>("HotUpdatePrefab.prefab"));
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063(L_3, _stringLiteralB369FFC16045CC74DAA85F54BF8CDE5DFAECBD40, AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LoadDll::LoadMetadataForAOTAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_LoadMetadataForAOTAssemblies_mC65EE317511DF22806ABBBC9988027DDCB6D07C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HomologousImageMode_tEC0F0043F595B001580D833592AE9E7FD4744548_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadImageErrorCode_tC778A2553ADB45B8C61EFE26C20837C23894FEB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BA46D2FDED261D9EBFFC277917E32CC44A3F821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3F029047BA90CC134023587DF7DCF444B38D009);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC4C5477D8BA260A27C36AFD7E8C1C289169E9CF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// List<string> aotMetaAssemblyFiles = new List<string>()
		// {
		//     "mscorlib.dll",
		//     "System.dll",
		//     "System.Core.dll",
		// };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = L_0;
		NullCheck(L_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, _stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, _stringLiteralA3F029047BA90CC134023587DF7DCF444B38D009, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, _stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// HomologousImageMode mode = HomologousImageMode.SuperSet;
		V_0 = 1;
		// foreach (var aotDllName in aotMetaAssemblyFiles)
		NullCheck(L_3);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_4;
		L_4 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_3, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0076:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_1), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006b_1;
			}

IL_0030_1:
			{
				// foreach (var aotDllName in aotMetaAssemblyFiles)
				String_t* L_5;
				L_5 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_1), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_2 = L_5;
				// byte[] dllBytes = BetterStreamingAssets.ReadAllBytes(aotDllName + ".bytes");
				String_t* L_6 = V_2;
				String_t* L_7;
				L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, _stringLiteralEC4C5477D8BA260A27C36AFD7E8C1C289169E9CF, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
				L_8 = BetterStreamingAssets_ReadAllBytes_m406E443ADD97C8AE8148E8F4DCC9303B100F0C34(L_7, NULL);
				// LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
				int32_t L_9 = V_0;
				int32_t L_10;
				L_10 = RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8(L_8, L_9, NULL);
				V_3 = L_10;
				// Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
				String_t* L_11 = V_2;
				int32_t L_12 = V_0;
				int32_t L_13 = L_12;
				RuntimeObject* L_14 = Box(HomologousImageMode_tEC0F0043F595B001580D833592AE9E7FD4744548_il2cpp_TypeInfo_var, &L_13);
				int32_t L_15 = V_3;
				int32_t L_16 = L_15;
				RuntimeObject* L_17 = Box(LoadImageErrorCode_tC778A2553ADB45B8C61EFE26C20837C23894FEB3_il2cpp_TypeInfo_var, &L_16);
				String_t* L_18;
				L_18 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral1BA46D2FDED261D9EBFFC277917E32CC44A3F821, L_11, L_14, L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_18, NULL);
			}

IL_006b_1:
			{
				// foreach (var aotDllName in aotMetaAssemblyFiles)
				bool L_19;
				L_19 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_1), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0030_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void LoadDll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll__ctor_mC7829FEA3DA0B539C756C020368B9D1F79E8A1FB (LoadDll_t6031B4BFA0C940CA9ADF12D87DC0003BB060336B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Threading.Tasks.Task LoadDllFromYooAsset::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LoadDllFromYooAsset_Start_m3E779BC15A72687995A832068AF38093C567D1EF (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m7C88372E6AC0732BBC757385E0640364D70C4D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m7C88372E6AC0732BBC757385E0640364D70C4D90(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m7C88372E6AC0732BBC757385E0640364D70C4D90_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task LoadDllFromYooAsset::InitYooAssets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LoadDllFromYooAsset_InitYooAssets_m6882389CDF25716CD65BAB2F65B5A920F4281E13 (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m66B29AAC0513C7D58F7D738F9D08B01335A177A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m66B29AAC0513C7D58F7D738F9D08B01335A177A3(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m66B29AAC0513C7D58F7D738F9D08B01335A177A3_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task LoadDllFromYooAsset::UpdateDataVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LoadDllFromYooAsset_UpdateDataVersion_m8FFD72A9F1AD9B84E14FF4BB787932D5E6BD74E0 (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_mC0A7F9F45400C099F538AFFFE8B5F9976A46E867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_mC0A7F9F45400C099F538AFFFE8B5F9976A46E867(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_mC0A7F9F45400C099F538AFFFE8B5F9976A46E867_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task LoadDllFromYooAsset::Download()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LoadDllFromYooAsset_Download_m77096B95AA6591E21217E76901B1ED3B8FF74F0A (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448_m3A35404796A8B330C72D018F3D402221DDB3302B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448_m3A35404796A8B330C72D018F3D402221DDB3302B(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448_m3A35404796A8B330C72D018F3D402221DDB3302B_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Void LoadDllFromYooAsset::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDllFromYooAsset_StartGame_mEB4ED072ACD2254017B1141F90E77B9BBCC3CEC5 (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetsPackage_LoadAssetAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m5C79405470A025AE5F223C8A452F2E9FD339D185_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartGameU3Eb__6_0_mE7ED00114B59CF6D071A7517C3A11CF13D1DBFC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23D742CB5B4468BB5AC90D51F0354E9748B085B7);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16* G_B2_0 = NULL;
	AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* G_B2_1 = NULL;
	Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16* G_B1_0 = NULL;
	AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* G_B1_1 = NULL;
	{
		// AssetOperationHandle handle=package.LoadAssetAsync<GameObject>("HotUpdatePrefab");
		AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* L_0 = __this->___package_4;
		NullCheck(L_0);
		AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* L_1;
		L_1 = AssetsPackage_LoadAssetAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m5C79405470A025AE5F223C8A452F2E9FD339D185(L_0, _stringLiteral23D742CB5B4468BB5AC90D51F0354E9748B085B7, AssetsPackage_LoadAssetAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m5C79405470A025AE5F223C8A452F2E9FD339D185_RuntimeMethod_var);
		// handle.Completed += (p) =>
		// {
		//     var go = p.InstantiateAsync();
		// };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_il2cpp_TypeInfo_var);
		Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16* L_2 = ((U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_il2cpp_TypeInfo_var);
		U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5* L_4 = ((U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16* L_5 = (Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16*)il2cpp_codegen_object_new(Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mE70D3A52877906E20A369249E9B69D394820EF97(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CStartGameU3Eb__6_0_mE7ED00114B59CF6D071A7517C3A11CF13D1DBFC6_RuntimeMethod_var), NULL);
		Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16* L_6 = L_5;
		((U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002f:
	{
		NullCheck(G_B2_1);
		AssetOperationHandle_add_Completed_m9689DE23351F3251952982127CF395A7AC63CF4F(G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void LoadDllFromYooAsset::OnStartDownloadFileFunction(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDllFromYooAsset_OnStartDownloadFileFunction_m6E8053999B0BFF553712F670FDFF9349407093BF (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, String_t* ___0_fileName, int64_t ___1_sizeBytes, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LoadDllFromYooAsset::OnDownloadOverFunction(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDllFromYooAsset_OnDownloadOverFunction_mE8F4B051DF7B3340F2653FD3F4315A6AD62E61D6 (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, bool ___0_isSucceed, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LoadDllFromYooAsset::OnDownloadProgressUpdateFunction(System.Int32,System.Int32,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDllFromYooAsset_OnDownloadProgressUpdateFunction_m65BC4DB89B5878C363B047EB412F6AD86B469179 (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, int32_t ___0_totalDownloadCount, int32_t ___1_currentDownloadCount, int64_t ___2_totalDownloadBytes, int64_t ___3_currentDownloadBytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9999EAD1C04E449384DCC261102A72E4A45FBF8E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("?????????{0}????????????{1}????????byte{2},???????byte{3}", totalDownloadCount, currentDownloadCount, totalDownloadBytes, currentDownloadBytes));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2 = ___0_totalDownloadCount;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6 = ___1_currentDownloadCount;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int64_t L_10 = ___2_totalDownloadBytes;
		int64_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		int64_t L_14 = ___3_currentDownloadBytes;
		int64_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral9999EAD1C04E449384DCC261102A72E4A45FBF8E, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
		// }
		return;
	}
}
// System.Void LoadDllFromYooAsset::OnDownloadErrorFunction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDllFromYooAsset_OnDownloadErrorFunction_m1A534DD955D5CD845C97768B2E4A0006537A1AF6 (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, String_t* ___0_fileName, String_t* ___1_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79399E8E64B97439C0C4BD4515FD559E028BF79A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(string.Format("???????{0}??????????{1}", fileName, error));
		String_t* L_0 = ___0_fileName;
		String_t* L_1 = ___1_error;
		String_t* L_2;
		L_2 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral79399E8E64B97439C0C4BD4515FD559E028BF79A, L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_2, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task LoadDllFromYooAsset::LoadMetadataForAOTAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LoadDllFromYooAsset_LoadMetadataForAOTAssemblies_m7EE4D57F38DD0952B2006072609EEBBBA75FDE5C (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B_mA28CE77CDCFD9593AF754166C2E829DCA03BE611_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B_mA28CE77CDCFD9593AF754166C2E829DCA03BE611(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B_mA28CE77CDCFD9593AF754166C2E829DCA03BE611_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Void LoadDllFromYooAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDllFromYooAsset__ctor_m382DEA23F6D19455510180A0D9ECA316C98BC031 (LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean LoadDllFromYooAsset/QueryStreamingAssetsFileServices::QueryStreamingAssets(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueryStreamingAssetsFileServices_QueryStreamingAssets_m7F151611E9865E4F17E72F1EEB7E4DE1E7DE04CF (QueryStreamingAssetsFileServices_tABCAA88E78DDDF557EB821ABD4E16BE88720178C* __this, String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string buildinFolderName = YooAssets.GetStreamingAssetBuildinFolderName();
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = YooAssets_GetStreamingAssetBuildinFolderName_m310233391F05875E89559C66E5B0728A2B2B9DF4(NULL);
		// return BetterStreamingAssets.FileExists($"{buildinFolderName}/{fileName}");
		String_t* L_1 = ___0_fileName;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_1, NULL);
		bool L_3;
		L_3 = BetterStreamingAssets_FileExists_m9DB4D4860ED3C0090C0005DEBA238A80E24A77E1(L_2, NULL);
		return L_3;
	}
}
// System.Void LoadDllFromYooAsset/QueryStreamingAssetsFileServices::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryStreamingAssetsFileServices__ctor_m318E9AC38E6B83D0F635CB7EE907F843215D37F0 (QueryStreamingAssetsFileServices_tABCAA88E78DDDF557EB821ABD4E16BE88720178C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadDllFromYooAsset/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_m56DFC5D4E486BE3D874CEB8E5E2202BEBA171263 (U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m8F711864EFD1D7F818C6FF30CBA98F943F326645_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0061_1;
				}
				case 1:
				{
					goto IL_00bc_1;
				}
				case 2:
				{
					goto IL_0117_1;
				}
				case 3:
				{
					goto IL_016f_1;
				}
			}
		}
		{
			// BetterStreamingAssets.Initialize();
			BetterStreamingAssets_Initialize_m4734FAB5D4C3B306447B4FB96033F4D6506E7CF8(NULL);
			// await InitYooAssets();
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_3 = V_1;
			NullCheck(L_3);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
			L_4 = LoadDllFromYooAsset_InitYooAssets_m6882389CDF25716CD65BAB2F65B5A920F4281E13(L_3, NULL);
			NullCheck(L_4);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_5;
			L_5 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_4, NULL);
			V_2 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_6)
			{
				goto IL_007d_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_8 = V_2;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m8F711864EFD1D7F818C6FF30CBA98F943F326645(L_9, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m8F711864EFD1D7F818C6FF30CBA98F943F326645_RuntimeMethod_var);
			goto IL_01be;
		}

IL_0061_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10 = __this->___U3CU3Eu__1_3;
			V_2 = L_10;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_11 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_007d_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// await UpdateDataVersion();
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_13 = V_1;
			NullCheck(L_13);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_14;
			L_14 = LoadDllFromYooAsset_UpdateDataVersion_m8FFD72A9F1AD9B84E14FF4BB787932D5E6BD74E0(L_13, NULL);
			NullCheck(L_14);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15;
			L_15 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_14, NULL);
			V_2 = L_15;
			bool L_16;
			L_16 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_16)
			{
				goto IL_00d8_1;
			}
		}
		{
			int32_t L_17 = 1;
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_18 = V_2;
			__this->___U3CU3Eu__1_3 = L_18;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_19 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m8F711864EFD1D7F818C6FF30CBA98F943F326645(L_19, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m8F711864EFD1D7F818C6FF30CBA98F943F326645_RuntimeMethod_var);
			goto IL_01be;
		}

IL_00bc_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_20 = __this->___U3CU3Eu__1_3;
			V_2 = L_20;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_21 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_21, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_22 = (-1);
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
		}

IL_00d8_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// await Download();
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_23 = V_1;
			NullCheck(L_23);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_24;
			L_24 = LoadDllFromYooAsset_Download_m77096B95AA6591E21217E76901B1ED3B8FF74F0A(L_23, NULL);
			NullCheck(L_24);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_25;
			L_25 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_24, NULL);
			V_2 = L_25;
			bool L_26;
			L_26 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_26)
			{
				goto IL_0133_1;
			}
		}
		{
			int32_t L_27 = 2;
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_28 = V_2;
			__this->___U3CU3Eu__1_3 = L_28;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_29 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m8F711864EFD1D7F818C6FF30CBA98F943F326645(L_29, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m8F711864EFD1D7F818C6FF30CBA98F943F326645_RuntimeMethod_var);
			goto IL_01be;
		}

IL_0117_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_30 = __this->___U3CU3Eu__1_3;
			V_2 = L_30;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_31 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_31, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_32 = (-1);
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
		}

IL_0133_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// await LoadMetadataForAOTAssemblies();
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_33 = V_1;
			NullCheck(L_33);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_34;
			L_34 = LoadDllFromYooAsset_LoadMetadataForAOTAssemblies_m7EE4D57F38DD0952B2006072609EEBBBA75FDE5C(L_33, NULL);
			NullCheck(L_34);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_35;
			L_35 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_34, NULL);
			V_2 = L_35;
			bool L_36;
			L_36 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_36)
			{
				goto IL_018b_1;
			}
		}
		{
			int32_t L_37 = 3;
			V_0 = L_37;
			__this->___U3CU3E1__state_0 = L_37;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_38 = V_2;
			__this->___U3CU3Eu__1_3 = L_38;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_39 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m8F711864EFD1D7F818C6FF30CBA98F943F326645(L_39, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9_m8F711864EFD1D7F818C6FF30CBA98F943F326645_RuntimeMethod_var);
			goto IL_01be;
		}

IL_016f_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_40 = __this->___U3CU3Eu__1_3;
			V_2 = L_40;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_41 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_41, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_42 = (-1);
			V_0 = L_42;
			__this->___U3CU3E1__state_0 = L_42;
		}

IL_018b_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_01ab;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0194;
		}
		throw e;
	}

CATCH_0194:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_43 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_44 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_43, L_44, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01be;
	}// end catch (depth: 1)

IL_01ab:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_45 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_45, NULL);
	}

IL_01be:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_MoveNext_m56DFC5D4E486BE3D874CEB8E5E2202BEBA171263_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9*>(__this + _offset);
	U3CStartU3Ed__2_MoveNext_m56DFC5D4E486BE3D874CEB8E5E2202BEBA171263(_thisAdjusted, method);
}
// System.Void LoadDllFromYooAsset/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_m081F09D947C933E6EF63279AD7B2780B9A54DAF4 (U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_SetStateMachine_m081F09D947C933E6EF63279AD7B2780B9A54DAF4_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_t719E353075BF65CB9AF50C65F9046FC0C67E5BD9*>(__this + _offset);
	U3CStartU3Ed__2_SetStateMachine_m081F09D947C933E6EF63279AD7B2780B9A54DAF4(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadDllFromYooAsset/<InitYooAssets>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitYooAssetsU3Ed__3_MoveNext_m30D5BC03B1EC95DD2E0605B896C126C3AC7B049D (U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m2616ED7DE1DA3D0BF9F98D16A67E3847DC31C0D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m1D959087AF5DAD97E60071D83531EA087B9CA5C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostPlayModeParameters_tC6E69199541C55D43D8BE6290108636DD4589CC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueryStreamingAssetsFileServices_tABCAA88E78DDDF557EB821ABD4E16BE88720178C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12C4DE0F4484ED3A7EB1EF04C63B0B3669FE5995);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26ECF6237476490DABC8DB457BD4BF537698CDEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9DDA4DF980D4971E42607AE93A88D7745184EA5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* V_1 = NULL;
	EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF* V_2 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_3;
	memset((&V_3), 0, sizeof(V_3));
	OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9* V_4 = NULL;
	HostPlayModeParameters_tC6E69199541C55D43D8BE6290108636DD4589CC5* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_009c_1;
				}
				case 1:
				{
					goto IL_010e_1;
				}
				case 2:
				{
					goto IL_01a4_1;
				}
			}
		}
		{
			// YooAssets.Initialize();
			il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
			YooAssets_Initialize_m97959F34CFD532DDA55EC11353AB8214C8ED63EC(NULL);
			// package = YooAssets.CreateAssetsPackage("DefaultPackage");
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_3 = V_1;
			AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* L_4;
			L_4 = YooAssets_CreateAssetsPackage_mC0BF6FE90FFDDFA5A4295F49E280A01C63CA608D(_stringLiteralF9DDA4DF980D4971E42607AE93A88D7745184EA5, NULL);
			NullCheck(L_3);
			L_3->___package_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&L_3->___package_4), (void*)L_4);
			// YooAssets.SetDefaultAssetsPackage(package);
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_5 = V_1;
			NullCheck(L_5);
			AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* L_6 = L_5->___package_4;
			YooAssets_SetDefaultAssetsPackage_mA846E84DE0C07A97F97B453EC1667244C4CA7FF2_inline(L_6, NULL);
			// if (playMode == EPlayMode.EditorSimulateMode)
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_7 = V_1;
			NullCheck(L_7);
			int32_t L_8 = L_7->___playMode_5;
			if (L_8)
			{
				goto IL_00bf_1;
			}
		}
		{
			// var initParameters = new EditorSimulateModeParameters();
			EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF* L_9 = (EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF*)il2cpp_codegen_object_new(EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF_il2cpp_TypeInfo_var);
			NullCheck(L_9);
			EditorSimulateModeParameters__ctor_m7C97CBECF9586650FC265B658B7D58A2F106EDD8(L_9, NULL);
			V_2 = L_9;
			// initParameters.SimulatePatchManifestPath = EditorSimulateModeHelper.SimulateBuild("DefaultPackage");
			EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF* L_10 = V_2;
			String_t* L_11;
			L_11 = EditorSimulateModeHelper_SimulateBuild_m6BFEA7AE009EBC4736041FF11B18F86063572298(_stringLiteralF9DDA4DF980D4971E42607AE93A88D7745184EA5, NULL);
			NullCheck(L_10);
			L_10->___SimulatePatchManifestPath_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&L_10->___SimulatePatchManifestPath_3), (void*)L_11);
			// await package.InitializeAsync(initParameters);
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_12 = V_1;
			NullCheck(L_12);
			AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* L_13 = L_12->___package_4;
			EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF* L_14 = V_2;
			NullCheck(L_13);
			InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* L_15;
			L_15 = AssetsPackage_InitializeAsync_m66C5DD6BB80EA268AFCDC77FA0DF7F20E7E24D39(L_13, L_14, NULL);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_16;
			L_16 = EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m1D959087AF5DAD97E60071D83531EA087B9CA5C0(L_15, EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m1D959087AF5DAD97E60071D83531EA087B9CA5C0_RuntimeMethod_var);
			V_3 = L_16;
			bool L_17;
			L_17 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_3), NULL);
			if (L_17)
			{
				goto IL_00b8_1;
			}
		}
		{
			int32_t L_18 = 0;
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_19 = V_3;
			__this->___U3CU3Eu__1_3 = L_19;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_20 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m2616ED7DE1DA3D0BF9F98D16A67E3847DC31C0D7(L_20, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m2616ED7DE1DA3D0BF9F98D16A67E3847DC31C0D7_RuntimeMethod_var);
			goto IL_01f5;
		}

IL_009c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_21 = __this->___U3CU3Eu__1_3;
			V_3 = L_21;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_22 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_23 = (-1);
			V_0 = L_23;
			__this->___U3CU3E1__state_0 = L_23;
		}

IL_00b8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_3), NULL);
		}

IL_00bf_1:
		{
			// if (playMode == EPlayMode.OfflinePlayMode)
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_24 = V_1;
			NullCheck(L_24);
			int32_t L_25 = L_24->___playMode_5;
			if ((!(((uint32_t)L_25) == ((uint32_t)1))))
			{
				goto IL_0131_1;
			}
		}
		{
			// var initParameters = new OfflinePlayModeParameters();
			OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9* L_26 = (OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9*)il2cpp_codegen_object_new(OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9_il2cpp_TypeInfo_var);
			NullCheck(L_26);
			OfflinePlayModeParameters__ctor_m916B527C5A8FDF1631F083C206D9E813916E9C78(L_26, NULL);
			V_4 = L_26;
			// await package.InitializeAsync(initParameters);
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_27 = V_1;
			NullCheck(L_27);
			AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* L_28 = L_27->___package_4;
			OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9* L_29 = V_4;
			NullCheck(L_28);
			InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* L_30;
			L_30 = AssetsPackage_InitializeAsync_m66C5DD6BB80EA268AFCDC77FA0DF7F20E7E24D39(L_28, L_29, NULL);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_31;
			L_31 = EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m1D959087AF5DAD97E60071D83531EA087B9CA5C0(L_30, EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m1D959087AF5DAD97E60071D83531EA087B9CA5C0_RuntimeMethod_var);
			V_3 = L_31;
			bool L_32;
			L_32 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_3), NULL);
			if (L_32)
			{
				goto IL_012a_1;
			}
		}
		{
			int32_t L_33 = 1;
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34 = V_3;
			__this->___U3CU3Eu__1_3 = L_34;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_35 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m2616ED7DE1DA3D0BF9F98D16A67E3847DC31C0D7(L_35, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m2616ED7DE1DA3D0BF9F98D16A67E3847DC31C0D7_RuntimeMethod_var);
			goto IL_01f5;
		}

IL_010e_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = __this->___U3CU3Eu__1_3;
			V_3 = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_37 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_37, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_38 = (-1);
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
		}

IL_012a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_3), NULL);
		}

IL_0131_1:
		{
			// if (playMode == EPlayMode.HostPlayMode)
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_39 = V_1;
			NullCheck(L_39);
			int32_t L_40 = L_39->___playMode_5;
			if ((!(((uint32_t)L_40) == ((uint32_t)2))))
			{
				goto IL_01c7_1;
			}
		}
		{
			// var initParameters = new HostPlayModeParameters();
			HostPlayModeParameters_tC6E69199541C55D43D8BE6290108636DD4589CC5* L_41 = (HostPlayModeParameters_tC6E69199541C55D43D8BE6290108636DD4589CC5*)il2cpp_codegen_object_new(HostPlayModeParameters_tC6E69199541C55D43D8BE6290108636DD4589CC5_il2cpp_TypeInfo_var);
			NullCheck(L_41);
			HostPlayModeParameters__ctor_m8F4DAF7FE2CDA824450C3203B50B5DE71CD21537(L_41, NULL);
			V_5 = L_41;
			// initParameters.QueryServices = new QueryStreamingAssetsFileServices();
			HostPlayModeParameters_tC6E69199541C55D43D8BE6290108636DD4589CC5* L_42 = V_5;
			QueryStreamingAssetsFileServices_tABCAA88E78DDDF557EB821ABD4E16BE88720178C* L_43 = (QueryStreamingAssetsFileServices_tABCAA88E78DDDF557EB821ABD4E16BE88720178C*)il2cpp_codegen_object_new(QueryStreamingAssetsFileServices_tABCAA88E78DDDF557EB821ABD4E16BE88720178C_il2cpp_TypeInfo_var);
			NullCheck(L_43);
			QueryStreamingAssetsFileServices__ctor_m318E9AC38E6B83D0F635CB7EE907F843215D37F0(L_43, NULL);
			NullCheck(L_42);
			L_42->___QueryServices_5 = L_43;
			Il2CppCodeGenWriteBarrier((void**)(&L_42->___QueryServices_5), (void*)L_43);
			// initParameters.DefaultHostServer = "http://127.0.0.1/CDN/PC/package";
			HostPlayModeParameters_tC6E69199541C55D43D8BE6290108636DD4589CC5* L_44 = V_5;
			NullCheck(L_44);
			L_44->___DefaultHostServer_3 = _stringLiteral12C4DE0F4484ED3A7EB1EF04C63B0B3669FE5995;
			Il2CppCodeGenWriteBarrier((void**)(&L_44->___DefaultHostServer_3), (void*)_stringLiteral12C4DE0F4484ED3A7EB1EF04C63B0B3669FE5995);
			// initParameters.FallbackHostServer = "http://127.0.0.1/CDN2/PC/v1.0";
			HostPlayModeParameters_tC6E69199541C55D43D8BE6290108636DD4589CC5* L_45 = V_5;
			NullCheck(L_45);
			L_45->___FallbackHostServer_4 = _stringLiteral26ECF6237476490DABC8DB457BD4BF537698CDEA;
			Il2CppCodeGenWriteBarrier((void**)(&L_45->___FallbackHostServer_4), (void*)_stringLiteral26ECF6237476490DABC8DB457BD4BF537698CDEA);
			// await package.InitializeAsync(initParameters);
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_46 = V_1;
			NullCheck(L_46);
			AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* L_47 = L_46->___package_4;
			HostPlayModeParameters_tC6E69199541C55D43D8BE6290108636DD4589CC5* L_48 = V_5;
			NullCheck(L_47);
			InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* L_49;
			L_49 = AssetsPackage_InitializeAsync_m66C5DD6BB80EA268AFCDC77FA0DF7F20E7E24D39(L_47, L_48, NULL);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m1D959087AF5DAD97E60071D83531EA087B9CA5C0(L_49, EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m1D959087AF5DAD97E60071D83531EA087B9CA5C0_RuntimeMethod_var);
			V_3 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_3), NULL);
			if (L_51)
			{
				goto IL_01c0_1;
			}
		}
		{
			int32_t L_52 = 2;
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_3;
			__this->___U3CU3Eu__1_3 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_54 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m2616ED7DE1DA3D0BF9F98D16A67E3847DC31C0D7(L_54, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC_m2616ED7DE1DA3D0BF9F98D16A67E3847DC31C0D7_RuntimeMethod_var);
			goto IL_01f5;
		}

IL_01a4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = __this->___U3CU3Eu__1_3;
			V_3 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state_0 = L_57;
		}

IL_01c0_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_3), NULL);
		}

IL_01c7_1:
		{
			goto IL_01e2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c9;
		}
		throw e;
	}

CATCH_01c9:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_58 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_59 = V_6;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_58, L_59, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01f5;
	}// end catch (depth: 1)

IL_01e2:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_60 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_60, NULL);
	}

IL_01f5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitYooAssetsU3Ed__3_MoveNext_m30D5BC03B1EC95DD2E0605B896C126C3AC7B049D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC*>(__this + _offset);
	U3CInitYooAssetsU3Ed__3_MoveNext_m30D5BC03B1EC95DD2E0605B896C126C3AC7B049D(_thisAdjusted, method);
}
// System.Void LoadDllFromYooAsset/<InitYooAssets>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitYooAssetsU3Ed__3_SetStateMachine_mC60E97075CACF48DA91E8ED96E0E0B44B1369D84 (U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitYooAssetsU3Ed__3_SetStateMachine_mC60E97075CACF48DA91E8ED96E0E0B44B1369D84_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitYooAssetsU3Ed__3_t678973656AD2C6E0DF9C6906B6B257B43FB7B2CC*>(__this + _offset);
	U3CInitYooAssetsU3Ed__3_SetStateMachine_mC60E97075CACF48DA91E8ED96E0E0B44B1369D84(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadDllFromYooAsset/<UpdateDataVersion>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateDataVersionU3Ed__4_MoveNext_m4C263A147B7631F4BF2D089548AF647FCA32DE97 (U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_m30B2966EA7C9F070C2E92F99F18E6101BA9F50DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumeratorAsyncExtensions_GetAwaiter_TisUpdatePackageManifestOperation_tB014E4396119B857527F7F70512C9DD1A496C145_m2F118472B292222603D2B6534C20E756644EDD9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumeratorAsyncExtensions_GetAwaiter_TisUpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C_mDE5856CEB975ED5E40162C250D1B686D218E70E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48DAF8AE463975BF8EF40CCC197FC5E230E4F94E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* V_1 = NULL;
	String_t* V_2 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0064_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0106_1;
			}
		}
		{
			// var operation = package.UpdatePackageVersionAsync();
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_4 = V_1;
			NullCheck(L_4);
			AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* L_5 = L_4->___package_4;
			NullCheck(L_5);
			UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C* L_6;
			L_6 = AssetsPackage_UpdatePackageVersionAsync_m4FF760C3A48B4F259E000C212495E7D9928C6560(L_5, (bool)1, ((int32_t)60), NULL);
			__this->___U3CoperationU3E5__2_3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoperationU3E5__2_3), (void*)L_6);
			// await operation;
			UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C* L_7 = __this->___U3CoperationU3E5__2_3;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = EnumeratorAsyncExtensions_GetAwaiter_TisUpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C_mDE5856CEB975ED5E40162C250D1B686D218E70E0(L_7, EnumeratorAsyncExtensions_GetAwaiter_TisUpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C_mDE5856CEB975ED5E40162C250D1B686D218E70E0_RuntimeMethod_var);
			V_3 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_3), NULL);
			if (L_9)
			{
				goto IL_0080_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_3;
			__this->___U3CU3Eu__1_4 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_12 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_m30B2966EA7C9F070C2E92F99F18E6101BA9F50DA(L_12, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_m30B2966EA7C9F070C2E92F99F18E6101BA9F50DA_RuntimeMethod_var);
			goto IL_0183;
		}

IL_0064_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1_4;
			V_3 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_0080_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_3), NULL);
			// string packageVersion = "";
			V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// if (operation.Status == EOperationStatus.Succeed)
			UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C* L_16 = __this->___U3CoperationU3E5__2_3;
			NullCheck(L_16);
			int32_t L_17;
			L_17 = AsyncOperationBase_get_Status_m306FE61F0A22DFAA81795961A8D8D4C011C066CA_inline(L_16, NULL);
			if ((!(((uint32_t)L_17) == ((uint32_t)1))))
			{
				goto IL_00b9_1;
			}
		}
		{
			// packageVersion = operation.PackageVersion;
			UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C* L_18 = __this->___U3CoperationU3E5__2_3;
			NullCheck(L_18);
			String_t* L_19;
			L_19 = UpdatePackageVersionOperation_get_PackageVersion_m6FE2F350948E7B71BE69AC231DD9E9B67C3FC262_inline(L_18, NULL);
			V_2 = L_19;
			// Debug.Log($"Updated package Version : {packageVersion}");
			String_t* L_20 = V_2;
			String_t* L_21;
			L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral48DAF8AE463975BF8EF40CCC197FC5E230E4F94E, L_20, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_21, NULL);
			goto IL_00c9_1;
		}

IL_00b9_1:
		{
			// Debug.LogError(operation.Error);
			UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C* L_22 = __this->___U3CoperationU3E5__2_3;
			NullCheck(L_22);
			String_t* L_23;
			L_23 = AsyncOperationBase_get_Error_m636403CB75036A9C978E52ED6E2A13CD787E0494_inline(L_22, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_23, NULL);
		}

IL_00c9_1:
		{
			// var operation1 = package.UpdatePackageManifestAsync(packageVersion);
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_24 = V_1;
			NullCheck(L_24);
			AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* L_25 = L_24->___package_4;
			String_t* L_26 = V_2;
			NullCheck(L_25);
			UpdatePackageManifestOperation_tB014E4396119B857527F7F70512C9DD1A496C145* L_27;
			L_27 = AssetsPackage_UpdatePackageManifestAsync_mCBBC52E40A61B444981CE82475403F8551ACE4BE(L_25, L_26, ((int32_t)60), NULL);
			// await operation1;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28;
			L_28 = EnumeratorAsyncExtensions_GetAwaiter_TisUpdatePackageManifestOperation_tB014E4396119B857527F7F70512C9DD1A496C145_m2F118472B292222603D2B6534C20E756644EDD9B(L_27, EnumeratorAsyncExtensions_GetAwaiter_TisUpdatePackageManifestOperation_tB014E4396119B857527F7F70512C9DD1A496C145_m2F118472B292222603D2B6534C20E756644EDD9B_RuntimeMethod_var);
			V_3 = L_28;
			bool L_29;
			L_29 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_3), NULL);
			if (L_29)
			{
				goto IL_0122_1;
			}
		}
		{
			int32_t L_30 = 1;
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_31 = V_3;
			__this->___U3CU3Eu__1_4 = L_31;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_32 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_m30B2966EA7C9F070C2E92F99F18E6101BA9F50DA(L_32, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862_m30B2966EA7C9F070C2E92F99F18E6101BA9F50DA_RuntimeMethod_var);
			goto IL_0183;
		}

IL_0106_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = __this->___U3CU3Eu__1_4;
			V_3 = L_33;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_34 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
		}

IL_0122_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_3), NULL);
			// if (operation.Status == EOperationStatus.Succeed)
			UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C* L_36 = __this->___U3CoperationU3E5__2_3;
			NullCheck(L_36);
			int32_t L_37;
			L_37 = AsyncOperationBase_get_Status_m306FE61F0A22DFAA81795961A8D8D4C011C066CA_inline(L_36, NULL);
			if ((((int32_t)L_37) == ((int32_t)1)))
			{
				goto IL_0147_1;
			}
		}
		{
			// Debug.LogError(operation.Error);
			UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C* L_38 = __this->___U3CoperationU3E5__2_3;
			NullCheck(L_38);
			String_t* L_39;
			L_39 = AsyncOperationBase_get_Error_m636403CB75036A9C978E52ED6E2A13CD787E0494_inline(L_38, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_39, NULL);
		}

IL_0147_1:
		{
			goto IL_0169;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0149;
		}
		throw e;
	}

CATCH_0149:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CoperationU3E5__2_3 = (UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoperationU3E5__2_3), (void*)(UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_40 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_41 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_40, L_41, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0183;
	}// end catch (depth: 1)

IL_0169:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CoperationU3E5__2_3 = (UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoperationU3E5__2_3), (void*)(UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_42 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_42, NULL);
	}

IL_0183:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateDataVersionU3Ed__4_MoveNext_m4C263A147B7631F4BF2D089548AF647FCA32DE97_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862*>(__this + _offset);
	U3CUpdateDataVersionU3Ed__4_MoveNext_m4C263A147B7631F4BF2D089548AF647FCA32DE97(_thisAdjusted, method);
}
// System.Void LoadDllFromYooAsset/<UpdateDataVersion>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateDataVersionU3Ed__4_SetStateMachine_m00850D45E8C55979FB0972595FBCCBA6FFF21AF0 (U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateDataVersionU3Ed__4_SetStateMachine_m00850D45E8C55979FB0972595FBCCBA6FFF21AF0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUpdateDataVersionU3Ed__4_tF0179E05A8D8F28FBD8F2F2AD0E93DEE264E1862*>(__this + _offset);
	U3CUpdateDataVersionU3Ed__4_SetStateMachine_m00850D45E8C55979FB0972595FBCCBA6FFF21AF0(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadDllFromYooAsset/<Download>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadU3Ed__5_MoveNext_m47E0DA44ECAB4CECFE035DE9E97BADF0F51C0027 (U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448_m303DAD8C02ACB274DAD2DE2A22DEAD32AF56EC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumeratorAsyncExtensions_GetAwaiter_TisPatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701_m03725B6D4DFE62D6CFE95864F0E7B777A6CFB3BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadDllFromYooAsset_OnDownloadErrorFunction_m1A534DD955D5CD845C97768B2E4A0006537A1AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadDllFromYooAsset_OnDownloadOverFunction_mE8F4B051DF7B3340F2653FD3F4315A6AD62E61D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadDllFromYooAsset_OnDownloadProgressUpdateFunction_m65BC4DB89B5878C363B047EB412F6AD86B469179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadDllFromYooAsset_OnStartDownloadFileFunction_m6E8053999B0BFF553712F670FDFF9349407093BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B6417EF0C209A189F13DFC69B2E9C8E57780167);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9DDA4DF980D4971E42607AE93A88D7745184EA5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* V_5 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0102_1;
			}
		}
		{
			// int downloadingMaxNum = 10;
			V_2 = ((int32_t)10);
			// int failedTryAgain = 3;
			V_3 = 3;
			// int timeout = 60;
			V_4 = ((int32_t)60);
			// var package = YooAssets.GetAssetsPackage("DefaultPackage");
			il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
			AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* L_3;
			L_3 = YooAssets_GetAssetsPackage_m6223C9A2CDDD864B6C3A7E8ED1B175DA9409A012(_stringLiteralF9DDA4DF980D4971E42607AE93A88D7745184EA5, NULL);
			V_5 = L_3;
			// var downloader = package.CreatePatchDownloader(downloadingMaxNum, failedTryAgain, timeout);
			AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* L_4 = V_5;
			int32_t L_5 = V_2;
			int32_t L_6 = V_3;
			int32_t L_7 = V_4;
			NullCheck(L_4);
			PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701* L_8;
			L_8 = AssetsPackage_CreatePatchDownloader_m4B485E3ABB5F24A5560C4946655B1F75E028C280(L_4, L_5, L_6, L_7, NULL);
			__this->___U3CdownloaderU3E5__2_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdownloaderU3E5__2_3), (void*)L_8);
			// if (downloader.TotalDownloadCount == 0)
			PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701* L_9 = __this->___U3CdownloaderU3E5__2_3;
			NullCheck(L_9);
			int32_t L_10;
			L_10 = DownloaderOperation_get_TotalDownloadCount_m536A5BFFEB385106C66064BD94A272301CD6EC1C_inline(L_9, NULL);
			if (L_10)
			{
				goto IL_004c_1;
			}
		}
		{
			// return;
			goto IL_0160;
		}

IL_004c_1:
		{
			// int totalDownloadCount = downloader.TotalDownloadCount;
			PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701* L_11 = __this->___U3CdownloaderU3E5__2_3;
			NullCheck(L_11);
			int32_t L_12;
			L_12 = DownloaderOperation_get_TotalDownloadCount_m536A5BFFEB385106C66064BD94A272301CD6EC1C_inline(L_11, NULL);
			// long totalDownloadBytes = downloader.TotalDownloadBytes;
			PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701* L_13 = __this->___U3CdownloaderU3E5__2_3;
			NullCheck(L_13);
			int64_t L_14;
			L_14 = DownloaderOperation_get_TotalDownloadBytes_m4F0009CCA5AEF043B000F6B6270448CA58CFE5FA_inline(L_13, NULL);
			// downloader.OnDownloadErrorCallback = OnDownloadErrorFunction;
			PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701* L_15 = __this->___U3CdownloaderU3E5__2_3;
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_16 = V_1;
			OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206* L_17 = (OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206*)il2cpp_codegen_object_new(OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206_il2cpp_TypeInfo_var);
			NullCheck(L_17);
			OnDownloadError__ctor_mB790A3BCB45D13F4440EBB84170E7D84B1BCC166(L_17, L_16, (intptr_t)((void*)LoadDllFromYooAsset_OnDownloadErrorFunction_m1A534DD955D5CD845C97768B2E4A0006537A1AF6_RuntimeMethod_var), NULL);
			NullCheck(L_15);
			DownloaderOperation_set_OnDownloadErrorCallback_mC83AA6D2931DF85E69235C7FFF4903A427E170BA_inline(L_15, L_17, NULL);
			// downloader.OnDownloadProgressCallback = OnDownloadProgressUpdateFunction;
			PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701* L_18 = __this->___U3CdownloaderU3E5__2_3;
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_19 = V_1;
			OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6* L_20 = (OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6*)il2cpp_codegen_object_new(OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6_il2cpp_TypeInfo_var);
			NullCheck(L_20);
			OnDownloadProgress__ctor_m5EE3A22471494C009282038AED6C8BFE8A8AAB86(L_20, L_19, (intptr_t)((void*)LoadDllFromYooAsset_OnDownloadProgressUpdateFunction_m65BC4DB89B5878C363B047EB412F6AD86B469179_RuntimeMethod_var), NULL);
			NullCheck(L_18);
			DownloaderOperation_set_OnDownloadProgressCallback_m1057544081D4EF83F2C7681E18B1B250DEF95883_inline(L_18, L_20, NULL);
			// downloader.OnDownloadOverCallback = OnDownloadOverFunction;
			PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701* L_21 = __this->___U3CdownloaderU3E5__2_3;
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_22 = V_1;
			OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6* L_23 = (OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6*)il2cpp_codegen_object_new(OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6_il2cpp_TypeInfo_var);
			NullCheck(L_23);
			OnDownloadOver__ctor_m2EBEF97FDE8D0C96E26F5BA0E150AE8E5F1625B9(L_23, L_22, (intptr_t)((void*)LoadDllFromYooAsset_OnDownloadOverFunction_mE8F4B051DF7B3340F2653FD3F4315A6AD62E61D6_RuntimeMethod_var), NULL);
			NullCheck(L_21);
			DownloaderOperation_set_OnDownloadOverCallback_mEC1CC28A211DD3649D0A559267528B4BE36F62A7_inline(L_21, L_23, NULL);
			// downloader.OnStartDownloadFileCallback = OnStartDownloadFileFunction;
			PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701* L_24 = __this->___U3CdownloaderU3E5__2_3;
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_25 = V_1;
			OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9* L_26 = (OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9*)il2cpp_codegen_object_new(OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9_il2cpp_TypeInfo_var);
			NullCheck(L_26);
			OnStartDownloadFile__ctor_m622DFE678E54A8CF3FDB035AAFADFE9F31388265(L_26, L_25, (intptr_t)((void*)LoadDllFromYooAsset_OnStartDownloadFileFunction_m6E8053999B0BFF553712F670FDFF9349407093BF_RuntimeMethod_var), NULL);
			NullCheck(L_24);
			DownloaderOperation_set_OnStartDownloadFileCallback_mD64B6D59C362CA1F84CB20AAC83F43035E3933D6_inline(L_24, L_26, NULL);
			// downloader.BeginDownload();
			PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701* L_27 = __this->___U3CdownloaderU3E5__2_3;
			NullCheck(L_27);
			DownloaderOperation_BeginDownload_m52627DC31BD59F76E388626ED8A7C2969B11E561(L_27, NULL);
			// await downloader;
			PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701* L_28 = __this->___U3CdownloaderU3E5__2_3;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_29;
			L_29 = EnumeratorAsyncExtensions_GetAwaiter_TisPatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701_m03725B6D4DFE62D6CFE95864F0E7B777A6CFB3BE(L_28, EnumeratorAsyncExtensions_GetAwaiter_TisPatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701_m03725B6D4DFE62D6CFE95864F0E7B777A6CFB3BE_RuntimeMethod_var);
			V_6 = L_29;
			bool L_30;
			L_30 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_30)
			{
				goto IL_011f_1;
			}
		}
		{
			int32_t L_31 = 0;
			V_0 = L_31;
			__this->___U3CU3E1__state_0 = L_31;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32 = V_6;
			__this->___U3CU3Eu__1_4 = L_32;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_33 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448_m303DAD8C02ACB274DAD2DE2A22DEAD32AF56EC54(L_33, (&V_6), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448_m303DAD8C02ACB274DAD2DE2A22DEAD32AF56EC54_RuntimeMethod_var);
			goto IL_017a;
		}

IL_0102_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34 = __this->___U3CU3Eu__1_4;
			V_6 = L_34;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_35 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_36 = (-1);
			V_0 = L_36;
			__this->___U3CU3E1__state_0 = L_36;
		}

IL_011f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
			// if (downloader.Status == EOperationStatus.Succeed)
			PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701* L_37 = __this->___U3CdownloaderU3E5__2_3;
			NullCheck(L_37);
			int32_t L_38;
			L_38 = AsyncOperationBase_get_Status_m306FE61F0A22DFAA81795961A8D8D4C011C066CA_inline(L_37, NULL);
			if ((!(((uint32_t)L_38) == ((uint32_t)1))))
			{
				goto IL_013e_1;
			}
		}
		{
			// Debug.Log("???????");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6B6417EF0C209A189F13DFC69B2E9C8E57780167, NULL);
		}

IL_013e_1:
		{
			goto IL_0160;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0140;
		}
		throw e;
	}

CATCH_0140:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CdownloaderU3E5__2_3 = (PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdownloaderU3E5__2_3), (void*)(PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_39 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_40 = V_7;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_39, L_40, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_017a;
	}// end catch (depth: 1)

IL_0160:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CdownloaderU3E5__2_3 = (PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdownloaderU3E5__2_3), (void*)(PatchDownloaderOperation_tCEE51C6CEED7FA29A1B6D709BD1307640F9AC701*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_41 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_41, NULL);
	}

IL_017a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDownloadU3Ed__5_MoveNext_m47E0DA44ECAB4CECFE035DE9E97BADF0F51C0027_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448*>(__this + _offset);
	U3CDownloadU3Ed__5_MoveNext_m47E0DA44ECAB4CECFE035DE9E97BADF0F51C0027(_thisAdjusted, method);
}
// System.Void LoadDllFromYooAsset/<Download>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadU3Ed__5_SetStateMachine_mEEE576EB0A18716B1CEF89E1BF367E1DCFF61026 (U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDownloadU3Ed__5_SetStateMachine_mEEE576EB0A18716B1CEF89E1BF367E1DCFF61026_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDownloadU3Ed__5_t45EB13A7A98D40B5F7DD09685A531270DB218448*>(__this + _offset);
	U3CDownloadU3Ed__5_SetStateMachine_mEEE576EB0A18716B1CEF89E1BF367E1DCFF61026(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadDllFromYooAsset/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mABC0C117919072CDEDCCC7AB08CB2CCACF1A58C8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5* L_0 = (U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5*)il2cpp_codegen_object_new(U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1553536EE8E5C0F6A9EC9FB6F9EC2C5F98FABB1B(L_0, NULL);
		((U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void LoadDllFromYooAsset/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1553536EE8E5C0F6A9EC9FB6F9EC2C5F98FABB1B (U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LoadDllFromYooAsset/<>c::<StartGame>b__6_0(YooAsset.AssetOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartGameU3Eb__6_0_mE7ED00114B59CF6D071A7517C3A11CF13D1DBFC6 (U3CU3Ec_t1BB993C85C7FEA963B7C4F4724E0824847AAE6B5* __this, AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* ___0_p, const RuntimeMethod* method) 
{
	{
		// var go = p.InstantiateAsync();
		AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* L_0 = ___0_p;
		NullCheck(L_0);
		InstantiateOperation_t3A3C4296D9763CA01BB3F7C1285B0651AC23E66E* L_1;
		L_1 = AssetOperationHandle_InstantiateAsync_m19390FFCEFDE6A5F9848FF8F4788C7C962608B14(L_0, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadMetadataForAOTAssembliesU3Ed__12_MoveNext_m1D729903D6694FE7BA1AE27478DFE5534BFB9063 (U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B_m72E71C2672320A312C20EDB1A2D26B710D357C51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumeratorAsyncExtensions_GetAwaiter_TisRawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171_m002213FD3955ED6035A8DD88C2275738A23082B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HomologousImageMode_tEC0F0043F595B001580D833592AE9E7FD4744548_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadImageErrorCode_tC778A2553ADB45B8C61EFE26C20837C23894FEB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BA46D2FDED261D9EBFFC277917E32CC44A3F821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3F029047BA90CC134023587DF7DCF444B38D009);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	int32_t V_3 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004b_1;
			}
		}
		{
			// List<string> aotMetaAssemblyFiles = new List<string>()
			// {
			//     "mscorlib.dll",
			//     "System.dll",
			//     "System.Core.dll",
			// };
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = L_3;
			NullCheck(L_4);
			List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, _stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = L_4;
			NullCheck(L_5);
			List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, _stringLiteralA3F029047BA90CC134023587DF7DCF444B38D009, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = L_5;
			NullCheck(L_6);
			List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, _stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			V_2 = L_6;
			// HomologousImageMode mode = HomologousImageMode.SuperSet;
			__this->___U3CmodeU3E5__2_3 = 1;
			// foreach (var aotDllName in aotMetaAssemblyFiles)
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = V_2;
			NullCheck(L_7);
			Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_8;
			L_8 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_7, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
			__this->___U3CU3E7__wrap2_4 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap2_4))->____list_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap2_4))->____current_3), (void*)NULL);
			#endif
		}

IL_004b_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0137_1:
				{// begin finally (depth: 2)
					{
						int32_t L_9 = V_0;
						if ((((int32_t)L_9) >= ((int32_t)0)))
						{
							goto IL_014c_1;
						}
					}
					{
						Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* L_10 = (&__this->___U3CU3E7__wrap2_4);
						Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7(L_10, Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
					}

IL_014c_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_11 = V_0;
					if (!L_11)
					{
						goto IL_00b6_2;
					}
				}
				{
					goto IL_0125_2;
				}

IL_0054_2:
				{
					// foreach (var aotDllName in aotMetaAssemblyFiles)
					Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* L_12 = (&__this->___U3CU3E7__wrap2_4);
					String_t* L_13;
					L_13 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline(L_12, Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
					__this->___U3CaotDllNameU3E5__4_5 = L_13;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaotDllNameU3E5__4_5), (void*)L_13);
					// var handle = package.LoadRawFileAsync(aotDllName);
					LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_14 = V_1;
					NullCheck(L_14);
					AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* L_15 = L_14->___package_4;
					String_t* L_16 = __this->___U3CaotDllNameU3E5__4_5;
					NullCheck(L_15);
					RawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171* L_17;
					L_17 = AssetsPackage_LoadRawFileAsync_m8DFEF803D8E1AF9FA287B61A014D62CEE0110129(L_15, L_16, NULL);
					__this->___U3ChandleU3E5__5_6 = L_17;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChandleU3E5__5_6), (void*)L_17);
					// await handle;
					RawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171* L_18 = __this->___U3ChandleU3E5__5_6;
					Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_19;
					L_19 = EnumeratorAsyncExtensions_GetAwaiter_TisRawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171_m002213FD3955ED6035A8DD88C2275738A23082B7(L_18, EnumeratorAsyncExtensions_GetAwaiter_TisRawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171_m002213FD3955ED6035A8DD88C2275738A23082B7_RuntimeMethod_var);
					V_4 = L_19;
					bool L_20;
					L_20 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_4), NULL);
					if (L_20)
					{
						goto IL_00d3_2;
					}
				}
				{
					int32_t L_21 = 0;
					V_0 = L_21;
					__this->___U3CU3E1__state_0 = L_21;
					Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22 = V_4;
					__this->___U3CU3Eu__1_7 = L_22;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_7))->___task_0))->___source_0), (void*)NULL);
					AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_23 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B_m72E71C2672320A312C20EDB1A2D26B710D357C51(L_23, (&V_4), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B_m72E71C2672320A312C20EDB1A2D26B710D357C51_RuntimeMethod_var);
					goto IL_018d;
				}

IL_00b6_2:
				{
					Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_24 = __this->___U3CU3Eu__1_7;
					V_4 = L_24;
					Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_25 = (&__this->___U3CU3Eu__1_7);
					il2cpp_codegen_initobj(L_25, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
					int32_t L_26 = (-1);
					V_0 = L_26;
					__this->___U3CU3E1__state_0 = L_26;
				}

IL_00d3_2:
				{
					Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_4), NULL);
					// byte[] dllBytes = handle.GetRawFileData();
					RawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171* L_27 = __this->___U3ChandleU3E5__5_6;
					NullCheck(L_27);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
					L_28 = RawFileOperationHandle_GetRawFileData_mDCC71B9DF13DA27B3D2E418C9C2A12493CE11619(L_27, NULL);
					// LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
					int32_t L_29 = __this->___U3CmodeU3E5__2_3;
					int32_t L_30;
					L_30 = RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8(L_28, L_29, NULL);
					V_3 = L_30;
					// Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
					String_t* L_31 = __this->___U3CaotDllNameU3E5__4_5;
					int32_t L_32 = __this->___U3CmodeU3E5__2_3;
					int32_t L_33 = L_32;
					RuntimeObject* L_34 = Box(HomologousImageMode_tEC0F0043F595B001580D833592AE9E7FD4744548_il2cpp_TypeInfo_var, &L_33);
					int32_t L_35 = V_3;
					int32_t L_36 = L_35;
					RuntimeObject* L_37 = Box(LoadImageErrorCode_tC778A2553ADB45B8C61EFE26C20837C23894FEB3_il2cpp_TypeInfo_var, &L_36);
					String_t* L_38;
					L_38 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral1BA46D2FDED261D9EBFFC277917E32CC44A3F821, L_31, L_34, L_37, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_38, NULL);
					// }
					__this->___U3ChandleU3E5__5_6 = (RawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChandleU3E5__5_6), (void*)(RawFileOperationHandle_tFF3082CB8C57077D320C10FDD406DC6284DFB171*)NULL);
					__this->___U3CaotDllNameU3E5__4_5 = (String_t*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaotDllNameU3E5__4_5), (void*)(String_t*)NULL);
				}

IL_0125_2:
				{
					// foreach (var aotDllName in aotMetaAssemblyFiles)
					Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* L_39 = (&__this->___U3CU3E7__wrap2_4);
					bool L_40;
					L_40 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED(L_39, Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
					if (L_40)
					{
						goto IL_0054_2;
					}
				}
				{
					goto IL_014d_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_014d_1:
		{
			Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* L_41 = (&__this->___U3CU3E7__wrap2_4);
			il2cpp_codegen_initobj(L_41, sizeof(Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1));
			// StartGame();
			LoadDllFromYooAsset_tC80F22161581028E9B58434B059EB59E010A534C* L_42 = V_1;
			NullCheck(L_42);
			LoadDllFromYooAsset_StartGame_mEB4ED072ACD2254017B1141F90E77B9BBCC3CEC5(L_42, NULL);
			goto IL_017a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0161;
		}
		throw e;
	}

CATCH_0161:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_43 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_44 = V_5;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_43, L_44, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_018d;
	}// end catch (depth: 1)

IL_017a:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_45 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_45, NULL);
	}

IL_018d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadMetadataForAOTAssembliesU3Ed__12_MoveNext_m1D729903D6694FE7BA1AE27478DFE5534BFB9063_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B*>(__this + _offset);
	U3CLoadMetadataForAOTAssembliesU3Ed__12_MoveNext_m1D729903D6694FE7BA1AE27478DFE5534BFB9063(_thisAdjusted, method);
}
// System.Void LoadDllFromYooAsset/<LoadMetadataForAOTAssemblies>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadMetadataForAOTAssembliesU3Ed__12_SetStateMachine_mFEF85CA8302B26E65DBF2563341DA4D9B980037E (U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadMetadataForAOTAssembliesU3Ed__12_SetStateMachine_mFEF85CA8302B26E65DBF2563341DA4D9B980037E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadMetadataForAOTAssembliesU3Ed__12_t221EAC2F2E381F59C9DC939CB21B41B0CFC9754B*>(__this + _offset);
	U3CLoadMetadataForAOTAssembliesU3Ed__12_SetStateMachine_mFEF85CA8302B26E65DBF2563341DA4D9B980037E(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void YooAssets_SetDefaultAssetsPackage_mA846E84DE0C07A97F97B453EC1667244C4CA7FF2_inline (AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* ___0_assetsPackage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _defaultPackage = assetsPackage;
		AssetsPackage_t5E11CCB835BBA78C847AF85F7BA1E7CAC96B5C52* L_0 = ___0_assetsPackage;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline(L_0, NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null) return;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (task.source == null) return;
		return;
	}

IL_000e:
	{
		// task.source.GetResult(task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_2 = (&__this->___task_0);
		RuntimeObject* L_3 = L_2->___source_0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_4 = (&__this->___task_0);
		int16_t L_5 = L_4->___token_1;
		NullCheck(L_3);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::GetResult(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_3, L_5);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AsyncOperationBase_get_Status_m306FE61F0A22DFAA81795961A8D8D4C011C066CA_inline (AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032* __this, const RuntimeMethod* method) 
{
	{
		// public EOperationStatus Status { get; protected set; } = EOperationStatus.None;
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UpdatePackageVersionOperation_get_PackageVersion_m6FE2F350948E7B71BE69AC231DD9E9B67C3FC262_inline (UpdatePackageVersionOperation_t3D1E74936C0BE09EC750805BD6E519B0A80C249C* __this, const RuntimeMethod* method) 
{
	{
		// public string PackageVersion { protected set; get; }
		String_t* L_0 = __this->___U3CPackageVersionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AsyncOperationBase_get_Error_m636403CB75036A9C978E52ED6E2A13CD787E0494_inline (AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get; protected set; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DownloaderOperation_get_TotalDownloadCount_m536A5BFFEB385106C66064BD94A272301CD6EC1C_inline (DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2* __this, const RuntimeMethod* method) 
{
	{
		// public int TotalDownloadCount { private set; get; }
		int32_t L_0 = __this->___U3CTotalDownloadCountU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t DownloaderOperation_get_TotalDownloadBytes_m4F0009CCA5AEF043B000F6B6270448CA58CFE5FA_inline (DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2* __this, const RuntimeMethod* method) 
{
	{
		// public long TotalDownloadBytes { private set; get; }
		int64_t L_0 = __this->___U3CTotalDownloadBytesU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DownloaderOperation_set_OnDownloadErrorCallback_mC83AA6D2931DF85E69235C7FFF4903A427E170BA_inline (DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2* __this, OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206* ___0_value, const RuntimeMethod* method) 
{
	{
		// public OnDownloadError OnDownloadErrorCallback { set; get; }
		OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206* L_0 = ___0_value;
		__this->___U3COnDownloadErrorCallbackU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnDownloadErrorCallbackU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DownloaderOperation_set_OnDownloadProgressCallback_m1057544081D4EF83F2C7681E18B1B250DEF95883_inline (DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2* __this, OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6* ___0_value, const RuntimeMethod* method) 
{
	{
		// public OnDownloadProgress OnDownloadProgressCallback { set; get; }
		OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6* L_0 = ___0_value;
		__this->___U3COnDownloadProgressCallbackU3Ek__BackingField_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnDownloadProgressCallbackU3Ek__BackingField_22), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DownloaderOperation_set_OnDownloadOverCallback_mEC1CC28A211DD3649D0A559267528B4BE36F62A7_inline (DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2* __this, OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6* ___0_value, const RuntimeMethod* method) 
{
	{
		// public OnDownloadOver OnDownloadOverCallback { set; get; }
		OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6* L_0 = ___0_value;
		__this->___U3COnDownloadOverCallbackU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnDownloadOverCallbackU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DownloaderOperation_set_OnStartDownloadFileCallback_mD64B6D59C362CA1F84CB20AAC83F43035E3933D6_inline (DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2* __this, OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9* ___0_value, const RuntimeMethod* method) 
{
	{
		// public OnStartDownloadFile OnStartDownloadFileCallback { set; get; }
		OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9* L_0 = ___0_value;
		__this->___U3COnStartDownloadFileCallbackU3Ek__BackingField_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnStartDownloadFileCallbackU3Ek__BackingField_24), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		RuntimeObject* L_0 = __this->___source_0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		return (int32_t)(1);
	}

IL_000a:
	{
		// return source.GetStatus(token);
		RuntimeObject* L_1 = __this->___source_0;
		int16_t L_2 = __this->___token_1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___0_status;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
