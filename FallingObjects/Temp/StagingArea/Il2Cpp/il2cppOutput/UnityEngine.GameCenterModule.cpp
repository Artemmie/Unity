#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t1BFB510F36185F9A4F92D85E8B71E865F25C9547;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.Impl.Score>
struct IEnumerable_1_tECE04CC2ECE0CDF1B8CB030C0620F15F8A9E15B2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>
struct List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>
struct List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>
struct List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>
struct List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>
struct List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64;
// System.Comparison`1<System.Object>
struct Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4;
// System.Comparison`1<UnityEngine.SocialPlatforms.Impl.Score>
struct Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_t7071592562FA847344065DBB0352B1DE4937671A;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_tBC76330E834731738E32468FA46DAE98003D48D6;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t8EC2280EF29BB961820B7DF6D14E28EEE6CCF315;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C;
// UnityEngine.SocialPlatforms.ISocialPlatform
struct ISocialPlatform_tA84A16F8E6959FFAFE619CE9F69F26DEF58FB347;
// UnityEngine.SocialPlatforms.IUserProfile
struct IUserProfile_tC713F9B213435D4D58FDFA96118E02F5BC90FBF1;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t2E09F4A316E4A9274CF8B7BF231DE9AEBE02F062;
// UnityEngine.SocialPlatforms.Impl.Achievement[]
struct AchievementU5BU5D_tFAD38AD7FF5A106BD7E7F04CC31D89D28C54ACB2;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE;
// UnityEngine.SocialPlatforms.Impl.Leaderboard[]
struct LeaderboardU5BU5D_t1BDEF309EA07A5E6C330EEE19B37851793EF7D47;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7;
// UnityEngine.SocialPlatforms.Impl.Score[]
struct ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F;
// UnityEngine.SocialPlatforms.Local
struct Local_t36C367EABFCE034400B659818ACAFCFB79532DD8;
// UnityEngine.SocialPlatforms.Local/<>c
struct U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;

IL2CPP_EXTERN_C RuntimeClass* AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ActivePlatform_t0EC8A845B947135B6186549342A319C4732330CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocalUser_tBC76330E834731738E32468FA46DAE98003D48D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISocialPlatform_tA84A16F8E6959FFAFE619CE9F69F26DEF58FB347_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUserProfile_tC713F9B213435D4D58FDFA96118E02F5BC90FBF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeScope_t33ED9CE3541B951879D86F5AE6A8D9389E7A2369_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserScope_t85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserState_t84B00958348DD8A2B8778416E393E229DACA5871_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral027F4971DD3332133339CBB9B57BF0B95CB65430;
IL2CPP_EXTERN_C String_t* _stringLiteral0477D720ADF7C715B04850723531A5FB1BC5334B;
IL2CPP_EXTERN_C String_t* _stringLiteral08CBA857A5DE4022414F7CE839DFC4766B390294;
IL2CPP_EXTERN_C String_t* _stringLiteral1F16F17DCCB65BA2BEC7489F939C0E2749FDBBB5;
IL2CPP_EXTERN_C String_t* _stringLiteral265DC298E8767361F7E407E746C90F399678A5EA;
IL2CPP_EXTERN_C String_t* _stringLiteral26D83672EED4626917D0F85ACF094DBE00825A18;
IL2CPP_EXTERN_C String_t* _stringLiteral2B7C4780BB971C2A61FD3F0AB9F791B141B6E741;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9658F6520F0A30BFD3FBBFA58A17334E3E00C9;
IL2CPP_EXTERN_C String_t* _stringLiteral42DAB97C3BCEDBB413ABF258F77AAB0D74633D8E;
IL2CPP_EXTERN_C String_t* _stringLiteral48FDE3D64619929F3AB6F64953B06E1D041BF901;
IL2CPP_EXTERN_C String_t* _stringLiteral49732DD0BE0358B3934E602E967FD14340D1332B;
IL2CPP_EXTERN_C String_t* _stringLiteral4CC7489DB09442789296588DEED5B13755F04C1E;
IL2CPP_EXTERN_C String_t* _stringLiteral4DF99DBEDEA32D558EB262C2A1D110890DE30F43;
IL2CPP_EXTERN_C String_t* _stringLiteral5003363E5CB018557F29B288930163BD510D2DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral54E07AAD9D8E5B8EFD70FD637020B8A9F045F9E3;
IL2CPP_EXTERN_C String_t* _stringLiteral550953B107B624696F36DB8EBFB929B7F08304AD;
IL2CPP_EXTERN_C String_t* _stringLiteral568DA39971E20BA77635B1C57ABEA0BF8ABEF12E;
IL2CPP_EXTERN_C String_t* _stringLiteral5803B4028B2BCC2407085C7907272F325290C24D;
IL2CPP_EXTERN_C String_t* _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808;
IL2CPP_EXTERN_C String_t* _stringLiteral617550C78D461318811168687509E38FEF067A10;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1BC8FA99BE66A6796E385BC8EA6987D4A12A9A;
IL2CPP_EXTERN_C String_t* _stringLiteral70B8DCB93382715A55CE5F2A8356EF5636A2D2DA;
IL2CPP_EXTERN_C String_t* _stringLiteral740DE72C99D12A8838B9D5963E79A792386D3153;
IL2CPP_EXTERN_C String_t* _stringLiteral754375837F6DAF986BD4346249CB1B350C35CC4B;
IL2CPP_EXTERN_C String_t* _stringLiteral8661D3599B920E41DFE26D529DBCA1496B0EFBA0;
IL2CPP_EXTERN_C String_t* _stringLiteral8FDEBF0AF1CEC8C9489BE3D5F16DCD9A5ADC458C;
IL2CPP_EXTERN_C String_t* _stringLiteral926DDA883ABC3AB1E01EEBAEC47673C447DF84A0;
IL2CPP_EXTERN_C String_t* _stringLiteral92A5E6C4902DDA52751E281094426240C8944490;
IL2CPP_EXTERN_C String_t* _stringLiteral9828034F45C139F3D0314872CEE30463ECE9B196;
IL2CPP_EXTERN_C String_t* _stringLiteral9F6BF828C80134B8D3E07B058045FBA6ACD4E9AC;
IL2CPP_EXTERN_C String_t* _stringLiteralA4631E8AE7E52890526F1EA9A08639AE65981DDA;
IL2CPP_EXTERN_C String_t* _stringLiteralA4F54419021E432252DCDF769ECEAD617121B28B;
IL2CPP_EXTERN_C String_t* _stringLiteralA5B1D7E217AA227D5B2B8A84920780CF637960E2;
IL2CPP_EXTERN_C String_t* _stringLiteralA7CA7B1F3D188ED94554AEF2B05FAB89C78261EB;
IL2CPP_EXTERN_C String_t* _stringLiteralA95E85AED56318093B024674E217CAE0BD30241D;
IL2CPP_EXTERN_C String_t* _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
IL2CPP_EXTERN_C String_t* _stringLiteralBA4B7E03C5C48B5FEA1B3B5D31ABC0252665C398;
IL2CPP_EXTERN_C String_t* _stringLiteralBD885F10FA0D22AEE03FFF24AE6A90D48B31321B;
IL2CPP_EXTERN_C String_t* _stringLiteralBF048ABFE5FA262766B7609CD01E051E0B5C178F;
IL2CPP_EXTERN_C String_t* _stringLiteralBFB6493FC5964441D97AFB1C25EB1C5519603B7D;
IL2CPP_EXTERN_C String_t* _stringLiteralC2C1B773D7D0718F17E39967C33CD04693F38B30;
IL2CPP_EXTERN_C String_t* _stringLiteralCA2A618878FF43CA6FA209E60D18B7CBF474C60F;
IL2CPP_EXTERN_C String_t* _stringLiteralCB04B51FB3F680D030A5B8C7E0A73BB5C5CCBD4D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD01903921EA24941C26A48F2CEC24E0BB0E8CC7;
IL2CPP_EXTERN_C String_t* _stringLiteralDD71F9B1977FF241C905ADF54B9AA5AB354382AB;
IL2CPP_EXTERN_C String_t* _stringLiteralE3CBBA8883FE746C6E35783C9404B4BC0C7EE9EB;
IL2CPP_EXTERN_C String_t* _stringLiteralE64D664B335757AB1B0ED70DC6883A5F412BE34B;
IL2CPP_EXTERN_C String_t* _stringLiteralE706F847995401E8CBBA7408E05EF0DF94B72BA8;
IL2CPP_EXTERN_C String_t* _stringLiteralE88317F355542B26DF5C6B5E2FB52E3C082B2592;
IL2CPP_EXTERN_C String_t* _stringLiteralF1B47A277576955BBB83E370BA3C6480EE94FCB2;
IL2CPP_EXTERN_C String_t* _stringLiteralF21D6CDABDCB17717294FD4F8F1CD49DA96EDE4C;
IL2CPP_EXTERN_C String_t* _stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mE8B327A6CD91617BABE5A4560CD805117DF88124_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_m6D4E1A85CBCE7A500D84FBF1E8702BD084D0483D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF8AA68C34CB65C75FBD9AEB6ABC6CF4D72F02597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDF757D93FE105ABE64D1F5B0ECE23BF3D3DFFF18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD7AD9409035820C58260143C157A30EAF069FCA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6D65148007B430EA44875BCB51D06B7006488635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBBD8D195322BC92F4CB52CAF88483175A7117F9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC6425B7F16854516C83A26D467C6D021B73AE159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD78E5619872CDF61E8AA7F1AAC6F7B4E73DA35BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5CDCC9F159719CF0A2618A96D0554B69D868F74F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m47E0FFB3EE4095F92A4FF08670E9665FD9290F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m001328719E67CA752D298FD3010C4BA10A1FAC1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m112E9FC5F574771B3C6F6C2A1D0542C5135374F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1A43BA5D23AD9736CE19353445249FA41CBB0881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3AE06D7A687E3A376BDCEABBC9A17708DBDA5F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m68F412E3E266C22241C91716CA2F59F28E3FB936_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8A81ACE3D29D0909B83BC4E5F0B8F6345CD73B48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE88377B977045BB2CFF1BB1C6A01314FA5D652E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m98C369774232081068766C8C45C824E4C58E7018_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m48B3BD0AD770404ED4C2DE64780586E332403975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSortScoresU3Eb__20_0_m15C13CD2E74E140E5D681A53F17137D88BDDD251_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AchievementDescription_ToString_m9EAC0DB1813D2BE3DF823FED5185B2AEDD49BCD0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ActivePlatform_SelectSocialPlatform_m27C01C886A801C5186461E31572B55A8068961F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ActivePlatform_get_Instance_mC73120CFC6D5F26A916F84399DE7FE626419AC69_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ActivePlatform_set_Instance_m8F17B7F1A691A9985C31546F272D1BDD7F1504F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Leaderboard_ToString_mB512C42B4ADE3A04D903351568DD78E3E309A2BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Leaderboard__ctor_m8F95E90F59DC4DDAE4E51DA78AEEE3BD8152E058_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Leaderboard_get_loading_mBC455F8805B539A0D5E977AAB5469220AAE3DE2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LocalUser_Authenticate_m8A6133B127110888EA9B2A213E2D3D8891003E99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LocalUser__ctor_mF6CF1AB0E708BF7D9A03A2D9920C228AD76B7CAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Local_CreateDummyTexture_m969385B8AC3B7F1947810406115B7896E4E89BA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Local_LoadScores_mAF479B25EC75F8B24D520B1935FDC7593F892A6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Local_PopulateStaticData_m4D92DEBCBECD3B8044DC4088853251265D7C941C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Local_ReportScore_mA2B1D36DCEF62FF1B215936D384C08FE2803C583_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Local_SortScores_mA90A566DF5BEA2376269D34B09C4A74D4BF6E179_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Local_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m37DE6554BC122DA4074F5C6E014848666ED6C42B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Local_UnityEngine_SocialPlatforms_ISocialPlatform_GetLoading_mD5AB952844A45DB2EB55B8E91502CFAF248F3BB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Local_VerifyUser_mCB2E078FCF865DEC7E6C895F726AEBD70CB557D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Local__cctor_mF5DDF3546FB61F0A4E373CFFB3351314F5E9C66B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Local__ctor_m18A130860CC620F4FEAA697A0111611959359178_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Local_get_localUser_m08EA00C8446521CBFF4604D1EF47930CF24C5485_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Score_ToString_m11F1EEABEE6073309E0FE0249E2AD2AAC69E1636_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Score__ctor_m0357B385C1CB627C9516F42B25E03E4762CDB31E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Social_LoadScores_m709963941DB14B9F350C35AD4BBC1D03987985F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Social_ReportScore_mB1EA0AF7FDA0DC345426529FDA1A8C3AFC106621_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Social_get_localUser_mD608DD78286090D0333C30734D4A7B4C552BDB9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mFCA9448A5C4C54A8E0F677F0916B192EBD9DA71E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UserProfile_ToString_m0D81902057D869B99523E31058A406A8CACB36FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UserProfile__ctor_mF78D833C03B1DF5100C4B3F6A8881F7D87139B37_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C;
struct IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0;
struct ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C;
struct UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t188571242096CC1D2BEFEA0CA619B862EF745D19 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>
struct  List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AchievementU5BU5D_tFAD38AD7FF5A106BD7E7F04CC31D89D28C54ACB2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD, ____items_1)); }
	inline AchievementU5BU5D_tFAD38AD7FF5A106BD7E7F04CC31D89D28C54ACB2* get__items_1() const { return ____items_1; }
	inline AchievementU5BU5D_tFAD38AD7FF5A106BD7E7F04CC31D89D28C54ACB2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AchievementU5BU5D_tFAD38AD7FF5A106BD7E7F04CC31D89D28C54ACB2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AchievementU5BU5D_tFAD38AD7FF5A106BD7E7F04CC31D89D28C54ACB2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD_StaticFields, ____emptyArray_5)); }
	inline AchievementU5BU5D_tFAD38AD7FF5A106BD7E7F04CC31D89D28C54ACB2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AchievementU5BU5D_tFAD38AD7FF5A106BD7E7F04CC31D89D28C54ACB2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AchievementU5BU5D_tFAD38AD7FF5A106BD7E7F04CC31D89D28C54ACB2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>
struct  List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AchievementDescriptionU5BU5D_t2E09F4A316E4A9274CF8B7BF231DE9AEBE02F062* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B, ____items_1)); }
	inline AchievementDescriptionU5BU5D_t2E09F4A316E4A9274CF8B7BF231DE9AEBE02F062* get__items_1() const { return ____items_1; }
	inline AchievementDescriptionU5BU5D_t2E09F4A316E4A9274CF8B7BF231DE9AEBE02F062** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AchievementDescriptionU5BU5D_t2E09F4A316E4A9274CF8B7BF231DE9AEBE02F062* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AchievementDescriptionU5BU5D_t2E09F4A316E4A9274CF8B7BF231DE9AEBE02F062* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B_StaticFields, ____emptyArray_5)); }
	inline AchievementDescriptionU5BU5D_t2E09F4A316E4A9274CF8B7BF231DE9AEBE02F062* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AchievementDescriptionU5BU5D_t2E09F4A316E4A9274CF8B7BF231DE9AEBE02F062** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AchievementDescriptionU5BU5D_t2E09F4A316E4A9274CF8B7BF231DE9AEBE02F062* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>
struct  List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LeaderboardU5BU5D_t1BDEF309EA07A5E6C330EEE19B37851793EF7D47* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB, ____items_1)); }
	inline LeaderboardU5BU5D_t1BDEF309EA07A5E6C330EEE19B37851793EF7D47* get__items_1() const { return ____items_1; }
	inline LeaderboardU5BU5D_t1BDEF309EA07A5E6C330EEE19B37851793EF7D47** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LeaderboardU5BU5D_t1BDEF309EA07A5E6C330EEE19B37851793EF7D47* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	LeaderboardU5BU5D_t1BDEF309EA07A5E6C330EEE19B37851793EF7D47* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB_StaticFields, ____emptyArray_5)); }
	inline LeaderboardU5BU5D_t1BDEF309EA07A5E6C330EEE19B37851793EF7D47* get__emptyArray_5() const { return ____emptyArray_5; }
	inline LeaderboardU5BU5D_t1BDEF309EA07A5E6C330EEE19B37851793EF7D47** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(LeaderboardU5BU5D_t1BDEF309EA07A5E6C330EEE19B37851793EF7D47* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>
struct  List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59, ____items_1)); }
	inline ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C* get__items_1() const { return ____items_1; }
	inline ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59_StaticFields, ____emptyArray_5)); }
	inline ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>
struct  List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64, ____items_1)); }
	inline UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F* get__items_1() const { return ____items_1; }
	inline UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64_StaticFields, ____emptyArray_5)); }
	inline UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Social
struct  Social_t386079ECBB8389690EA3B5B4680AFC2B3A897755  : public RuntimeObject
{
public:

public:
};


// UnityEngine.SocialPlatforms.ActivePlatform
struct  ActivePlatform_t0EC8A845B947135B6186549342A319C4732330CD  : public RuntimeObject
{
public:

public:
};

struct ActivePlatform_t0EC8A845B947135B6186549342A319C4732330CD_StaticFields
{
public:
	// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::_active
	RuntimeObject* ____active_0;

public:
	inline static int32_t get_offset_of__active_0() { return static_cast<int32_t>(offsetof(ActivePlatform_t0EC8A845B947135B6186549342A319C4732330CD_StaticFields, ____active_0)); }
	inline RuntimeObject* get__active_0() const { return ____active_0; }
	inline RuntimeObject** get_address_of__active_0() { return &____active_0; }
	inline void set__active_0(RuntimeObject* value)
	{
		____active_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____active_0), (void*)value);
	}
};


// UnityEngine.SocialPlatforms.Impl.Achievement
struct  Achievement_t853D7B9496E1B0395F9DC4EC4B6C677A82498633  : public RuntimeObject
{
public:

public:
};


// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct  AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Title
	String_t* ___m_Title_0;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Image
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_Image_1;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_AchievedDescription
	String_t* ___m_AchievedDescription_2;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_3;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Hidden
	bool ___m_Hidden_4;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Points
	int32_t ___m_Points_5;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_Title_0() { return static_cast<int32_t>(offsetof(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7, ___m_Title_0)); }
	inline String_t* get_m_Title_0() const { return ___m_Title_0; }
	inline String_t** get_address_of_m_Title_0() { return &___m_Title_0; }
	inline void set_m_Title_0(String_t* value)
	{
		___m_Title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Title_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7, ___m_Image_1)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_2() { return static_cast<int32_t>(offsetof(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7, ___m_AchievedDescription_2)); }
	inline String_t* get_m_AchievedDescription_2() const { return ___m_AchievedDescription_2; }
	inline String_t** get_address_of_m_AchievedDescription_2() { return &___m_AchievedDescription_2; }
	inline void set_m_AchievedDescription_2(String_t* value)
	{
		___m_AchievedDescription_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AchievedDescription_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_3() { return static_cast<int32_t>(offsetof(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7, ___m_UnachievedDescription_3)); }
	inline String_t* get_m_UnachievedDescription_3() const { return ___m_UnachievedDescription_3; }
	inline String_t** get_address_of_m_UnachievedDescription_3() { return &___m_UnachievedDescription_3; }
	inline void set_m_UnachievedDescription_3(String_t* value)
	{
		___m_UnachievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnachievedDescription_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hidden_4() { return static_cast<int32_t>(offsetof(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7, ___m_Hidden_4)); }
	inline bool get_m_Hidden_4() const { return ___m_Hidden_4; }
	inline bool* get_address_of_m_Hidden_4() { return &___m_Hidden_4; }
	inline void set_m_Hidden_4(bool value)
	{
		___m_Hidden_4 = value;
	}

	inline static int32_t get_offset_of_m_Points_5() { return static_cast<int32_t>(offsetof(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7, ___m_Points_5)); }
	inline int32_t get_m_Points_5() const { return ___m_Points_5; }
	inline int32_t* get_address_of_m_Points_5() { return &___m_Points_5; }
	inline void set_m_Points_5(int32_t value)
	{
		___m_Points_5 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_6), (void*)value);
	}
};


// UnityEngine.SocialPlatforms.Local
struct  Local_t36C367EABFCE034400B659818ACAFCFB79532DD8  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile> UnityEngine.SocialPlatforms.Local::m_Friends
	List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * ___m_Friends_1;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile> UnityEngine.SocialPlatforms.Local::m_Users
	List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * ___m_Users_2;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription> UnityEngine.SocialPlatforms.Local::m_AchievementDescriptions
	List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B * ___m_AchievementDescriptions_3;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement> UnityEngine.SocialPlatforms.Local::m_Achievements
	List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD * ___m_Achievements_4;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard> UnityEngine.SocialPlatforms.Local::m_Leaderboards
	List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB * ___m_Leaderboards_5;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Local::m_DefaultTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_DefaultTexture_6;

public:
	inline static int32_t get_offset_of_m_Friends_1() { return static_cast<int32_t>(offsetof(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8, ___m_Friends_1)); }
	inline List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * get_m_Friends_1() const { return ___m_Friends_1; }
	inline List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 ** get_address_of_m_Friends_1() { return &___m_Friends_1; }
	inline void set_m_Friends_1(List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * value)
	{
		___m_Friends_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Friends_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Users_2() { return static_cast<int32_t>(offsetof(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8, ___m_Users_2)); }
	inline List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * get_m_Users_2() const { return ___m_Users_2; }
	inline List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 ** get_address_of_m_Users_2() { return &___m_Users_2; }
	inline void set_m_Users_2(List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * value)
	{
		___m_Users_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Users_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_AchievementDescriptions_3() { return static_cast<int32_t>(offsetof(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8, ___m_AchievementDescriptions_3)); }
	inline List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B * get_m_AchievementDescriptions_3() const { return ___m_AchievementDescriptions_3; }
	inline List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B ** get_address_of_m_AchievementDescriptions_3() { return &___m_AchievementDescriptions_3; }
	inline void set_m_AchievementDescriptions_3(List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B * value)
	{
		___m_AchievementDescriptions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AchievementDescriptions_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Achievements_4() { return static_cast<int32_t>(offsetof(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8, ___m_Achievements_4)); }
	inline List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD * get_m_Achievements_4() const { return ___m_Achievements_4; }
	inline List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD ** get_address_of_m_Achievements_4() { return &___m_Achievements_4; }
	inline void set_m_Achievements_4(List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD * value)
	{
		___m_Achievements_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Achievements_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Leaderboards_5() { return static_cast<int32_t>(offsetof(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8, ___m_Leaderboards_5)); }
	inline List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB * get_m_Leaderboards_5() const { return ___m_Leaderboards_5; }
	inline List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB ** get_address_of_m_Leaderboards_5() { return &___m_Leaderboards_5; }
	inline void set_m_Leaderboards_5(List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB * value)
	{
		___m_Leaderboards_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Leaderboards_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultTexture_6() { return static_cast<int32_t>(offsetof(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8, ___m_DefaultTexture_6)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_DefaultTexture_6() const { return ___m_DefaultTexture_6; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_DefaultTexture_6() { return &___m_DefaultTexture_6; }
	inline void set_m_DefaultTexture_6(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_DefaultTexture_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultTexture_6), (void*)value);
	}
};

struct Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_StaticFields
{
public:
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.Local::m_LocalUser
	LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * ___m_LocalUser_0;

public:
	inline static int32_t get_offset_of_m_LocalUser_0() { return static_cast<int32_t>(offsetof(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_StaticFields, ___m_LocalUser_0)); }
	inline LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * get_m_LocalUser_0() const { return ___m_LocalUser_0; }
	inline LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 ** get_address_of_m_LocalUser_0() { return &___m_LocalUser_0; }
	inline void set_m_LocalUser_0(LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * value)
	{
		___m_LocalUser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalUser_0), (void*)value);
	}
};


// UnityEngine.SocialPlatforms.Local_<>c
struct  U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_StaticFields
{
public:
	// UnityEngine.SocialPlatforms.Local_<>c UnityEngine.SocialPlatforms.Local_<>c::<>9
	U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD * ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.SocialPlatforms.Impl.Score> UnityEngine.SocialPlatforms.Local_<>c::<>9__20_0
	Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 * ___U3CU3E9__20_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_0_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.SocialPlatforms.Impl.Leaderboard>
struct  Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259, ___list_0)); }
	inline List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB * get_list_0() const { return ___list_0; }
	inline List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259, ___current_3)); }
	inline Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * get_current_3() const { return ___current_3; }
	inline Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.SocialPlatforms.Range
struct  Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.SocialPlatforms.Impl.Score
struct  Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7  : public RuntimeObject
{
public:
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Score::m_Date
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_Date_0;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_FormattedValue
	String_t* ___m_FormattedValue_1;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_UserID
	String_t* ___m_UserID_2;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.Score::m_Rank
	int32_t ___m_Rank_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::<leaderboardID>k__BackingField
	String_t* ___U3CleaderboardIDU3Ek__BackingField_4;
	// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::<value>k__BackingField
	int64_t ___U3CvalueU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_Date_0() { return static_cast<int32_t>(offsetof(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7, ___m_Date_0)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_Date_0() const { return ___m_Date_0; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_Date_0() { return &___m_Date_0; }
	inline void set_m_Date_0(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_Date_0 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_1() { return static_cast<int32_t>(offsetof(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7, ___m_FormattedValue_1)); }
	inline String_t* get_m_FormattedValue_1() const { return ___m_FormattedValue_1; }
	inline String_t** get_address_of_m_FormattedValue_1() { return &___m_FormattedValue_1; }
	inline void set_m_FormattedValue_1(String_t* value)
	{
		___m_FormattedValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FormattedValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UserID_2() { return static_cast<int32_t>(offsetof(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7, ___m_UserID_2)); }
	inline String_t* get_m_UserID_2() const { return ___m_UserID_2; }
	inline String_t** get_address_of_m_UserID_2() { return &___m_UserID_2; }
	inline void set_m_UserID_2(String_t* value)
	{
		___m_UserID_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserID_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Rank_3() { return static_cast<int32_t>(offsetof(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7, ___m_Rank_3)); }
	inline int32_t get_m_Rank_3() const { return ___m_Rank_3; }
	inline int32_t* get_address_of_m_Rank_3() { return &___m_Rank_3; }
	inline void set_m_Rank_3(int32_t value)
	{
		___m_Rank_3 = value;
	}

	inline static int32_t get_offset_of_U3CleaderboardIDU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7, ___U3CleaderboardIDU3Ek__BackingField_4)); }
	inline String_t* get_U3CleaderboardIDU3Ek__BackingField_4() const { return ___U3CleaderboardIDU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CleaderboardIDU3Ek__BackingField_4() { return &___U3CleaderboardIDU3Ek__BackingField_4; }
	inline void set_U3CleaderboardIDU3Ek__BackingField_4(String_t* value)
	{
		___U3CleaderboardIDU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleaderboardIDU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7, ___U3CvalueU3Ek__BackingField_5)); }
	inline int64_t get_U3CvalueU3Ek__BackingField_5() const { return ___U3CvalueU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CvalueU3Ek__BackingField_5() { return &___U3CvalueU3Ek__BackingField_5; }
	inline void set_U3CvalueU3Ek__BackingField_5(int64_t value)
	{
		___U3CvalueU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.SocialPlatforms.TimeScope
struct  TimeScope_t33ED9CE3541B951879D86F5AE6A8D9389E7A2369 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeScope_t33ED9CE3541B951879D86F5AE6A8D9389E7A2369, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.UserScope
struct  UserScope_t85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserScope_t85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.UserState
struct  UserState_t84B00958348DD8A2B8778416E393E229DACA5871 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserState_t84B00958348DD8A2B8778416E393E229DACA5871, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct  Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Loading
	bool ___m_Loading_0;
	// UnityEngine.SocialPlatforms.IScore UnityEngine.SocialPlatforms.Impl.Leaderboard::m_LocalUserScore
	RuntimeObject* ___m_LocalUserScore_1;
	// System.UInt32 UnityEngine.SocialPlatforms.Impl.Leaderboard::m_MaxRange
	uint32_t ___m_MaxRange_2;
	// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Scores
	IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* ___m_Scores_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Title
	String_t* ___m_Title_4;
	// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_UserIDs
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_UserIDs_5;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;
	// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<userScope>k__BackingField
	int32_t ___U3CuserScopeU3Ek__BackingField_7;
	// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::<range>k__BackingField
	Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  ___U3CrangeU3Ek__BackingField_8;
	// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<timeScope>k__BackingField
	int32_t ___U3CtimeScopeU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_Loading_0() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___m_Loading_0)); }
	inline bool get_m_Loading_0() const { return ___m_Loading_0; }
	inline bool* get_address_of_m_Loading_0() { return &___m_Loading_0; }
	inline void set_m_Loading_0(bool value)
	{
		___m_Loading_0 = value;
	}

	inline static int32_t get_offset_of_m_LocalUserScore_1() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___m_LocalUserScore_1)); }
	inline RuntimeObject* get_m_LocalUserScore_1() const { return ___m_LocalUserScore_1; }
	inline RuntimeObject** get_address_of_m_LocalUserScore_1() { return &___m_LocalUserScore_1; }
	inline void set_m_LocalUserScore_1(RuntimeObject* value)
	{
		___m_LocalUserScore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalUserScore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxRange_2() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___m_MaxRange_2)); }
	inline uint32_t get_m_MaxRange_2() const { return ___m_MaxRange_2; }
	inline uint32_t* get_address_of_m_MaxRange_2() { return &___m_MaxRange_2; }
	inline void set_m_MaxRange_2(uint32_t value)
	{
		___m_MaxRange_2 = value;
	}

	inline static int32_t get_offset_of_m_Scores_3() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___m_Scores_3)); }
	inline IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* get_m_Scores_3() const { return ___m_Scores_3; }
	inline IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C** get_address_of_m_Scores_3() { return &___m_Scores_3; }
	inline void set_m_Scores_3(IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* value)
	{
		___m_Scores_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scores_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Title_4() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___m_Title_4)); }
	inline String_t* get_m_Title_4() const { return ___m_Title_4; }
	inline String_t** get_address_of_m_Title_4() { return &___m_Title_4; }
	inline void set_m_Title_4(String_t* value)
	{
		___m_Title_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Title_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_UserIDs_5() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___m_UserIDs_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_UserIDs_5() const { return ___m_UserIDs_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_UserIDs_5() { return &___m_UserIDs_5; }
	inline void set_m_UserIDs_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_UserIDs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserIDs_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuserScopeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___U3CuserScopeU3Ek__BackingField_7)); }
	inline int32_t get_U3CuserScopeU3Ek__BackingField_7() const { return ___U3CuserScopeU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CuserScopeU3Ek__BackingField_7() { return &___U3CuserScopeU3Ek__BackingField_7; }
	inline void set_U3CuserScopeU3Ek__BackingField_7(int32_t value)
	{
		___U3CuserScopeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CrangeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___U3CrangeU3Ek__BackingField_8)); }
	inline Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  get_U3CrangeU3Ek__BackingField_8() const { return ___U3CrangeU3Ek__BackingField_8; }
	inline Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC * get_address_of_U3CrangeU3Ek__BackingField_8() { return &___U3CrangeU3Ek__BackingField_8; }
	inline void set_U3CrangeU3Ek__BackingField_8(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  value)
	{
		___U3CrangeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CtimeScopeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___U3CtimeScopeU3Ek__BackingField_9)); }
	inline int32_t get_U3CtimeScopeU3Ek__BackingField_9() const { return ___U3CtimeScopeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CtimeScopeU3Ek__BackingField_9() { return &___U3CtimeScopeU3Ek__BackingField_9; }
	inline void set_U3CtimeScopeU3Ek__BackingField_9(int32_t value)
	{
		___U3CtimeScopeU3Ek__BackingField_9 = value;
	}
};


// UnityEngine.SocialPlatforms.Impl.UserProfile
struct  UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_UserName
	String_t* ___m_UserName_0;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_ID
	String_t* ___m_ID_1;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::m_IsFriend
	bool ___m_IsFriend_2;
	// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::m_State
	int32_t ___m_State_3;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.UserProfile::m_Image
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_Image_4;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_gameID
	String_t* ___m_gameID_5;

public:
	inline static int32_t get_offset_of_m_UserName_0() { return static_cast<int32_t>(offsetof(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E, ___m_UserName_0)); }
	inline String_t* get_m_UserName_0() const { return ___m_UserName_0; }
	inline String_t** get_address_of_m_UserName_0() { return &___m_UserName_0; }
	inline void set_m_UserName_0(String_t* value)
	{
		___m_UserName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ID_1() { return static_cast<int32_t>(offsetof(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E, ___m_ID_1)); }
	inline String_t* get_m_ID_1() const { return ___m_ID_1; }
	inline String_t** get_address_of_m_ID_1() { return &___m_ID_1; }
	inline void set_m_ID_1(String_t* value)
	{
		___m_ID_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ID_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsFriend_2() { return static_cast<int32_t>(offsetof(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E, ___m_IsFriend_2)); }
	inline bool get_m_IsFriend_2() const { return ___m_IsFriend_2; }
	inline bool* get_address_of_m_IsFriend_2() { return &___m_IsFriend_2; }
	inline void set_m_IsFriend_2(bool value)
	{
		___m_IsFriend_2 = value;
	}

	inline static int32_t get_offset_of_m_State_3() { return static_cast<int32_t>(offsetof(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E, ___m_State_3)); }
	inline int32_t get_m_State_3() const { return ___m_State_3; }
	inline int32_t* get_address_of_m_State_3() { return &___m_State_3; }
	inline void set_m_State_3(int32_t value)
	{
		___m_State_3 = value;
	}

	inline static int32_t get_offset_of_m_Image_4() { return static_cast<int32_t>(offsetof(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E, ___m_Image_4)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_Image_4() const { return ___m_Image_4; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_Image_4() { return &___m_Image_4; }
	inline void set_m_Image_4(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_Image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_gameID_5() { return static_cast<int32_t>(offsetof(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E, ___m_gameID_5)); }
	inline String_t* get_m_gameID_5() const { return ___m_gameID_5; }
	inline String_t** get_address_of_m_gameID_5() { return &___m_gameID_5; }
	inline void set_m_gameID_5(String_t* value)
	{
		___m_gameID_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_gameID_5), (void*)value);
	}
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Action`1<System.Boolean>
struct  Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct  Action_1_t1BFB510F36185F9A4F92D85E8B71E865F25C9547  : public MulticastDelegate_t
{
public:

public:
};


// System.Comparison`1<UnityEngine.SocialPlatforms.Impl.Score>
struct  Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.SocialPlatforms.Impl.LocalUser
struct  LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135  : public UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E
{
public:
	// UnityEngine.SocialPlatforms.IUserProfile[] UnityEngine.SocialPlatforms.Impl.LocalUser::m_Friends
	IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* ___m_Friends_6;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Authenticated
	bool ___m_Authenticated_7;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Underage
	bool ___m_Underage_8;

public:
	inline static int32_t get_offset_of_m_Friends_6() { return static_cast<int32_t>(offsetof(LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135, ___m_Friends_6)); }
	inline IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* get_m_Friends_6() const { return ___m_Friends_6; }
	inline IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0** get_address_of_m_Friends_6() { return &___m_Friends_6; }
	inline void set_m_Friends_6(IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* value)
	{
		___m_Friends_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Friends_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Authenticated_7() { return static_cast<int32_t>(offsetof(LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135, ___m_Authenticated_7)); }
	inline bool get_m_Authenticated_7() const { return ___m_Authenticated_7; }
	inline bool* get_address_of_m_Authenticated_7() { return &___m_Authenticated_7; }
	inline void set_m_Authenticated_7(bool value)
	{
		___m_Authenticated_7 = value;
	}

	inline static int32_t get_offset_of_m_Underage_8() { return static_cast<int32_t>(offsetof(LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135, ___m_Underage_8)); }
	inline bool get_m_Underage_8() const { return ___m_Underage_8; }
	inline bool* get_address_of_m_Underage_8() { return &___m_Underage_8; }
	inline void set_m_Underage_8(bool value)
	{
		___m_Underage_8 = value;
	}
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// UnityEngine.SocialPlatforms.Impl.Score[]
struct ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * m_Items[1];

public:
	inline Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * m_Items[1];

public:
	inline UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool ___obj0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6E336459937EBBC514F001464CC3771240EEBB87_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m3445CDEBFFF4A3A9EAED69CBCC2D247630CA5BD4_gshared (Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mA3939603201EC0E13489EDA5975A07790CEDB483_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * ___comparison0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_get_Instance_mC73120CFC6D5F26A916F84399DE7FE626419AC69 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.ActivePlatform::set_Instance(UnityEngine.SocialPlatforms.ISocialPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivePlatform_set_Instance_m8F17B7F1A691A9985C31546F272D1BDD7F1504F9 (RuntimeObject* ___value0, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Social_get_Active_m3A0805FA14B55B8A297411DDF6295127A62C83FD (const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::SelectSocialPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_SelectSocialPlatform_m27C01C886A801C5186461E31572B55A8068961F3 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Local::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local__ctor_m18A130860CC620F4FEAA697A0111611959359178 (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AchievementDescription_set_id_mB7EDF27F58B8E16C2815BFD76FB5CC564C68D29D_inline (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_m2AF21B25C05E8C733EBA2D856534299C6DCF0FDC_inline (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_title_m016F5C73762A3054A3F9BF3C9FC5D265DE916ACA (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_achievedDescription_mE06109A59CA8B1B122490881431BEF912B49A8FF (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_unachievedDescription_m5515B03FB61345B75B87E68D944CB1F8202BA1EE (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AchievementDescription_get_points_mF84D543E614C28818ABA12E7F8C5F4C4628CA1BF (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AchievementDescription_get_hidden_mE5B473E83CC02D5AABA40AEA744E4E8906CC84DC (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Leaderboard_set_id_m64F963FFF8996AFB621CAA4099473644FD4CBA08_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Range__ctor_m464C0B9EC4D5509770E152A5D935EDF1B3A325D0 (Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Leaderboard_set_range_mB7A8EBE408EFFEEE01CFBE57339DCDE3C1E1F9BB_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m679EE7E211B46FAE030B49D08922D173B7E0F4E3_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m274E25FF5E1BD4ED3A2938EFBA6B1B279EC973D7_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_m0357B385C1CB627C9516F42B25E03E4762CDB31E (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, String_t* ___leaderboardID0, int64_t ___value1, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_m0AE8709B2858B97A0D7DD2FDC9B2D1D9243D64F3_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  Leaderboard_get_range_m5E964AEA16E5A443357BA8656DA09CCF8283B4F3_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m861E532FA53D0C073A0CFD53E94978C008233F22_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mEC73B36FA70E5C16B86EFB1F589791990D55939C_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_mF78D833C03B1DF5100C4B3F6A8881F7D87139B37 (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_m927C21269C57AEFAD73F413EDD17DD7BFA3A5183 (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Score_set_leaderboardID_mDDB6ECCB7DE7A251865082CD84BF822AC96DF5F5_inline (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Score_set_value_m639986A2BE14ADB1D34F7636E32180326F9B3853_inline (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t Score_get_value_m09D611022A4EEA85CDADB38BCC5FF86ECD5620D3_inline (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_mDF71D3E6E7B945D70264EFA9DDC5DA4AE51890FD_inline (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m92FDA53E61AFE8734B660FC43C78EE6FEFC572B9 (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, String_t* ___name0, String_t* ___teamId1, String_t* ___gameId2, bool ___friend3, int32_t ___state4, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___image5, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_id_m8288816F2E75AB08541CEC21853FA578040D8D01 (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_userName_m767405E576E7AC1CFA320AF99B84F1FB9B91B652 (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_get_isFriend_m0D329A8C808B89CD8FA7913C9C37E2D859B58E0C (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserProfile_get_state_m5804D7408C593440C394DFCE25738F87F84A7083 (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser__ctor_mF6CF1AB0E708BF7D9A03A2D9920C228AD76B7CAF (LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Local::CreateDummyTexture(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Local_CreateDummyTexture_m969385B8AC3B7F1947810406115B7896E4E89BA8 (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Local::PopulateStaticData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_PopulateStaticData_m4D92DEBCBECD3B8044DC4088853251265D7C941C (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetAuthenticated_mF54904343B2A623F3B5765C59D6A8DADEA32FF2E (LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetUnderage_m8ED50A92329270F163B16CC7C66167BA3CDA37BE (LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserID_m498F118E4303653235C8BB13F2645B86101514CF (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, String_t* ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserName_mC279B9030E4C28E041B21CACEA9A31E339199AC3 (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetImage_mA0A53EC856BFB207ED300DF5C533B5E3F532A358 (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___image0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, bool, const RuntimeMethod*))Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.SocialPlatforms.Local::VerifyUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Local_VerifyUser_mCB2E078FCF865DEC7E6C895F726AEBD70CB557D0 (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>::GetEnumerator()
inline Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259  List_1_GetEnumerator_m5CDCC9F159719CF0A2618A96D0554B69D868F74F (List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259  (*) (List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.Leaderboard>::get_Current()
inline Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * Enumerator_get_Current_mD7AD9409035820C58260143C157A30EAF069FCA2_inline (Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259 * __this, const RuntimeMethod* method)
{
	return ((  Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * (*) (Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::get_scores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* Leaderboard_get_scores_m33B89A8AD0BDEF468B6AE3A277DFBFE42D4341C9 (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m68F412E3E266C22241C91716CA2F59F28E3FB936 (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m6E336459937EBBC514F001464CC3771240EEBB87_gshared)(__this, ___collection0, method);
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.Local::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Local_get_localUser_m08EA00C8446521CBFF4604D1EF47930CF24C5485 (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::Add(!0)
inline void List_1_Add_mBBD8D195322BC92F4CB52CAF88483175A7117F9F (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * __this, Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 *, Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::ToArray()
inline ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C* List_1_ToArray_m001328719E67CA752D298FD3010C4BA10A1FAC1A (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * __this, const RuntimeMethod* method)
{
	return ((  ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C* (*) (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetScores_m64F8F1A13C1EAD88C6BD62C886DE76726662B4DA (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* ___scores0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.Leaderboard>::MoveNext()
inline bool Enumerator_MoveNext_mDF757D93FE105ABE64D1F5B0ECE23BF3D3DFFF18 (Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.Leaderboard>::Dispose()
inline void Enumerator_Dispose_mF8AA68C34CB65C75FBD9AEB6ABC6CF4D72F02597 (Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Local::SortScores(UnityEngine.SocialPlatforms.Impl.Leaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_SortScores_mA90A566DF5BEA2376269D34B09C4A74D4BF6E179 (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * ___board0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(!0)
inline void Action_1_Invoke_mE8B327A6CD91617BABE5A4560CD805117DF88124 (Action_1_t1BFB510F36185F9A4F92D85E8B71E865F25C9547 * __this, IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1BFB510F36185F9A4F92D85E8B71E865F25C9547 *, IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::get_loading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Leaderboard_get_loading_mBC455F8805B539A0D5E977AAB5469220AAE3DE2A (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method);
// System.Void System.Comparison`1<UnityEngine.SocialPlatforms.Impl.Score>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m6D4E1A85CBCE7A500D84FBF1E8702BD084D0483D (Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m3445CDEBFFF4A3A9EAED69CBCC2D247630CA5BD4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::Sort(System.Comparison`1<!0>)
inline void List_1_Sort_m47E0FFB3EE4095F92A4FF08670E9665FD9290F0D (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * __this, Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 * ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 *, Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 *, const RuntimeMethod*))List_1_Sort_mA3939603201EC0E13489EDA5975A07790CEDB483_gshared)(__this, ___comparison0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::get_Item(System.Int32)
inline Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * List_1_get_Item_m48B3BD0AD770404ED4C2DE64780586E332403975_inline (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * (*) (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::SetRank(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_SetRank_mA82A5EEB27B632FCCBF6AD061B48C2DBAB2E0605 (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, int32_t ___rank0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::get_Count()
inline int32_t List_1_get_Count_m98C369774232081068766C8C45C824E4C58E7018_inline (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_mA6594E3C7514264E933C665708C784CC8436FDDD (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, String_t* ___name0, String_t* ___id1, bool ___friend2, int32_t ___state3, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___image4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::Add(!0)
inline void List_1_Add_m6D65148007B430EA44875BCB51D06B7006488635 (List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * __this, UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 *, UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription__ctor_m24CE1C3B2B01706A79B3D1F4FAE892B90817D1C0 (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, String_t* ___id0, String_t* ___title1, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___image2, String_t* ___achievedDescription3, String_t* ___unachievedDescription4, bool ___hidden5, int32_t ___points6, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::Add(!0)
inline void List_1_Add_mD78E5619872CDF61E8AA7F1AAC6F7B4E73DA35BA (List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B * __this, AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B *, AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard__ctor_m8F95E90F59DC4DDAE4E51DA78AEEE3BD8152E058 (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetTitle_mE979DA82717ECC37419BF0327AE6C24FEFBAD1FA (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, String_t* ___title0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::.ctor()
inline void List_1__ctor_mE88377B977045BB2CFF1BB1C6A01314FA5D652E5 (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.DateTime System.DateTime::AddDays(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_AddDays_mB11D2BB2D7DD6944D1071809574A951258F94D8E (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, double ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>::Add(!0)
inline void List_1_Add_mC6425B7F16854516C83A26D467C6D021B73AE159 (List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB * __this, Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB *, Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_gray_m11EEED9092A8D949D3326611C7137334B746DF09 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m8BE87C152447B812D06CB894B3570269CC2DE7C3 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___x0, int32_t ___y1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::.ctor()
inline void List_1__ctor_m1A43BA5D23AD9736CE19353445249FA41CBB0881 (List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::.ctor()
inline void List_1__ctor_m112E9FC5F574771B3C6F6C2A1D0542C5135374F4 (List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>::.ctor()
inline void List_1__ctor_m3AE06D7A687E3A376BDCEABBC9A17708DBDA5F98 (List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>::.ctor()
inline void List_1__ctor_m8A81ACE3D29D0909B83BC4E5F0B8F6345CD73B48 (List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.SocialPlatforms.Local/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB5FBA875967F5A3D85EFDF9B3E24B6087D545DC5 (U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD * __this, const RuntimeMethod* method);
// System.Int32 System.Int64::CompareTo(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m21E0F72C677E986977303B18D5472487319DCFD2 (int64_t* __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Social_get_Active_m3A0805FA14B55B8A297411DDF6295127A62C83FD (const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ActivePlatform_get_Instance_mC73120CFC6D5F26A916F84399DE7FE626419AC69(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Social::set_Active(UnityEngine.SocialPlatforms.ISocialPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_set_Active_m6068C76CDEDCBB996D5F397BDF9F1038FD99E7C6 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		ActivePlatform_set_Instance_m8F17B7F1A691A9985C31546F272D1BDD7F1504F9(L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Social_get_localUser_mD608DD78286090D0333C30734D4A7B4C552BDB9A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Social_get_localUser_mD608DD78286090D0333C30734D4A7B4C552BDB9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = Social_get_Active_m3A0805FA14B55B8A297411DDF6295127A62C83FD(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.ISocialPlatform::get_localUser() */, ISocialPlatform_tA84A16F8E6959FFAFE619CE9F69F26DEF58FB347_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_ReportScore_mB1EA0AF7FDA0DC345426529FDA1A8C3AFC106621 (int64_t ___score0, String_t* ___board1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Social_ReportScore_mB1EA0AF7FDA0DC345426529FDA1A8C3AFC106621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = Social_get_Active_m3A0805FA14B55B8A297411DDF6295127A62C83FD(/*hidden argument*/NULL);
		int64_t L_1 = ___score0;
		String_t* L_2 = ___board1;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_3 = ___callback2;
		NullCheck(L_0);
		InterfaceActionInvoker3< int64_t, String_t*, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(1 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>) */, ISocialPlatform_tA84A16F8E6959FFAFE619CE9F69F26DEF58FB347_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void UnityEngine.Social::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_LoadScores_m709963941DB14B9F350C35AD4BBC1D03987985F3 (String_t* ___leaderboardID0, Action_1_t1BFB510F36185F9A4F92D85E8B71E865F25C9547 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Social_LoadScores_m709963941DB14B9F350C35AD4BBC1D03987985F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = Social_get_Active_m3A0805FA14B55B8A297411DDF6295127A62C83FD(/*hidden argument*/NULL);
		String_t* L_1 = ___leaderboardID0;
		Action_1_t1BFB510F36185F9A4F92D85E8B71E865F25C9547 * L_2 = ___callback1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, Action_1_t1BFB510F36185F9A4F92D85E8B71E865F25C9547 * >::Invoke(2 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>) */, ISocialPlatform_tA84A16F8E6959FFAFE619CE9F69F26DEF58FB347_il2cpp_TypeInfo_var, L_0, L_1, L_2);
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
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_get_Instance_mC73120CFC6D5F26A916F84399DE7FE626419AC69 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ActivePlatform_get_Instance_mC73120CFC6D5F26A916F84399DE7FE626419AC69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ((ActivePlatform_t0EC8A845B947135B6186549342A319C4732330CD_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_t0EC8A845B947135B6186549342A319C4732330CD_il2cpp_TypeInfo_var))->get__active_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2 = ActivePlatform_SelectSocialPlatform_m27C01C886A801C5186461E31572B55A8068961F3(/*hidden argument*/NULL);
		((ActivePlatform_t0EC8A845B947135B6186549342A319C4732330CD_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_t0EC8A845B947135B6186549342A319C4732330CD_il2cpp_TypeInfo_var))->set__active_0(L_2);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ((ActivePlatform_t0EC8A845B947135B6186549342A319C4732330CD_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_t0EC8A845B947135B6186549342A319C4732330CD_il2cpp_TypeInfo_var))->get__active_0();
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.ActivePlatform::set_Instance(UnityEngine.SocialPlatforms.ISocialPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivePlatform_set_Instance_m8F17B7F1A691A9985C31546F272D1BDD7F1504F9 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ActivePlatform_set_Instance_m8F17B7F1A691A9985C31546F272D1BDD7F1504F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		((ActivePlatform_t0EC8A845B947135B6186549342A319C4732330CD_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_t0EC8A845B947135B6186549342A319C4732330CD_il2cpp_TypeInfo_var))->set__active_0(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::SelectSocialPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_SelectSocialPlatform_m27C01C886A801C5186461E31572B55A8068961F3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ActivePlatform_SelectSocialPlatform_m27C01C886A801C5186461E31572B55A8068961F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * L_0 = (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 *)il2cpp_codegen_object_new(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_il2cpp_TypeInfo_var);
		Local__ctor_m18A130860CC620F4FEAA697A0111611959359178(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription__ctor_m24CE1C3B2B01706A79B3D1F4FAE892B90817D1C0 (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, String_t* ___id0, String_t* ___title1, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___image2, String_t* ___achievedDescription3, String_t* ___unachievedDescription4, bool ___hidden5, int32_t ___points6, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		AchievementDescription_set_id_mB7EDF27F58B8E16C2815BFD76FB5CC564C68D29D_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___title1;
		__this->set_m_Title_0(L_1);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = ___image2;
		__this->set_m_Image_1(L_2);
		String_t* L_3 = ___achievedDescription3;
		__this->set_m_AchievedDescription_2(L_3);
		String_t* L_4 = ___unachievedDescription4;
		__this->set_m_UnachievedDescription_3(L_4);
		bool L_5 = ___hidden5;
		__this->set_m_Hidden_4(L_5);
		int32_t L_6 = ___points6;
		__this->set_m_Points_5(L_6);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_ToString_m9EAC0DB1813D2BE3DF823FED5185B2AEDD49BCD0 (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AchievementDescription_ToString_m9EAC0DB1813D2BE3DF823FED5185B2AEDD49BCD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = AchievementDescription_get_id_m2AF21B25C05E8C733EBA2D856534299C6DCF0FDC_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		String_t* L_5 = AchievementDescription_get_title_m016F5C73762A3054A3F9BF3C9FC5D265DE916ACA(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		String_t* L_8 = AchievementDescription_get_achievedDescription_mE06109A59CA8B1B122490881431BEF912B49A8FF(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_9;
		String_t* L_11 = AchievementDescription_get_unachievedDescription_m5515B03FB61345B75B87E68D944CB1F8202BA1EE(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)_stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		int32_t L_14 = AchievementDescription_get_points_mF84D543E614C28818ABA12E7F8C5F4C4628CA1BF(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)_stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
		bool L_19 = AchievementDescription_get_hidden_mE5B473E83CC02D5AABA40AEA744E4E8906CC84DC(__this, /*hidden argument*/NULL);
		V_0 = L_19;
		String_t* L_20 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)L_20);
		String_t* L_21 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_18, /*hidden argument*/NULL);
		V_1 = L_21;
		goto IL_007d;
	}

IL_007d:
	{
		String_t* L_22 = V_1;
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_m2AF21B25C05E8C733EBA2D856534299C6DCF0FDC (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription_set_id_mB7EDF27F58B8E16C2815BFD76FB5CC564C68D29D (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_title_m016F5C73762A3054A3F9BF3C9FC5D265DE916ACA (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Title_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_achievedDescription_mE06109A59CA8B1B122490881431BEF912B49A8FF (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_AchievedDescription_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_unachievedDescription_m5515B03FB61345B75B87E68D944CB1F8202BA1EE (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_UnachievedDescription_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AchievementDescription_get_hidden_mE5B473E83CC02D5AABA40AEA744E4E8906CC84DC (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Hidden_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AchievementDescription_get_points_mF84D543E614C28818ABA12E7F8C5F4C4628CA1BF (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Points_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard__ctor_m8F95E90F59DC4DDAE4E51DA78AEEE3BD8152E058 (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Leaderboard__ctor_m8F95E90F59DC4DDAE4E51DA78AEEE3BD8152E058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* V_0 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Leaderboard_set_id_m64F963FFF8996AFB621CAA4099473644FD4CBA08_inline(__this, _stringLiteral54E07AAD9D8E5B8EFD70FD637020B8A9F045F9E3, /*hidden argument*/NULL);
		Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Range__ctor_m464C0B9EC4D5509770E152A5D935EDF1B3A325D0((&L_0), 1, ((int32_t)10), /*hidden argument*/NULL);
		Leaderboard_set_range_mB7A8EBE408EFFEEE01CFBE57339DCDE3C1E1F9BB_inline(__this, L_0, /*hidden argument*/NULL);
		Leaderboard_set_userScope_m679EE7E211B46FAE030B49D08922D173B7E0F4E3_inline(__this, 0, /*hidden argument*/NULL);
		Leaderboard_set_timeScope_m274E25FF5E1BD4ED3A2938EFBA6B1B279EC973D7_inline(__this, 2, /*hidden argument*/NULL);
		__this->set_m_Loading_0((bool)0);
		Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * L_1 = (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 *)il2cpp_codegen_object_new(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7_il2cpp_TypeInfo_var);
		Score__ctor_m0357B385C1CB627C9516F42B25E03E4762CDB31E(L_1, _stringLiteral54E07AAD9D8E5B8EFD70FD637020B8A9F045F9E3, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		__this->set_m_LocalUserScore_1(L_1);
		__this->set_m_MaxRange_2(0);
		ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C* L_2 = (ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C*)(ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C*)SZArrayNew(ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = (IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C*)L_2;
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_3 = V_0;
		__this->set_m_Scores_3(L_3);
		__this->set_m_Title_4(_stringLiteral54E07AAD9D8E5B8EFD70FD637020B8A9F045F9E3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_m_UserIDs_5(L_4);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Leaderboard_ToString_mB512C42B4ADE3A04D903351568DD78E3E309A2BA (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Leaderboard_ToString_mB512C42B4ADE3A04D903351568DD78E3E309A2BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralE706F847995401E8CBBA7408E05EF0DF94B72BA8);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralE706F847995401E8CBBA7408E05EF0DF94B72BA8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = Leaderboard_get_id_m0AE8709B2858B97A0D7DD2FDC9B2D1D9243D64F3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral8661D3599B920E41DFE26D529DBCA1496B0EFBA0);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral8661D3599B920E41DFE26D529DBCA1496B0EFBA0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		String_t* L_6 = __this->get_m_Title_4();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralBA4B7E03C5C48B5FEA1B3B5D31ABC0252665C398);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralBA4B7E03C5C48B5FEA1B3B5D31ABC0252665C398);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		bool* L_9 = __this->get_address_of_m_Loading_0();
		String_t* L_10 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral26D83672EED4626917D0F85ACF094DBE00825A18);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral26D83672EED4626917D0F85ACF094DBE00825A18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  L_13 = Leaderboard_get_range_m5E964AEA16E5A443357BA8656DA09CCF8283B4F3_inline(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13.get_from_0();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_12;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
		Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  L_19 = Leaderboard_get_range_m5E964AEA16E5A443357BA8656DA09CCF8283B4F3_inline(__this, /*hidden argument*/NULL);
		int32_t L_20 = L_19.get_count_1();
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_22);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_18;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral4CC7489DB09442789296588DEED5B13755F04C1E);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)_stringLiteral4CC7489DB09442789296588DEED5B13755F04C1E);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = L_23;
		uint32_t L_25 = __this->get_m_MaxRange_2();
		uint32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_27);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = L_24;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteralBD885F10FA0D22AEE03FFF24AE6A90D48B31321B);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject *)_stringLiteralBD885F10FA0D22AEE03FFF24AE6A90D48B31321B);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = L_28;
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_30 = __this->get_m_Scores_3();
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))));
		RuntimeObject * L_32 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject *)L_32);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = L_29;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteralA7CA7B1F3D188ED94554AEF2B05FAB89C78261EB);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject *)_stringLiteralA7CA7B1F3D188ED94554AEF2B05FAB89C78261EB);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_34 = L_33;
		int32_t L_35 = Leaderboard_get_userScope_m861E532FA53D0C073A0CFD53E94978C008233F22_inline(__this, /*hidden argument*/NULL);
		int32_t L_36 = L_35;
		RuntimeObject * L_37 = Box(UserScope_t85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject *)L_37);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = L_34;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral2B7C4780BB971C2A61FD3F0AB9F791B141B6E741);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (RuntimeObject *)_stringLiteral2B7C4780BB971C2A61FD3F0AB9F791B141B6E741);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_39 = L_38;
		int32_t L_40 = Leaderboard_get_timeScope_mEC73B36FA70E5C16B86EFB1F589791990D55939C_inline(__this, /*hidden argument*/NULL);
		int32_t L_41 = L_40;
		RuntimeObject * L_42 = Box(TimeScope_t33ED9CE3541B951879D86F5AE6A8D9389E7A2369_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (RuntimeObject *)L_42);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_43 = L_39;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteralBFB6493FC5964441D97AFB1C25EB1C5519603B7D);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (RuntimeObject *)_stringLiteralBFB6493FC5964441D97AFB1C25EB1C5519603B7D);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_44 = L_43;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_45 = __this->get_m_UserIDs_5();
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))));
		RuntimeObject * L_47 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (RuntimeObject *)L_47);
		String_t* L_48 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_44, /*hidden argument*/NULL);
		V_0 = L_48;
		goto IL_00fb;
	}

IL_00fb:
	{
		String_t* L_49 = V_0;
		return L_49;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::get_loading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Leaderboard_get_loading_mBC455F8805B539A0D5E977AAB5469220AAE3DE2A (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Leaderboard_get_loading_mBC455F8805B539A0D5E977AAB5469220AAE3DE2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ActivePlatform_get_Instance_mC73120CFC6D5F26A916F84399DE7FE626419AC69(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4 /* System.Boolean UnityEngine.SocialPlatforms.ISocialPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard) */, ISocialPlatform_tA84A16F8E6959FFAFE619CE9F69F26DEF58FB347_il2cpp_TypeInfo_var, L_0, __this);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetScores_m64F8F1A13C1EAD88C6BD62C886DE76726662B4DA (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* ___scores0, const RuntimeMethod* method)
{
	{
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_0 = ___scores0;
		__this->set_m_Scores_3(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetTitle_mE979DA82717ECC37419BF0327AE6C24FEFBAD1FA (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, String_t* ___title0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___title0;
		__this->set_m_Title_4(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_m0AE8709B2858B97A0D7DD2FDC9B2D1D9243D64F3 (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_id_m64F963FFF8996AFB621CAA4099473644FD4CBA08 (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m861E532FA53D0C073A0CFD53E94978C008233F22 (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CuserScopeU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m679EE7E211B46FAE030B49D08922D173B7E0F4E3 (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CuserScopeU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  Leaderboard_get_range_m5E964AEA16E5A443357BA8656DA09CCF8283B4F3 (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method)
{
	{
		Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  L_0 = __this->get_U3CrangeU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_range_mB7A8EBE408EFFEEE01CFBE57339DCDE3C1E1F9BB (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  ___value0, const RuntimeMethod* method)
{
	{
		Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  L_0 = ___value0;
		__this->set_U3CrangeU3Ek__BackingField_8(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mEC73B36FA70E5C16B86EFB1F589791990D55939C (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CtimeScopeU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m274E25FF5E1BD4ED3A2938EFBA6B1B279EC973D7 (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CtimeScopeU3Ek__BackingField_9(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::get_scores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* Leaderboard_get_scores_m33B89A8AD0BDEF468B6AE3A277DFBFE42D4341C9 (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method)
{
	IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* V_0 = NULL;
	{
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_0 = __this->get_m_Scores_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser__ctor_mF6CF1AB0E708BF7D9A03A2D9920C228AD76B7CAF (LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalUser__ctor_mF6CF1AB0E708BF7D9A03A2D9920C228AD76B7CAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* V_0 = NULL;
	{
		UserProfile__ctor_mF78D833C03B1DF5100C4B3F6A8881F7D87139B37(__this, /*hidden argument*/NULL);
		UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F* L_0 = (UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F*)(UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F*)SZArrayNew(UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = (IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0*)L_0;
		IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* L_1 = V_0;
		__this->set_m_Friends_6(L_1);
		__this->set_m_Authenticated_7((bool)0);
		__this->set_m_Underage_8((bool)0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::Authenticate(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_Authenticate_m8A6133B127110888EA9B2A213E2D3D8891003E99 (LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalUser_Authenticate_m8A6133B127110888EA9B2A213E2D3D8891003E99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ActivePlatform_get_Instance_mC73120CFC6D5F26A916F84399DE7FE626419AC69(/*hidden argument*/NULL);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback0;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(3 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>) */, ISocialPlatform_tA84A16F8E6959FFAFE619CE9F69F26DEF58FB347_il2cpp_TypeInfo_var, L_0, __this, L_1);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetAuthenticated_mF54904343B2A623F3B5765C59D6A8DADEA32FF2E (LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_Authenticated_7(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetUnderage_m8ED50A92329270F163B16CC7C66167BA3CDA37BE (LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_Underage_8(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalUser_get_authenticated_m62396464F588B23B14B84B260A25DF2614CAC88E (LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Authenticated_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_m0357B385C1CB627C9516F42B25E03E4762CDB31E (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, String_t* ___leaderboardID0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score__ctor_m0357B385C1CB627C9516F42B25E03E4762CDB31E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID0;
		int64_t L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_2 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		Score__ctor_m927C21269C57AEFAD73F413EDD17DD7BFA3A5183(__this, L_0, L_1, _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_m927C21269C57AEFAD73F413EDD17DD7BFA3A5183 (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID0;
		Score_set_leaderboardID_mDDB6ECCB7DE7A251865082CD84BF822AC96DF5F5_inline(__this, L_0, /*hidden argument*/NULL);
		int64_t L_1 = ___value1;
		Score_set_value_m639986A2BE14ADB1D34F7636E32180326F9B3853_inline(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___userID2;
		__this->set_m_UserID_2(L_2);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = ___date3;
		__this->set_m_Date_0(L_3);
		String_t* L_4 = ___formattedValue4;
		__this->set_m_FormattedValue_1(L_4);
		int32_t L_5 = ___rank5;
		__this->set_m_Rank_3(L_5);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Score_ToString_m11F1EEABEE6073309E0FE0249E2AD2AAC69E1636 (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score_ToString_m11F1EEABEE6073309E0FE0249E2AD2AAC69E1636_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral4DF99DBEDEA32D558EB262C2A1D110890DE30F43);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral4DF99DBEDEA32D558EB262C2A1D110890DE30F43);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		int32_t L_3 = __this->get_m_Rank_3();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralCB04B51FB3F680D030A5B8C7E0A73BB5C5CCBD4D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralCB04B51FB3F680D030A5B8C7E0A73BB5C5CCBD4D);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		int64_t L_8 = Score_get_value_m09D611022A4EEA85CDADB38BCC5FF86ECD5620D3_inline(__this, /*hidden argument*/NULL);
		int64_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralF21D6CDABDCB17717294FD4F8F1CD49DA96EDE4C);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralF21D6CDABDCB17717294FD4F8F1CD49DA96EDE4C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		String_t* L_13 = Score_get_leaderboardID_mDF71D3E6E7B945D70264EFA9DDC5DA4AE51890FD_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_13);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral926DDA883ABC3AB1E01EEBAEC47673C447DF84A0);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral926DDA883ABC3AB1E01EEBAEC47673C447DF84A0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_14;
		String_t* L_16 = __this->get_m_UserID_2();
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral8FDEBF0AF1CEC8C9489BE3D5F16DCD9A5ADC458C);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral8FDEBF0AF1CEC8C9489BE3D5F16DCD9A5ADC458C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_19 = __this->get_m_Date_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_20 = L_19;
		RuntimeObject * L_21 = Box(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_21);
		String_t* L_22 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_18, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0075;
	}

IL_0075:
	{
		String_t* L_23 = V_0;
		return L_23;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::SetRank(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_SetRank_mA82A5EEB27B632FCCBF6AD061B48C2DBAB2E0605 (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, int32_t ___rank0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___rank0;
		__this->set_m_Rank_3(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_mDF71D3E6E7B945D70264EFA9DDC5DA4AE51890FD (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CleaderboardIDU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_leaderboardID_mDDB6ECCB7DE7A251865082CD84BF822AC96DF5F5 (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CleaderboardIDU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Score_get_value_m09D611022A4EEA85CDADB38BCC5FF86ECD5620D3 (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CvalueU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_value_m639986A2BE14ADB1D34F7636E32180326F9B3853 (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CvalueU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_userID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Score_get_userID_m8AD99A0419AFB1B7CD1D1986E1C82288710C73E3 (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_UserID_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_mF78D833C03B1DF5100C4B3F6A8881F7D87139B37 (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserProfile__ctor_mF78D833C03B1DF5100C4B3F6A8881F7D87139B37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_m_UserName_0(_stringLiteralF1B47A277576955BBB83E370BA3C6480EE94FCB2);
		__this->set_m_ID_1(_stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C);
		__this->set_m_IsFriend_2((bool)0);
		__this->set_m_State_3(3);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->set_m_Image_4(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_mA6594E3C7514264E933C665708C784CC8436FDDD (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, String_t* ___name0, String_t* ___id1, bool ___friend2, int32_t ___state3, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___image4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___id1;
		String_t* L_2 = ___id1;
		bool L_3 = ___friend2;
		int32_t L_4 = ___state3;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = ___image4;
		UserProfile__ctor_m92FDA53E61AFE8734B660FC43C78EE6FEFC572B9(__this, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m92FDA53E61AFE8734B660FC43C78EE6FEFC572B9 (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, String_t* ___name0, String_t* ___teamId1, String_t* ___gameId2, bool ___friend3, int32_t ___state4, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___image5, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_m_UserName_0(L_0);
		String_t* L_1 = ___teamId1;
		__this->set_m_ID_1(L_1);
		String_t* L_2 = ___gameId2;
		__this->set_m_gameID_5(L_2);
		bool L_3 = ___friend3;
		__this->set_m_IsFriend_2(L_3);
		int32_t L_4 = ___state4;
		__this->set_m_State_3(L_4);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = ___image5;
		__this->set_m_Image_4(L_5);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_ToString_m0D81902057D869B99523E31058A406A8CACB36FB (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserProfile_ToString_m0D81902057D869B99523E31058A406A8CACB36FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = UserProfile_get_id_m8288816F2E75AB08541CEC21853FA578040D8D01(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		String_t* L_5 = UserProfile_get_userName_m767405E576E7AC1CFA320AF99B84F1FB9B91B652(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		bool L_8 = UserProfile_get_isFriend_m0D329A8C808B89CD8FA7913C9C37E2D859B58E0C(__this, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_7;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteralFC02E199EAA2A6900AEC454AD22BAA13B6E8F8E6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		int32_t L_12 = UserProfile_get_state_m5804D7408C593440C394DFCE25738F87F84A7083(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(UserState_t84B00958348DD8A2B8778416E393E229DACA5871_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_11, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_0058;
	}

IL_0058:
	{
		String_t* L_16 = V_1;
		return L_16;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserName_mC279B9030E4C28E041B21CACEA9A31E339199AC3 (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		__this->set_m_UserName_0(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserID_m498F118E4303653235C8BB13F2645B86101514CF (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, String_t* ___id0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		__this->set_m_ID_1(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetImage_mA0A53EC856BFB207ED300DF5C533B5E3F532A358 (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___image0, const RuntimeMethod* method)
{
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___image0;
		__this->set_m_Image_4(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_userName_m767405E576E7AC1CFA320AF99B84F1FB9B91B652 (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_UserName_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_id_m8288816F2E75AB08541CEC21853FA578040D8D01 (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ID_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_get_isFriend_m0D329A8C808B89CD8FA7913C9C37E2D859B58E0C (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_IsFriend_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserProfile_get_state_m5804D7408C593440C394DFCE25738F87F84A7083 (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_State_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
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
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.Local::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Local_get_localUser_m08EA00C8446521CBFF4604D1EF47930CF24C5485 (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local_get_localUser_m08EA00C8446521CBFF4604D1EF47930CF24C5485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_il2cpp_TypeInfo_var);
		LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * L_0 = ((Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_StaticFields*)il2cpp_codegen_static_fields_for(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_il2cpp_TypeInfo_var))->get_m_LocalUser_0();
		V_0 = (bool)((((RuntimeObject*)(LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * L_2 = (LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 *)il2cpp_codegen_object_new(LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135_il2cpp_TypeInfo_var);
		LocalUser__ctor_mF6CF1AB0E708BF7D9A03A2D9920C228AD76B7CAF(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_il2cpp_TypeInfo_var);
		((Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_StaticFields*)il2cpp_codegen_static_fields_for(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_il2cpp_TypeInfo_var))->set_m_LocalUser_0(L_2);
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_il2cpp_TypeInfo_var);
		LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * L_3 = ((Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_StaticFields*)il2cpp_codegen_static_fields_for(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_il2cpp_TypeInfo_var))->get_m_LocalUser_0();
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m37DE6554BC122DA4074F5C6E014848666ED6C42B (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, RuntimeObject* ___user0, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m37DE6554BC122DA4074F5C6E014848666ED6C42B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___user0;
		V_0 = ((LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 *)CastclassClass((RuntimeObject*)L_0, LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135_il2cpp_TypeInfo_var));
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = Local_CreateDummyTexture_m969385B8AC3B7F1947810406115B7896E4E89BA8(__this, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->set_m_DefaultTexture_6(L_1);
		Local_PopulateStaticData_m4D92DEBCBECD3B8044DC4088853251265D7C941C(__this, /*hidden argument*/NULL);
		LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * L_2 = V_0;
		NullCheck(L_2);
		LocalUser_SetAuthenticated_mF54904343B2A623F3B5765C59D6A8DADEA32FF2E(L_2, (bool)1, /*hidden argument*/NULL);
		LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * L_3 = V_0;
		NullCheck(L_3);
		LocalUser_SetUnderage_m8ED50A92329270F163B16CC7C66167BA3CDA37BE(L_3, (bool)0, /*hidden argument*/NULL);
		LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * L_4 = V_0;
		NullCheck(L_4);
		UserProfile_SetUserID_m498F118E4303653235C8BB13F2645B86101514CF(L_4, _stringLiteralE3CBBA8883FE746C6E35783C9404B4BC0C7EE9EB, /*hidden argument*/NULL);
		LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * L_5 = V_0;
		NullCheck(L_5);
		UserProfile_SetUserName_mC279B9030E4C28E041B21CACEA9A31E339199AC3(L_5, _stringLiteralC2C1B773D7D0718F17E39967C33CD04693F38B30, /*hidden argument*/NULL);
		LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * L_6 = V_0;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_7 = __this->get_m_DefaultTexture_6();
		NullCheck(L_6);
		UserProfile_SetImage_mA0A53EC856BFB207ED300DF5C533B5E3F532A358(L_6, L_7, /*hidden argument*/NULL);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_8 = ___callback1;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_10 = ___callback1;
		NullCheck(L_10);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_10, (bool)1, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
	}

IL_0064:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_ReportScore_mA2B1D36DCEF62FF1B215936D384C08FE2803C583 (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, int64_t ___score0, String_t* ___board1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local_ReportScore_mA2B1D36DCEF62FF1B215936D384C08FE2803C583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * V_2 = NULL;
	bool V_3 = false;
	List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * V_4 = NULL;
	IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = Local_VerifyUser_mCB2E078FCF865DEC7E6C895F726AEBD70CB557D0(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00e2;
	}

IL_0013:
	{
		List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB * L_2 = __this->get_m_Leaderboards_5();
		NullCheck(L_2);
		Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259  L_3 = List_1_GetEnumerator_m5CDCC9F159719CF0A2618A96D0554B69D868F74F(L_2, /*hidden argument*/List_1_GetEnumerator_m5CDCC9F159719CF0A2618A96D0554B69D868F74F_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a8;
		}

IL_0025:
		{
			Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * L_4 = Enumerator_get_Current_mD7AD9409035820C58260143C157A30EAF069FCA2_inline((Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mD7AD9409035820C58260143C157A30EAF069FCA2_RuntimeMethod_var);
			V_2 = L_4;
			Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * L_5 = V_2;
			NullCheck(L_5);
			String_t* L_6 = Leaderboard_get_id_m0AE8709B2858B97A0D7DD2FDC9B2D1D9243D64F3_inline(L_5, /*hidden argument*/NULL);
			String_t* L_7 = ___board1;
			bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, L_7, /*hidden argument*/NULL);
			V_3 = L_8;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_00a7;
			}
		}

IL_003e:
		{
			Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * L_10 = V_2;
			NullCheck(L_10);
			IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_11 = Leaderboard_get_scores_m33B89A8AD0BDEF468B6AE3A277DFBFE42D4341C9(L_10, /*hidden argument*/NULL);
			List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * L_12 = (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 *)il2cpp_codegen_object_new(List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59_il2cpp_TypeInfo_var);
			List_1__ctor_m68F412E3E266C22241C91716CA2F59F28E3FB936(L_12, (RuntimeObject*)(RuntimeObject*)((ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C*)Castclass((RuntimeObject*)L_11, ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C_il2cpp_TypeInfo_var)), /*hidden argument*/List_1__ctor_m68F412E3E266C22241C91716CA2F59F28E3FB936_RuntimeMethod_var);
			V_4 = L_12;
			List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * L_13 = V_4;
			String_t* L_14 = ___board1;
			int64_t L_15 = ___score0;
			RuntimeObject* L_16 = Local_get_localUser_m08EA00C8446521CBFF4604D1EF47930CF24C5485(__this, /*hidden argument*/NULL);
			NullCheck(L_16);
			String_t* L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_id() */, IUserProfile_tC713F9B213435D4D58FDFA96118E02F5BC90FBF1_il2cpp_TypeInfo_var, L_16);
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
			DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_18 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
			int64_t L_19 = ___score0;
			int64_t L_20 = L_19;
			RuntimeObject * L_21 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_20);
			String_t* L_22 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(L_21, _stringLiteral027F4971DD3332133339CBB9B57BF0B95CB65430, /*hidden argument*/NULL);
			Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * L_23 = (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 *)il2cpp_codegen_object_new(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7_il2cpp_TypeInfo_var);
			Score__ctor_m927C21269C57AEFAD73F413EDD17DD7BFA3A5183(L_23, L_14, L_15, L_17, L_18, L_22, 0, /*hidden argument*/NULL);
			NullCheck(L_13);
			List_1_Add_mBBD8D195322BC92F4CB52CAF88483175A7117F9F(L_13, L_23, /*hidden argument*/List_1_Add_mBBD8D195322BC92F4CB52CAF88483175A7117F9F_RuntimeMethod_var);
			Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * L_24 = V_2;
			List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * L_25 = V_4;
			NullCheck(L_25);
			ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C* L_26 = List_1_ToArray_m001328719E67CA752D298FD3010C4BA10A1FAC1A(L_25, /*hidden argument*/List_1_ToArray_m001328719E67CA752D298FD3010C4BA10A1FAC1A_RuntimeMethod_var);
			V_5 = (IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C*)L_26;
			IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_27 = V_5;
			NullCheck(L_24);
			Leaderboard_SetScores_m64F8F1A13C1EAD88C6BD62C886DE76726662B4DA(L_24, L_27, /*hidden argument*/NULL);
			Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_28 = ___callback2;
			V_6 = (bool)((!(((RuntimeObject*)(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)L_28) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_29 = V_6;
			if (!L_29)
			{
				goto IL_00a5;
			}
		}

IL_009d:
		{
			Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_30 = ___callback2;
			NullCheck(L_30);
			Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_30, (bool)1, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
		}

IL_00a5:
		{
			IL2CPP_LEAVE(0xE2, FINALLY_00b6);
		}

IL_00a7:
		{
		}

IL_00a8:
		{
			bool L_31 = Enumerator_MoveNext_mDF757D93FE105ABE64D1F5B0ECE23BF3D3DFFF18((Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mDF757D93FE105ABE64D1F5B0ECE23BF3D3DFFF18_RuntimeMethod_var);
			if (L_31)
			{
				goto IL_0025;
			}
		}

IL_00b4:
		{
			IL2CPP_LEAVE(0xC5, FINALLY_00b6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b6;
	}

FINALLY_00b6:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF8AA68C34CB65C75FBD9AEB6ABC6CF4D72F02597((Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mF8AA68C34CB65C75FBD9AEB6ABC6CF4D72F02597_RuntimeMethod_var);
		IL2CPP_END_FINALLY(182)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(182)
	{
		IL2CPP_JUMP_TBL(0xE2, IL_00e2)
		IL2CPP_JUMP_TBL(0xC5, IL_00c5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralCA2A618878FF43CA6FA209E60D18B7CBF474C60F, /*hidden argument*/NULL);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_32 = ___callback2;
		V_7 = (bool)((!(((RuntimeObject*)(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)L_32) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00e2;
		}
	}
	{
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_34 = ___callback2;
		NullCheck(L_34);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_34, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
	}

IL_00e2:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_LoadScores_mAF479B25EC75F8B24D520B1935FDC7593F892A6F (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, String_t* ___leaderboardID0, Action_1_t1BFB510F36185F9A4F92D85E8B71E865F25C9547 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local_LoadScores_mAF479B25EC75F8B24D520B1935FDC7593F892A6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = Local_VerifyUser_mCB2E078FCF865DEC7E6C895F726AEBD70CB557D0(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_009e;
	}

IL_0013:
	{
		List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB * L_2 = __this->get_m_Leaderboards_5();
		NullCheck(L_2);
		Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259  L_3 = List_1_GetEnumerator_m5CDCC9F159719CF0A2618A96D0554B69D868F74F(L_2, /*hidden argument*/List_1_GetEnumerator_m5CDCC9F159719CF0A2618A96D0554B69D868F74F_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005e;
		}

IL_0022:
		{
			Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * L_4 = Enumerator_get_Current_mD7AD9409035820C58260143C157A30EAF069FCA2_inline((Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mD7AD9409035820C58260143C157A30EAF069FCA2_RuntimeMethod_var);
			V_2 = L_4;
			Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * L_5 = V_2;
			NullCheck(L_5);
			String_t* L_6 = Leaderboard_get_id_m0AE8709B2858B97A0D7DD2FDC9B2D1D9243D64F3_inline(L_5, /*hidden argument*/NULL);
			String_t* L_7 = ___leaderboardID0;
			bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, L_7, /*hidden argument*/NULL);
			V_3 = L_8;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_005d;
			}
		}

IL_003b:
		{
			Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * L_10 = V_2;
			Local_SortScores_mA90A566DF5BEA2376269D34B09C4A74D4BF6E179(__this, L_10, /*hidden argument*/NULL);
			Action_1_t1BFB510F36185F9A4F92D85E8B71E865F25C9547 * L_11 = ___callback1;
			V_4 = (bool)((!(((RuntimeObject*)(Action_1_t1BFB510F36185F9A4F92D85E8B71E865F25C9547 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_12 = V_4;
			if (!L_12)
			{
				goto IL_005b;
			}
		}

IL_004e:
		{
			Action_1_t1BFB510F36185F9A4F92D85E8B71E865F25C9547 * L_13 = ___callback1;
			Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * L_14 = V_2;
			NullCheck(L_14);
			IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_15 = Leaderboard_get_scores_m33B89A8AD0BDEF468B6AE3A277DFBFE42D4341C9(L_14, /*hidden argument*/NULL);
			NullCheck(L_13);
			Action_1_Invoke_mE8B327A6CD91617BABE5A4560CD805117DF88124(L_13, L_15, /*hidden argument*/Action_1_Invoke_mE8B327A6CD91617BABE5A4560CD805117DF88124_RuntimeMethod_var);
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x9E, FINALLY_0069);
		}

IL_005d:
		{
		}

IL_005e:
		{
			bool L_16 = Enumerator_MoveNext_mDF757D93FE105ABE64D1F5B0ECE23BF3D3DFFF18((Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mDF757D93FE105ABE64D1F5B0ECE23BF3D3DFFF18_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_0022;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x78, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF8AA68C34CB65C75FBD9AEB6ABC6CF4D72F02597((Enumerator_tC4046A8FB9F3E0E58C699FA12C8C3DA7F4117259 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mF8AA68C34CB65C75FBD9AEB6ABC6CF4D72F02597_RuntimeMethod_var);
		IL2CPP_END_FINALLY(105)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_JUMP_TBL(0x9E, IL_009e)
		IL2CPP_JUMP_TBL(0x78, IL_0078)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralCA2A618878FF43CA6FA209E60D18B7CBF474C60F, /*hidden argument*/NULL);
		Action_1_t1BFB510F36185F9A4F92D85E8B71E865F25C9547 * L_17 = ___callback1;
		V_5 = (bool)((!(((RuntimeObject*)(Action_1_t1BFB510F36185F9A4F92D85E8B71E865F25C9547 *)L_17) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_009e;
		}
	}
	{
		Action_1_t1BFB510F36185F9A4F92D85E8B71E865F25C9547 * L_19 = ___callback1;
		ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C* L_20 = (ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C*)(ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C*)SZArrayNew(ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C_il2cpp_TypeInfo_var, (uint32_t)0);
		V_6 = (IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C*)L_20;
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_21 = V_6;
		NullCheck(L_19);
		Action_1_Invoke_mE8B327A6CD91617BABE5A4560CD805117DF88124(L_19, L_21, /*hidden argument*/Action_1_Invoke_mE8B327A6CD91617BABE5A4560CD805117DF88124_RuntimeMethod_var);
	}

IL_009e:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Local::UnityEngine.SocialPlatforms.ISocialPlatform.GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Local_UnityEngine_SocialPlatforms_ISocialPlatform_GetLoading_mD5AB952844A45DB2EB55B8E91502CFAF248F3BB2 (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, RuntimeObject* ___board0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local_UnityEngine_SocialPlatforms_ISocialPlatform_GetLoading_mD5AB952844A45DB2EB55B8E91502CFAF248F3BB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = Local_VerifyUser_mCB2E078FCF865DEC7E6C895F726AEBD70CB557D0(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0020;
	}

IL_0012:
	{
		RuntimeObject* L_2 = ___board0;
		NullCheck(((Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE *)CastclassClass((RuntimeObject*)L_2, Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE_il2cpp_TypeInfo_var)));
		bool L_3 = Leaderboard_get_loading_mBC455F8805B539A0D5E977AAB5469220AAE3DE2A(((Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE *)CastclassClass((RuntimeObject*)L_2, Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::SortScores(UnityEngine.SocialPlatforms.Impl.Leaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_SortScores_mA90A566DF5BEA2376269D34B09C4A74D4BF6E179 (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * ___board0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local_SortScores_mA90A566DF5BEA2376269D34B09C4A74D4BF6E179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 * G_B2_0 = NULL;
	List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * G_B2_1 = NULL;
	Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 * G_B1_0 = NULL;
	List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * G_B1_1 = NULL;
	{
		Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * L_0 = ___board0;
		NullCheck(L_0);
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_1 = Leaderboard_get_scores_m33B89A8AD0BDEF468B6AE3A277DFBFE42D4341C9(L_0, /*hidden argument*/NULL);
		List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * L_2 = (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 *)il2cpp_codegen_object_new(List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59_il2cpp_TypeInfo_var);
		List_1__ctor_m68F412E3E266C22241C91716CA2F59F28E3FB936(L_2, (RuntimeObject*)(RuntimeObject*)((ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C*)Castclass((RuntimeObject*)L_1, ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C_il2cpp_TypeInfo_var)), /*hidden argument*/List_1__ctor_m68F412E3E266C22241C91716CA2F59F28E3FB936_RuntimeMethod_var);
		V_0 = L_2;
		List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_il2cpp_TypeInfo_var);
		Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 * L_4 = ((U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_il2cpp_TypeInfo_var))->get_U3CU3E9__20_0_1();
		Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 * L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_il2cpp_TypeInfo_var);
		U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD * L_6 = ((U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 * L_7 = (Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 *)il2cpp_codegen_object_new(Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m6D4E1A85CBCE7A500D84FBF1E8702BD084D0483D(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3CSortScoresU3Eb__20_0_m15C13CD2E74E140E5D681A53F17137D88BDDD251_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_m6D4E1A85CBCE7A500D84FBF1E8702BD084D0483D_RuntimeMethod_var);
		Comparison_1_t28EA3DA168FE592EE1ADDC14188F65E686B305F8 * L_8 = L_7;
		((U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_il2cpp_TypeInfo_var))->set_U3CU3E9__20_0_1(L_8);
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
	}

IL_0032:
	{
		NullCheck(G_B2_1);
		List_1_Sort_m47E0FFB3EE4095F92A4FF08670E9665FD9290F0D(G_B2_1, G_B2_0, /*hidden argument*/List_1_Sort_m47E0FFB3EE4095F92A4FF08670E9665FD9290F0D_RuntimeMethod_var);
		V_1 = 0;
		goto IL_0050;
	}

IL_003c:
	{
		List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * L_11 = List_1_get_Item_m48B3BD0AD770404ED4C2DE64780586E332403975_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m48B3BD0AD770404ED4C2DE64780586E332403975_RuntimeMethod_var);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Score_SetRank_mA82A5EEB27B632FCCBF6AD061B48C2DBAB2E0605(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = List_1_get_Count_m98C369774232081068766C8C45C824E4C58E7018_inline(L_15, /*hidden argument*/List_1_get_Count_m98C369774232081068766C8C45C824E4C58E7018_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_14) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_003c;
		}
	}
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Local::VerifyUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Local_VerifyUser_mCB2E078FCF865DEC7E6C895F726AEBD70CB557D0 (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local_VerifyUser_mCB2E078FCF865DEC7E6C895F726AEBD70CB557D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = Local_get_localUser_m08EA00C8446521CBFF4604D1EF47930CF24C5485(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_tBC76330E834731738E32468FA46DAE98003D48D6_il2cpp_TypeInfo_var, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral08CBA857A5DE4022414F7CE839DFC4766B390294, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_0023:
	{
		V_1 = (bool)1;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::PopulateStaticData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_PopulateStaticData_m4D92DEBCBECD3B8044DC4088853251265D7C941C (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local_PopulateStaticData_m4D92DEBCBECD3B8044DC4088853251265D7C941C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * V_0 = NULL;
	List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * V_1 = NULL;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_2;
	memset((&V_2), 0, sizeof(V_2));
	IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* V_3 = NULL;
	{
		List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * L_0 = __this->get_m_Friends_1();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = __this->get_m_DefaultTexture_6();
		UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * L_2 = (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E *)il2cpp_codegen_object_new(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E_il2cpp_TypeInfo_var);
		UserProfile__ctor_mA6594E3C7514264E933C665708C784CC8436FDDD(L_2, _stringLiteral48FDE3D64619929F3AB6F64953B06E1D041BF901, _stringLiteralDD01903921EA24941C26A48F2CEC24E0BB0E8CC7, (bool)1, 0, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_m6D65148007B430EA44875BCB51D06B7006488635(L_0, L_2, /*hidden argument*/List_1_Add_m6D65148007B430EA44875BCB51D06B7006488635_RuntimeMethod_var);
		List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * L_3 = __this->get_m_Friends_1();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_4 = __this->get_m_DefaultTexture_6();
		UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * L_5 = (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E *)il2cpp_codegen_object_new(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E_il2cpp_TypeInfo_var);
		UserProfile__ctor_mA6594E3C7514264E933C665708C784CC8436FDDD(L_5, _stringLiteralE64D664B335757AB1B0ED70DC6883A5F412BE34B, _stringLiteralA5B1D7E217AA227D5B2B8A84920780CF637960E2, (bool)1, 0, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_m6D65148007B430EA44875BCB51D06B7006488635(L_3, L_5, /*hidden argument*/List_1_Add_m6D65148007B430EA44875BCB51D06B7006488635_RuntimeMethod_var);
		List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * L_6 = __this->get_m_Friends_1();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_7 = __this->get_m_DefaultTexture_6();
		UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * L_8 = (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E *)il2cpp_codegen_object_new(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E_il2cpp_TypeInfo_var);
		UserProfile__ctor_mA6594E3C7514264E933C665708C784CC8436FDDD(L_8, _stringLiteral9828034F45C139F3D0314872CEE30463ECE9B196, _stringLiteral9F6BF828C80134B8D3E07B058045FBA6ACD4E9AC, (bool)1, 0, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_m6D65148007B430EA44875BCB51D06B7006488635(L_6, L_8, /*hidden argument*/List_1_Add_m6D65148007B430EA44875BCB51D06B7006488635_RuntimeMethod_var);
		List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * L_9 = __this->get_m_Users_2();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_10 = __this->get_m_DefaultTexture_6();
		UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * L_11 = (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E *)il2cpp_codegen_object_new(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E_il2cpp_TypeInfo_var);
		UserProfile__ctor_mA6594E3C7514264E933C665708C784CC8436FDDD(L_11, _stringLiteral265DC298E8767361F7E407E746C90F399678A5EA, _stringLiteral70B8DCB93382715A55CE5F2A8356EF5636A2D2DA, (bool)0, 3, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_m6D65148007B430EA44875BCB51D06B7006488635(L_9, L_11, /*hidden argument*/List_1_Add_m6D65148007B430EA44875BCB51D06B7006488635_RuntimeMethod_var);
		List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * L_12 = __this->get_m_Users_2();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_13 = __this->get_m_DefaultTexture_6();
		UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E * L_14 = (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E *)il2cpp_codegen_object_new(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E_il2cpp_TypeInfo_var);
		UserProfile__ctor_mA6594E3C7514264E933C665708C784CC8436FDDD(L_14, _stringLiteralA95E85AED56318093B024674E217CAE0BD30241D, _stringLiteral0477D720ADF7C715B04850723531A5FB1BC5334B, (bool)0, 3, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_Add_m6D65148007B430EA44875BCB51D06B7006488635(L_12, L_14, /*hidden argument*/List_1_Add_m6D65148007B430EA44875BCB51D06B7006488635_RuntimeMethod_var);
		List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B * L_15 = __this->get_m_AchievementDescriptions_3();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_16 = __this->get_m_DefaultTexture_6();
		AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * L_17 = (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 *)il2cpp_codegen_object_new(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m24CE1C3B2B01706A79B3D1F4FAE892B90817D1C0(L_17, _stringLiteral740DE72C99D12A8838B9D5963E79A792386D3153, _stringLiteralBF048ABFE5FA262766B7609CD01E051E0B5C178F, L_16, _stringLiteral550953B107B624696F36DB8EBFB929B7F08304AD, _stringLiteral42DAB97C3BCEDBB413ABF258F77AAB0D74633D8E, (bool)0, ((int32_t)10), /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_mD78E5619872CDF61E8AA7F1AAC6F7B4E73DA35BA(L_15, L_17, /*hidden argument*/List_1_Add_mD78E5619872CDF61E8AA7F1AAC6F7B4E73DA35BA_RuntimeMethod_var);
		List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B * L_18 = __this->get_m_AchievementDescriptions_3();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_19 = __this->get_m_DefaultTexture_6();
		AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * L_20 = (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 *)il2cpp_codegen_object_new(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m24CE1C3B2B01706A79B3D1F4FAE892B90817D1C0(L_20, _stringLiteral6A1BC8FA99BE66A6796E385BC8EA6987D4A12A9A, _stringLiteral2B9658F6520F0A30BFD3FBBFA58A17334E3E00C9, L_19, _stringLiteral754375837F6DAF986BD4346249CB1B350C35CC4B, _stringLiteral5803B4028B2BCC2407085C7907272F325290C24D, (bool)0, ((int32_t)20), /*hidden argument*/NULL);
		NullCheck(L_18);
		List_1_Add_mD78E5619872CDF61E8AA7F1AAC6F7B4E73DA35BA(L_18, L_20, /*hidden argument*/List_1_Add_mD78E5619872CDF61E8AA7F1AAC6F7B4E73DA35BA_RuntimeMethod_var);
		List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B * L_21 = __this->get_m_AchievementDescriptions_3();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_22 = __this->get_m_DefaultTexture_6();
		AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * L_23 = (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 *)il2cpp_codegen_object_new(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m24CE1C3B2B01706A79B3D1F4FAE892B90817D1C0(L_23, _stringLiteral5003363E5CB018557F29B288930163BD510D2DA5, _stringLiteral617550C78D461318811168687509E38FEF067A10, L_22, _stringLiteralDD71F9B1977FF241C905ADF54B9AA5AB354382AB, _stringLiteralE88317F355542B26DF5C6B5E2FB52E3C082B2592, (bool)0, ((int32_t)15), /*hidden argument*/NULL);
		NullCheck(L_21);
		List_1_Add_mD78E5619872CDF61E8AA7F1AAC6F7B4E73DA35BA(L_21, L_23, /*hidden argument*/List_1_Add_mD78E5619872CDF61E8AA7F1AAC6F7B4E73DA35BA_RuntimeMethod_var);
		Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * L_24 = (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE *)il2cpp_codegen_object_new(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE_il2cpp_TypeInfo_var);
		Leaderboard__ctor_m8F95E90F59DC4DDAE4E51DA78AEEE3BD8152E058(L_24, /*hidden argument*/NULL);
		V_0 = L_24;
		Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * L_25 = V_0;
		NullCheck(L_25);
		Leaderboard_SetTitle_mE979DA82717ECC37419BF0327AE6C24FEFBAD1FA(L_25, _stringLiteral568DA39971E20BA77635B1C57ABEA0BF8ABEF12E, /*hidden argument*/NULL);
		Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * L_26 = V_0;
		NullCheck(L_26);
		Leaderboard_set_id_m64F963FFF8996AFB621CAA4099473644FD4CBA08_inline(L_26, _stringLiteral1F16F17DCCB65BA2BEC7489F939C0E2749FDBBB5, /*hidden argument*/NULL);
		List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * L_27 = (List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 *)il2cpp_codegen_object_new(List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59_il2cpp_TypeInfo_var);
		List_1__ctor_mE88377B977045BB2CFF1BB1C6A01314FA5D652E5(L_27, /*hidden argument*/List_1__ctor_mE88377B977045BB2CFF1BB1C6A01314FA5D652E5_RuntimeMethod_var);
		V_1 = L_27;
		List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_29 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_2 = L_29;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_30 = DateTime_AddDays_mB11D2BB2D7DD6944D1071809574A951258F94D8E((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_2), (-1.0), /*hidden argument*/NULL);
		Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * L_31 = (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 *)il2cpp_codegen_object_new(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7_il2cpp_TypeInfo_var);
		Score__ctor_m927C21269C57AEFAD73F413EDD17DD7BFA3A5183(L_31, _stringLiteral1F16F17DCCB65BA2BEC7489F939C0E2749FDBBB5, (((int64_t)((int64_t)((int32_t)300)))), _stringLiteralDD01903921EA24941C26A48F2CEC24E0BB0E8CC7, L_30, _stringLiteral49732DD0BE0358B3934E602E967FD14340D1332B, 1, /*hidden argument*/NULL);
		NullCheck(L_28);
		List_1_Add_mBBD8D195322BC92F4CB52CAF88483175A7117F9F(L_28, L_31, /*hidden argument*/List_1_Add_mBBD8D195322BC92F4CB52CAF88483175A7117F9F_RuntimeMethod_var);
		List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * L_32 = V_1;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_33 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_2 = L_33;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_34 = DateTime_AddDays_mB11D2BB2D7DD6944D1071809574A951258F94D8E((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_2), (-1.0), /*hidden argument*/NULL);
		Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * L_35 = (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 *)il2cpp_codegen_object_new(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7_il2cpp_TypeInfo_var);
		Score__ctor_m927C21269C57AEFAD73F413EDD17DD7BFA3A5183(L_35, _stringLiteral1F16F17DCCB65BA2BEC7489F939C0E2749FDBBB5, (((int64_t)((int64_t)((int32_t)255)))), _stringLiteralA5B1D7E217AA227D5B2B8A84920780CF637960E2, L_34, _stringLiteralA4F54419021E432252DCDF769ECEAD617121B28B, 2, /*hidden argument*/NULL);
		NullCheck(L_32);
		List_1_Add_mBBD8D195322BC92F4CB52CAF88483175A7117F9F(L_32, L_35, /*hidden argument*/List_1_Add_mBBD8D195322BC92F4CB52CAF88483175A7117F9F_RuntimeMethod_var);
		List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * L_36 = V_1;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_37 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_2 = L_37;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_38 = DateTime_AddDays_mB11D2BB2D7DD6944D1071809574A951258F94D8E((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_2), (-1.0), /*hidden argument*/NULL);
		Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * L_39 = (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 *)il2cpp_codegen_object_new(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7_il2cpp_TypeInfo_var);
		Score__ctor_m927C21269C57AEFAD73F413EDD17DD7BFA3A5183(L_39, _stringLiteral1F16F17DCCB65BA2BEC7489F939C0E2749FDBBB5, (((int64_t)((int64_t)((int32_t)55)))), _stringLiteral9F6BF828C80134B8D3E07B058045FBA6ACD4E9AC, L_38, _stringLiteralA4631E8AE7E52890526F1EA9A08639AE65981DDA, 3, /*hidden argument*/NULL);
		NullCheck(L_36);
		List_1_Add_mBBD8D195322BC92F4CB52CAF88483175A7117F9F(L_36, L_39, /*hidden argument*/List_1_Add_mBBD8D195322BC92F4CB52CAF88483175A7117F9F_RuntimeMethod_var);
		List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * L_40 = V_1;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_41 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_2 = L_41;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_42 = DateTime_AddDays_mB11D2BB2D7DD6944D1071809574A951258F94D8E((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_2), (-1.0), /*hidden argument*/NULL);
		Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * L_43 = (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 *)il2cpp_codegen_object_new(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7_il2cpp_TypeInfo_var);
		Score__ctor_m927C21269C57AEFAD73F413EDD17DD7BFA3A5183(L_43, _stringLiteral1F16F17DCCB65BA2BEC7489F939C0E2749FDBBB5, (((int64_t)((int64_t)((int32_t)10)))), _stringLiteral70B8DCB93382715A55CE5F2A8356EF5636A2D2DA, L_42, _stringLiteral92A5E6C4902DDA52751E281094426240C8944490, 4, /*hidden argument*/NULL);
		NullCheck(L_40);
		List_1_Add_mBBD8D195322BC92F4CB52CAF88483175A7117F9F(L_40, L_43, /*hidden argument*/List_1_Add_mBBD8D195322BC92F4CB52CAF88483175A7117F9F_RuntimeMethod_var);
		Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * L_44 = V_0;
		List_1_tFA5E3B769240B5F1B867E295DDC32B9ED71D7C59 * L_45 = V_1;
		NullCheck(L_45);
		ScoreU5BU5D_t818B27C4391BD222E5FC9B59EDE8FB90BA14CD6C* L_46 = List_1_ToArray_m001328719E67CA752D298FD3010C4BA10A1FAC1A(L_45, /*hidden argument*/List_1_ToArray_m001328719E67CA752D298FD3010C4BA10A1FAC1A_RuntimeMethod_var);
		V_3 = (IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C*)L_46;
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_47 = V_3;
		NullCheck(L_44);
		Leaderboard_SetScores_m64F8F1A13C1EAD88C6BD62C886DE76726662B4DA(L_44, L_47, /*hidden argument*/NULL);
		List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB * L_48 = __this->get_m_Leaderboards_5();
		Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * L_49 = V_0;
		NullCheck(L_48);
		List_1_Add_mC6425B7F16854516C83A26D467C6D021B73AE159(L_48, L_49, /*hidden argument*/List_1_Add_mC6425B7F16854516C83A26D467C6D021B73AE159_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Local::CreateDummyTexture(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Local_CreateDummyTexture_m969385B8AC3B7F1947810406115B7896E4E89BA8 (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local_CreateDummyTexture_m969385B8AC3B7F1947810406115B7896E4E89BA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_6 = NULL;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0044;
	}

IL_000d:
	{
		V_2 = 0;
		goto IL_0035;
	}

IL_0012:
	{
		int32_t L_3 = V_2;
		int32_t L_4 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_3&(int32_t)L_4))) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_5 = Color_get_gray_m11EEED9092A8D949D3326611C7137334B746DF09(/*hidden argument*/NULL);
		G_B5_0 = L_5;
		goto IL_0025;
	}

IL_0020:
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		G_B5_0 = L_6;
	}

IL_0025:
	{
		V_3 = G_B5_0;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_10 = V_3;
		NullCheck(L_7);
		Texture2D_SetPixel_m8BE87C152447B812D06CB894B3570269CC2DE7C3(L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___width0;
		V_4 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = ___height1;
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_000d;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_19 = V_0;
		NullCheck(L_19);
		Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_19, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_20 = V_0;
		V_6 = L_20;
		goto IL_005a;
	}

IL_005a:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_21 = V_6;
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local__ctor_m18A130860CC620F4FEAA697A0111611959359178 (Local_t36C367EABFCE034400B659818ACAFCFB79532DD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local__ctor_m18A130860CC620F4FEAA697A0111611959359178_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * L_0 = (List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 *)il2cpp_codegen_object_new(List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64_il2cpp_TypeInfo_var);
		List_1__ctor_m1A43BA5D23AD9736CE19353445249FA41CBB0881(L_0, /*hidden argument*/List_1__ctor_m1A43BA5D23AD9736CE19353445249FA41CBB0881_RuntimeMethod_var);
		__this->set_m_Friends_1(L_0);
		List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 * L_1 = (List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64 *)il2cpp_codegen_object_new(List_1_t6D234ADBFACC26518C12281ED788200ED5CC2B64_il2cpp_TypeInfo_var);
		List_1__ctor_m1A43BA5D23AD9736CE19353445249FA41CBB0881(L_1, /*hidden argument*/List_1__ctor_m1A43BA5D23AD9736CE19353445249FA41CBB0881_RuntimeMethod_var);
		__this->set_m_Users_2(L_1);
		List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B * L_2 = (List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B *)il2cpp_codegen_object_new(List_1_t1B0E0960DF0DE59AEAE7AF55FAAA194480923C9B_il2cpp_TypeInfo_var);
		List_1__ctor_m112E9FC5F574771B3C6F6C2A1D0542C5135374F4(L_2, /*hidden argument*/List_1__ctor_m112E9FC5F574771B3C6F6C2A1D0542C5135374F4_RuntimeMethod_var);
		__this->set_m_AchievementDescriptions_3(L_2);
		List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD * L_3 = (List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD *)il2cpp_codegen_object_new(List_1_tD864CE9595841DE7F38850604D479CD0FEAC65CD_il2cpp_TypeInfo_var);
		List_1__ctor_m3AE06D7A687E3A376BDCEABBC9A17708DBDA5F98(L_3, /*hidden argument*/List_1__ctor_m3AE06D7A687E3A376BDCEABBC9A17708DBDA5F98_RuntimeMethod_var);
		__this->set_m_Achievements_4(L_3);
		List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB * L_4 = (List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB *)il2cpp_codegen_object_new(List_1_tD0ACA8003DC14A03B7485BC762068FF2F05DEEBB_il2cpp_TypeInfo_var);
		List_1__ctor_m8A81ACE3D29D0909B83BC4E5F0B8F6345CD73B48(L_4, /*hidden argument*/List_1__ctor_m8A81ACE3D29D0909B83BC4E5F0B8F6345CD73B48_RuntimeMethod_var);
		__this->set_m_Leaderboards_5(L_4);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local__cctor_mF5DDF3546FB61F0A4E373CFFB3351314F5E9C66B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local__cctor_mF5DDF3546FB61F0A4E373CFFB3351314F5E9C66B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_StaticFields*)il2cpp_codegen_static_fields_for(Local_t36C367EABFCE034400B659818ACAFCFB79532DD8_il2cpp_TypeInfo_var))->set_m_LocalUser_0((LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 *)NULL);
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
// System.Void UnityEngine.SocialPlatforms.Local_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFCA9448A5C4C54A8E0F677F0916B192EBD9DA71E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mFCA9448A5C4C54A8E0F677F0916B192EBD9DA71E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD * L_0 = (U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD *)il2cpp_codegen_object_new(U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB5FBA875967F5A3D85EFDF9B3E24B6087D545DC5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB5FBA875967F5A3D85EFDF9B3E24B6087D545DC5 (U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Local_<>c::<SortScores>b__20_0(UnityEngine.SocialPlatforms.Impl.Score,UnityEngine.SocialPlatforms.Impl.Score)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSortScoresU3Eb__20_0_m15C13CD2E74E140E5D681A53F17137D88BDDD251 (U3CU3Ec_tD33012566A57FE25FCD8AB5C3EA56B97A4B8C1BD * __this, Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * ___s10, Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * ___s21, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * L_0 = ___s21;
		NullCheck(L_0);
		int64_t L_1 = Score_get_value_m09D611022A4EEA85CDADB38BCC5FF86ECD5620D3_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * L_2 = ___s10;
		NullCheck(L_2);
		int64_t L_3 = Score_get_value_m09D611022A4EEA85CDADB38BCC5FF86ECD5620D3_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = Int64_CompareTo_m21E0F72C677E986977303B18D5472487319DCFD2((int64_t*)(&V_0), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_5 = V_1;
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
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Range__ctor_m464C0B9EC4D5509770E152A5D935EDF1B3A325D0 (Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fromValue0;
		__this->set_from_0(L_0);
		int32_t L_1 = ___valueCount1;
		__this->set_count_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Range__ctor_m464C0B9EC4D5509770E152A5D935EDF1B3A325D0_AdjustorThunk (RuntimeObject * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC * _thisAdjusted = reinterpret_cast<Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC *>(__this + _offset);
	Range__ctor_m464C0B9EC4D5509770E152A5D935EDF1B3A325D0(_thisAdjusted, ___fromValue0, ___valueCount1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AchievementDescription_set_id_mB7EDF27F58B8E16C2815BFD76FB5CC564C68D29D_inline (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_m2AF21B25C05E8C733EBA2D856534299C6DCF0FDC_inline (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Leaderboard_set_id_m64F963FFF8996AFB621CAA4099473644FD4CBA08_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Leaderboard_set_range_mB7A8EBE408EFFEEE01CFBE57339DCDE3C1E1F9BB_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  ___value0, const RuntimeMethod* method)
{
	{
		Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  L_0 = ___value0;
		__this->set_U3CrangeU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m679EE7E211B46FAE030B49D08922D173B7E0F4E3_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CuserScopeU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m274E25FF5E1BD4ED3A2938EFBA6B1B279EC973D7_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CtimeScopeU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_m0AE8709B2858B97A0D7DD2FDC9B2D1D9243D64F3_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  Leaderboard_get_range_m5E964AEA16E5A443357BA8656DA09CCF8283B4F3_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method)
{
	{
		Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  L_0 = __this->get_U3CrangeU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m861E532FA53D0C073A0CFD53E94978C008233F22_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CuserScopeU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mEC73B36FA70E5C16B86EFB1F589791990D55939C_inline (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CtimeScopeU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Score_set_leaderboardID_mDDB6ECCB7DE7A251865082CD84BF822AC96DF5F5_inline (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CleaderboardIDU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Score_set_value_m639986A2BE14ADB1D34F7636E32180326F9B3853_inline (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CvalueU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t Score_get_value_m09D611022A4EEA85CDADB38BCC5FF86ECD5620D3_inline (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CvalueU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_mDF71D3E6E7B945D70264EFA9DDC5DA4AE51890FD_inline (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CleaderboardIDU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
