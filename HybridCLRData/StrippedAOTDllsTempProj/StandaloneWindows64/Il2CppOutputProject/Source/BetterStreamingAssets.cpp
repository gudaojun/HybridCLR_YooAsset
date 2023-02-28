#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Better.StreamingAssets.ZipArchive.ZipGenericExtraField>
struct List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Better.StreamingAssets.ZipArchive.ZipGenericExtraField[]
struct ZipGenericExtraFieldU5BU5D_tED0C9EBD3CD7407C703C0270ADF664031EFB66AA;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
// UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Better.StreamingAssets.SubReadOnlyStream
struct SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Better.StreamingAssets.ZipArchive.ZipArchiveException
struct ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BetterStreamingAssets_t84724D489C99A9573CD7D596B20006279EA48A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0791B09CABC0E68E7F2304266905D44E98CEDC7E;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0B528BD170B49C3CB8F50BDEAD2B38212C231624;
IL2CPP_EXTERN_C String_t* _stringLiteral15063F649207A4502DFEDF591587E7346BAB3F68;
IL2CPP_EXTERN_C String_t* _stringLiteral1519D29BC47003F3A961E0D7D9147BD777029A9F;
IL2CPP_EXTERN_C String_t* _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral4A35711F04591C991A81A9D22E0CDE9259A87DCA;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral623990995459AA52EC886FD82EF05F80DEA9ED84;
IL2CPP_EXTERN_C String_t* _stringLiteral636EB8D73825D70BDF3A172729D5FB93E26F1C50;
IL2CPP_EXTERN_C String_t* _stringLiteral68509826B9B4E2C36849372302835C2CD03B9DDF;
IL2CPP_EXTERN_C String_t* _stringLiteral692393D5247888503911656CF899688704CC9517;
IL2CPP_EXTERN_C String_t* _stringLiteral731311D2159DAC2D5B655503F1BB10A3F2B9929F;
IL2CPP_EXTERN_C String_t* _stringLiteral73A0C07EF772937789C242D3D453CD9350FB99F0;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF543E5CEBA28135FC0D7A2CDAD26732720D611;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9B52EC354AB10F26E2AE0B6F5773BB8F5D98BB01;
IL2CPP_EXTERN_C String_t* _stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralBA37A985E632E97E39AD554B5730454CAB4D37B3;
IL2CPP_EXTERN_C String_t* _stringLiteralBE64DEBB5A8FBE313BD1F8DDB84DAAF73CA58228;
IL2CPP_EXTERN_C String_t* _stringLiteralC29D2239559EB0FC1E59107D531B6B1A1C368377;
IL2CPP_EXTERN_C String_t* _stringLiteralC705639C04B44414F3A4DDBFB7E8DA2F607BDA69;
IL2CPP_EXTERN_C String_t* _stringLiteralD13F98CE1E9F61828B3C7915C0847C1BC062140E;
IL2CPP_EXTERN_C String_t* _stringLiteralD1BC37757802217E304B7B515215AC6EE461954E;
IL2CPP_EXTERN_C String_t* _stringLiteralD773E0A14D2FEF23923A02949AF57C4C0E2A4EE1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDFF3F023C4F679C61BE466F496005BC400BAD358;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFBBA55520D2870374A577C846902E49D31C1E467;
IL2CPP_EXTERN_C String_t* _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* BetterStreamingAssets_OpenRead_m77A526C3A22388F107A258458CB5A6246D912DFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BetterStreamingAssets_ReadAllBytes_m406E443ADD97C8AE8148E8F4DCC9303B100F0C34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BetterStreamingAssets_ThrowFileNotFound_m0CFA0775D289A891D812F5CFAF95A0EE147C550D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathUtil_CombineSlash_m3E07FB09C6A40ABAAB95FCABDDB4B1F6FEEB6EBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubReadOnlyStream_Flush_m4E08C253CC94AB9DF38549032DA11F64FFC6F04D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubReadOnlyStream_SetLength_m285C445F9FAEA57944E5814121EAE303A9C891B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubReadOnlyStream_ThrowIfCantRead_mB7D02BA6EC5188328DA0F0C59EA951C8B2E536D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubReadOnlyStream_Write_mB2D856675271393DE307AFBA830A88101513ECF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubReadOnlyStream__ctor_m36D814130033DC43E86FD1FA83961EE9E3BE4549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubReadOnlyStream__ctor_m9A64726FC38861B5B4762B1163DB5B911513A5AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipHelper_AdvanceToPosition_m5A4492EBB0D4AA1F633A9E349C76C5844ABD755B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipHelper_ReadBytes_m873AAC59C7D65FF9CE77ED66B7012D7770A8EC2B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
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
struct U3CModuleU3E_tCDD6217B64AC66A9A5C56F0D53F95372BC0F36C5 
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

// System.Collections.Generic.List`1<Better.StreamingAssets.ZipArchive.ZipGenericExtraField>
struct List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ZipGenericExtraFieldU5BU5D_tED0C9EBD3CD7407C703C0270ADF664031EFB66AA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// BetterStreamingAssets
struct BetterStreamingAssets_t84724D489C99A9573CD7D596B20006279EA48A1E  : public RuntimeObject
{
};

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Better.StreamingAssets.PathUtil
struct PathUtil_tDDF679C9AAB0F8DB09575AC5925AAE3E8769C1C0  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Better.StreamingAssets.ZipArchive.ZipArchiveUtils
struct ZipArchiveUtils_tFAEEC2018BDD36DA8409BCBB137AC03D0EB162A2  : public RuntimeObject
{
};

// Better.StreamingAssets.ZipArchive.ZipHelper
struct ZipHelper_t32B0AFB4ADB176A49CE1FA50F337DAAF12387DF9  : public RuntimeObject
{
};

// BetterStreamingAssets/LooseFilesImpl
struct LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD  : public RuntimeObject
{
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
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

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryLocator
struct Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79 
{
	// System.UInt32 Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryLocator::NumberOfDiskWithZip64EOCD
	uint32_t ___NumberOfDiskWithZip64EOCD_2;
	// System.UInt64 Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryLocator::OffsetOfZip64EOCD
	uint64_t ___OffsetOfZip64EOCD_3;
	// System.UInt32 Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryLocator::TotalNumberOfDisks
	uint32_t ___TotalNumberOfDisks_4;
};

// Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord
struct Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 
{
	// System.UInt64 Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord::SizeOfThisRecord
	uint64_t ___SizeOfThisRecord_2;
	// System.UInt16 Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord::VersionMadeBy
	uint16_t ___VersionMadeBy_3;
	// System.UInt16 Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord::VersionNeededToExtract
	uint16_t ___VersionNeededToExtract_4;
	// System.UInt32 Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord::NumberOfThisDisk
	uint32_t ___NumberOfThisDisk_5;
	// System.UInt32 Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord::NumberOfDiskWithStartOfCD
	uint32_t ___NumberOfDiskWithStartOfCD_6;
	// System.UInt64 Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord::NumberOfEntriesOnThisDisk
	uint64_t ___NumberOfEntriesOnThisDisk_7;
	// System.UInt64 Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord::NumberOfEntriesTotal
	uint64_t ___NumberOfEntriesTotal_8;
	// System.UInt64 Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord::SizeOfCentralDirectory
	uint64_t ___SizeOfCentralDirectory_9;
	// System.UInt64 Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord::OffsetOfCentralDirectory
	uint64_t ___OffsetOfCentralDirectory_10;
};

// Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader
struct ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC 
{
	// System.Byte Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::VersionMadeByCompatibility
	uint8_t ___VersionMadeByCompatibility_1;
	// System.Byte Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::VersionMadeBySpecification
	uint8_t ___VersionMadeBySpecification_2;
	// System.UInt16 Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::VersionNeededToExtract
	uint16_t ___VersionNeededToExtract_3;
	// System.UInt16 Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::GeneralPurposeBitFlag
	uint16_t ___GeneralPurposeBitFlag_4;
	// System.UInt16 Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::CompressionMethod
	uint16_t ___CompressionMethod_5;
	// System.UInt32 Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::LastModified
	uint32_t ___LastModified_6;
	// System.UInt32 Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::Crc32
	uint32_t ___Crc32_7;
	// System.Int64 Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::CompressedSize
	int64_t ___CompressedSize_8;
	// System.Int64 Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::UncompressedSize
	int64_t ___UncompressedSize_9;
	// System.UInt16 Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::FilenameLength
	uint16_t ___FilenameLength_10;
	// System.UInt16 Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::ExtraFieldLength
	uint16_t ___ExtraFieldLength_11;
	// System.UInt16 Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::FileCommentLength
	uint16_t ___FileCommentLength_12;
	// System.Int32 Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::DiskNumberStart
	int32_t ___DiskNumberStart_13;
	// System.UInt16 Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::InternalFileAttributes
	uint16_t ___InternalFileAttributes_14;
	// System.UInt32 Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::ExternalFileAttributes
	uint32_t ___ExternalFileAttributes_15;
	// System.Int64 Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::RelativeOffsetOfLocalHeader
	int64_t ___RelativeOffsetOfLocalHeader_16;
	// System.Byte[] Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::Filename
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Filename_17;
	// System.Byte[] Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::FileComment
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FileComment_18;
	// System.Collections.Generic.List`1<Better.StreamingAssets.ZipArchive.ZipGenericExtraField> Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::ExtraFields
	List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37* ___ExtraFields_19;
};
// Native definition for P/Invoke marshalling of Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader
struct ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_pinvoke
{
	uint8_t ___VersionMadeByCompatibility_1;
	uint8_t ___VersionMadeBySpecification_2;
	uint16_t ___VersionNeededToExtract_3;
	uint16_t ___GeneralPurposeBitFlag_4;
	uint16_t ___CompressionMethod_5;
	uint32_t ___LastModified_6;
	uint32_t ___Crc32_7;
	int64_t ___CompressedSize_8;
	int64_t ___UncompressedSize_9;
	uint16_t ___FilenameLength_10;
	uint16_t ___ExtraFieldLength_11;
	uint16_t ___FileCommentLength_12;
	int32_t ___DiskNumberStart_13;
	uint16_t ___InternalFileAttributes_14;
	uint32_t ___ExternalFileAttributes_15;
	int64_t ___RelativeOffsetOfLocalHeader_16;
	Il2CppSafeArray/*NONE*/* ___Filename_17;
	Il2CppSafeArray/*NONE*/* ___FileComment_18;
	List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37* ___ExtraFields_19;
};
// Native definition for COM marshalling of Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader
struct ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_com
{
	uint8_t ___VersionMadeByCompatibility_1;
	uint8_t ___VersionMadeBySpecification_2;
	uint16_t ___VersionNeededToExtract_3;
	uint16_t ___GeneralPurposeBitFlag_4;
	uint16_t ___CompressionMethod_5;
	uint32_t ___LastModified_6;
	uint32_t ___Crc32_7;
	int64_t ___CompressedSize_8;
	int64_t ___UncompressedSize_9;
	uint16_t ___FilenameLength_10;
	uint16_t ___ExtraFieldLength_11;
	uint16_t ___FileCommentLength_12;
	int32_t ___DiskNumberStart_13;
	uint16_t ___InternalFileAttributes_14;
	uint32_t ___ExternalFileAttributes_15;
	int64_t ___RelativeOffsetOfLocalHeader_16;
	Il2CppSafeArray/*NONE*/* ___Filename_17;
	Il2CppSafeArray/*NONE*/* ___FileComment_18;
	List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37* ___ExtraFields_19;
};

// Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock
struct ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 
{
	// System.UInt32 Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock::Signature
	uint32_t ___Signature_2;
	// System.UInt16 Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock::NumberOfThisDisk
	uint16_t ___NumberOfThisDisk_3;
	// System.UInt16 Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock::NumberOfTheDiskWithTheStartOfTheCentralDirectory
	uint16_t ___NumberOfTheDiskWithTheStartOfTheCentralDirectory_4;
	// System.UInt16 Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock::NumberOfEntriesInTheCentralDirectoryOnThisDisk
	uint16_t ___NumberOfEntriesInTheCentralDirectoryOnThisDisk_5;
	// System.UInt16 Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock::NumberOfEntriesInTheCentralDirectory
	uint16_t ___NumberOfEntriesInTheCentralDirectory_6;
	// System.UInt32 Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock::SizeOfCentralDirectory
	uint32_t ___SizeOfCentralDirectory_7;
	// System.UInt32 Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock::OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber
	uint32_t ___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_8;
	// System.Byte[] Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock::ArchiveComment
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ArchiveComment_9;
};
// Native definition for P/Invoke marshalling of Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock
struct ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_pinvoke
{
	uint32_t ___Signature_2;
	uint16_t ___NumberOfThisDisk_3;
	uint16_t ___NumberOfTheDiskWithTheStartOfTheCentralDirectory_4;
	uint16_t ___NumberOfEntriesInTheCentralDirectoryOnThisDisk_5;
	uint16_t ___NumberOfEntriesInTheCentralDirectory_6;
	uint32_t ___SizeOfCentralDirectory_7;
	uint32_t ___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_8;
	Il2CppSafeArray/*NONE*/* ___ArchiveComment_9;
};
// Native definition for COM marshalling of Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock
struct ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_com
{
	uint32_t ___Signature_2;
	uint16_t ___NumberOfThisDisk_3;
	uint16_t ___NumberOfTheDiskWithTheStartOfTheCentralDirectory_4;
	uint16_t ___NumberOfEntriesInTheCentralDirectoryOnThisDisk_5;
	uint16_t ___NumberOfEntriesInTheCentralDirectory_6;
	uint32_t ___SizeOfCentralDirectory_7;
	uint32_t ___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_8;
	Il2CppSafeArray/*NONE*/* ___ArchiveComment_9;
};

// Better.StreamingAssets.ZipArchive.ZipGenericExtraField
struct ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724 
{
	// System.UInt16 Better.StreamingAssets.ZipArchive.ZipGenericExtraField::_tag
	uint16_t ____tag_1;
	// System.UInt16 Better.StreamingAssets.ZipArchive.ZipGenericExtraField::_size
	uint16_t ____size_2;
	// System.Byte[] Better.StreamingAssets.ZipArchive.ZipGenericExtraField::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_3;
};
// Native definition for P/Invoke marshalling of Better.StreamingAssets.ZipArchive.ZipGenericExtraField
struct ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_pinvoke
{
	uint16_t ____tag_1;
	uint16_t ____size_2;
	Il2CppSafeArray/*NONE*/* ____data_3;
};
// Native definition for COM marshalling of Better.StreamingAssets.ZipArchive.ZipGenericExtraField
struct ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_com
{
	uint16_t ____tag_1;
	uint16_t ____size_2;
	Il2CppSafeArray/*NONE*/* ____data_3;
};

// Better.StreamingAssets.ZipArchive.ZipLocalFileHeader
struct ZipLocalFileHeader_t44ECEA3266CB2DE89DCED8BEC262BF526604D370 
{
	union
	{
		struct
		{
		};
		uint8_t ZipLocalFileHeader_t44ECEA3266CB2DE89DCED8BEC262BF526604D370__padding[1];
	};
};

// BetterStreamingAssets/ReadInfo
struct ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 
{
	// System.String BetterStreamingAssets/ReadInfo::readPath
	String_t* ___readPath_0;
	// System.Int64 BetterStreamingAssets/ReadInfo::size
	int64_t ___size_1;
	// System.Int64 BetterStreamingAssets/ReadInfo::offset
	int64_t ___offset_2;
	// System.UInt32 BetterStreamingAssets/ReadInfo::crc32
	uint32_t ___crc32_3;
};
// Native definition for P/Invoke marshalling of BetterStreamingAssets/ReadInfo
struct ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_pinvoke
{
	char* ___readPath_0;
	int64_t ___size_1;
	int64_t ___offset_2;
	uint32_t ___crc32_3;
};
// Native definition for COM marshalling of BetterStreamingAssets/ReadInfo
struct ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_com
{
	Il2CppChar* ___readPath_0;
	int64_t ___size_1;
	int64_t ___offset_2;
	uint32_t ___crc32_3;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
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

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
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

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

// Better.StreamingAssets.SubReadOnlyStream
struct SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Int64 Better.StreamingAssets.SubReadOnlyStream::m_offset
	int64_t ___m_offset_4;
	// System.Boolean Better.StreamingAssets.SubReadOnlyStream::m_leaveOpen
	bool ___m_leaveOpen_5;
	// System.Nullable`1<System.Int64> Better.StreamingAssets.SubReadOnlyStream::m_length
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___m_length_6;
	// System.IO.Stream Better.StreamingAssets.SubReadOnlyStream::m_actualStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_actualStream_7;
	// System.Int64 Better.StreamingAssets.SubReadOnlyStream::m_position
	int64_t ___m_position_8;
};

// Better.StreamingAssets.ZipArchive.Zip64ExtraField
struct Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 
{
	// System.UInt16 Better.StreamingAssets.ZipArchive.Zip64ExtraField::_size
	uint16_t ____size_2;
	// System.Nullable`1<System.Int64> Better.StreamingAssets.ZipArchive.Zip64ExtraField::_uncompressedSize
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____uncompressedSize_3;
	// System.Nullable`1<System.Int64> Better.StreamingAssets.ZipArchive.Zip64ExtraField::_compressedSize
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____compressedSize_4;
	// System.Nullable`1<System.Int64> Better.StreamingAssets.ZipArchive.Zip64ExtraField::_localHeaderOffset
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____localHeaderOffset_5;
	// System.Nullable`1<System.Int32> Better.StreamingAssets.ZipArchive.Zip64ExtraField::_startDiskNumber
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____startDiskNumber_6;
};
// Native definition for P/Invoke marshalling of Better.StreamingAssets.ZipArchive.Zip64ExtraField
struct Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_pinvoke
{
	uint16_t ____size_2;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____uncompressedSize_3;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____compressedSize_4;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____localHeaderOffset_5;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____startDiskNumber_6;
};
// Native definition for COM marshalling of Better.StreamingAssets.ZipArchive.Zip64ExtraField
struct Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_com
{
	uint16_t ____size_2;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____uncompressedSize_3;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____compressedSize_4;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____localHeaderOffset_5;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____startDiskNumber_6;
};

// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Better.StreamingAssets.ZipArchive.ZipArchiveException
struct ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013  : public Exception_t
{
};

// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};

// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileNotFoundException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileNotFoundException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
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

// System.Collections.Generic.List`1<Better.StreamingAssets.ZipArchive.ZipGenericExtraField>
struct List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ZipGenericExtraFieldU5BU5D_tED0C9EBD3CD7407C703C0270ADF664031EFB66AA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Better.StreamingAssets.ZipArchive.ZipGenericExtraField>

// BetterStreamingAssets
struct BetterStreamingAssets_t84724D489C99A9573CD7D596B20006279EA48A1E_StaticFields
{
	// System.Func`2<System.String,System.Boolean> BetterStreamingAssets::CompressedStreamingAssetFound
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___CompressedStreamingAssetFound_0;
};

// BetterStreamingAssets

// System.IO.BinaryReader

// System.IO.BinaryReader

// Better.StreamingAssets.PathUtil

// Better.StreamingAssets.PathUtil

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Better.StreamingAssets.ZipArchive.ZipArchiveUtils

// Better.StreamingAssets.ZipArchive.ZipArchiveUtils

// Better.StreamingAssets.ZipArchive.ZipHelper

// Better.StreamingAssets.ZipArchive.ZipHelper

// BetterStreamingAssets/LooseFilesImpl
struct LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_StaticFields
{
	// System.String BetterStreamingAssets/LooseFilesImpl::s_root
	String_t* ___s_root_0;
	// System.String[] BetterStreamingAssets/LooseFilesImpl::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_1;
};

// BetterStreamingAssets/LooseFilesImpl

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Int64>

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

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextReader

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryLocator

// Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryLocator

// Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord

// Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord

// Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader

// Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader

// Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock

// Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock

// Better.StreamingAssets.ZipArchive.ZipGenericExtraField

// Better.StreamingAssets.ZipArchive.ZipGenericExtraField

// Better.StreamingAssets.ZipArchive.ZipLocalFileHeader

// Better.StreamingAssets.ZipArchive.ZipLocalFileHeader

// BetterStreamingAssets/ReadInfo

// BetterStreamingAssets/ReadInfo

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.IO.FileStream

// System.IO.MemoryStream

// System.IO.MemoryStream

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.Text.RegularExpressions.Regex

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.IO.StreamReader

// Better.StreamingAssets.SubReadOnlyStream

// Better.StreamingAssets.SubReadOnlyStream

// Better.StreamingAssets.ZipArchive.Zip64ExtraField

// Better.StreamingAssets.ZipArchive.Zip64ExtraField

// UnityEngine.AssetBundle

// UnityEngine.AssetBundle

// UnityEngine.AssetBundleCreateRequest

// UnityEngine.AssetBundleCreateRequest

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// Better.StreamingAssets.ZipArchive.ZipArchiveException

// Better.StreamingAssets.ZipArchive.ZipArchiveException

// System.Func`2<System.String,System.Boolean>

// System.Func`2<System.String,System.Boolean>

// System.ArgumentException

// System.ArgumentException

// System.IO.IOException

// System.IO.IOException

// System.NotSupportedException

// System.NotSupportedException

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.IO.EndOfStreamException

// System.IO.EndOfStreamException

// System.IO.FileNotFoundException

// System.IO.FileNotFoundException

// System.ObjectDisposedException

// System.ObjectDisposedException
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int64>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;

// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
// System.Void BetterStreamingAssets/LooseFilesImpl::Initialize(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LooseFilesImpl_Initialize_mA45C20742E3B6F060990FBE1DEAE5B45DAC38C20 (String_t* ___0_dataPath, String_t* ___1_streamingAssetsPath, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean BetterStreamingAssets/LooseFilesImpl::TryGetInfo(System.String,BetterStreamingAssets/ReadInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LooseFilesImpl_TryGetInfo_mEFEF1A59C1BF4D969DD0D66A6DFF9E4FB43E5FE3 (String_t* ___0_path, ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642* ___1_info, const RuntimeMethod* method) ;
// System.Boolean BetterStreamingAssets/LooseFilesImpl::DirectoryExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LooseFilesImpl_DirectoryExists_mF8C3F57A3C5D7E34829388815AE3F8F98D09857E (String_t* ___0_path, const RuntimeMethod* method) ;
// BetterStreamingAssets/ReadInfo BetterStreamingAssets::GetInfoOrThrow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 BetterStreamingAssets_GetInfoOrThrow_m6CACE7C2C941E8008A85A6F03F8E22851C32B59C (String_t* ___0_path, const RuntimeMethod* method) ;
// UnityEngine.AssetBundleCreateRequest UnityEngine.AssetBundle::LoadFromFileAsync(System.String,System.UInt32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* AssetBundle_LoadFromFileAsync_mF5C6B1FF491A8B654AA72057F3EDE17EEBC6B000 (String_t* ___0_path, uint32_t ___1_crc, uint64_t ___2_offset, const RuntimeMethod* method) ;
// UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile(System.String,System.UInt32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* AssetBundle_LoadFromFile_m26FF275605246942FE95EB4AF7AEC7A9C70BE33A (String_t* ___0_path, uint32_t ___1_crc, uint64_t ___2_offset, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.IO.Stream BetterStreamingAssets/LooseFilesImpl::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* LooseFilesImpl_OpenRead_mB2AF93FAD2D42AA1DD1C7EB683D9CC96B324F8E1 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.IO.Stream BetterStreamingAssets::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* BetterStreamingAssets_OpenRead_m77A526C3A22388F107A258458CB5A6246D912DFD (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.IO.StreamReader BetterStreamingAssets::OpenText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* BetterStreamingAssets_OpenText_m44FC54FFD1D31C6CE65FA8D1BEC51C14E5D9F559 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Byte[] BetterStreamingAssets/LooseFilesImpl::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LooseFilesImpl_ReadAllBytes_mAFE2CEB0C0C68AC230E45D0CAE1792490396823F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String[] BetterStreamingAssets/LooseFilesImpl::GetFiles(System.String,System.String,System.IO.SearchOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* LooseFilesImpl_GetFiles_mE16BACE1398CC7479768C9AAFAA688BB5320FDF1 (String_t* ___0_path, String_t* ___1_searchPattern, int32_t ___2_searchOption, const RuntimeMethod* method) ;
// System.String[] BetterStreamingAssets::GetFiles(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* BetterStreamingAssets_GetFiles_mA3A4482E732A09A17904996B7A73478B64E988E7 (String_t* ___0_path, String_t* ___1_searchPattern, const RuntimeMethod* method) ;
// System.String[] BetterStreamingAssets::GetFiles(System.String,System.String,System.IO.SearchOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* BetterStreamingAssets_GetFiles_mC99E0F4AB2730E2086869EF83E6AC7E92989A758 (String_t* ___0_path, String_t* ___1_searchPattern, int32_t ___2_searchOption, const RuntimeMethod* method) ;
// System.Void BetterStreamingAssets::ThrowFileNotFound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterStreamingAssets_ThrowFileNotFound_m0CFA0775D289A891D812F5CFAF95A0EE147C550D (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.FileNotFoundException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mC4247CABF75A7B484A21790CD7F8EFA8AC101677 (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* __this, String_t* ___0_message, String_t* ___1_fileName, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFullPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFullPath_m9E485D7D38A868A6A5863CBD24677231288EECE2 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___0_oldChar, Il2CppChar ___1_newChar, const RuntimeMethod* method) ;
// System.String System.String::TrimEnd(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mDB4D96F8312F563656D4115A9F280062E05D2EE8 (String_t* __this, Il2CppChar ___0_trimChar, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String Better.StreamingAssets.PathUtil::NormalizeRelativePath(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E (String_t* ___0_relative, bool ___1_forceTrailingSlash, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String[] System.IO.Directory::GetFiles(System.String,System.String,System.IO.SearchOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Directory_GetFiles_mC195B04DA9630D79180C0E85AFFFF9FEF0DB49B9 (String_t* ___0_path, String_t* ___1_searchPattern, int32_t ___2_searchOption, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void Better.StreamingAssets.SubReadOnlyStream::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream__ctor_m36D814130033DC43E86FD1FA83961EE9E3BE4549 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_actualStream, bool ___1_leaveOpen, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean Better.StreamingAssets.PathUtil::IsDirectorySeparator(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathUtil_IsDirectorySeparator_m0CC39DE46075B3E7F0ACF57BF423C98504F51BEE (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.String System.String::TrimEnd(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_trimChars, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D (StringBuilder_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Better.StreamingAssets.PathUtil::IsValidCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathUtil_IsValidCharacter_mB61FAF3517472920384EC1280D78D48E2E629E6E (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Escape_mCBB92EEA6FB5B703811AF678FD53918F6A364227 (String_t* ___0_str, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_pattern, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
inline void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, int64_t, const RuntimeMethod*))Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared)(__this, ___0_value, method);
}
// System.Void Better.StreamingAssets.SubReadOnlyStream::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int64>::get_Value()
inline int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared)(__this, method);
}
// System.Void Better.StreamingAssets.SubReadOnlyStream::ThrowIfCantRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_ThrowIfCantRead_mB7D02BA6EC5188328DA0F0C59EA951C8B2E536D1 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.UInt16 Better.StreamingAssets.ZipArchive.ZipGenericExtraField::get_Tag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ZipGenericExtraField_get_Tag_m759B6ECFDBC6D044352C08FB434AEC491B3E41E4_inline (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) ;
// System.UInt16 Better.StreamingAssets.ZipArchive.ZipGenericExtraField::get_Size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ZipGenericExtraField_get_Size_mFEE59D1C38FA6DDB6FEDF1607A19FF167B4B7422_inline (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) ;
// System.Byte[] Better.StreamingAssets.ZipArchive.ZipGenericExtraField::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipGenericExtraField_get_Data_mF8133FF89E762F3B70FCF61010858511B7137296_inline (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int64> Better.StreamingAssets.ZipArchive.Zip64ExtraField::get_UncompressedSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_UncompressedSize_m6DCFFD258F31202A9EDE82F260B284F2CBAC641F_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) ;
// System.Void Better.StreamingAssets.ZipArchive.Zip64ExtraField::UpdateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip64ExtraField_UpdateSize_m61DAFA36C34567A51E4FD5E460B78D1E0660C938 (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) ;
// System.Void Better.StreamingAssets.ZipArchive.Zip64ExtraField::set_UncompressedSize(System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip64ExtraField_set_UncompressedSize_m521F33230E53E4C89F4C46FFB108AB212E132B72 (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_value, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int64> Better.StreamingAssets.ZipArchive.Zip64ExtraField::get_CompressedSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_CompressedSize_m990D9DD08B3C53024636DF0802E25B88075D603D_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) ;
// System.Void Better.StreamingAssets.ZipArchive.Zip64ExtraField::set_CompressedSize(System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip64ExtraField_set_CompressedSize_m176E90562F776D08B6896832200FAA45CEDE9BCC (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_value, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int64> Better.StreamingAssets.ZipArchive.Zip64ExtraField::get_LocalHeaderOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_LocalHeaderOffset_m232842FCC1BF48E123B2716FBAC8B769F0B2B07A_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) ;
// System.Void Better.StreamingAssets.ZipArchive.Zip64ExtraField::set_LocalHeaderOffset(System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip64ExtraField_set_LocalHeaderOffset_m36410109A452A57B65281ADFBBFFA876F8582D02 (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_value, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int32> Better.StreamingAssets.ZipArchive.Zip64ExtraField::get_StartDiskNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Zip64ExtraField_get_StartDiskNumber_m6A797299BED711B7BDBC42993C746F14BE2C49D8_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
// System.Boolean Better.StreamingAssets.ZipArchive.Zip64ExtraField::TryGetZip64BlockFromGenericExtraField(Better.StreamingAssets.ZipArchive.ZipGenericExtraField,System.Boolean,System.Boolean,System.Boolean,System.Boolean,Better.StreamingAssets.ZipArchive.Zip64ExtraField&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211 (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724 ___0_extraField, bool ___1_readUncompressedSize, bool ___2_readCompressedSize, bool ___3_readLocalHeaderOffset, bool ___4_readStartDiskNumber, Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* ___5_zip64Block, const RuntimeMethod* method) ;
// System.Boolean Better.StreamingAssets.ZipArchive.ZipGenericExtraField::TryReadBlock(System.IO.BinaryReader,System.Int64,Better.StreamingAssets.ZipArchive.ZipGenericExtraField&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipGenericExtraField_TryReadBlock_m2BB3B9A85BF63DD87C5F97A456C5C00ECD168CEB (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, int64_t ___1_endExtraField, ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* ___2_field, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
// T System.Nullable`1<System.Int64>::GetValueOrDefault()
inline int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline)(__this, method);
}
// System.Void Better.StreamingAssets.ZipArchive.ZipArchiveException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Void Better.StreamingAssets.SubReadOnlyStream::.ctor(System.IO.Stream,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream__ctor_m9A64726FC38861B5B4762B1163DB5B911513A5AA (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_actualStream, int64_t ___1_offset, int64_t ___2_length, bool ___3_leaveOpen, const RuntimeMethod* method) ;
// Better.StreamingAssets.ZipArchive.Zip64ExtraField Better.StreamingAssets.ZipArchive.Zip64ExtraField::GetJustZip64Block(System.IO.Stream,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 Zip64ExtraField_GetJustZip64Block_m6EE1037758B78F91059CBC864A95D2912BACCE78 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_extraFieldStream, bool ___1_readUncompressedSize, bool ___2_readCompressedSize, bool ___3_readLocalHeaderOffset, bool ___4_readStartDiskNumber, const RuntimeMethod* method) ;
// System.Void Better.StreamingAssets.ZipArchive.ZipHelper::AdvanceToPosition(System.IO.Stream,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipHelper_AdvanceToPosition_m5A4492EBB0D4AA1F633A9E349C76C5844ABD755B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int64_t ___1_position, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.Void System.IO.IOException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mF001EA9B9B8DBFBDD9B63B97A5CC6F0D7FD9F2B3 (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, const RuntimeMethod* method) ;
// System.Boolean Better.StreamingAssets.ZipArchive.ZipHelper::SeekBackwardsAndRead(System.IO.Stream,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipHelper_SeekBackwardsAndRead_mFA8B804E147D2F19F68002F7353639C92CBC411D (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t* ___2_bufferPointer, const RuntimeMethod* method) ;
// System.Void Better.StreamingAssets.ZipArchive.ZipHelper::ReadBytes(System.IO.Stream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipHelper_ReadBytes_m873AAC59C7D65FF9CE77ED66B7012D7770A8EC2B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_bytesToRead, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Boolean Better.StreamingAssets.ZipArchive.ZipHelper::SeekBackwardsToSignature(System.IO.Stream,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipHelper_SeekBackwardsToSignature_m3465A2A9A461BCF8F8E8D82579B17182338C4B4D (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, uint32_t ___1_signatureToFind, const RuntimeMethod* method) ;
// System.Boolean Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock::TryReadBlock(System.IO.BinaryReader,Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipEndOfCentralDirectoryBlock_TryReadBlock_mEEBDCF160CD99D8A41EC4A6C0363F16EF7E3FB4C (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* ___1_eocdBlock, const RuntimeMethod* method) ;
// System.Boolean Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryLocator::TryReadBlock(System.IO.BinaryReader,Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryLocator&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Zip64EndOfCentralDirectoryLocator_TryReadBlock_mC1CFF884A9974D065D505E6FBA8DE963B0A9B096 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79* ___1_zip64EOCDLocator, const RuntimeMethod* method) ;
// System.Boolean Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord::TryReadBlock(System.IO.BinaryReader,Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Zip64EndOfCentralDirectoryRecord_TryReadBlock_mA35089F309255B687FFD1A07C4B553FC83045FF3 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* ___1_zip64EOCDRecord, const RuntimeMethod* method) ;
// System.Void Better.StreamingAssets.ZipArchive.ZipArchiveException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchiveException__ctor_m3049042ABD37E1BBE6970CE41F390DD532955AED (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* __this, String_t* ___0_msg, Exception_t* ___1_inner, const RuntimeMethod* method) ;
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
// System.String BetterStreamingAssets::get_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BetterStreamingAssets_get_Root_m4CB7FB44B23D87A162546646CC1A755F4A126F5A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return BetterStreamingAssetsImp.s_root; }
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_StaticFields*)il2cpp_codegen_static_fields_for(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var))->___s_root_0;
		return L_0;
	}
}
// System.Void BetterStreamingAssets::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterStreamingAssets_Initialize_m4734FAB5D4C3B306447B4FB96033F4D6506E7CF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BetterStreamingAssetsImp.Initialize(Application.dataPath, Application.streamingAssetsPath);
		String_t* L_0;
		L_0 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		String_t* L_1;
		L_1 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		LooseFilesImpl_Initialize_mA45C20742E3B6F060990FBE1DEAE5B45DAC38C20(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void BetterStreamingAssets::add_CompressedStreamingAssetFound(System.Func`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterStreamingAssets_add_CompressedStreamingAssetFound_m16D60FFCC7153DDC6351227E279047E3DAA77F25 (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BetterStreamingAssets_t84724D489C99A9573CD7D596B20006279EA48A1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* V_0 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* V_1 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* V_2 = NULL;
	{
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_0 = ((BetterStreamingAssets_t84724D489C99A9573CD7D596B20006279EA48A1E_StaticFields*)il2cpp_codegen_static_fields_for(BetterStreamingAssets_t84724D489C99A9573CD7D596B20006279EA48A1E_il2cpp_TypeInfo_var))->___CompressedStreamingAssetFound_0;
		V_0 = L_0;
	}

IL_0006:
	{
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_1 = V_0;
		V_1 = L_1;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_2 = V_1;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)Castclass((RuntimeObject*)L_4, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var));
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_5 = V_2;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_6 = V_1;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_7;
		L_7 = InterlockedCompareExchangeImpl<Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*>((&((BetterStreamingAssets_t84724D489C99A9573CD7D596B20006279EA48A1E_StaticFields*)il2cpp_codegen_static_fields_for(BetterStreamingAssets_t84724D489C99A9573CD7D596B20006279EA48A1E_il2cpp_TypeInfo_var))->___CompressedStreamingAssetFound_0), L_5, L_6);
		V_0 = L_7;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_8 = V_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_9 = V_1;
		if ((!(((RuntimeObject*)(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)L_8) == ((RuntimeObject*)(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void BetterStreamingAssets::remove_CompressedStreamingAssetFound(System.Func`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterStreamingAssets_remove_CompressedStreamingAssetFound_m0D3AC983A11BA6E4D05C214B48F2D858FCE48B21 (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BetterStreamingAssets_t84724D489C99A9573CD7D596B20006279EA48A1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* V_0 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* V_1 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* V_2 = NULL;
	{
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_0 = ((BetterStreamingAssets_t84724D489C99A9573CD7D596B20006279EA48A1E_StaticFields*)il2cpp_codegen_static_fields_for(BetterStreamingAssets_t84724D489C99A9573CD7D596B20006279EA48A1E_il2cpp_TypeInfo_var))->___CompressedStreamingAssetFound_0;
		V_0 = L_0;
	}

IL_0006:
	{
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_1 = V_0;
		V_1 = L_1;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_2 = V_1;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)Castclass((RuntimeObject*)L_4, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var));
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_5 = V_2;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_6 = V_1;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_7;
		L_7 = InterlockedCompareExchangeImpl<Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*>((&((BetterStreamingAssets_t84724D489C99A9573CD7D596B20006279EA48A1E_StaticFields*)il2cpp_codegen_static_fields_for(BetterStreamingAssets_t84724D489C99A9573CD7D596B20006279EA48A1E_il2cpp_TypeInfo_var))->___CompressedStreamingAssetFound_0), L_5, L_6);
		V_0 = L_7;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_8 = V_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_9 = V_1;
		if ((!(((RuntimeObject*)(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)L_8) == ((RuntimeObject*)(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Boolean BetterStreamingAssets::FileExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BetterStreamingAssets_FileExists_m9DB4D4860ED3C0090C0005DEBA238A80E24A77E1 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return BetterStreamingAssetsImp.TryGetInfo(path, out info);
		String_t* L_0 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LooseFilesImpl_TryGetInfo_mEFEF1A59C1BF4D969DD0D66A6DFF9E4FB43E5FE3(L_0, (&V_0), NULL);
		return L_1;
	}
}
// System.Boolean BetterStreamingAssets::DirectoryExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BetterStreamingAssets_DirectoryExists_m0B98679E4A77E98814442B1C2BEAF7E50563AE1B (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BetterStreamingAssetsImp.DirectoryExists(path);
		String_t* L_0 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LooseFilesImpl_DirectoryExists_mF8C3F57A3C5D7E34829388815AE3F8F98D09857E(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.AssetBundleCreateRequest BetterStreamingAssets::LoadAssetBundleAsync(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* BetterStreamingAssets_LoadAssetBundleAsync_m57B929F48158C8D34C8FA9B72C1B3A58DF750B67 (String_t* ___0_path, uint32_t ___1_crc, const RuntimeMethod* method) 
{
	ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var info = GetInfoOrThrow(path);
		String_t* L_0 = ___0_path;
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 L_1;
		L_1 = BetterStreamingAssets_GetInfoOrThrow_m6CACE7C2C941E8008A85A6F03F8E22851C32B59C(L_0, NULL);
		V_0 = L_1;
		// return AssetBundle.LoadFromFileAsync(info.readPath, crc, (ulong)info.offset);
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 L_2 = V_0;
		String_t* L_3 = L_2.___readPath_0;
		uint32_t L_4 = ___1_crc;
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 L_5 = V_0;
		int64_t L_6 = L_5.___offset_2;
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_7;
		L_7 = AssetBundle_LoadFromFileAsync_mF5C6B1FF491A8B654AA72057F3EDE17EEBC6B000(L_3, L_4, L_6, NULL);
		return L_7;
	}
}
// UnityEngine.AssetBundle BetterStreamingAssets::LoadAssetBundle(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* BetterStreamingAssets_LoadAssetBundle_m508C1002D6B3EC146BD5E4AA2A4263D175950D8D (String_t* ___0_path, uint32_t ___1_crc, const RuntimeMethod* method) 
{
	ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var info = GetInfoOrThrow(path);
		String_t* L_0 = ___0_path;
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 L_1;
		L_1 = BetterStreamingAssets_GetInfoOrThrow_m6CACE7C2C941E8008A85A6F03F8E22851C32B59C(L_0, NULL);
		V_0 = L_1;
		// return AssetBundle.LoadFromFile(info.readPath, crc, (ulong)info.offset);
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 L_2 = V_0;
		String_t* L_3 = L_2.___readPath_0;
		uint32_t L_4 = ___1_crc;
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 L_5 = V_0;
		int64_t L_6 = L_5.___offset_2;
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_7;
		L_7 = AssetBundle_LoadFromFile_m26FF275605246942FE95EB4AF7AEC7A9C70BE33A(L_3, L_4, L_6, NULL);
		return L_7;
	}
}
// System.IO.Stream BetterStreamingAssets::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* BetterStreamingAssets_OpenRead_m77A526C3A22388F107A258458CB5A6246D912DFD (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( path == null )
		String_t* L_0 = ___0_path;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("path");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BetterStreamingAssets_OpenRead_m77A526C3A22388F107A258458CB5A6246D912DFD_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if ( path.Length == 0 )
		String_t* L_2 = ___0_path;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		// throw new ArgumentException("Empty path", "path");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD773E0A14D2FEF23923A02949AF57C4C0E2A4EE1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BetterStreamingAssets_OpenRead_m77A526C3A22388F107A258458CB5A6246D912DFD_RuntimeMethod_var)));
	}

IL_0026:
	{
		// return BetterStreamingAssetsImp.OpenRead(path);
		String_t* L_5 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6;
		L_6 = LooseFilesImpl_OpenRead_mB2AF93FAD2D42AA1DD1C7EB683D9CC96B324F8E1(L_5, NULL);
		return L_6;
	}
}
// System.IO.StreamReader BetterStreamingAssets::OpenText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* BetterStreamingAssets_OpenText_m44FC54FFD1D31C6CE65FA8D1BEC51C14E5D9F559 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// Stream str = OpenRead(path);
		String_t* L_0 = ___0_path;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1;
		L_1 = BetterStreamingAssets_OpenRead_m77A526C3A22388F107A258458CB5A6246D912DFD(L_0, NULL);
		V_0 = L_1;
	}
	try
	{// begin try (depth: 1)
		// return new StreamReader(str);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = V_0;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_3 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_3, L_2, NULL);
		V_1 = L_3;
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Exception)
		{
			// catch (System.Exception)
			// if (str != null)
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = V_0;
			if (!L_4)
			{
				goto IL_001a;
			}
		}
		{
			// str.Dispose();
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = V_0;
			NullCheck(L_5);
			Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_5, NULL);
		}

IL_001a:
		{
			// throw;
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
	}// end catch (depth: 1)

IL_001c:
	{
		// }
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_6 = V_1;
		return L_6;
	}
}
// System.String BetterStreamingAssets::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BetterStreamingAssets_ReadAllText_mDF9763A26C640FC046E0496053727AF7BC95BFD4 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// using ( var sr = OpenText(path) )
		String_t* L_0 = ___0_path;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_1;
		L_1 = BetterStreamingAssets_OpenText_m44FC54FFD1D31C6CE65FA8D1BEC51C14E5D9F559(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0019;
					}
				}
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0019:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return sr.ReadToEnd();
			StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_4 = V_0;
			NullCheck(L_4);
			String_t* L_5;
			L_5 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_4);
			V_1 = L_5;
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		// }
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.String[] BetterStreamingAssets::ReadAllLines(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* BetterStreamingAssets_ReadAllLines_mC1E0791133A170E448941AFAC55EAC7821C5B349 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_2 = NULL;
	{
		// var lines = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_1 = L_0;
		// using ( var sr = OpenText(path) )
		String_t* L_1 = ___0_path;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_2;
		L_2 = BetterStreamingAssets_OpenText_m44FC54FFD1D31C6CE65FA8D1BEC51C14E5D9F559(L_1, NULL);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{// begin finally (depth: 1)
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_3 = V_2;
					if (!L_3)
					{
						goto IL_002b;
					}
				}
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_002b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0016_1;
			}

IL_000f_1:
			{
				// lines.Add(line);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = V_1;
				String_t* L_6 = V_0;
				NullCheck(L_5);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, L_6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_0016_1:
			{
				// while ( ( line = sr.ReadLine() ) != null )
				StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_7 = V_2;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadLine() */, L_7);
				String_t* L_9 = L_8;
				V_0 = L_9;
				if (L_9)
				{
					goto IL_000f_1;
				}
			}
			{
				// }
				goto IL_002c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002c:
	{
		// return lines.ToArray();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = V_1;
		NullCheck(L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11;
		L_11 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_10, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		return L_11;
	}
}
// System.Byte[] BetterStreamingAssets::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BetterStreamingAssets_ReadAllBytes_m406E443ADD97C8AE8148E8F4DCC9303B100F0C34 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( path == null )
		String_t* L_0 = ___0_path;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("path");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BetterStreamingAssets_ReadAllBytes_m406E443ADD97C8AE8148E8F4DCC9303B100F0C34_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if ( path.Length == 0 )
		String_t* L_2 = ___0_path;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		// throw new ArgumentException("Empty path", "path");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD773E0A14D2FEF23923A02949AF57C4C0E2A4EE1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BetterStreamingAssets_ReadAllBytes_m406E443ADD97C8AE8148E8F4DCC9303B100F0C34_RuntimeMethod_var)));
	}

IL_0026:
	{
		// return BetterStreamingAssetsImp.ReadAllBytes(path);
		String_t* L_5 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = LooseFilesImpl_ReadAllBytes_mAFE2CEB0C0C68AC230E45D0CAE1792490396823F(L_5, NULL);
		return L_6;
	}
}
// System.String[] BetterStreamingAssets::GetFiles(System.String,System.String,System.IO.SearchOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* BetterStreamingAssets_GetFiles_mC99E0F4AB2730E2086869EF83E6AC7E92989A758 (String_t* ___0_path, String_t* ___1_searchPattern, int32_t ___2_searchOption, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BetterStreamingAssetsImp.GetFiles(path, searchPattern, searchOption);
		String_t* L_0 = ___0_path;
		String_t* L_1 = ___1_searchPattern;
		int32_t L_2 = ___2_searchOption;
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = LooseFilesImpl_GetFiles_mE16BACE1398CC7479768C9AAFAA688BB5320FDF1(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.String[] BetterStreamingAssets::GetFiles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* BetterStreamingAssets_GetFiles_m86E18402E3200D6A135530485AB3E54AB5AF0685 (String_t* ___0_path, const RuntimeMethod* method) 
{
	{
		// return GetFiles(path, null);
		String_t* L_0 = ___0_path;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = BetterStreamingAssets_GetFiles_mA3A4482E732A09A17904996B7A73478B64E988E7(L_0, (String_t*)NULL, NULL);
		return L_1;
	}
}
// System.String[] BetterStreamingAssets::GetFiles(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* BetterStreamingAssets_GetFiles_mA3A4482E732A09A17904996B7A73478B64E988E7 (String_t* ___0_path, String_t* ___1_searchPattern, const RuntimeMethod* method) 
{
	{
		// return GetFiles(path, searchPattern, SearchOption.TopDirectoryOnly);
		String_t* L_0 = ___0_path;
		String_t* L_1 = ___1_searchPattern;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = BetterStreamingAssets_GetFiles_mC99E0F4AB2730E2086869EF83E6AC7E92989A758(L_0, L_1, 0, NULL);
		return L_2;
	}
}
// BetterStreamingAssets/ReadInfo BetterStreamingAssets::GetInfoOrThrow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 BetterStreamingAssets_GetInfoOrThrow_m6CACE7C2C941E8008A85A6F03F8E22851C32B59C (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if ( !BetterStreamingAssetsImp.TryGetInfo(path, out result) )
		String_t* L_0 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LooseFilesImpl_TryGetInfo_mEFEF1A59C1BF4D969DD0D66A6DFF9E4FB43E5FE3(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// ThrowFileNotFound(path);
		String_t* L_2 = ___0_path;
		BetterStreamingAssets_ThrowFileNotFound_m0CFA0775D289A891D812F5CFAF95A0EE147C550D(L_2, NULL);
	}

IL_0010:
	{
		// return result;
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 L_3 = V_0;
		return L_3;
	}
}
// System.Void BetterStreamingAssets::ThrowFileNotFound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterStreamingAssets_ThrowFileNotFound_m0CFA0775D289A891D812F5CFAF95A0EE147C550D (String_t* ___0_path, const RuntimeMethod* method) 
{
	{
		// throw new FileNotFoundException("File not found", path);
		String_t* L_0 = ___0_path;
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_1 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		FileNotFoundException__ctor_mC4247CABF75A7B484A21790CD7F8EFA8AC101677(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA37A985E632E97E39AD554B5730454CAB4D37B3)), L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BetterStreamingAssets_ThrowFileNotFound_m0CFA0775D289A891D812F5CFAF95A0EE147C550D_RuntimeMethod_var)));
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
// Conversion methods for marshalling of: BetterStreamingAssets/ReadInfo
IL2CPP_EXTERN_C void ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshal_pinvoke(const ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642& unmarshaled, ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_pinvoke& marshaled)
{
	marshaled.___readPath_0 = il2cpp_codegen_marshal_string(unmarshaled.___readPath_0);
	marshaled.___size_1 = unmarshaled.___size_1;
	marshaled.___offset_2 = unmarshaled.___offset_2;
	marshaled.___crc32_3 = unmarshaled.___crc32_3;
}
IL2CPP_EXTERN_C void ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshal_pinvoke_back(const ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_pinvoke& marshaled, ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642& unmarshaled)
{
	unmarshaled.___readPath_0 = il2cpp_codegen_marshal_string_result(marshaled.___readPath_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___readPath_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___readPath_0));
	int64_t unmarshaledsize_temp_1 = 0;
	unmarshaledsize_temp_1 = marshaled.___size_1;
	unmarshaled.___size_1 = unmarshaledsize_temp_1;
	int64_t unmarshaledoffset_temp_2 = 0;
	unmarshaledoffset_temp_2 = marshaled.___offset_2;
	unmarshaled.___offset_2 = unmarshaledoffset_temp_2;
	uint32_t unmarshaledcrc32_temp_3 = 0;
	unmarshaledcrc32_temp_3 = marshaled.___crc32_3;
	unmarshaled.___crc32_3 = unmarshaledcrc32_temp_3;
}
// Conversion method for clean up from marshalling of: BetterStreamingAssets/ReadInfo
IL2CPP_EXTERN_C void ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshal_pinvoke_cleanup(ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___readPath_0);
	marshaled.___readPath_0 = NULL;
}
// Conversion methods for marshalling of: BetterStreamingAssets/ReadInfo
IL2CPP_EXTERN_C void ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshal_com(const ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642& unmarshaled, ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_com& marshaled)
{
	marshaled.___readPath_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___readPath_0);
	marshaled.___size_1 = unmarshaled.___size_1;
	marshaled.___offset_2 = unmarshaled.___offset_2;
	marshaled.___crc32_3 = unmarshaled.___crc32_3;
}
IL2CPP_EXTERN_C void ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshal_com_back(const ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_com& marshaled, ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642& unmarshaled)
{
	unmarshaled.___readPath_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___readPath_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___readPath_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___readPath_0));
	int64_t unmarshaledsize_temp_1 = 0;
	unmarshaledsize_temp_1 = marshaled.___size_1;
	unmarshaled.___size_1 = unmarshaledsize_temp_1;
	int64_t unmarshaledoffset_temp_2 = 0;
	unmarshaledoffset_temp_2 = marshaled.___offset_2;
	unmarshaled.___offset_2 = unmarshaledoffset_temp_2;
	uint32_t unmarshaledcrc32_temp_3 = 0;
	unmarshaledcrc32_temp_3 = marshaled.___crc32_3;
	unmarshaled.___crc32_3 = unmarshaledcrc32_temp_3;
}
// Conversion method for clean up from marshalling of: BetterStreamingAssets/ReadInfo
IL2CPP_EXTERN_C void ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshal_com_cleanup(ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___readPath_0);
	marshaled.___readPath_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BetterStreamingAssets/LooseFilesImpl::Initialize(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LooseFilesImpl_Initialize_mA45C20742E3B6F060990FBE1DEAE5B45DAC38C20 (String_t* ___0_dataPath, String_t* ___1_streamingAssetsPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_root = Path.GetFullPath(streamingAssetsPath).Replace('\\', '/').TrimEnd('/');
		String_t* L_0 = ___1_streamingAssetsPath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetFullPath_m9E485D7D38A868A6A5863CBD24677231288EECE2(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_1, ((int32_t)92), ((int32_t)47), NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_TrimEnd_mDB4D96F8312F563656D4115A9F280062E05D2EE8(L_2, ((int32_t)47), NULL);
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		((LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_StaticFields*)il2cpp_codegen_static_fields_for(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var))->___s_root_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_StaticFields*)il2cpp_codegen_static_fields_for(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var))->___s_root_0), (void*)L_3);
		// }
		return;
	}
}
// System.String[] BetterStreamingAssets/LooseFilesImpl::GetFiles(System.String,System.String,System.IO.SearchOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* LooseFilesImpl_GetFiles_mE16BACE1398CC7479768C9AAFAA688BB5320FDF1 (String_t* ___0_path, String_t* ___1_searchPattern, int32_t ___2_searchOption, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// if (!Directory.Exists(s_root))
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_StaticFields*)il2cpp_codegen_static_fields_for(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var))->___s_root_0;
		bool L_1;
		L_1 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return s_emptyArray;
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ((LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_StaticFields*)il2cpp_codegen_static_fields_for(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var))->___s_emptyArray_1;
		return L_2;
	}

IL_0012:
	{
		// path = PathUtil.NormalizeRelativePath(path, forceTrailingSlash : true);
		String_t* L_3 = ___0_path;
		String_t* L_4;
		L_4 = PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E(L_3, (bool)1, NULL);
		___0_path = L_4;
		// var files = Directory.GetFiles(s_root + path, searchPattern ?? "*", searchOption);
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		String_t* L_5 = ((LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_StaticFields*)il2cpp_codegen_static_fields_for(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var))->___s_root_0;
		String_t* L_6 = ___0_path;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, L_6, NULL);
		String_t* L_8 = ___1_searchPattern;
		String_t* L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0030;
		}
	}
	{
		G_B4_0 = _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
		G_B4_1 = G_B3_1;
	}

IL_0030:
	{
		int32_t L_10 = ___2_searchOption;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11;
		L_11 = Directory_GetFiles_mC195B04DA9630D79180C0E85AFFFF9FEF0DB49B9(G_B4_1, G_B4_0, L_10, NULL);
		V_0 = L_11;
		// for ( int i = 0; i < files.Length; ++i )
		V_1 = 0;
		goto IL_005f;
	}

IL_003b:
	{
		// files[i] = files[i].Substring(s_root.Length + 1).Replace('\\', '/');
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
		int32_t L_13 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		String_t* L_18 = ((LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_StaticFields*)il2cpp_codegen_static_fields_for(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var))->___s_root_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_18, NULL);
		NullCheck(L_17);
		String_t* L_20;
		L_20 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_17, ((int32_t)il2cpp_codegen_add(L_19, 1)), NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_20, ((int32_t)92), ((int32_t)47), NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_21);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (String_t*)L_21);
		// for ( int i = 0; i < files.Length; ++i )
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_005f:
	{
		// for ( int i = 0; i < files.Length; ++i )
		int32_t L_23 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_003b;
		}
	}
	{
		// return files;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_0;
		return L_25;
	}
}
// System.Boolean BetterStreamingAssets/LooseFilesImpl::TryGetInfo(System.String,BetterStreamingAssets/ReadInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LooseFilesImpl_TryGetInfo_mEFEF1A59C1BF4D969DD0D66A6DFF9E4FB43E5FE3 (String_t* ___0_path, ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642* ___1_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// path = PathUtil.NormalizeRelativePath(path);
		String_t* L_0 = ___0_path;
		String_t* L_1;
		L_1 = PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E(L_0, (bool)0, NULL);
		___0_path = L_1;
		// info = new ReadInfo();
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642* L_2 = ___1_info;
		il2cpp_codegen_initobj(L_2, sizeof(ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642));
		// var fullPath = s_root + path;
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		String_t* L_3 = ((LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_StaticFields*)il2cpp_codegen_static_fields_for(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var))->___s_root_0;
		String_t* L_4 = ___0_path;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, L_4, NULL);
		V_0 = L_5;
		// if ( !File.Exists(fullPath) )
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_6, NULL);
		if (L_7)
		{
			goto IL_0026;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0026:
	{
		// info.readPath = fullPath;
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642* L_8 = ___1_info;
		String_t* L_9 = V_0;
		L_8->___readPath_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___readPath_0), (void*)L_9);
		// return true;
		return (bool)1;
	}
}
// System.Boolean BetterStreamingAssets/LooseFilesImpl::DirectoryExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LooseFilesImpl_DirectoryExists_mF8C3F57A3C5D7E34829388815AE3F8F98D09857E (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var normalized = PathUtil.NormalizeRelativePath(path);
		String_t* L_0 = ___0_path;
		String_t* L_1;
		L_1 = PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E(L_0, (bool)0, NULL);
		V_0 = L_1;
		// return Directory.Exists(s_root + normalized);
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		String_t* L_2 = ((LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_StaticFields*)il2cpp_codegen_static_fields_for(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var))->___s_root_0;
		String_t* L_3 = V_0;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, L_3, NULL);
		bool L_5;
		L_5 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_4, NULL);
		return L_5;
	}
}
// System.Byte[] BetterStreamingAssets/LooseFilesImpl::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LooseFilesImpl_ReadAllBytes_mAFE2CEB0C0C68AC230E45D0CAE1792490396823F (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if ( !TryGetInfo(path, out info) )
		String_t* L_0 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LooseFilesImpl_TryGetInfo_mEFEF1A59C1BF4D969DD0D66A6DFF9E4FB43E5FE3(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// ThrowFileNotFound(path);
		String_t* L_2 = ___0_path;
		BetterStreamingAssets_ThrowFileNotFound_m0CFA0775D289A891D812F5CFAF95A0EE147C550D(L_2, NULL);
	}

IL_0010:
	{
		// return File.ReadAllBytes(info.readPath);
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 L_3 = V_0;
		String_t* L_4 = L_3.___readPath_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_4, NULL);
		return L_5;
	}
}
// System.IO.Stream BetterStreamingAssets/LooseFilesImpl::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* LooseFilesImpl_OpenRead_mB2AF93FAD2D42AA1DD1C7EB683D9CC96B324F8E1 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if ( !TryGetInfo(path, out info) )
		String_t* L_0 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LooseFilesImpl_TryGetInfo_mEFEF1A59C1BF4D969DD0D66A6DFF9E4FB43E5FE3(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// ThrowFileNotFound(path);
		String_t* L_2 = ___0_path;
		BetterStreamingAssets_ThrowFileNotFound_m0CFA0775D289A891D812F5CFAF95A0EE147C550D(L_2, NULL);
	}

IL_0010:
	{
		// Stream fileStream = File.OpenRead(info.readPath);
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 L_3 = V_0;
		String_t* L_4 = L_3.___readPath_0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5;
		L_5 = File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C(L_4, NULL);
		V_1 = L_5;
	}
	try
	{// begin try (depth: 1)
		// return new SubReadOnlyStream(fileStream, leaveOpen: false);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = V_1;
		SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* L_7 = (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A*)il2cpp_codegen_object_new(SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		SubReadOnlyStream__ctor_m36D814130033DC43E86FD1FA83961EE9E3BE4549(L_7, L_6, (bool)0, NULL);
		V_2 = L_7;
		goto IL_002f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0026;
		}
		throw e;
	}

CATCH_0026:
	{// begin catch(System.Exception)
		// catch ( System.Exception )
		// fileStream.Dispose();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = V_1;
		NullCheck(L_8);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_8, NULL);
		// throw;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_002f:
	{
		// }
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = V_2;
		return L_9;
	}
}
// System.Void BetterStreamingAssets/LooseFilesImpl::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LooseFilesImpl__cctor_m199F7DCB69E04988F592B5128C4716B19AD67239 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string[] s_emptyArray = new string[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		((LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_StaticFields*)il2cpp_codegen_static_fields_for(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var))->___s_emptyArray_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_StaticFields*)il2cpp_codegen_static_fields_for(LooseFilesImpl_t4FED4CF9D6859BB2481DA41505AEA49A09FCF6DD_il2cpp_TypeInfo_var))->___s_emptyArray_1), (void*)L_0);
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
// System.Boolean Better.StreamingAssets.PathUtil::IsDirectorySeparator(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathUtil_IsDirectorySeparator_m0CC39DE46075B3E7F0ACF57BF423C98504F51BEE (Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	{
		// return c == '/' || c == '\\';
		Il2CppChar L_0 = ___0_c;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)47))))
		{
			goto IL_000b;
		}
	}
	{
		Il2CppChar L_1 = ___0_c;
		return (bool)((((int32_t)L_1) == ((int32_t)((int32_t)92)))? 1 : 0);
	}

IL_000b:
	{
		return (bool)1;
	}
}
// System.String Better.StreamingAssets.PathUtil::FixTrailingDirectorySeparators(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtil_FixTrailingDirectorySeparators_m8E73D9B3A9FFDB27DD2696109F5FCF0A1DEE990E (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	{
		// if ( path.Length >= 2 )
		String_t* L_0 = ___0_path;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_005a;
		}
	}
	{
		// var lastChar = path[path.Length - 1];
		String_t* L_2 = ___0_path;
		String_t* L_3 = ___0_path;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		NullCheck(L_2);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		V_0 = L_5;
		// var prevChar = path[path.Length - 2];
		String_t* L_6 = ___0_path;
		String_t* L_7 = ___0_path;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		NullCheck(L_6);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 2)), NULL);
		V_1 = L_9;
		// if ( PathUtil.IsDirectorySeparator(lastChar) && PathUtil.IsDirectorySeparator(prevChar) )
		Il2CppChar L_10 = V_0;
		bool L_11;
		L_11 = PathUtil_IsDirectorySeparator_m0CC39DE46075B3E7F0ACF57BF423C98504F51BEE(L_10, NULL);
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		bool L_13;
		L_13 = PathUtil_IsDirectorySeparator_m0CC39DE46075B3E7F0ACF57BF423C98504F51BEE(L_12, NULL);
		if (!L_13)
		{
			goto IL_005a;
		}
	}
	{
		// return path.TrimEnd('\\', '/') + lastChar;
		String_t* L_14 = ___0_path;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = L_16;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)47));
		NullCheck(L_14);
		String_t* L_18;
		L_18 = String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529(L_14, L_17, NULL);
		String_t* L_19;
		L_19 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_0), NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_18, L_19, NULL);
		return L_20;
	}

IL_005a:
	{
		// return path;
		String_t* L_21 = ___0_path;
		return L_21;
	}
}
// System.String Better.StreamingAssets.PathUtil::CombineSlash(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtil_CombineSlash_m3E07FB09C6A40ABAAB95FCABDDB4B1F6FEEB6EBF (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( a == null )
		String_t* L_0 = ___0_a;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("a");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PathUtil_CombineSlash_m3E07FB09C6A40ABAAB95FCABDDB4B1F6FEEB6EBF_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if ( b == null )
		String_t* L_2 = ___1_b;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// throw new ArgumentNullException("b");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PathUtil_CombineSlash_m3E07FB09C6A40ABAAB95FCABDDB4B1F6FEEB6EBF_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if ( string.IsNullOrEmpty(b) )
		String_t* L_4 = ___1_b;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// return a;
		String_t* L_6 = ___0_a;
		return L_6;
	}

IL_0026:
	{
		// if ( string.IsNullOrEmpty(a) )
		String_t* L_7 = ___0_a;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		// return b;
		String_t* L_9 = ___1_b;
		return L_9;
	}

IL_0030:
	{
		// if (b[0] == '/')
		String_t* L_10 = ___1_b;
		NullCheck(L_10);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, 0, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_003d;
		}
	}
	{
		// return b;
		String_t* L_12 = ___1_b;
		return L_12;
	}

IL_003d:
	{
		// if ( IsDirectorySeparator(a[a.Length -1]) )
		String_t* L_13 = ___0_a;
		String_t* L_14 = ___0_a;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_13, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), NULL);
		bool L_17;
		L_17 = PathUtil_IsDirectorySeparator_m0CC39DE46075B3E7F0ACF57BF423C98504F51BEE(L_16, NULL);
		if (!L_17)
		{
			goto IL_005a;
		}
	}
	{
		// return a + b;
		String_t* L_18 = ___0_a;
		String_t* L_19 = ___1_b;
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_18, L_19, NULL);
		return L_20;
	}

IL_005a:
	{
		// return a + '/' + b;
		String_t* L_21 = ___0_a;
		String_t* L_22 = ___1_b;
		String_t* L_23;
		L_23 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_21, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_22, NULL);
		return L_23;
	}
}
// System.String Better.StreamingAssets.PathUtil::NormalizeRelativePath(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E (String_t* ___0_relative, bool ___1_forceTrailingSlash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (string.IsNullOrEmpty(relative))
		String_t* L_0 = ___0_relative;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new System.ArgumentException("Empty or null", "relative");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD1BC37757802217E304B7B515215AC6EE461954E)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral623990995459AA52EC886FD82EF05F80DEA9ED84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E_RuntimeMethod_var)));
	}

IL_0018:
	{
		// StringBuilder output = new StringBuilder(relative.Length);
		String_t* L_3 = ___0_relative;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		StringBuilder_t* L_5 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_5, L_4, NULL);
		V_0 = L_5;
		// NormalizeState state = NormalizeState.PrevSlash;
		V_1 = 0;
		// output.Append('/');
		StringBuilder_t* L_6 = V_0;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_6, ((int32_t)47), NULL);
		// int startIndex = 0;
		V_2 = 0;
		// int lastIndexPlus1 = relative.Length;
		String_t* L_8 = ___0_relative;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		V_3 = L_9;
		// if ( relative[0] == '"' && relative.Length > 2 && relative[relative.Length - 1] == '"')
		String_t* L_10 = ___0_relative;
		NullCheck(L_10);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, 0, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_12 = ___0_relative;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)2)))
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_14 = ___0_relative;
		String_t* L_15 = ___0_relative;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		NullCheck(L_14);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0066;
		}
	}
	{
		// startIndex++;
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		// lastIndexPlus1--;
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_0066:
	{
		// for ( int i = startIndex; i <= lastIndexPlus1; ++i )
		int32_t L_20 = V_2;
		V_4 = L_20;
		goto IL_019c;
	}

IL_006e:
	{
		// if (i == lastIndexPlus1 || relative[i] == '/' || relative[i] == '\\')
		int32_t L_21 = V_4;
		int32_t L_22 = V_3;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_23 = ___0_relative;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
		if ((((int32_t)L_25) == ((int32_t)((int32_t)47))))
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_26 = ___0_relative;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		Il2CppChar L_28;
		L_28 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_26, L_27, NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0112;
		}
	}

IL_008e:
	{
		// if ( state == NormalizeState.PrevSlash || state == NormalizeState.PrevDot )
		int32_t L_29 = V_1;
		if (!L_29)
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			goto IL_010b;
		}
	}
	{
		// else if ( state == NormalizeState.PrevDoubleDot )
		int32_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)2))))
		{
			goto IL_00f9;
		}
	}
	{
		// if ( output.Length == 1 )
		StringBuilder_t* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_32, NULL);
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_00be;
		}
	}
	{
		// throw new System.IO.IOException("Invalid path: double dot error (before " + i + ")");
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_35;
		L_35 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15063F649207A4502DFEDF591587E7346BAB3F68)), L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_36 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_36);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_36, L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E_RuntimeMethod_var)));
	}

IL_00be:
	{
		// for ( j = output.Length - 2; j >= 0 && output[j] != '/'; --j)
		StringBuilder_t* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_37, NULL);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_38, 2));
		goto IL_00d0;
	}

IL_00ca:
	{
		// for ( j = output.Length - 2; j >= 0 && output[j] != '/'; --j)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_00d0:
	{
		// for ( j = output.Length - 2; j >= 0 && output[j] != '/'; --j)
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		StringBuilder_t* L_41 = V_0;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		Il2CppChar L_43;
		L_43 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_41, L_42, NULL);
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00ca;
		}
	}

IL_00e1:
	{
		// output.Remove(j + 1, output.Length - j - 1);
		StringBuilder_t* L_44 = V_0;
		int32_t L_45 = V_5;
		StringBuilder_t* L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_46, NULL);
		int32_t L_48 = V_5;
		NullCheck(L_44);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_44, ((int32_t)il2cpp_codegen_add(L_45, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_47, L_48)), 1)), NULL);
		goto IL_010b;
	}

IL_00f9:
	{
		// else if ( i < lastIndexPlus1 || forceTrailingSlash )
		int32_t L_50 = V_4;
		int32_t L_51 = V_3;
		bool L_52 = ___1_forceTrailingSlash;
		if (!((int32_t)(((((int32_t)L_50) < ((int32_t)L_51))? 1 : 0)|(int32_t)L_52)))
		{
			goto IL_010b;
		}
	}
	{
		// output.Append('/');
		StringBuilder_t* L_53 = V_0;
		NullCheck(L_53);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_53, ((int32_t)47), NULL);
	}

IL_010b:
	{
		// state = NormalizeState.PrevSlash;
		V_1 = 0;
		goto IL_0196;
	}

IL_0112:
	{
		// else if ( relative[i] == '.' )
		String_t* L_55 = ___0_relative;
		int32_t L_56 = V_4;
		NullCheck(L_55);
		Il2CppChar L_57;
		L_57 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_55, L_56, NULL);
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_014c;
		}
	}
	{
		// if ( state == NormalizeState.PrevSlash )
		int32_t L_58 = V_1;
		if (L_58)
		{
			goto IL_0125;
		}
	}
	{
		// state = NormalizeState.PrevDot;
		V_1 = 1;
		goto IL_0196;
	}

IL_0125:
	{
		// else if ( state == NormalizeState.PrevDot )
		int32_t L_59 = V_1;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_012d;
		}
	}
	{
		// state = NormalizeState.PrevDoubleDot;
		V_1 = 2;
		goto IL_0196;
	}

IL_012d:
	{
		// else if ( state == NormalizeState.PrevDoubleDot )
		int32_t L_60 = V_1;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_0141;
		}
	}
	{
		// state = NormalizeState.NothingSpecial;
		V_1 = 3;
		// output.Append("...");
		StringBuilder_t* L_61 = V_0;
		NullCheck(L_61);
		StringBuilder_t* L_62;
		L_62 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_61, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, NULL);
		goto IL_0196;
	}

IL_0141:
	{
		// output.Append('.');
		StringBuilder_t* L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_t* L_64;
		L_64 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_63, ((int32_t)46), NULL);
		goto IL_0196;
	}

IL_014c:
	{
		// if ( state == NormalizeState.PrevDot )
		int32_t L_65 = V_1;
		if ((!(((uint32_t)L_65) == ((uint32_t)1))))
		{
			goto IL_015b;
		}
	}
	{
		// output.Append('.');
		StringBuilder_t* L_66 = V_0;
		NullCheck(L_66);
		StringBuilder_t* L_67;
		L_67 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_66, ((int32_t)46), NULL);
		goto IL_016b;
	}

IL_015b:
	{
		// else if ( state == NormalizeState.PrevDoubleDot )
		int32_t L_68 = V_1;
		if ((!(((uint32_t)L_68) == ((uint32_t)2))))
		{
			goto IL_016b;
		}
	}
	{
		// output.Append("..");
		StringBuilder_t* L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_t* L_70;
		L_70 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_69, _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F, NULL);
	}

IL_016b:
	{
		// if (!IsValidCharacter(relative[i]))
		String_t* L_71 = ___0_relative;
		int32_t L_72 = V_4;
		NullCheck(L_71);
		Il2CppChar L_73;
		L_73 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_71, L_72, NULL);
		bool L_74;
		L_74 = PathUtil_IsValidCharacter_mB61FAF3517472920384EC1280D78D48E2E629E6E(L_73, NULL);
		if (L_74)
		{
			goto IL_0185;
		}
	}
	{
		// throw new System.IO.IOException("Invalid characters");
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_75 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_75);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_75, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73A0C07EF772937789C242D3D453CD9350FB99F0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_75, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E_RuntimeMethod_var)));
	}

IL_0185:
	{
		// output.Append(relative[i]);
		StringBuilder_t* L_76 = V_0;
		String_t* L_77 = ___0_relative;
		int32_t L_78 = V_4;
		NullCheck(L_77);
		Il2CppChar L_79;
		L_79 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_77, L_78, NULL);
		NullCheck(L_76);
		StringBuilder_t* L_80;
		L_80 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_76, L_79, NULL);
		// state = NormalizeState.NothingSpecial;
		V_1 = 3;
	}

IL_0196:
	{
		// for ( int i = startIndex; i <= lastIndexPlus1; ++i )
		int32_t L_81 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_019c:
	{
		// for ( int i = startIndex; i <= lastIndexPlus1; ++i )
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		if ((((int32_t)L_82) <= ((int32_t)L_83)))
		{
			goto IL_006e;
		}
	}
	{
		// return output.ToString();
		StringBuilder_t* L_84 = V_0;
		NullCheck(L_84);
		String_t* L_85;
		L_85 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_84);
		return L_85;
	}
}
// System.Boolean Better.StreamingAssets.PathUtil::IsValidCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathUtil_IsValidCharacter_mB61FAF3517472920384EC1280D78D48E2E629E6E (Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	{
		// if (c == '\"' || c == '<' || c == '>' || c == '|' || c < 32 || c == ':' || c == '*' || c == '?')
		Il2CppChar L_0 = ___0_c;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)34))))
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_1 = ___0_c;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)60))))
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_2 = ___0_c;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)62))))
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_3 = ___0_c;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)124))))
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_4 = ___0_c;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)32))))
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_5 = ___0_c;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)58))))
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_6 = ___0_c;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)42))))
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_7 = ___0_c;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}

IL_002a:
	{
		// return true;
		return (bool)1;
	}
}
// System.Text.RegularExpressions.Regex Better.StreamingAssets.PathUtil::WildcardToRegex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* PathUtil_WildcardToRegex_m08856DC9FDA8CDE6E3A716F6820D97DFF7640779 (String_t* ___0_pattern, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1519D29BC47003F3A961E0D7D9147BD777029A9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DF543E5CEBA28135FC0D7A2CDAD26732720D611);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE64DEBB5A8FBE313BD1F8DDB84DAAF73CA58228);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC705639C04B44414F3A4DDBFB7E8DA2F607BDA69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Regex("^" + Regex.Escape(pattern).Replace(@"\*", ".*").Replace(@"\?", ".") + "$", RegexOptions.IgnoreCase);
		String_t* L_0 = ___0_pattern;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Regex_Escape_mCBB92EEA6FB5B703811AF678FD53918F6A364227(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral1519D29BC47003F3A961E0D7D9147BD777029A9F, _stringLiteralC705639C04B44414F3A4DDBFB7E8DA2F607BDA69, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteralBE64DEBB5A8FBE313BD1F8DDB84DAAF73CA58228, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral7DF543E5CEBA28135FC0D7A2CDAD26732720D611, L_3, _stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, NULL);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_5 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_5, L_4, 1, NULL);
		return L_5;
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
// System.Void Better.StreamingAssets.SubReadOnlyStream::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream__ctor_m36D814130033DC43E86FD1FA83961EE9E3BE4549 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_actualStream, bool ___1_leaveOpen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SubReadOnlyStream(Stream actualStream, bool leaveOpen = false)
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		// if (actualStream == null)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_actualStream;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("superStream");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD13F98CE1E9F61828B3C7915C0847C1BC062140E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream__ctor_m36D814130033DC43E86FD1FA83961EE9E3BE4549_RuntimeMethod_var)));
	}

IL_0014:
	{
		// m_actualStream = actualStream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_actualStream;
		__this->___m_actualStream_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_actualStream_7), (void*)L_2);
		// m_leaveOpen = leaveOpen;
		bool L_3 = ___1_leaveOpen;
		__this->___m_leaveOpen_5 = L_3;
		// }
		return;
	}
}
// System.Void Better.StreamingAssets.SubReadOnlyStream::.ctor(System.IO.Stream,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream__ctor_m9A64726FC38861B5B4762B1163DB5B911513A5AA (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_actualStream, int64_t ___1_offset, int64_t ___2_length, bool ___3_leaveOpen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(actualStream, leaveOpen)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_actualStream;
		bool L_1 = ___3_leaveOpen;
		SubReadOnlyStream__ctor_m36D814130033DC43E86FD1FA83961EE9E3BE4549(__this, L_0, L_1, NULL);
		// if (offset < 0)
		int64_t L_2 = ___1_offset;
		if ((((int64_t)L_2) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0019;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("offset");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream__ctor_m9A64726FC38861B5B4762B1163DB5B911513A5AA_RuntimeMethod_var)));
	}

IL_0019:
	{
		// if (length < 0)
		int64_t L_4 = ___2_length;
		if ((((int64_t)L_4) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0029;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("length");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream__ctor_m9A64726FC38861B5B4762B1163DB5B911513A5AA_RuntimeMethod_var)));
	}

IL_0029:
	{
		// m_offset = offset;
		int64_t L_6 = ___1_offset;
		__this->___m_offset_4 = L_6;
		// m_position = offset;
		int64_t L_7 = ___1_offset;
		__this->___m_position_8 = L_7;
		// m_length = length;
		int64_t L_8 = ___2_length;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		__this->___m_length_6 = L_9;
		// }
		return;
	}
}
// System.Int64 Better.StreamingAssets.SubReadOnlyStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SubReadOnlyStream_get_Length_m5C8FDE24597F36E230F510442AFFE3D9C38FF4AE (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ThrowIfDisposed();
		SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B(__this, NULL);
		// if (!m_length.HasValue)
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_0 = (&__this->___m_length_6);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_0, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		// m_length = m_actualStream.Length - m_offset;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___m_actualStream_7;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_2);
		int64_t L_4 = __this->___m_offset_4;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_5), ((int64_t)il2cpp_codegen_subtract(L_3, L_4)), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		__this->___m_length_6 = L_5;
	}

IL_0030:
	{
		// return m_length.Value;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_6 = (&__this->___m_length_6);
		int64_t L_7;
		L_7 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_6, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		return L_7;
	}
}
// System.Int64 Better.StreamingAssets.SubReadOnlyStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SubReadOnlyStream_get_Position_mEC1BE398131DC6ED98F52AF28B8F3026A5F6871F (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	{
		// ThrowIfDisposed();
		SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B(__this, NULL);
		// return m_position - m_offset;
		int64_t L_0 = __this->___m_position_8;
		int64_t L_1 = __this->___m_offset_4;
		return ((int64_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Void Better.StreamingAssets.SubReadOnlyStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_set_Position_mFEDF684B502EA2294B0D9510CB115515685ED8F0 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// ThrowIfDisposed();
		SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B(__this, NULL);
		// m_position = m_offset + value;
		int64_t L_0 = __this->___m_offset_4;
		int64_t L_1 = ___0_value;
		__this->___m_position_8 = ((int64_t)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Boolean Better.StreamingAssets.SubReadOnlyStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubReadOnlyStream_get_CanRead_mA36DCCF02891479AB697DCBDDA5F70F654A7192F (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	{
		// public override bool CanRead { get { return m_actualStream.CanRead; } }
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___m_actualStream_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean Better.StreamingAssets.SubReadOnlyStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubReadOnlyStream_get_CanSeek_mEB3CC5374850ACC85C9607DA7C7870F724ACD2BC (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	{
		// public override bool CanSeek { get { return m_actualStream.CanSeek; } }
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___m_actualStream_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		return L_1;
	}
}
// System.Boolean Better.StreamingAssets.SubReadOnlyStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubReadOnlyStream_get_CanWrite_mB46777BC5F1C88FEE0336385274A5C9D8959C8B5 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	{
		// public override bool CanWrite { get { return false; } }
		return (bool)0;
	}
}
// System.Int32 Better.StreamingAssets.SubReadOnlyStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubReadOnlyStream_Read_mCB1F911211ECFC3B22689D0E01B0F5E2F3480CCD (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		// ThrowIfCantRead();
		SubReadOnlyStream_ThrowIfCantRead_mB7D02BA6EC5188328DA0F0C59EA951C8B2E536D1(__this, NULL);
		// ThrowIfDisposed();
		SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B(__this, NULL);
		// if ( m_actualStream.Position != m_position )
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___m_actualStream_7;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		int64_t L_2 = __this->___m_position_8;
		if ((((int64_t)L_1) == ((int64_t)L_2)))
		{
			goto IL_0032;
		}
	}
	{
		// m_actualStream.Seek(m_position, SeekOrigin.Begin);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___m_actualStream_7;
		int64_t L_4 = __this->___m_position_8;
		NullCheck(L_3);
		int64_t L_5;
		L_5 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_3, L_4, 0);
	}

IL_0032:
	{
		// if ( m_length.HasValue )
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_6 = (&__this->___m_length_6);
		bool L_7;
		L_7 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_6, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		// var endPosition = m_offset + m_length.Value;
		int64_t L_8 = __this->___m_offset_4;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_9 = (&__this->___m_length_6);
		int64_t L_10;
		L_10 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_9, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		V_1 = ((int64_t)il2cpp_codegen_add(L_8, L_10));
		// if (m_position + count > endPosition)
		int64_t L_11 = __this->___m_position_8;
		int32_t L_12 = ___2_count;
		int64_t L_13 = V_1;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(L_11, ((int64_t)L_12)))) <= ((int64_t)L_13)))
		{
			goto IL_0069;
		}
	}
	{
		// count = (int)(endPosition - m_position);
		int64_t L_14 = V_1;
		int64_t L_15 = __this->___m_position_8;
		___2_count = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_14, L_15)));
	}

IL_0069:
	{
		// int bytesRead = m_actualStream.Read(buffer, offset, count);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = __this->___m_actualStream_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_buffer;
		int32_t L_18 = ___1_offset;
		int32_t L_19 = ___2_count;
		NullCheck(L_16);
		int32_t L_20;
		L_20 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_16, L_17, L_18, L_19);
		V_0 = L_20;
		// m_position += bytesRead;
		int64_t L_21 = __this->___m_position_8;
		int32_t L_22 = V_0;
		__this->___m_position_8 = ((int64_t)il2cpp_codegen_add(L_21, ((int64_t)L_22)));
		// return bytesRead;
		int32_t L_23 = V_0;
		return L_23;
	}
}
// System.Int64 Better.StreamingAssets.SubReadOnlyStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SubReadOnlyStream_Seek_m6F82922EAE1FEBFBBB70F66E7860E054335C0124 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	{
		// ThrowIfDisposed();
		SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B(__this, NULL);
		// if ( origin == SeekOrigin.Begin )
		int32_t L_0 = ___1_origin;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		// m_position = m_actualStream.Seek(m_offset + offset, SeekOrigin.Begin);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___m_actualStream_7;
		int64_t L_2 = __this->___m_offset_4;
		int64_t L_3 = ___0_offset;
		NullCheck(L_1);
		int64_t L_4;
		L_4 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_1, ((int64_t)il2cpp_codegen_add(L_2, L_3)), 0);
		__this->___m_position_8 = L_4;
		goto IL_005f;
	}

IL_0025:
	{
		// else if ( origin == SeekOrigin.End )
		int32_t L_5 = ___1_origin;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004c;
		}
	}
	{
		// m_position = m_actualStream.Seek(m_offset + Length + offset, SeekOrigin.Begin);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->___m_actualStream_7;
		int64_t L_7 = __this->___m_offset_4;
		int64_t L_8;
		L_8 = VirtualFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, __this);
		int64_t L_9 = ___0_offset;
		NullCheck(L_6);
		int64_t L_10;
		L_10 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_6, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_7, L_8)), L_9)), 0);
		__this->___m_position_8 = L_10;
		goto IL_005f;
	}

IL_004c:
	{
		// m_position = m_actualStream.Seek(offset, SeekOrigin.Current);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = __this->___m_actualStream_7;
		int64_t L_12 = ___0_offset;
		NullCheck(L_11);
		int64_t L_13;
		L_13 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_11, L_12, 1);
		__this->___m_position_8 = L_13;
	}

IL_005f:
	{
		// return m_position - m_offset;
		int64_t L_14 = __this->___m_position_8;
		int64_t L_15 = __this->___m_offset_4;
		return ((int64_t)il2cpp_codegen_subtract(L_14, L_15));
	}
}
// System.Void Better.StreamingAssets.SubReadOnlyStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_SetLength_m285C445F9FAEA57944E5814121EAE303A9C891B8 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream_SetLength_m285C445F9FAEA57944E5814121EAE303A9C891B8_RuntimeMethod_var)));
	}
}
// System.Void Better.StreamingAssets.SubReadOnlyStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_Write_mB2D856675271393DE307AFBA830A88101513ECF7 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream_Write_mB2D856675271393DE307AFBA830A88101513ECF7_RuntimeMethod_var)));
	}
}
// System.Void Better.StreamingAssets.SubReadOnlyStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_Flush_m4E08C253CC94AB9DF38549032DA11F64FFC6F04D (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream_Flush_m4E08C253CC94AB9DF38549032DA11F64FFC6F04D_RuntimeMethod_var)));
	}
}
// System.Void Better.StreamingAssets.SubReadOnlyStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_Dispose_mBFA3C3783F999D3344D4BADAF8ED57BCB3BE16B1 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		// if ( disposing )
		bool L_0 = ___0_disposing;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// if (m_actualStream != null)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___m_actualStream_7;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// if (!m_leaveOpen)
		bool L_2 = __this->___m_leaveOpen_5;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		// m_actualStream.Dispose();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___m_actualStream_7;
		NullCheck(L_3);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_3, NULL);
	}

IL_001e:
	{
		// m_actualStream = null;
		__this->___m_actualStream_7 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_actualStream_7), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
	}

IL_0025:
	{
		// base.Dispose(disposing);
		bool L_4 = ___0_disposing;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Better.StreamingAssets.SubReadOnlyStream::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	{
		// if (m_actualStream == null)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___m_actualStream_7;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// throw new ObjectDisposedException(GetType().ToString(), "");
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_3, L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B_RuntimeMethod_var)));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Better.StreamingAssets.SubReadOnlyStream::ThrowIfCantRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_ThrowIfCantRead_mB7D02BA6EC5188328DA0F0C59EA951C8B2E536D1 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	{
		// if (!CanRead)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream_ThrowIfCantRead_mB7D02BA6EC5188328DA0F0C59EA951C8B2E536D1_RuntimeMethod_var)));
	}

IL_000e:
	{
		// }
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
// Conversion methods for marshalling of: Better.StreamingAssets.ZipArchive.ZipGenericExtraField
IL2CPP_EXTERN_C void ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshal_pinvoke(const ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724& unmarshaled, ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_pinvoke& marshaled)
{
	marshaled.____tag_1 = unmarshaled.____tag_1;
	marshaled.____size_2 = unmarshaled.____size_2;
	marshaled.____data_3 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.____data_3);
}
IL2CPP_EXTERN_C void ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshal_pinvoke_back(const ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_pinvoke& marshaled, ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t unmarshaled_tag_temp_0 = 0;
	unmarshaled_tag_temp_0 = marshaled.____tag_1;
	unmarshaled.____tag_1 = unmarshaled_tag_temp_0;
	uint16_t unmarshaled_size_temp_1 = 0;
	unmarshaled_size_temp_1 = marshaled.____size_2;
	unmarshaled.____size_2 = unmarshaled_size_temp_1;
	unmarshaled.____data_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.____data_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____data_3), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.____data_3));
}
// Conversion method for clean up from marshalling of: Better.StreamingAssets.ZipArchive.ZipGenericExtraField
IL2CPP_EXTERN_C void ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshal_pinvoke_cleanup(ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.____data_3);
	marshaled.____data_3 = NULL;
}
// Conversion methods for marshalling of: Better.StreamingAssets.ZipArchive.ZipGenericExtraField
IL2CPP_EXTERN_C void ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshal_com(const ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724& unmarshaled, ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_com& marshaled)
{
	marshaled.____tag_1 = unmarshaled.____tag_1;
	marshaled.____size_2 = unmarshaled.____size_2;
	marshaled.____data_3 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.____data_3);
}
IL2CPP_EXTERN_C void ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshal_com_back(const ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_com& marshaled, ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t unmarshaled_tag_temp_0 = 0;
	unmarshaled_tag_temp_0 = marshaled.____tag_1;
	unmarshaled.____tag_1 = unmarshaled_tag_temp_0;
	uint16_t unmarshaled_size_temp_1 = 0;
	unmarshaled_size_temp_1 = marshaled.____size_2;
	unmarshaled.____size_2 = unmarshaled_size_temp_1;
	unmarshaled.____data_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.____data_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____data_3), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.____data_3));
}
// Conversion method for clean up from marshalling of: Better.StreamingAssets.ZipArchive.ZipGenericExtraField
IL2CPP_EXTERN_C void ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshal_com_cleanup(ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.____data_3);
	marshaled.____data_3 = NULL;
}
// System.UInt16 Better.StreamingAssets.ZipArchive.ZipGenericExtraField::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ZipGenericExtraField_get_Tag_m759B6ECFDBC6D044352C08FB434AEC491B3E41E4 (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) 
{
	{
		// public ushort Tag { get { return _tag; } }
		uint16_t L_0 = __this->____tag_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint16_t ZipGenericExtraField_get_Tag_m759B6ECFDBC6D044352C08FB434AEC491B3E41E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724*>(__this + _offset);
	uint16_t _returnValue;
	_returnValue = ZipGenericExtraField_get_Tag_m759B6ECFDBC6D044352C08FB434AEC491B3E41E4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt16 Better.StreamingAssets.ZipArchive.ZipGenericExtraField::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ZipGenericExtraField_get_Size_mFEE59D1C38FA6DDB6FEDF1607A19FF167B4B7422 (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) 
{
	{
		// public ushort Size { get { return _size; } }
		uint16_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint16_t ZipGenericExtraField_get_Size_mFEE59D1C38FA6DDB6FEDF1607A19FF167B4B7422_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724*>(__this + _offset);
	uint16_t _returnValue;
	_returnValue = ZipGenericExtraField_get_Size_mFEE59D1C38FA6DDB6FEDF1607A19FF167B4B7422_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] Better.StreamingAssets.ZipArchive.ZipGenericExtraField::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipGenericExtraField_get_Data_mF8133FF89E762F3B70FCF61010858511B7137296 (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] Data { get { return _data; } }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipGenericExtraField_get_Data_mF8133FF89E762F3B70FCF61010858511B7137296_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ZipGenericExtraField_get_Data_mF8133FF89E762F3B70FCF61010858511B7137296_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Better.StreamingAssets.ZipArchive.ZipGenericExtraField::TryReadBlock(System.IO.BinaryReader,System.Int64,Better.StreamingAssets.ZipArchive.ZipGenericExtraField&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipGenericExtraField_TryReadBlock_m2BB3B9A85BF63DD87C5F97A456C5C00ECD168CEB (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, int64_t ___1_endExtraField, ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* ___2_field, const RuntimeMethod* method) 
{
	{
		// field = new ZipGenericExtraField();
		ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* L_0 = ___2_field;
		il2cpp_codegen_initobj(L_0, sizeof(ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724));
		// if ( endExtraField - reader.BaseStream.Position < 4 )
		int64_t L_1 = ___1_endExtraField;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___0_reader;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_2);
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(L_1, L_4))) >= ((int64_t)((int64_t)4))))
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001a:
	{
		// field._tag = reader.ReadUInt16();
		ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* L_5 = ___2_field;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = ___0_reader;
		NullCheck(L_6);
		uint16_t L_7;
		L_7 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_6);
		L_5->____tag_1 = L_7;
		// field._size = reader.ReadUInt16();
		ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* L_8 = ___2_field;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_9 = ___0_reader;
		NullCheck(L_9);
		uint16_t L_10;
		L_10 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_9);
		L_8->____size_2 = L_10;
		// if ( endExtraField - reader.BaseStream.Position < field._size )
		int64_t L_11 = ___1_endExtraField;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_12 = ___0_reader;
		NullCheck(L_12);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13;
		L_13 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_12);
		NullCheck(L_13);
		int64_t L_14;
		L_14 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_13);
		ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* L_15 = ___2_field;
		uint16_t L_16 = L_15->____size_2;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(L_11, L_14))) >= ((int64_t)((int64_t)(uint64_t)L_16))))
		{
			goto IL_004a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// field._data = reader.ReadBytes(field._size);
		ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* L_17 = ___2_field;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_18 = ___0_reader;
		ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* L_19 = ___2_field;
		uint16_t L_20 = L_19->____size_2;
		NullCheck(L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_18, L_20);
		L_17->____data_3 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->____data_3), (void*)L_21);
		// return true;
		return (bool)1;
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
// Conversion methods for marshalling of: Better.StreamingAssets.ZipArchive.Zip64ExtraField
IL2CPP_EXTERN_C void Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshal_pinvoke(const Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9& unmarshaled, Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_pinvoke& marshaled)
{
	Exception_t* ____uncompressedSize_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_uncompressedSize' of type 'Zip64ExtraField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____uncompressedSize_3Exception, NULL);
}
IL2CPP_EXTERN_C void Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshal_pinvoke_back(const Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_pinvoke& marshaled, Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9& unmarshaled)
{
	Exception_t* ____uncompressedSize_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_uncompressedSize' of type 'Zip64ExtraField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____uncompressedSize_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Better.StreamingAssets.ZipArchive.Zip64ExtraField
IL2CPP_EXTERN_C void Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshal_pinvoke_cleanup(Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Better.StreamingAssets.ZipArchive.Zip64ExtraField
IL2CPP_EXTERN_C void Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshal_com(const Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9& unmarshaled, Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_com& marshaled)
{
	Exception_t* ____uncompressedSize_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_uncompressedSize' of type 'Zip64ExtraField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____uncompressedSize_3Exception, NULL);
}
IL2CPP_EXTERN_C void Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshal_com_back(const Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_com& marshaled, Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9& unmarshaled)
{
	Exception_t* ____uncompressedSize_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_uncompressedSize' of type 'Zip64ExtraField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____uncompressedSize_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Better.StreamingAssets.ZipArchive.Zip64ExtraField
IL2CPP_EXTERN_C void Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshal_com_cleanup(Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_com& marshaled)
{
}
// System.Nullable`1<System.Int64> Better.StreamingAssets.ZipArchive.Zip64ExtraField::get_UncompressedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_UncompressedSize_m6DCFFD258F31202A9EDE82F260B284F2CBAC641F (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		// get { return _uncompressedSize; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->____uncompressedSize_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_UncompressedSize_m6DCFFD258F31202A9EDE82F260B284F2CBAC641F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9*>(__this + _offset);
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 _returnValue;
	_returnValue = Zip64ExtraField_get_UncompressedSize_m6DCFFD258F31202A9EDE82F260B284F2CBAC641F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Better.StreamingAssets.ZipArchive.Zip64ExtraField::set_UncompressedSize(System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip64ExtraField_set_UncompressedSize_m521F33230E53E4C89F4C46FFB108AB212E132B72 (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { _uncompressedSize = value; UpdateSize(); }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = ___0_value;
		__this->____uncompressedSize_3 = L_0;
		// set { _uncompressedSize = value; UpdateSize(); }
		Zip64ExtraField_UpdateSize_m61DAFA36C34567A51E4FD5E460B78D1E0660C938(__this, NULL);
		// set { _uncompressedSize = value; UpdateSize(); }
		return;
	}
}
IL2CPP_EXTERN_C  void Zip64ExtraField_set_UncompressedSize_m521F33230E53E4C89F4C46FFB108AB212E132B72_AdjustorThunk (RuntimeObject* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_value, const RuntimeMethod* method)
{
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9*>(__this + _offset);
	Zip64ExtraField_set_UncompressedSize_m521F33230E53E4C89F4C46FFB108AB212E132B72(_thisAdjusted, ___0_value, method);
}
// System.Nullable`1<System.Int64> Better.StreamingAssets.ZipArchive.Zip64ExtraField::get_CompressedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_CompressedSize_m990D9DD08B3C53024636DF0802E25B88075D603D (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		// get { return _compressedSize; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->____compressedSize_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_CompressedSize_m990D9DD08B3C53024636DF0802E25B88075D603D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9*>(__this + _offset);
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 _returnValue;
	_returnValue = Zip64ExtraField_get_CompressedSize_m990D9DD08B3C53024636DF0802E25B88075D603D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Better.StreamingAssets.ZipArchive.Zip64ExtraField::set_CompressedSize(System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip64ExtraField_set_CompressedSize_m176E90562F776D08B6896832200FAA45CEDE9BCC (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { _compressedSize = value; UpdateSize(); }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = ___0_value;
		__this->____compressedSize_4 = L_0;
		// set { _compressedSize = value; UpdateSize(); }
		Zip64ExtraField_UpdateSize_m61DAFA36C34567A51E4FD5E460B78D1E0660C938(__this, NULL);
		// set { _compressedSize = value; UpdateSize(); }
		return;
	}
}
IL2CPP_EXTERN_C  void Zip64ExtraField_set_CompressedSize_m176E90562F776D08B6896832200FAA45CEDE9BCC_AdjustorThunk (RuntimeObject* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_value, const RuntimeMethod* method)
{
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9*>(__this + _offset);
	Zip64ExtraField_set_CompressedSize_m176E90562F776D08B6896832200FAA45CEDE9BCC(_thisAdjusted, ___0_value, method);
}
// System.Nullable`1<System.Int64> Better.StreamingAssets.ZipArchive.Zip64ExtraField::get_LocalHeaderOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_LocalHeaderOffset_m232842FCC1BF48E123B2716FBAC8B769F0B2B07A (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		// get { return _localHeaderOffset; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->____localHeaderOffset_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_LocalHeaderOffset_m232842FCC1BF48E123B2716FBAC8B769F0B2B07A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9*>(__this + _offset);
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 _returnValue;
	_returnValue = Zip64ExtraField_get_LocalHeaderOffset_m232842FCC1BF48E123B2716FBAC8B769F0B2B07A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Better.StreamingAssets.ZipArchive.Zip64ExtraField::set_LocalHeaderOffset(System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip64ExtraField_set_LocalHeaderOffset_m36410109A452A57B65281ADFBBFFA876F8582D02 (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { _localHeaderOffset = value; UpdateSize(); }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = ___0_value;
		__this->____localHeaderOffset_5 = L_0;
		// set { _localHeaderOffset = value; UpdateSize(); }
		Zip64ExtraField_UpdateSize_m61DAFA36C34567A51E4FD5E460B78D1E0660C938(__this, NULL);
		// set { _localHeaderOffset = value; UpdateSize(); }
		return;
	}
}
IL2CPP_EXTERN_C  void Zip64ExtraField_set_LocalHeaderOffset_m36410109A452A57B65281ADFBBFFA876F8582D02_AdjustorThunk (RuntimeObject* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_value, const RuntimeMethod* method)
{
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9*>(__this + _offset);
	Zip64ExtraField_set_LocalHeaderOffset_m36410109A452A57B65281ADFBBFFA876F8582D02(_thisAdjusted, ___0_value, method);
}
// System.Nullable`1<System.Int32> Better.StreamingAssets.ZipArchive.Zip64ExtraField::get_StartDiskNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Zip64ExtraField_get_StartDiskNumber_m6A797299BED711B7BDBC42993C746F14BE2C49D8 (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		// public int? StartDiskNumber { get { return _startDiskNumber; } }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->____startDiskNumber_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Zip64ExtraField_get_StartDiskNumber_m6A797299BED711B7BDBC42993C746F14BE2C49D8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9*>(__this + _offset);
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 _returnValue;
	_returnValue = Zip64ExtraField_get_StartDiskNumber_m6A797299BED711B7BDBC42993C746F14BE2C49D8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Better.StreamingAssets.ZipArchive.Zip64ExtraField::UpdateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip64ExtraField_UpdateSize_m61DAFA36C34567A51E4FD5E460B78D1E0660C938 (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _size = 0;
		__this->____size_2 = (uint16_t)0;
		// if ( _uncompressedSize != null ) _size += 8;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_0 = (&__this->____uncompressedSize_3);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_0, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// if ( _uncompressedSize != null ) _size += 8;
		uint16_t L_2 = __this->____size_2;
		__this->____size_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, 8)));
	}

IL_0023:
	{
		// if ( _compressedSize != null ) _size += 8;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_3 = (&__this->____compressedSize_4);
		bool L_4;
		L_4 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_3, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// if ( _compressedSize != null ) _size += 8;
		uint16_t L_5 = __this->____size_2;
		__this->____size_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, 8)));
	}

IL_003f:
	{
		// if ( _localHeaderOffset != null ) _size += 8;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_6 = (&__this->____localHeaderOffset_5);
		bool L_7;
		L_7 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_6, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		// if ( _localHeaderOffset != null ) _size += 8;
		uint16_t L_8 = __this->____size_2;
		__this->____size_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, 8)));
	}

IL_005b:
	{
		// if ( _startDiskNumber != null ) _size += 4;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_9 = (&__this->____startDiskNumber_6);
		bool L_10;
		L_10 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_9, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0077;
		}
	}
	{
		// if ( _startDiskNumber != null ) _size += 4;
		uint16_t L_11 = __this->____size_2;
		__this->____size_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, 4)));
	}

IL_0077:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Zip64ExtraField_UpdateSize_m61DAFA36C34567A51E4FD5E460B78D1E0660C938_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9*>(__this + _offset);
	Zip64ExtraField_UpdateSize_m61DAFA36C34567A51E4FD5E460B78D1E0660C938(_thisAdjusted, method);
}
// Better.StreamingAssets.ZipArchive.Zip64ExtraField Better.StreamingAssets.ZipArchive.Zip64ExtraField::GetJustZip64Block(System.IO.Stream,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 Zip64ExtraField_GetJustZip64Block_m6EE1037758B78F91059CBC864A95D2912BACCE78 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_extraFieldStream, bool ___1_readUncompressedSize, bool ___2_readCompressedSize, bool ___3_readLocalHeaderOffset, bool ___4_readStartDiskNumber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_1 = NULL;
	ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// using ( BinaryReader reader = new BinaryReader(extraFieldStream) )
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_extraFieldStream;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_1, L_0, NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = V_1;
					if (!L_2)
					{
						goto IL_0037;
					}
				}
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = V_1;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0037:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001c_1;
			}

IL_0009_1:
			{
				// if ( TryGetZip64BlockFromGenericExtraField(currentExtraField, readUncompressedSize,
				//             readCompressedSize, readLocalHeaderOffset, readStartDiskNumber, out zip64Field) )
				ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724 L_4 = V_2;
				bool L_5 = ___1_readUncompressedSize;
				bool L_6 = ___2_readCompressedSize;
				bool L_7 = ___3_readLocalHeaderOffset;
				bool L_8 = ___4_readStartDiskNumber;
				bool L_9;
				L_9 = Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211(L_4, L_5, L_6, L_7, L_8, (&V_0), NULL);
				if (!L_9)
				{
					goto IL_001c_1;
				}
			}
			{
				// return zip64Field;
				Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 L_10 = V_0;
				V_3 = L_10;
				goto IL_0076;
			}

IL_001c_1:
			{
				// while ( ZipGenericExtraField.TryReadBlock(reader, extraFieldStream.Length, out currentExtraField) )
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = V_1;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = ___0_extraFieldStream;
				NullCheck(L_12);
				int64_t L_13;
				L_13 = VirtualFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_12);
				bool L_14;
				L_14 = ZipGenericExtraField_TryReadBlock_m2BB3B9A85BF63DD87C5F97A456C5C00ECD168CEB(L_11, L_13, (&V_2), NULL);
				if (L_14)
				{
					goto IL_0009_1;
				}
			}
			{
				// }
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		// zip64Field = new Zip64ExtraField();
		il2cpp_codegen_initobj((&V_0), sizeof(Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9));
		// zip64Field._compressedSize = null;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_15 = (&(&V_0)->____compressedSize_4);
		il2cpp_codegen_initobj(L_15, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		// zip64Field._uncompressedSize = null;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_16 = (&(&V_0)->____uncompressedSize_3);
		il2cpp_codegen_initobj(L_16, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		// zip64Field._localHeaderOffset = null;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_17 = (&(&V_0)->____localHeaderOffset_5);
		il2cpp_codegen_initobj(L_17, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		// zip64Field._startDiskNumber = null;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_18 = (&(&V_0)->____startDiskNumber_6);
		il2cpp_codegen_initobj(L_18, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		// return zip64Field;
		Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 L_19 = V_0;
		return L_19;
	}

IL_0076:
	{
		// }
		Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 L_20 = V_3;
		return L_20;
	}
}
// System.Boolean Better.StreamingAssets.ZipArchive.Zip64ExtraField::TryGetZip64BlockFromGenericExtraField(Better.StreamingAssets.ZipArchive.ZipGenericExtraField,System.Boolean,System.Boolean,System.Boolean,System.Boolean,Better.StreamingAssets.ZipArchive.Zip64ExtraField&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211 (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724 ___0_extraField, bool ___1_readUncompressedSize, bool ___2_readCompressedSize, bool ___3_readLocalHeaderOffset, bool ___4_readStartDiskNumber, Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* ___5_zip64Block, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_1 = NULL;
	uint16_t V_2 = 0;
	bool V_3 = false;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int64_t V_5 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	{
		// zip64Block = new Zip64ExtraField();
		Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_0 = ___5_zip64Block;
		il2cpp_codegen_initobj(L_0, sizeof(Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9));
		// zip64Block._compressedSize = null;
		Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_1 = ___5_zip64Block;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_2 = (&L_1->____compressedSize_4);
		il2cpp_codegen_initobj(L_2, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		// zip64Block._uncompressedSize = null;
		Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_3 = ___5_zip64Block;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_4 = (&L_3->____uncompressedSize_3);
		il2cpp_codegen_initobj(L_4, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		// zip64Block._localHeaderOffset = null;
		Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_5 = ___5_zip64Block;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_6 = (&L_5->____localHeaderOffset_5);
		il2cpp_codegen_initobj(L_6, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		// zip64Block._startDiskNumber = null;
		Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_7 = ___5_zip64Block;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_8 = (&L_7->____startDiskNumber_6);
		il2cpp_codegen_initobj(L_8, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		// if ( extraField.Tag != TagConstant )
		uint16_t L_9;
		L_9 = ZipGenericExtraField_get_Tag_m759B6ECFDBC6D044352C08FB434AEC491B3E41E4_inline((&___0_extraField), NULL);
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0048:
	{
		// MemoryStream ms = null;
		V_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01b8:
			{// begin finally (depth: 1)
				{
					// if ( ms != null )
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = V_0;
					if (!L_10)
					{
						goto IL_01c1;
					}
				}
				{
					// ms.Dispose();
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_0;
					NullCheck(L_11);
					Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_11, NULL);
				}

IL_01c1:
				{
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// ms = new MemoryStream(extraField.Data);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
				L_12 = ZipGenericExtraField_get_Data_mF8133FF89E762F3B70FCF61010858511B7137296_inline((&___0_extraField), NULL);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_13 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_13, L_12, NULL);
				V_0 = L_13;
				// using ( BinaryReader reader = new BinaryReader(ms) )
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_0;
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
				NullCheck(L_15);
				BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_15, L_14, NULL);
				V_1 = L_15;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01ae_1:
					{// begin finally (depth: 2)
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = V_1;
							if (!L_16)
							{
								goto IL_01b7_1;
							}
						}
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_17 = V_1;
							NullCheck(L_17);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_17);
						}

IL_01b7_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// ms = null;
						V_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL;
						// zip64Block._size = extraField.Size;
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_18 = ___5_zip64Block;
						uint16_t L_19;
						L_19 = ZipGenericExtraField_get_Size_mFEE59D1C38FA6DDB6FEDF1607A19FF167B4B7422_inline((&___0_extraField), NULL);
						L_18->____size_2 = L_19;
						// ushort expectedSize = 0;
						V_2 = (uint16_t)0;
						// if ( readUncompressedSize ) expectedSize += 8;
						bool L_20 = ___1_readUncompressedSize;
						if (!L_20)
						{
							goto IL_0078_2;
						}
					}
					{
						// if ( readUncompressedSize ) expectedSize += 8;
						uint16_t L_21 = V_2;
						V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, 8)));
					}

IL_0078_2:
					{
						// if ( readCompressedSize ) expectedSize += 8;
						bool L_22 = ___2_readCompressedSize;
						if (!L_22)
						{
							goto IL_0080_2;
						}
					}
					{
						// if ( readCompressedSize ) expectedSize += 8;
						uint16_t L_23 = V_2;
						V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, 8)));
					}

IL_0080_2:
					{
						// if ( readLocalHeaderOffset ) expectedSize += 8;
						bool L_24 = ___3_readLocalHeaderOffset;
						if (!L_24)
						{
							goto IL_0088_2;
						}
					}
					{
						// if ( readLocalHeaderOffset ) expectedSize += 8;
						uint16_t L_25 = V_2;
						V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, 8)));
					}

IL_0088_2:
					{
						// if ( readStartDiskNumber ) expectedSize += 4;
						bool L_26 = ___4_readStartDiskNumber;
						if (!L_26)
						{
							goto IL_0091_2;
						}
					}
					{
						// if ( readStartDiskNumber ) expectedSize += 4;
						uint16_t L_27 = V_2;
						V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, 4)));
					}

IL_0091_2:
					{
						// if ( expectedSize != zip64Block._size )
						uint16_t L_28 = V_2;
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_29 = ___5_zip64Block;
						uint16_t L_30 = L_29->____size_2;
						if ((((int32_t)L_28) == ((int32_t)L_30)))
						{
							goto IL_00a2_2;
						}
					}
					{
						// return false;
						V_3 = (bool)0;
						goto IL_01c2;
					}

IL_00a2_2:
					{
						// if ( readUncompressedSize ) zip64Block._uncompressedSize = reader.ReadInt64();
						bool L_31 = ___1_readUncompressedSize;
						if (!L_31)
						{
							goto IL_00b7_2;
						}
					}
					{
						// if ( readUncompressedSize ) zip64Block._uncompressedSize = reader.ReadInt64();
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_32 = ___5_zip64Block;
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_33 = V_1;
						NullCheck(L_33);
						int64_t L_34;
						L_34 = VirtualFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_33);
						Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_35;
						memset((&L_35), 0, sizeof(L_35));
						Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_35), L_34, /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
						L_32->____uncompressedSize_3 = L_35;
					}

IL_00b7_2:
					{
						// if ( readCompressedSize ) zip64Block._compressedSize = reader.ReadInt64();
						bool L_36 = ___2_readCompressedSize;
						if (!L_36)
						{
							goto IL_00cc_2;
						}
					}
					{
						// if ( readCompressedSize ) zip64Block._compressedSize = reader.ReadInt64();
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_37 = ___5_zip64Block;
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_38 = V_1;
						NullCheck(L_38);
						int64_t L_39;
						L_39 = VirtualFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_38);
						Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_40;
						memset((&L_40), 0, sizeof(L_40));
						Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_40), L_39, /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
						L_37->____compressedSize_4 = L_40;
					}

IL_00cc_2:
					{
						// if ( readLocalHeaderOffset ) zip64Block._localHeaderOffset = reader.ReadInt64();
						bool L_41 = ___3_readLocalHeaderOffset;
						if (!L_41)
						{
							goto IL_00e1_2;
						}
					}
					{
						// if ( readLocalHeaderOffset ) zip64Block._localHeaderOffset = reader.ReadInt64();
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_42 = ___5_zip64Block;
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_43 = V_1;
						NullCheck(L_43);
						int64_t L_44;
						L_44 = VirtualFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_43);
						Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_45;
						memset((&L_45), 0, sizeof(L_45));
						Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_45), L_44, /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
						L_42->____localHeaderOffset_5 = L_45;
					}

IL_00e1_2:
					{
						// if ( readStartDiskNumber ) zip64Block._startDiskNumber = reader.ReadInt32();
						bool L_46 = ___4_readStartDiskNumber;
						if (!L_46)
						{
							goto IL_00f7_2;
						}
					}
					{
						// if ( readStartDiskNumber ) zip64Block._startDiskNumber = reader.ReadInt32();
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_47 = ___5_zip64Block;
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_48 = V_1;
						NullCheck(L_48);
						int32_t L_49;
						L_49 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_48);
						Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_50;
						memset((&L_50), 0, sizeof(L_50));
						Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_50), L_49, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
						L_47->____startDiskNumber_6 = L_50;
					}

IL_00f7_2:
					{
						// if ( zip64Block._uncompressedSize < 0 ) throw new ZipArchiveException("FieldTooBigUncompressedSize");
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_51 = ___5_zip64Block;
						Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_52 = L_51->____uncompressedSize_3;
						V_4 = L_52;
						V_5 = ((int64_t)0);
						int64_t L_53;
						L_53 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_4), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
						int64_t L_54 = V_5;
						bool L_55;
						L_55 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_4), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
						if (!((int32_t)(((((int64_t)L_53) < ((int64_t)L_54))? 1 : 0)&(int32_t)L_55)))
						{
							goto IL_0124_2;
						}
					}
					{
						// if ( zip64Block._uncompressedSize < 0 ) throw new ZipArchiveException("FieldTooBigUncompressedSize");
						ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_56 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
						NullCheck(L_56);
						ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_56, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0791B09CABC0E68E7F2304266905D44E98CEDC7E)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211_RuntimeMethod_var)));
					}

IL_0124_2:
					{
						// if ( zip64Block._compressedSize < 0 ) throw new ZipArchiveException("FieldTooBigCompressedSize");
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_57 = ___5_zip64Block;
						Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_58 = L_57->____compressedSize_4;
						V_4 = L_58;
						V_5 = ((int64_t)0);
						int64_t L_59;
						L_59 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_4), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
						int64_t L_60 = V_5;
						bool L_61;
						L_61 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_4), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
						if (!((int32_t)(((((int64_t)L_59) < ((int64_t)L_60))? 1 : 0)&(int32_t)L_61)))
						{
							goto IL_0151_2;
						}
					}
					{
						// if ( zip64Block._compressedSize < 0 ) throw new ZipArchiveException("FieldTooBigCompressedSize");
						ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_62 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
						NullCheck(L_62);
						ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral692393D5247888503911656CF899688704CC9517)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211_RuntimeMethod_var)));
					}

IL_0151_2:
					{
						// if ( zip64Block._localHeaderOffset < 0 ) throw new ZipArchiveException("FieldTooBigLocalHeaderOffset");
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_63 = ___5_zip64Block;
						Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_64 = L_63->____localHeaderOffset_5;
						V_4 = L_64;
						V_5 = ((int64_t)0);
						int64_t L_65;
						L_65 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_4), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
						int64_t L_66 = V_5;
						bool L_67;
						L_67 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_4), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
						if (!((int32_t)(((((int64_t)L_65) < ((int64_t)L_66))? 1 : 0)&(int32_t)L_67)))
						{
							goto IL_017e_2;
						}
					}
					{
						// if ( zip64Block._localHeaderOffset < 0 ) throw new ZipArchiveException("FieldTooBigLocalHeaderOffset");
						ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_68 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
						NullCheck(L_68);
						ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_68, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC29D2239559EB0FC1E59107D531B6B1A1C368377)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211_RuntimeMethod_var)));
					}

IL_017e_2:
					{
						// if ( zip64Block._startDiskNumber < 0 ) throw new ZipArchiveException("FieldTooBigStartDiskNumber");
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_69 = ___5_zip64Block;
						Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_70 = L_69->____startDiskNumber_6;
						V_6 = L_70;
						V_7 = 0;
						int32_t L_71;
						L_71 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_6), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
						int32_t L_72 = V_7;
						bool L_73;
						L_73 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_6), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
						if (!((int32_t)(((((int32_t)L_71) < ((int32_t)L_72))? 1 : 0)&(int32_t)L_73)))
						{
							goto IL_01aa_2;
						}
					}
					{
						// if ( zip64Block._startDiskNumber < 0 ) throw new ZipArchiveException("FieldTooBigStartDiskNumber");
						ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_74 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
						NullCheck(L_74);
						ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_74, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBBA55520D2870374A577C846902E49D31C1E467)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211_RuntimeMethod_var)));
					}

IL_01aa_2:
					{
						// return true;
						V_3 = (bool)1;
						goto IL_01c2;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01c2:
	{
		// }
		bool L_75 = V_3;
		return L_75;
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
// System.Boolean Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryLocator::TryReadBlock(System.IO.BinaryReader,Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryLocator&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Zip64EndOfCentralDirectoryLocator_TryReadBlock_mC1CFF884A9974D065D505E6FBA8DE963B0A9B096 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79* ___1_zip64EOCDLocator, const RuntimeMethod* method) 
{
	{
		// zip64EOCDLocator = new Zip64EndOfCentralDirectoryLocator();
		Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79* L_0 = ___1_zip64EOCDLocator;
		il2cpp_codegen_initobj(L_0, sizeof(Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79));
		// if ( reader.ReadUInt32() != SignatureConstant )
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)117853008))))
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// zip64EOCDLocator.NumberOfDiskWithZip64EOCD = reader.ReadUInt32();
		Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79* L_3 = ___1_zip64EOCDLocator;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___0_reader;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_4);
		L_3->___NumberOfDiskWithZip64EOCD_2 = L_5;
		// zip64EOCDLocator.OffsetOfZip64EOCD = reader.ReadUInt64();
		Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79* L_6 = ___1_zip64EOCDLocator;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_reader;
		NullCheck(L_7);
		uint64_t L_8;
		L_8 = VirtualFuncInvoker0< uint64_t >::Invoke(18 /* System.UInt64 System.IO.BinaryReader::ReadUInt64() */, L_7);
		L_6->___OffsetOfZip64EOCD_3 = L_8;
		// zip64EOCDLocator.TotalNumberOfDisks = reader.ReadUInt32();
		Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79* L_9 = ___1_zip64EOCDLocator;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = ___0_reader;
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_10);
		L_9->___TotalNumberOfDisks_4 = L_11;
		// return true;
		return (bool)1;
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
// System.Boolean Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord::TryReadBlock(System.IO.BinaryReader,Better.StreamingAssets.ZipArchive.Zip64EndOfCentralDirectoryRecord&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Zip64EndOfCentralDirectoryRecord_TryReadBlock_mA35089F309255B687FFD1A07C4B553FC83045FF3 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* ___1_zip64EOCDRecord, const RuntimeMethod* method) 
{
	{
		// zip64EOCDRecord = new Zip64EndOfCentralDirectoryRecord();
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_0 = ___1_zip64EOCDRecord;
		il2cpp_codegen_initobj(L_0, sizeof(Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66));
		// if ( reader.ReadUInt32() != SignatureConstant )
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)101075792))))
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// zip64EOCDRecord.SizeOfThisRecord = reader.ReadUInt64();
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_3 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___0_reader;
		NullCheck(L_4);
		uint64_t L_5;
		L_5 = VirtualFuncInvoker0< uint64_t >::Invoke(18 /* System.UInt64 System.IO.BinaryReader::ReadUInt64() */, L_4);
		L_3->___SizeOfThisRecord_2 = L_5;
		// zip64EOCDRecord.VersionMadeBy = reader.ReadUInt16();
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_6 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_reader;
		NullCheck(L_7);
		uint16_t L_8;
		L_8 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_7);
		L_6->___VersionMadeBy_3 = L_8;
		// zip64EOCDRecord.VersionNeededToExtract = reader.ReadUInt16();
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_9 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = ___0_reader;
		NullCheck(L_10);
		uint16_t L_11;
		L_11 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_10);
		L_9->___VersionNeededToExtract_4 = L_11;
		// zip64EOCDRecord.NumberOfThisDisk = reader.ReadUInt32();
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_12 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___0_reader;
		NullCheck(L_13);
		uint32_t L_14;
		L_14 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_13);
		L_12->___NumberOfThisDisk_5 = L_14;
		// zip64EOCDRecord.NumberOfDiskWithStartOfCD = reader.ReadUInt32();
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_15 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = ___0_reader;
		NullCheck(L_16);
		uint32_t L_17;
		L_17 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_16);
		L_15->___NumberOfDiskWithStartOfCD_6 = L_17;
		// zip64EOCDRecord.NumberOfEntriesOnThisDisk = reader.ReadUInt64();
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_18 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_19 = ___0_reader;
		NullCheck(L_19);
		uint64_t L_20;
		L_20 = VirtualFuncInvoker0< uint64_t >::Invoke(18 /* System.UInt64 System.IO.BinaryReader::ReadUInt64() */, L_19);
		L_18->___NumberOfEntriesOnThisDisk_7 = L_20;
		// zip64EOCDRecord.NumberOfEntriesTotal = reader.ReadUInt64();
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_21 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_22 = ___0_reader;
		NullCheck(L_22);
		uint64_t L_23;
		L_23 = VirtualFuncInvoker0< uint64_t >::Invoke(18 /* System.UInt64 System.IO.BinaryReader::ReadUInt64() */, L_22);
		L_21->___NumberOfEntriesTotal_8 = L_23;
		// zip64EOCDRecord.SizeOfCentralDirectory = reader.ReadUInt64();
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_24 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_25 = ___0_reader;
		NullCheck(L_25);
		uint64_t L_26;
		L_26 = VirtualFuncInvoker0< uint64_t >::Invoke(18 /* System.UInt64 System.IO.BinaryReader::ReadUInt64() */, L_25);
		L_24->___SizeOfCentralDirectory_9 = L_26;
		// zip64EOCDRecord.OffsetOfCentralDirectory = reader.ReadUInt64();
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_27 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_28 = ___0_reader;
		NullCheck(L_28);
		uint64_t L_29;
		L_29 = VirtualFuncInvoker0< uint64_t >::Invoke(18 /* System.UInt64 System.IO.BinaryReader::ReadUInt64() */, L_28);
		L_27->___OffsetOfCentralDirectory_10 = L_29;
		// return true;
		return (bool)1;
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
// System.Boolean Better.StreamingAssets.ZipArchive.ZipLocalFileHeader::TrySkipBlock(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipLocalFileHeader_TrySkipBlock_m58F32F4479333BE5F4730EB6E4CD4FD4B53C45AB (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// if ( reader.ReadUInt32() != SignatureConstant )
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)67324752))))
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// if ( reader.BaseStream.Length < reader.BaseStream.Position + OffsetToFilenameLength )
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___0_reader;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_2);
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_3);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = ___0_reader;
		NullCheck(L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6;
		L_6 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_5);
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_6);
		if ((((int64_t)L_4) >= ((int64_t)((int64_t)il2cpp_codegen_add(L_7, ((int64_t)((int32_t)22)))))))
		{
			goto IL_002d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002d:
	{
		// reader.BaseStream.Seek(OffsetToFilenameLength, SeekOrigin.Current);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = ___0_reader;
		NullCheck(L_8);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9;
		L_9 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_8);
		NullCheck(L_9);
		int64_t L_10;
		L_10 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_9, ((int64_t)((int32_t)22)), 1);
		// ushort filenameLength = reader.ReadUInt16();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = ___0_reader;
		NullCheck(L_11);
		uint16_t L_12;
		L_12 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_11);
		V_0 = L_12;
		// ushort extraFieldLength = reader.ReadUInt16();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___0_reader;
		NullCheck(L_13);
		uint16_t L_14;
		L_14 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_13);
		V_1 = L_14;
		// if ( reader.BaseStream.Length < reader.BaseStream.Position + filenameLength + extraFieldLength )
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = ___0_reader;
		NullCheck(L_15);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16;
		L_16 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_15);
		NullCheck(L_16);
		int64_t L_17;
		L_17 = VirtualFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_16);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_18 = ___0_reader;
		NullCheck(L_18);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19;
		L_19 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_18);
		NullCheck(L_19);
		int64_t L_20;
		L_20 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_19);
		uint16_t L_21 = V_0;
		uint16_t L_22 = V_1;
		if ((((int64_t)L_17) >= ((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_20, ((int64_t)(uint64_t)L_21))), ((int64_t)(uint64_t)L_22))))))
		{
			goto IL_006b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_006b:
	{
		// reader.BaseStream.Seek(filenameLength + extraFieldLength, SeekOrigin.Current);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_23 = ___0_reader;
		NullCheck(L_23);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24;
		L_24 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_23);
		uint16_t L_25 = V_0;
		uint16_t L_26 = V_1;
		NullCheck(L_24);
		int64_t L_27;
		L_27 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_24, ((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26))), 1);
		// return true;
		return (bool)1;
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
// Conversion methods for marshalling of: Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader
IL2CPP_EXTERN_C void ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshal_pinvoke(const ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC& unmarshaled, ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_pinvoke& marshaled)
{
	Exception_t* ___ExtraFields_19Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ExtraFields' of type 'ZipCentralDirectoryFileHeader'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ExtraFields_19Exception, NULL);
}
IL2CPP_EXTERN_C void ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshal_pinvoke_back(const ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_pinvoke& marshaled, ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC& unmarshaled)
{
	Exception_t* ___ExtraFields_19Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ExtraFields' of type 'ZipCentralDirectoryFileHeader'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ExtraFields_19Exception, NULL);
}
// Conversion method for clean up from marshalling of: Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader
IL2CPP_EXTERN_C void ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshal_pinvoke_cleanup(ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader
IL2CPP_EXTERN_C void ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshal_com(const ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC& unmarshaled, ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_com& marshaled)
{
	Exception_t* ___ExtraFields_19Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ExtraFields' of type 'ZipCentralDirectoryFileHeader'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ExtraFields_19Exception, NULL);
}
IL2CPP_EXTERN_C void ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshal_com_back(const ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_com& marshaled, ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC& unmarshaled)
{
	Exception_t* ___ExtraFields_19Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ExtraFields' of type 'ZipCentralDirectoryFileHeader'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ExtraFields_19Exception, NULL);
}
// Conversion method for clean up from marshalling of: Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader
IL2CPP_EXTERN_C void ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshal_com_cleanup(ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_com& marshaled)
{
}
// System.Boolean Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader::TryReadBlock(System.IO.BinaryReader,Better.StreamingAssets.ZipArchive.ZipCentralDirectoryFileHeader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipCentralDirectoryFileHeader_TryReadBlock_mCC57C7A3DB7E627C07703FE56A23977904D87243 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* ___1_header, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint16_t V_2 = 0;
	uint32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int64_t V_9 = 0;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_10 = NULL;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_12;
	memset((&V_12), 0, sizeof(V_12));
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B9_0 = NULL;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B8_0 = NULL;
	int64_t G_B10_0 = 0;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B10_1 = NULL;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B12_0 = NULL;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B11_0 = NULL;
	int64_t G_B13_0 = 0;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B13_1 = NULL;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B15_0 = NULL;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B14_0 = NULL;
	int64_t G_B16_0 = 0;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B16_1 = NULL;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B18_0 = NULL;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B19_1 = NULL;
	{
		// header = new ZipCentralDirectoryFileHeader();
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_0 = ___1_header;
		il2cpp_codegen_initobj(L_0, sizeof(ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC));
		// if ( reader.ReadUInt32() != SignatureConstant )
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)33639248))))
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// header.VersionMadeBySpecification = reader.ReadByte();
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_3 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___0_reader;
		NullCheck(L_4);
		uint8_t L_5;
		L_5 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_4);
		L_3->___VersionMadeBySpecification_2 = L_5;
		// header.VersionMadeByCompatibility = reader.ReadByte();
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_6 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_reader;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_7);
		L_6->___VersionMadeByCompatibility_1 = L_8;
		// header.VersionNeededToExtract = reader.ReadUInt16();
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_9 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = ___0_reader;
		NullCheck(L_10);
		uint16_t L_11;
		L_11 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_10);
		L_9->___VersionNeededToExtract_3 = L_11;
		// header.GeneralPurposeBitFlag = reader.ReadUInt16();
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_12 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___0_reader;
		NullCheck(L_13);
		uint16_t L_14;
		L_14 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_13);
		L_12->___GeneralPurposeBitFlag_4 = L_14;
		// header.CompressionMethod = reader.ReadUInt16();
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_15 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = ___0_reader;
		NullCheck(L_16);
		uint16_t L_17;
		L_17 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_16);
		L_15->___CompressionMethod_5 = L_17;
		// header.LastModified = reader.ReadUInt32();
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_18 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_19 = ___0_reader;
		NullCheck(L_19);
		uint32_t L_20;
		L_20 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_19);
		L_18->___LastModified_6 = L_20;
		// header.Crc32 = reader.ReadUInt32();
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_21 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_22 = ___0_reader;
		NullCheck(L_22);
		uint32_t L_23;
		L_23 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_22);
		L_21->___Crc32_7 = L_23;
		// uint compressedSizeSmall = reader.ReadUInt32();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_24 = ___0_reader;
		NullCheck(L_24);
		uint32_t L_25;
		L_25 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_24);
		V_0 = L_25;
		// uint uncompressedSizeSmall = reader.ReadUInt32();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_26 = ___0_reader;
		NullCheck(L_26);
		uint32_t L_27;
		L_27 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_26);
		V_1 = L_27;
		// header.FilenameLength = reader.ReadUInt16();
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_28 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_29 = ___0_reader;
		NullCheck(L_29);
		uint16_t L_30;
		L_30 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_29);
		L_28->___FilenameLength_10 = L_30;
		// header.ExtraFieldLength = reader.ReadUInt16();
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_31 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_32 = ___0_reader;
		NullCheck(L_32);
		uint16_t L_33;
		L_33 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_32);
		L_31->___ExtraFieldLength_11 = L_33;
		// header.FileCommentLength = reader.ReadUInt16();
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_34 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_35 = ___0_reader;
		NullCheck(L_35);
		uint16_t L_36;
		L_36 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_35);
		L_34->___FileCommentLength_12 = L_36;
		// ushort diskNumberStartSmall = reader.ReadUInt16();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_37 = ___0_reader;
		NullCheck(L_37);
		uint16_t L_38;
		L_38 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_37);
		V_2 = L_38;
		// header.InternalFileAttributes = reader.ReadUInt16();
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_39 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_40 = ___0_reader;
		NullCheck(L_40);
		uint16_t L_41;
		L_41 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_40);
		L_39->___InternalFileAttributes_14 = L_41;
		// header.ExternalFileAttributes = reader.ReadUInt32();
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_42 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_43 = ___0_reader;
		NullCheck(L_43);
		uint32_t L_44;
		L_44 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_43);
		L_42->___ExternalFileAttributes_15 = L_44;
		// uint relativeOffsetOfLocalHeaderSmall = reader.ReadUInt32();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_45 = ___0_reader;
		NullCheck(L_45);
		uint32_t L_46;
		L_46 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_45);
		V_3 = L_46;
		// header.Filename = reader.ReadBytes(header.FilenameLength);
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_47 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_48 = ___0_reader;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_49 = ___1_header;
		uint16_t L_50 = L_49->___FilenameLength_10;
		NullCheck(L_48);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51;
		L_51 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_48, L_50);
		L_47->___Filename_17 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->___Filename_17), (void*)L_51);
		// bool uncompressedSizeInZip64 = uncompressedSizeSmall == ZipHelper.Mask32Bit;
		uint32_t L_52 = V_1;
		V_4 = (bool)((((int32_t)L_52) == ((int32_t)(-1)))? 1 : 0);
		// bool compressedSizeInZip64 = compressedSizeSmall == ZipHelper.Mask32Bit;
		uint32_t L_53 = V_0;
		V_5 = (bool)((((int32_t)L_53) == ((int32_t)(-1)))? 1 : 0);
		// bool relativeOffsetInZip64 = relativeOffsetOfLocalHeaderSmall == ZipHelper.Mask32Bit;
		uint32_t L_54 = V_3;
		V_6 = (bool)((((int32_t)L_54) == ((int32_t)(-1)))? 1 : 0);
		// bool diskNumberStartInZip64 = diskNumberStartSmall == ZipHelper.Mask16Bit;
		uint16_t L_55 = V_2;
		V_7 = (bool)((((int32_t)L_55) == ((int32_t)((int32_t)65535)))? 1 : 0);
		// long endExtraFields = reader.BaseStream.Position + header.ExtraFieldLength;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_56 = ___0_reader;
		NullCheck(L_56);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_57;
		L_57 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_56);
		NullCheck(L_57);
		int64_t L_58;
		L_58 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_57);
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_59 = ___1_header;
		uint16_t L_60 = L_59->___ExtraFieldLength_11;
		V_9 = ((int64_t)il2cpp_codegen_add(L_58, ((int64_t)(uint64_t)L_60)));
		// using ( Stream str = new SubReadOnlyStream(reader.BaseStream, reader.BaseStream.Position, header.ExtraFieldLength, leaveOpen: true) )
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_61 = ___0_reader;
		NullCheck(L_61);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_62;
		L_62 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_61);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_63 = ___0_reader;
		NullCheck(L_63);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_64;
		L_64 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_63);
		NullCheck(L_64);
		int64_t L_65;
		L_65 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_64);
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_66 = ___1_header;
		uint16_t L_67 = L_66->___ExtraFieldLength_11;
		SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* L_68 = (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A*)il2cpp_codegen_object_new(SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		SubReadOnlyStream__ctor_m9A64726FC38861B5B4762B1163DB5B911513A5AA(L_68, L_62, L_65, ((int64_t)(uint64_t)L_67), (bool)1, NULL);
		V_10 = L_68;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013f:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_69 = V_10;
					if (!L_69)
					{
						goto IL_014a;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_70 = V_10;
					NullCheck(L_70);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_70);
				}

IL_014a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// header.ExtraFields = null;
			ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_71 = ___1_header;
			L_71->___ExtraFields_19 = (List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_71->___ExtraFields_19), (void*)(List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37*)NULL);
			// zip64 = Zip64ExtraField.GetJustZip64Block(str,
			//         uncompressedSizeInZip64, compressedSizeInZip64,
			//         relativeOffsetInZip64, diskNumberStartInZip64);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_72 = V_10;
			bool L_73 = V_4;
			bool L_74 = V_5;
			bool L_75 = V_6;
			bool L_76 = V_7;
			Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 L_77;
			L_77 = Zip64ExtraField_GetJustZip64Block_m6EE1037758B78F91059CBC864A95D2912BACCE78(L_72, L_73, L_74, L_75, L_76, NULL);
			V_8 = L_77;
			// }
			goto IL_014b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014b:
	{
		// reader.BaseStream.AdvanceToPosition(endExtraFields);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_78 = ___0_reader;
		NullCheck(L_78);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_79;
		L_79 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_78);
		int64_t L_80 = V_9;
		ZipHelper_AdvanceToPosition_m5A4492EBB0D4AA1F633A9E349C76C5844ABD755B(L_79, L_80, NULL);
		// reader.BaseStream.Position += header.FileCommentLength;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_81 = ___0_reader;
		NullCheck(L_81);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_82;
		L_82 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_81);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_83 = L_82;
		NullCheck(L_83);
		int64_t L_84;
		L_84 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_83);
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_85 = ___1_header;
		uint16_t L_86 = L_85->___FileCommentLength_12;
		NullCheck(L_83);
		VirtualActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_83, ((int64_t)il2cpp_codegen_add(L_84, ((int64_t)(uint64_t)L_86))));
		// header.FileComment = null;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_87 = ___1_header;
		L_87->___FileComment_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_87->___FileComment_18), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		// header.UncompressedSize = zip64.UncompressedSize == null
		//                                         ? uncompressedSizeSmall
		//                                         : zip64.UncompressedSize.Value;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_88 = ___1_header;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_89;
		L_89 = Zip64ExtraField_get_UncompressedSize_m6DCFFD258F31202A9EDE82F260B284F2CBAC641F_inline((&V_8), NULL);
		V_11 = L_89;
		bool L_90;
		L_90 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_11), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		G_B8_0 = L_88;
		if (!L_90)
		{
			G_B9_0 = L_88;
			goto IL_019d;
		}
	}
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_91;
		L_91 = Zip64ExtraField_get_UncompressedSize_m6DCFFD258F31202A9EDE82F260B284F2CBAC641F_inline((&V_8), NULL);
		V_11 = L_91;
		int64_t L_92;
		L_92 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC((&V_11), Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		G_B10_0 = L_92;
		G_B10_1 = G_B8_0;
		goto IL_019f;
	}

IL_019d:
	{
		uint32_t L_93 = V_1;
		G_B10_0 = ((int64_t)(uint64_t)L_93);
		G_B10_1 = G_B9_0;
	}

IL_019f:
	{
		G_B10_1->___UncompressedSize_9 = G_B10_0;
		// header.CompressedSize = zip64.CompressedSize == null
		//                                         ? compressedSizeSmall
		//                                         : zip64.CompressedSize.Value;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_94 = ___1_header;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_95;
		L_95 = Zip64ExtraField_get_CompressedSize_m990D9DD08B3C53024636DF0802E25B88075D603D_inline((&V_8), NULL);
		V_11 = L_95;
		bool L_96;
		L_96 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_11), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		G_B11_0 = L_94;
		if (!L_96)
		{
			G_B12_0 = L_94;
			goto IL_01c9;
		}
	}
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_97;
		L_97 = Zip64ExtraField_get_CompressedSize_m990D9DD08B3C53024636DF0802E25B88075D603D_inline((&V_8), NULL);
		V_11 = L_97;
		int64_t L_98;
		L_98 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC((&V_11), Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		G_B13_0 = L_98;
		G_B13_1 = G_B11_0;
		goto IL_01cb;
	}

IL_01c9:
	{
		uint32_t L_99 = V_0;
		G_B13_0 = ((int64_t)(uint64_t)L_99);
		G_B13_1 = G_B12_0;
	}

IL_01cb:
	{
		G_B13_1->___CompressedSize_8 = G_B13_0;
		// header.RelativeOffsetOfLocalHeader = zip64.LocalHeaderOffset == null
		//                                         ? relativeOffsetOfLocalHeaderSmall
		//                                         : zip64.LocalHeaderOffset.Value;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_100 = ___1_header;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_101;
		L_101 = Zip64ExtraField_get_LocalHeaderOffset_m232842FCC1BF48E123B2716FBAC8B769F0B2B07A_inline((&V_8), NULL);
		V_11 = L_101;
		bool L_102;
		L_102 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_11), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		G_B14_0 = L_100;
		if (!L_102)
		{
			G_B15_0 = L_100;
			goto IL_01f5;
		}
	}
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_103;
		L_103 = Zip64ExtraField_get_LocalHeaderOffset_m232842FCC1BF48E123B2716FBAC8B769F0B2B07A_inline((&V_8), NULL);
		V_11 = L_103;
		int64_t L_104;
		L_104 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC((&V_11), Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		G_B16_0 = L_104;
		G_B16_1 = G_B14_0;
		goto IL_01f7;
	}

IL_01f5:
	{
		uint32_t L_105 = V_3;
		G_B16_0 = ((int64_t)(uint64_t)L_105);
		G_B16_1 = G_B15_0;
	}

IL_01f7:
	{
		G_B16_1->___RelativeOffsetOfLocalHeader_16 = G_B16_0;
		// header.DiskNumberStart = zip64.StartDiskNumber == null
		//                                         ? diskNumberStartSmall
		//                                         : zip64.StartDiskNumber.Value;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_106 = ___1_header;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_107;
		L_107 = Zip64ExtraField_get_StartDiskNumber_m6A797299BED711B7BDBC42993C746F14BE2C49D8_inline((&V_8), NULL);
		V_12 = L_107;
		bool L_108;
		L_108 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_12), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B17_0 = L_106;
		if (!L_108)
		{
			G_B18_0 = L_106;
			goto IL_0221;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_109;
		L_109 = Zip64ExtraField_get_StartDiskNumber_m6A797299BED711B7BDBC42993C746F14BE2C49D8_inline((&V_8), NULL);
		V_12 = L_109;
		int32_t L_110;
		L_110 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_12), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B19_0 = L_110;
		G_B19_1 = G_B17_0;
		goto IL_0222;
	}

IL_0221:
	{
		uint16_t L_111 = V_2;
		G_B19_0 = ((int32_t)(L_111));
		G_B19_1 = G_B18_0;
	}

IL_0222:
	{
		G_B19_1->___DiskNumberStart_13 = G_B19_0;
		// return true;
		return (bool)1;
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
// Conversion methods for marshalling of: Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock
IL2CPP_EXTERN_C void ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshal_pinvoke(const ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036& unmarshaled, ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_pinvoke& marshaled)
{
	marshaled.___Signature_2 = unmarshaled.___Signature_2;
	marshaled.___NumberOfThisDisk_3 = unmarshaled.___NumberOfThisDisk_3;
	marshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory_4 = unmarshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory_4;
	marshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk_5 = unmarshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk_5;
	marshaled.___NumberOfEntriesInTheCentralDirectory_6 = unmarshaled.___NumberOfEntriesInTheCentralDirectory_6;
	marshaled.___SizeOfCentralDirectory_7 = unmarshaled.___SizeOfCentralDirectory_7;
	marshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_8 = unmarshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_8;
	marshaled.___ArchiveComment_9 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___ArchiveComment_9);
}
IL2CPP_EXTERN_C void ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshal_pinvoke_back(const ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_pinvoke& marshaled, ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaledSignature_temp_0 = 0;
	unmarshaledSignature_temp_0 = marshaled.___Signature_2;
	unmarshaled.___Signature_2 = unmarshaledSignature_temp_0;
	uint16_t unmarshaledNumberOfThisDisk_temp_1 = 0;
	unmarshaledNumberOfThisDisk_temp_1 = marshaled.___NumberOfThisDisk_3;
	unmarshaled.___NumberOfThisDisk_3 = unmarshaledNumberOfThisDisk_temp_1;
	uint16_t unmarshaledNumberOfTheDiskWithTheStartOfTheCentralDirectory_temp_2 = 0;
	unmarshaledNumberOfTheDiskWithTheStartOfTheCentralDirectory_temp_2 = marshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory_4;
	unmarshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory_4 = unmarshaledNumberOfTheDiskWithTheStartOfTheCentralDirectory_temp_2;
	uint16_t unmarshaledNumberOfEntriesInTheCentralDirectoryOnThisDisk_temp_3 = 0;
	unmarshaledNumberOfEntriesInTheCentralDirectoryOnThisDisk_temp_3 = marshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk_5;
	unmarshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk_5 = unmarshaledNumberOfEntriesInTheCentralDirectoryOnThisDisk_temp_3;
	uint16_t unmarshaledNumberOfEntriesInTheCentralDirectory_temp_4 = 0;
	unmarshaledNumberOfEntriesInTheCentralDirectory_temp_4 = marshaled.___NumberOfEntriesInTheCentralDirectory_6;
	unmarshaled.___NumberOfEntriesInTheCentralDirectory_6 = unmarshaledNumberOfEntriesInTheCentralDirectory_temp_4;
	uint32_t unmarshaledSizeOfCentralDirectory_temp_5 = 0;
	unmarshaledSizeOfCentralDirectory_temp_5 = marshaled.___SizeOfCentralDirectory_7;
	unmarshaled.___SizeOfCentralDirectory_7 = unmarshaledSizeOfCentralDirectory_temp_5;
	uint32_t unmarshaledOffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_temp_6 = 0;
	unmarshaledOffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_temp_6 = marshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_8;
	unmarshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_8 = unmarshaledOffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_temp_6;
	unmarshaled.___ArchiveComment_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___ArchiveComment_9);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ArchiveComment_9), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___ArchiveComment_9));
}
// Conversion method for clean up from marshalling of: Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock
IL2CPP_EXTERN_C void ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshal_pinvoke_cleanup(ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___ArchiveComment_9);
	marshaled.___ArchiveComment_9 = NULL;
}
// Conversion methods for marshalling of: Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock
IL2CPP_EXTERN_C void ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshal_com(const ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036& unmarshaled, ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_com& marshaled)
{
	marshaled.___Signature_2 = unmarshaled.___Signature_2;
	marshaled.___NumberOfThisDisk_3 = unmarshaled.___NumberOfThisDisk_3;
	marshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory_4 = unmarshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory_4;
	marshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk_5 = unmarshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk_5;
	marshaled.___NumberOfEntriesInTheCentralDirectory_6 = unmarshaled.___NumberOfEntriesInTheCentralDirectory_6;
	marshaled.___SizeOfCentralDirectory_7 = unmarshaled.___SizeOfCentralDirectory_7;
	marshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_8 = unmarshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_8;
	marshaled.___ArchiveComment_9 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___ArchiveComment_9);
}
IL2CPP_EXTERN_C void ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshal_com_back(const ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_com& marshaled, ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaledSignature_temp_0 = 0;
	unmarshaledSignature_temp_0 = marshaled.___Signature_2;
	unmarshaled.___Signature_2 = unmarshaledSignature_temp_0;
	uint16_t unmarshaledNumberOfThisDisk_temp_1 = 0;
	unmarshaledNumberOfThisDisk_temp_1 = marshaled.___NumberOfThisDisk_3;
	unmarshaled.___NumberOfThisDisk_3 = unmarshaledNumberOfThisDisk_temp_1;
	uint16_t unmarshaledNumberOfTheDiskWithTheStartOfTheCentralDirectory_temp_2 = 0;
	unmarshaledNumberOfTheDiskWithTheStartOfTheCentralDirectory_temp_2 = marshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory_4;
	unmarshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory_4 = unmarshaledNumberOfTheDiskWithTheStartOfTheCentralDirectory_temp_2;
	uint16_t unmarshaledNumberOfEntriesInTheCentralDirectoryOnThisDisk_temp_3 = 0;
	unmarshaledNumberOfEntriesInTheCentralDirectoryOnThisDisk_temp_3 = marshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk_5;
	unmarshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk_5 = unmarshaledNumberOfEntriesInTheCentralDirectoryOnThisDisk_temp_3;
	uint16_t unmarshaledNumberOfEntriesInTheCentralDirectory_temp_4 = 0;
	unmarshaledNumberOfEntriesInTheCentralDirectory_temp_4 = marshaled.___NumberOfEntriesInTheCentralDirectory_6;
	unmarshaled.___NumberOfEntriesInTheCentralDirectory_6 = unmarshaledNumberOfEntriesInTheCentralDirectory_temp_4;
	uint32_t unmarshaledSizeOfCentralDirectory_temp_5 = 0;
	unmarshaledSizeOfCentralDirectory_temp_5 = marshaled.___SizeOfCentralDirectory_7;
	unmarshaled.___SizeOfCentralDirectory_7 = unmarshaledSizeOfCentralDirectory_temp_5;
	uint32_t unmarshaledOffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_temp_6 = 0;
	unmarshaledOffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_temp_6 = marshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_8;
	unmarshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_8 = unmarshaledOffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_temp_6;
	unmarshaled.___ArchiveComment_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___ArchiveComment_9);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ArchiveComment_9), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___ArchiveComment_9));
}
// Conversion method for clean up from marshalling of: Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock
IL2CPP_EXTERN_C void ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshal_com_cleanup(ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___ArchiveComment_9);
	marshaled.___ArchiveComment_9 = NULL;
}
// System.Boolean Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock::TryReadBlock(System.IO.BinaryReader,Better.StreamingAssets.ZipArchive.ZipEndOfCentralDirectoryBlock&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipEndOfCentralDirectoryBlock_TryReadBlock_mEEBDCF160CD99D8A41EC4A6C0363F16EF7E3FB4C (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* ___1_eocdBlock, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		// eocdBlock = new ZipEndOfCentralDirectoryBlock();
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_0 = ___1_eocdBlock;
		il2cpp_codegen_initobj(L_0, sizeof(ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036));
		// if ( reader.ReadUInt32() != SignatureConstant )
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)101010256))))
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// eocdBlock.Signature = SignatureConstant;
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_3 = ___1_eocdBlock;
		L_3->___Signature_2 = ((int32_t)101010256);
		// eocdBlock.NumberOfThisDisk = reader.ReadUInt16();
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_4 = ___1_eocdBlock;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = ___0_reader;
		NullCheck(L_5);
		uint16_t L_6;
		L_6 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_5);
		L_4->___NumberOfThisDisk_3 = L_6;
		// eocdBlock.NumberOfTheDiskWithTheStartOfTheCentralDirectory = reader.ReadUInt16();
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_7 = ___1_eocdBlock;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = ___0_reader;
		NullCheck(L_8);
		uint16_t L_9;
		L_9 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_8);
		L_7->___NumberOfTheDiskWithTheStartOfTheCentralDirectory_4 = L_9;
		// eocdBlock.NumberOfEntriesInTheCentralDirectoryOnThisDisk = reader.ReadUInt16();
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_10 = ___1_eocdBlock;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = ___0_reader;
		NullCheck(L_11);
		uint16_t L_12;
		L_12 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_11);
		L_10->___NumberOfEntriesInTheCentralDirectoryOnThisDisk_5 = L_12;
		// eocdBlock.NumberOfEntriesInTheCentralDirectory = reader.ReadUInt16();
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_13 = ___1_eocdBlock;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = ___0_reader;
		NullCheck(L_14);
		uint16_t L_15;
		L_15 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_14);
		L_13->___NumberOfEntriesInTheCentralDirectory_6 = L_15;
		// eocdBlock.SizeOfCentralDirectory = reader.ReadUInt32();
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_16 = ___1_eocdBlock;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_17 = ___0_reader;
		NullCheck(L_17);
		uint32_t L_18;
		L_18 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_17);
		L_16->___SizeOfCentralDirectory_7 = L_18;
		// eocdBlock.OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber = reader.ReadUInt32();
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_19 = ___1_eocdBlock;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_20 = ___0_reader;
		NullCheck(L_20);
		uint32_t L_21;
		L_21 = VirtualFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_20);
		L_19->___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_8 = L_21;
		// ushort commentLength = reader.ReadUInt16();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_22 = ___0_reader;
		NullCheck(L_22);
		uint16_t L_23;
		L_23 = VirtualFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_22);
		V_0 = L_23;
		// eocdBlock.ArchiveComment = reader.ReadBytes(commentLength);
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_24 = ___1_eocdBlock;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_25 = ___0_reader;
		uint16_t L_26 = V_0;
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_25, L_26);
		L_24->___ArchiveComment_9 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___ArchiveComment_9), (void*)L_27);
		// return true;
		return (bool)1;
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
// System.Void Better.StreamingAssets.ZipArchive.ZipHelper::ReadBytes(System.IO.Stream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipHelper_ReadBytes_m873AAC59C7D65FF9CE77ED66B7012D7770A8EC2B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_bytesToRead, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int bytesLeftToRead = bytesToRead;
		int32_t L_0 = ___2_bytesToRead;
		V_0 = L_0;
		// int totalBytesRead = 0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0006:
	{
		// int bytesRead = stream.Read(buffer, totalBytesRead, bytesLeftToRead);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_buffer;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, L_3, L_4);
		V_2 = L_5;
		// if (bytesRead == 0) throw new IOException();
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0019;
		}
	}
	{
		// if (bytesRead == 0) throw new IOException();
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_7 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		IOException__ctor_mF001EA9B9B8DBFBDD9B63B97A5CC6F0D7FD9F2B3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipHelper_ReadBytes_m873AAC59C7D65FF9CE77ED66B7012D7770A8EC2B_RuntimeMethod_var)));
	}

IL_0019:
	{
		// totalBytesRead += bytesRead;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		// bytesLeftToRead -= bytesRead;
		int32_t L_10 = V_0;
		int32_t L_11 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
	}

IL_0021:
	{
		// while (bytesLeftToRead > 0)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Better.StreamingAssets.ZipArchive.ZipHelper::SeekBackwardsToSignature(System.IO.Stream,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipHelper_SeekBackwardsToSignature_m3465A2A9A461BCF8F8E8D82579B17182338C4B4D (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, uint32_t ___1_signatureToFind, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// int bufferPointer = 0;
		V_0 = 0;
		// uint currentSignature = 0;
		V_1 = 0;
		// byte[] buffer = new byte[BackwardsSeekingBufferSize];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_2 = L_0;
		// bool outOfBytes = false;
		V_3 = (bool)0;
		// bool signatureFound = false;
		V_4 = (bool)0;
		goto IL_003c;
	}

IL_0013:
	{
		// outOfBytes = SeekBackwardsAndRead(stream, buffer, out bufferPointer);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_2;
		bool L_3;
		L_3 = ZipHelper_SeekBackwardsAndRead_mFA8B804E147D2F19F68002F7353639C92CBC411D(L_1, L_2, (&V_0), NULL);
		V_3 = L_3;
		goto IL_0034;
	}

IL_001f:
	{
		// currentSignature = (currentSignature << 8) | ((uint)buffer[bufferPointer]);
		uint32_t L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int32_t)(((int32_t)((int32_t)L_4<<8))|(int32_t)L_8));
		// if (currentSignature == signatureToFind)
		uint32_t L_9 = V_1;
		uint32_t L_10 = ___1_signatureToFind;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0030;
		}
	}
	{
		// signatureFound = true;
		V_4 = (bool)1;
		goto IL_0034;
	}

IL_0030:
	{
		// bufferPointer--;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0034:
	{
		// while (bufferPointer >= 0 && !signatureFound)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_001f;
		}
	}

IL_003c:
	{
		// while (!signatureFound && !outOfBytes)
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0043;
		}
	}
	{
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0013;
		}
	}

IL_0043:
	{
		// if (!signatureFound)
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_0049;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0049:
	{
		// stream.Seek(bufferPointer, SeekOrigin.Current);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = ___0_stream;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int64_t L_19;
		L_19 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_17, ((int64_t)L_18), 1);
		// return true;
		return (bool)1;
	}
}
// System.Void Better.StreamingAssets.ZipArchive.ZipHelper::AdvanceToPosition(System.IO.Stream,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipHelper_AdvanceToPosition_m5A4492EBB0D4AA1F633A9E349C76C5844ABD755B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int64_t ___1_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	{
		// long numBytesLeft = position - stream.Position;
		int64_t L_0 = ___1_position;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_1);
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_0, L_2));
		goto IL_0036;
	}

IL_000b:
	{
		// int numBytesToSkip = (numBytesLeft > throwAwayBufferSize) ? throwAwayBufferSize : (int)numBytesLeft;
		int64_t L_3 = V_0;
		if ((((int64_t)L_3) > ((int64_t)((int64_t)((int32_t)64)))))
		{
			goto IL_0015;
		}
	}
	{
		int64_t L_4 = V_0;
		G_B4_0 = ((int32_t)L_4);
		goto IL_0017;
	}

IL_0015:
	{
		G_B4_0 = ((int32_t)64);
	}

IL_0017:
	{
		V_1 = G_B4_0;
		// int numBytesActuallySkipped = stream.Read(new byte[throwAwayBufferSize], 0, numBytesToSkip);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		int32_t L_7 = V_1;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		V_2 = L_8;
		// if (numBytesActuallySkipped == 0)
		int32_t L_9 = V_2;
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		// throw new IOException();
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_10 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		IOException__ctor_mF001EA9B9B8DBFBDD9B63B97A5CC6F0D7FD9F2B3(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipHelper_AdvanceToPosition_m5A4492EBB0D4AA1F633A9E349C76C5844ABD755B_RuntimeMethod_var)));
	}

IL_0031:
	{
		// numBytesLeft -= numBytesActuallySkipped;
		int64_t L_11 = V_0;
		int32_t L_12 = V_2;
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_11, ((int64_t)L_12)));
	}

IL_0036:
	{
		// while (numBytesLeft != 0)
		int64_t L_13 = V_0;
		if (L_13)
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Better.StreamingAssets.ZipArchive.ZipHelper::SeekBackwardsAndRead(System.IO.Stream,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipHelper_SeekBackwardsAndRead_mFA8B804E147D2F19F68002F7353639C92CBC411D (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t* ___2_bufferPointer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (stream.Position >= buffer.Length)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_buffer;
		NullCheck(L_2);
		if ((((int64_t)L_1) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0039;
		}
	}
	{
		// stream.Seek(-buffer.Length, SeekOrigin.Current);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_buffer;
		NullCheck(L_4);
		NullCheck(L_3);
		int64_t L_5;
		L_5 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_3, ((int64_t)((-((int32_t)(((RuntimeArray*)L_4)->max_length))))), 1);
		// ReadBytes(stream, buffer, buffer.Length);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_buffer;
		NullCheck(L_8);
		ZipHelper_ReadBytes_m873AAC59C7D65FF9CE77ED66B7012D7770A8EC2B(L_6, L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
		// stream.Seek(-buffer.Length, SeekOrigin.Current);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_buffer;
		NullCheck(L_10);
		NullCheck(L_9);
		int64_t L_11;
		L_11 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_9, ((int64_t)((-((int32_t)(((RuntimeArray*)L_10)->max_length))))), 1);
		// bufferPointer = buffer.Length - 1;
		int32_t* L_12 = ___2_bufferPointer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___1_buffer;
		NullCheck(L_13);
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), 1));
		// return false;
		return (bool)0;
	}

IL_0039:
	{
		// int bytesToRead = (int)stream.Position;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = ___0_stream;
		NullCheck(L_14);
		int64_t L_15;
		L_15 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_14);
		V_0 = ((int32_t)L_15);
		// stream.Seek(0, SeekOrigin.Begin);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = ___0_stream;
		NullCheck(L_16);
		int64_t L_17;
		L_17 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_16, ((int64_t)0), 0);
		// ReadBytes(stream, buffer, bytesToRead);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_18 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___1_buffer;
		int32_t L_20 = V_0;
		ZipHelper_ReadBytes_m873AAC59C7D65FF9CE77ED66B7012D7770A8EC2B(L_18, L_19, L_20, NULL);
		// stream.Seek(0, SeekOrigin.Begin);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = ___0_stream;
		NullCheck(L_21);
		int64_t L_22;
		L_22 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_21, ((int64_t)0), 0);
		// bufferPointer = bytesToRead - 1;
		int32_t* L_23 = ___2_bufferPointer;
		int32_t L_24 = V_0;
		*((int32_t*)L_23) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1));
		// return true;
		return (bool)1;
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
// System.Void Better.StreamingAssets.ZipArchive.ZipArchiveException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ZipArchiveException(string msg) : base(msg)
		String_t* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// { }
		return;
	}
}
// System.Void Better.StreamingAssets.ZipArchive.ZipArchiveException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchiveException__ctor_m3049042ABD37E1BBE6970CE41F390DD532955AED (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* __this, String_t* ___0_msg, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(msg, inner)
		String_t* L_0 = ___0_msg;
		Exception_t* L_1 = ___1_inner;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// }
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
// System.Void Better.StreamingAssets.ZipArchive.ZipArchiveUtils::ReadEndOfCentralDirectory(System.IO.Stream,System.IO.BinaryReader,System.Int64&,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___1_reader, int64_t* ___2_expectedNumberOfEntries, int64_t* ___3_centralDirectoryStart, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int64_t V_3 = 0;
	Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 V_4;
	memset((&V_4), 0, sizeof(V_4));
	EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* V_5 = NULL;
	IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// stream.Seek(-ZipEndOfCentralDirectoryBlock.SizeOfBlockWithoutSignature, SeekOrigin.End);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
			NullCheck(L_0);
			int64_t L_1;
			L_1 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, ((int64_t)((int32_t)-18)), 2);
			// if (!ZipHelper.SeekBackwardsToSignature(stream, ZipEndOfCentralDirectoryBlock.SignatureConstant))
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
			bool L_3;
			L_3 = ZipHelper_SeekBackwardsToSignature_m3465A2A9A461BCF8F8E8D82579B17182338C4B4D(L_2, ((int32_t)101010256), NULL);
			if (L_3)
			{
				goto IL_0023_1;
			}
		}
		{
			// throw new ZipArchiveException("SignatureConstant");
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_4 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			NullCheck(L_4);
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B528BD170B49C3CB8F50BDEAD2B38212C231624)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_0023_1:
		{
			// long eocdStart = stream.Position;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___0_stream;
			NullCheck(L_5);
			int64_t L_6;
			L_6 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_5);
			V_0 = L_6;
			// bool eocdProper = ZipEndOfCentralDirectoryBlock.TryReadBlock(reader, out eocd);
			BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___1_reader;
			bool L_8;
			L_8 = ZipEndOfCentralDirectoryBlock_TryReadBlock_mEEBDCF160CD99D8A41EC4A6C0363F16EF7E3FB4C(L_7, (&V_1), NULL);
			// if (eocd.NumberOfThisDisk != eocd.NumberOfTheDiskWithTheStartOfTheCentralDirectory)
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_9 = V_1;
			uint16_t L_10 = L_9.___NumberOfThisDisk_3;
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_11 = V_1;
			uint16_t L_12 = L_11.___NumberOfTheDiskWithTheStartOfTheCentralDirectory_4;
			if ((((int32_t)L_10) == ((int32_t)L_12)))
			{
				goto IL_004c_1;
			}
		}
		{
			// throw new ZipArchiveException("SplitSpanned");
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_13 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			NullCheck(L_13);
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A35711F04591C991A81A9D22E0CDE9259A87DCA)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_004c_1:
		{
			// centralDirectoryStart = eocd.OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber;
			int64_t* L_14 = ___3_centralDirectoryStart;
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_15 = V_1;
			uint32_t L_16 = L_15.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_8;
			*((int64_t*)L_14) = (int64_t)((int64_t)(uint64_t)L_16);
			// if (eocd.NumberOfEntriesInTheCentralDirectory != eocd.NumberOfEntriesInTheCentralDirectoryOnThisDisk)
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_17 = V_1;
			uint16_t L_18 = L_17.___NumberOfEntriesInTheCentralDirectory_6;
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_19 = V_1;
			uint16_t L_20 = L_19.___NumberOfEntriesInTheCentralDirectoryOnThisDisk_5;
			if ((((int32_t)L_18) == ((int32_t)L_20)))
			{
				goto IL_006e_1;
			}
		}
		{
			// throw new ZipArchiveException("SplitSpanned");
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_21 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			NullCheck(L_21);
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A35711F04591C991A81A9D22E0CDE9259A87DCA)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_006e_1:
		{
			// expectedNumberOfEntries = eocd.NumberOfEntriesInTheCentralDirectory;
			int64_t* L_22 = ___2_expectedNumberOfEntries;
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_23 = V_1;
			uint16_t L_24 = L_23.___NumberOfEntriesInTheCentralDirectory_6;
			*((int64_t*)L_22) = (int64_t)((int64_t)(uint64_t)L_24);
			// if (eocd.NumberOfThisDisk == ZipHelper.Mask16Bit ||
			//     eocd.OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber == ZipHelper.Mask32Bit ||
			//     eocd.NumberOfEntriesInTheCentralDirectory == ZipHelper.Mask16Bit)
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_25 = V_1;
			uint16_t L_26 = L_25.___NumberOfThisDisk_3;
			if ((((int32_t)L_26) == ((int32_t)((int32_t)65535))))
			{
				goto IL_009d_1;
			}
		}
		{
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_27 = V_1;
			uint32_t L_28 = L_27.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_8;
			if ((((int32_t)L_28) == ((int32_t)(-1))))
			{
				goto IL_009d_1;
			}
		}
		{
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_29 = V_1;
			uint16_t L_30 = L_29.___NumberOfEntriesInTheCentralDirectory_6;
			if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)65535)))))
			{
				goto IL_016b_1;
			}
		}

IL_009d_1:
		{
			// stream.Seek(eocdStart - Zip64EndOfCentralDirectoryLocator.SizeOfBlockWithoutSignature, SeekOrigin.Begin);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_31 = ___0_stream;
			int64_t L_32 = V_0;
			NullCheck(L_31);
			int64_t L_33;
			L_33 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_31, ((int64_t)il2cpp_codegen_subtract(L_32, ((int64_t)((int32_t)16)))), 0);
			// if (ZipHelper.SeekBackwardsToSignature(stream, Zip64EndOfCentralDirectoryLocator.SignatureConstant))
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_34 = ___0_stream;
			bool L_35;
			L_35 = ZipHelper_SeekBackwardsToSignature_m3465A2A9A461BCF8F8E8D82579B17182338C4B4D(L_34, ((int32_t)117853008), NULL);
			if (!L_35)
			{
				goto IL_016b_1;
			}
		}
		{
			// bool zip64eocdLocatorProper = Zip64EndOfCentralDirectoryLocator.TryReadBlock(reader, out locator);
			BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_36 = ___1_reader;
			bool L_37;
			L_37 = Zip64EndOfCentralDirectoryLocator_TryReadBlock_mC1CFF884A9974D065D505E6FBA8DE963B0A9B096(L_36, (&V_2), NULL);
			// if (locator.OffsetOfZip64EOCD > long.MaxValue)
			Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79 L_38 = V_2;
			uint64_t L_39 = L_38.___OffsetOfZip64EOCD_3;
			if ((!(((uint64_t)L_39) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
			{
				goto IL_00df_1;
			}
		}
		{
			// throw new ZipArchiveException("FieldTooBigOffsetToZip64EOCD");
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_40 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			NullCheck(L_40);
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_40, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral636EB8D73825D70BDF3A172729D5FB93E26F1C50)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_00df_1:
		{
			// long zip64EOCDOffset = (long)locator.OffsetOfZip64EOCD;
			Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79 L_41 = V_2;
			uint64_t L_42 = L_41.___OffsetOfZip64EOCD_3;
			V_3 = L_42;
			// stream.Seek(zip64EOCDOffset, SeekOrigin.Begin);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_43 = ___0_stream;
			int64_t L_44 = V_3;
			NullCheck(L_43);
			int64_t L_45;
			L_45 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_43, L_44, 0);
			// if (!Zip64EndOfCentralDirectoryRecord.TryReadBlock(reader, out record))
			BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_46 = ___1_reader;
			bool L_47;
			L_47 = Zip64EndOfCentralDirectoryRecord_TryReadBlock_mA35089F309255B687FFD1A07C4B553FC83045FF3(L_46, (&V_4), NULL);
			if (L_47)
			{
				goto IL_0104_1;
			}
		}
		{
			// throw new ZipArchiveException("Zip64EOCDNotWhereExpected");
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_48 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			NullCheck(L_48);
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_48, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral731311D2159DAC2D5B655503F1BB10A3F2B9929F)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_0104_1:
		{
			// if (record.NumberOfEntriesTotal > long.MaxValue)
			Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 L_49 = V_4;
			uint64_t L_50 = L_49.___NumberOfEntriesTotal_8;
			if ((!(((uint64_t)L_50) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
			{
				goto IL_0121_1;
			}
		}
		{
			// throw new ZipArchiveException("FieldTooBigNumEntries");
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_51 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			NullCheck(L_51);
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_51, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDFF3F023C4F679C61BE466F496005BC400BAD358)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_0121_1:
		{
			// if (record.OffsetOfCentralDirectory > long.MaxValue)
			Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 L_52 = V_4;
			uint64_t L_53 = L_52.___OffsetOfCentralDirectory_10;
			if ((!(((uint64_t)L_53) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
			{
				goto IL_013e_1;
			}
		}
		{
			// throw new ZipArchiveException("FieldTooBigOffsetToCD");
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_54 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			NullCheck(L_54);
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_54, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B52EC354AB10F26E2AE0B6F5773BB8F5D98BB01)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_013e_1:
		{
			// if (record.NumberOfEntriesTotal != record.NumberOfEntriesOnThisDisk)
			Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 L_55 = V_4;
			uint64_t L_56 = L_55.___NumberOfEntriesTotal_8;
			Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 L_57 = V_4;
			uint64_t L_58 = L_57.___NumberOfEntriesOnThisDisk_7;
			if ((((int64_t)L_56) == ((int64_t)L_58)))
			{
				goto IL_0159_1;
			}
		}
		{
			// throw new ZipArchiveException("SplitSpanned");
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_59 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			NullCheck(L_59);
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_59, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A35711F04591C991A81A9D22E0CDE9259A87DCA)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_0159_1:
		{
			// expectedNumberOfEntries = (long)record.NumberOfEntriesTotal;
			int64_t* L_60 = ___2_expectedNumberOfEntries;
			Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 L_61 = V_4;
			uint64_t L_62 = L_61.___NumberOfEntriesTotal_8;
			*((int64_t*)L_60) = (int64_t)L_62;
			// centralDirectoryStart = (long)record.OffsetOfCentralDirectory;
			int64_t* L_63 = ___3_centralDirectoryStart;
			Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 L_64 = V_4;
			uint64_t L_65 = L_64.___OffsetOfCentralDirectory_10;
			*((int64_t*)L_63) = (int64_t)L_65;
		}

IL_016b_1:
		{
			// if (centralDirectoryStart > stream.Length)
			int64_t* L_66 = ___3_centralDirectoryStart;
			int64_t L_67 = *((int64_t*)L_66);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_68 = ___0_stream;
			NullCheck(L_68);
			int64_t L_69;
			L_69 = VirtualFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_68);
			if ((((int64_t)L_67) <= ((int64_t)L_69)))
			{
				goto IL_0180_1;
			}
		}
		{
			// throw new ZipArchiveException("FieldTooBigOffsetToCD");
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_70 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			NullCheck(L_70);
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_70, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B52EC354AB10F26E2AE0B6F5773BB8F5D98BB01)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_0180_1:
		{
			// }
			goto IL_01a0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0182;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0191;
		}
		throw e;
	}

CATCH_0182:
	{// begin catch(System.IO.EndOfStreamException)
		// catch (EndOfStreamException ex)
		V_5 = ((EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)IL2CPP_GET_ACTIVE_EXCEPTION(EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*));
		// throw new ZipArchiveException("CDCorrupt", ex);
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_71 = V_5;
		ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_72 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
		NullCheck(L_72);
		ZipArchiveException__ctor_m3049042ABD37E1BBE6970CE41F390DD532955AED(L_72, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68509826B9B4E2C36849372302835C2CD03B9DDF)), L_71, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_72, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
	}// end catch (depth: 1)

CATCH_0191:
	{// begin catch(System.IO.IOException)
		// catch (IOException ex)
		V_6 = ((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IL2CPP_GET_ACTIVE_EXCEPTION(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*));
		// throw new ZipArchiveException("CDCorrupt", ex);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_73 = V_6;
		ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_74 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
		NullCheck(L_74);
		ZipArchiveException__ctor_m3049042ABD37E1BBE6970CE41F390DD532955AED(L_74, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68509826B9B4E2C36849372302835C2CD03B9DDF)), L_73, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_01a0:
	{
		// }
		return;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ZipGenericExtraField_get_Tag_m759B6ECFDBC6D044352C08FB434AEC491B3E41E4_inline (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) 
{
	{
		// public ushort Tag { get { return _tag; } }
		uint16_t L_0 = __this->____tag_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ZipGenericExtraField_get_Size_mFEE59D1C38FA6DDB6FEDF1607A19FF167B4B7422_inline (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) 
{
	{
		// public ushort Size { get { return _size; } }
		uint16_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipGenericExtraField_get_Data_mF8133FF89E762F3B70FCF61010858511B7137296_inline (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] Data { get { return _data; } }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_UncompressedSize_m6DCFFD258F31202A9EDE82F260B284F2CBAC641F_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		// get { return _uncompressedSize; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->____uncompressedSize_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_CompressedSize_m990D9DD08B3C53024636DF0802E25B88075D603D_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		// get { return _compressedSize; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->____compressedSize_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_LocalHeaderOffset_m232842FCC1BF48E123B2716FBAC8B769F0B2B07A_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		// get { return _localHeaderOffset; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->____localHeaderOffset_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Zip64ExtraField_get_StartDiskNumber_m6A797299BED711B7BDBC42993C746F14BE2C49D8_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		// public int? StartDiskNumber { get { return _startDiskNumber; } }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->____startDiskNumber_6;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = (int64_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
