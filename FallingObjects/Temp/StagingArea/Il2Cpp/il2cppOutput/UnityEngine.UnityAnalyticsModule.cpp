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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged
struct IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C;
// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F;
// UnityEngine.Analytics.CustomEventData
struct CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37;
// UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsSessionInfo_tE075F764A74D2B095CFD57F3B179397F504B7D8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsSessionState_t61CA873937E9A3B881B71B32F518A954A4C8F267_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t228E0A04E82D18717D57712E2B1A5A685AD987C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t13E977F5B7D3467DB6E01785432A3C4E21E4CDE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteSettings_t3F7E07D15288B0DF84A4A32044592D8AFA6D36ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
IL2CPP_EXTERN_C String_t* _stringLiteral351DB7DBABE98AE0DDE4A114100B1D9CFE38CDC8;
IL2CPP_EXTERN_C String_t* _stringLiteralEF9343981EC10013222A31ABF8393BC213AEAF80;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_m8A4240174E60397816F6EACC65FE1E27F4275FA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Analytics_CustomEvent_mB0F6DDF5C94D0D6540E427B71E4081F443CA6E02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Analytics_CustomEvent_mBF296AE9FDCD3538CFFBFF4D5B5DDBC8B477D034_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomEventData_AddDictionary_mDA0270C0DE80222EEB3D5B9E6432E59E99C48FA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mAC09B6950211936EF2A4251B70DF5124DED3CD0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m5D1180FCE84ACA037CCCF151B9696C4575634758_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AnalyticsSessionInfo_CallIdentityTokenChanged_m975E899E5BF56456D2B4D6A1296567252006095F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnalyticsSessionInfo_CallSessionStateChanged_mB5E3A42407B97BD8A6A4827FADDA91DB85B0F294_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Analytics_CustomEvent_mB0F6DDF5C94D0D6540E427B71E4081F443CA6E02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Analytics_CustomEvent_mBF296AE9FDCD3538CFFBFF4D5B5DDBC8B477D034_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CustomEventData_AddDictionary_mDA0270C0DE80222EEB3D5B9E6432E59E99C48FA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CustomEventData_Destroy_m60BE08121AFF38808FBD62CC9BF5929E30C444CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CustomEventData_Dispose_m62D34DC34233E96231793EB2A3F165ED17C29B6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigSettings_RemoteConfigSettingsUpdated_mF72E8C9F99B752FEA9EA388CCC1EFECC24733504_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_RemoteSettingsBeforeFetchFromServer_mBF1BEF2ACAFE13AE7B820FCA5CB7B81CF614EF11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_RemoteSettingsUpdateCompleted_m6C6C3568C5A8F319CD06F8303111F06AB3718A02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_RemoteSettingsUpdated_mD5427A08A622FDAA576A3D9CF05AD4C7CC6102F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SessionStateChanged_BeginInvoke_mD75E6832EC29F8B01CEEAAACD5DC54322F03D4B3_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tCD4309F8DDA0F37A98DBCDFE49F6C8F300C242B0 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// UnityEngine.Analytics.Analytics
struct  Analytics_tCA6E11F003D5B8AD0A5F0780BF5954566C7EB724  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Analytics.AnalyticsSessionInfo
struct  AnalyticsSessionInfo_tE075F764A74D2B095CFD57F3B179397F504B7D8C  : public RuntimeObject
{
public:

public:
};

struct AnalyticsSessionInfo_tE075F764A74D2B095CFD57F3B179397F504B7D8C_StaticFields
{
public:
	// UnityEngine.Analytics.AnalyticsSessionInfo_SessionStateChanged UnityEngine.Analytics.AnalyticsSessionInfo::sessionStateChanged
	SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F * ___sessionStateChanged_0;
	// UnityEngine.Analytics.AnalyticsSessionInfo_IdentityTokenChanged UnityEngine.Analytics.AnalyticsSessionInfo::identityTokenChanged
	IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C * ___identityTokenChanged_1;

public:
	inline static int32_t get_offset_of_sessionStateChanged_0() { return static_cast<int32_t>(offsetof(AnalyticsSessionInfo_tE075F764A74D2B095CFD57F3B179397F504B7D8C_StaticFields, ___sessionStateChanged_0)); }
	inline SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F * get_sessionStateChanged_0() const { return ___sessionStateChanged_0; }
	inline SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F ** get_address_of_sessionStateChanged_0() { return &___sessionStateChanged_0; }
	inline void set_sessionStateChanged_0(SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F * value)
	{
		___sessionStateChanged_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionStateChanged_0), (void*)value);
	}

	inline static int32_t get_offset_of_identityTokenChanged_1() { return static_cast<int32_t>(offsetof(AnalyticsSessionInfo_tE075F764A74D2B095CFD57F3B179397F504B7D8C_StaticFields, ___identityTokenChanged_1)); }
	inline IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C * get_identityTokenChanged_1() const { return ___identityTokenChanged_1; }
	inline IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C ** get_address_of_identityTokenChanged_1() { return &___identityTokenChanged_1; }
	inline void set_identityTokenChanged_1(IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C * value)
	{
		___identityTokenChanged_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identityTokenChanged_1), (void*)value);
	}
};


// UnityEngine.Analytics.ContinuousEvent
struct  ContinuousEvent_tBAB6336255F3FC327CBA03CE368CD4D8D027107A  : public RuntimeObject
{
public:

public:
};


// UnityEngine.RemoteConfigSettingsHelper
struct  RemoteConfigSettingsHelper_t2F0887933AC2724EEA806E32E9147A493C0A33BE  : public RuntimeObject
{
public:

public:
};


// UnityEngine.RemoteSettings
struct  RemoteSettings_t3F7E07D15288B0DF84A4A32044592D8AFA6D36ED  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t3F7E07D15288B0DF84A4A32044592D8AFA6D36ED_StaticFields
{
public:
	// UnityEngine.RemoteSettings_UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * ___Updated_0;
	// System.Action UnityEngine.RemoteSettings::BeforeFetchFromServer
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___BeforeFetchFromServer_1;
	// System.Action`3<System.Boolean,System.Boolean,System.Int32> UnityEngine.RemoteSettings::Completed
	Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * ___Completed_2;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t3F7E07D15288B0DF84A4A32044592D8AFA6D36ED_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Updated_0), (void*)value);
	}

	inline static int32_t get_offset_of_BeforeFetchFromServer_1() { return static_cast<int32_t>(offsetof(RemoteSettings_t3F7E07D15288B0DF84A4A32044592D8AFA6D36ED_StaticFields, ___BeforeFetchFromServer_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_BeforeFetchFromServer_1() const { return ___BeforeFetchFromServer_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_BeforeFetchFromServer_1() { return &___BeforeFetchFromServer_1; }
	inline void set_BeforeFetchFromServer_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___BeforeFetchFromServer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeforeFetchFromServer_1), (void*)value);
	}

	inline static int32_t get_offset_of_Completed_2() { return static_cast<int32_t>(offsetof(RemoteSettings_t3F7E07D15288B0DF84A4A32044592D8AFA6D36ED_StaticFields, ___Completed_2)); }
	inline Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * get_Completed_2() const { return ___Completed_2; }
	inline Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E ** get_address_of_Completed_2() { return &___Completed_2; }
	inline void set_Completed_2(Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * value)
	{
		___Completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Completed_2), (void*)value);
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_tBC573EE45BE549307D189378677DF98C3A6C8059 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBC573EE45BE549307D189378677DF98C3A6C8059, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBC573EE45BE549307D189378677DF98C3A6C8059, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
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

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
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


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Analytics.AnalyticsResult
struct  AnalyticsResult_tD85E76975F9D738CA8110F664D5482A8608D131C 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnalyticsResult_tD85E76975F9D738CA8110F664D5482A8608D131C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Analytics.AnalyticsSessionState
struct  AnalyticsSessionState_t61CA873937E9A3B881B71B32F518A954A4C8F267 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnalyticsSessionState_t61CA873937E9A3B881B71B32F518A954A4C8F267, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Analytics.CustomEventData
struct  CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Analytics.CustomEventData::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Analytics.CustomEventData
struct CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Analytics.CustomEventData
struct CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RemoteConfigSettings
struct  RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RemoteConfigSettings::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<System.Boolean> UnityEngine.RemoteConfigSettings::Updated
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___Updated_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_Updated_1() { return static_cast<int32_t>(offsetof(RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A, ___Updated_1)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_Updated_1() const { return ___Updated_1; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_Updated_1() { return &___Updated_1; }
	inline void set_Updated_1(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___Updated_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Updated_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
};
// Native definition for COM marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
};

// UnityEngine.RemoteConfigSettingsHelper_Tag
struct  Tag_t7FB12BCA4EA470318C147C1AED37575DEB552307 
{
public:
	// System.Int32 UnityEngine.RemoteConfigSettingsHelper_Tag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Tag_t7FB12BCA4EA470318C147C1AED37575DEB552307, ___value___2)); }
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct  Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct  Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Analytics.AnalyticsSessionInfo_IdentityTokenChanged
struct  IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Analytics.AnalyticsSessionInfo_SessionStateChanged
struct  SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.RemoteSettings_UpdatedEventHandler
struct  UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m3AA5875E6F038F027D9B80929300B746525F9D65_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m8A4240174E60397816F6EACC65FE1E27F4275FA5_gshared (Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * __this, bool ___arg10, bool ___arg21, int32_t ___arg32, const RuntimeMethod* method);

// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.Analytics::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_IsInitialized_m8F7A2AA62A95AFB1362BB98DC5C45FEEC27E38F3 (const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendCustomEventName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_SendCustomEventName_mF80F99569E2BEC2B440F13CF4B7019F867B7D92E (String_t* ___customEventName0, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.CustomEventData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData__ctor_mDD616A5357DCBBBEB79725C779E86B9AC2F73078 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.CustomEventData::AddDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddDictionary_mDA0270C0DE80222EEB3D5B9E6432E59E99C48FA4 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, RuntimeObject* ___eventData0, const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendCustomEvent(UnityEngine.Analytics.CustomEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_SendCustomEvent_mBF3E8A1FDB7F4B32F6A0CEB60EC59185CA11AF18 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * ___eventData0, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.CustomEventData::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData_Dispose_m62D34DC34233E96231793EB2A3F165ED17C29B6C (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged_Invoke_m04E35EE6755FE675385F783A6FA7096BACD96740 (SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged_Invoke_m880802905DFE9AF46BAF48219CADF33938E0854F (IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C * __this, String_t* ___token0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Analytics.CustomEventData::Internal_Create(UnityEngine.Analytics.CustomEventData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CustomEventData_Internal_Create_m42DF97054891EB8D52D92EC1E1875AF1E0893A1C (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * ___ced0, String_t* ___name1, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.CustomEventData::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData_Destroy_m60BE08121AFF38808FBD62CC9BF5929E30C444CA (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.CustomEventData::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData_Internal_Destroy_mE1D3E1966E7D047C3AB2C49A2E6680DF3097C683 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mAC09B6950211936EF2A4251B70DF5124DED3CD0B_inline (KeyValuePair_2_tBC573EE45BE549307D189378677DF98C3A6C8059 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBC573EE45BE549307D189378677DF98C3A6C8059 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3AA5875E6F038F027D9B80929300B746525F9D65_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m5D1180FCE84ACA037CCCF151B9696C4575634758_inline (KeyValuePair_2_tBC573EE45BE549307D189378677DF98C3A6C8059 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tBC573EE45BE549307D189378677DF98C3A6C8059 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddString_m5E4382F85BC1A6A9814F4DCF887D86EC4D30BF3C (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String System.Char::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m106C901B4CB0DDEF732750349DAB71498C42C53F (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddInt32_m473A606F146A2ABDC1F1E5F0401217E10E088A75 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt32(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddUInt32_mEBEA494F859541865FDEC26CBD925E03AB11D78A (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___key0, uint32_t ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt64(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddInt64_mF79A8D03EB18BE5CC097FDFED8E7DDF9D931B224 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___key0, int64_t ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt64(System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddUInt64_mE0C4870736E758BC54EB4360A834304C72A23432 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___key0, uint64_t ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.CustomEventData::AddBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddBool_m0807E669CA6F9EB72FB53FDD3E45DC66C83B9E41 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Convert_ToDecimal_m0723C02BC98733C38A826B8BBF2C4AE24B7CB557 (float ___value0, const RuntimeMethod* method);
// System.Double System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Decimal_op_Explicit_mB7F34E3B2DFB6211CA5ACB5497DA6CDCB09FC6CE (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.CustomEventData::AddDouble(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddDouble_m71B600B1553314D300A4C250272BD97706DE48F5 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Convert_ToDecimal_m4084B6BF683AE0078FDC431EAE0A77DD161AC045 (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_mDDCCBAE9B59A483CBC3E5C02E3D68CEBEB2E41A8 (Type_t * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, bool, const RuntimeMethod*))Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler_Invoke_mD2D72D86708690251A8A947FECE091E8EE0107E7 (UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m8A4240174E60397816F6EACC65FE1E27F4275FA5 (Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * __this, bool ___arg10, bool ___arg21, int32_t ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E *, bool, bool, int32_t, const RuntimeMethod*))Action_3_Invoke_m8A4240174E60397816F6EACC65FE1E27F4275FA5_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
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
// System.Boolean UnityEngine.Analytics.Analytics::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_IsInitialized_m8F7A2AA62A95AFB1362BB98DC5C45FEEC27E38F3 (const RuntimeMethod* method)
{
	typedef bool (*Analytics_IsInitialized_m8F7A2AA62A95AFB1362BB98DC5C45FEEC27E38F3_ftn) ();
	static Analytics_IsInitialized_m8F7A2AA62A95AFB1362BB98DC5C45FEEC27E38F3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Analytics_IsInitialized_m8F7A2AA62A95AFB1362BB98DC5C45FEEC27E38F3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.Analytics::IsInitialized()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendCustomEventName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_SendCustomEventName_mF80F99569E2BEC2B440F13CF4B7019F867B7D92E (String_t* ___customEventName0, const RuntimeMethod* method)
{
	typedef int32_t (*Analytics_SendCustomEventName_mF80F99569E2BEC2B440F13CF4B7019F867B7D92E_ftn) (String_t*);
	static Analytics_SendCustomEventName_mF80F99569E2BEC2B440F13CF4B7019F867B7D92E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Analytics_SendCustomEventName_mF80F99569E2BEC2B440F13CF4B7019F867B7D92E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.Analytics::SendCustomEventName(System.String)");
	int32_t retVal = _il2cpp_icall_func(___customEventName0);
	return retVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendCustomEvent(UnityEngine.Analytics.CustomEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_SendCustomEvent_mBF3E8A1FDB7F4B32F6A0CEB60EC59185CA11AF18 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * ___eventData0, const RuntimeMethod* method)
{
	typedef int32_t (*Analytics_SendCustomEvent_mBF3E8A1FDB7F4B32F6A0CEB60EC59185CA11AF18_ftn) (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 *);
	static Analytics_SendCustomEvent_mBF3E8A1FDB7F4B32F6A0CEB60EC59185CA11AF18_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Analytics_SendCustomEvent_mBF3E8A1FDB7F4B32F6A0CEB60EC59185CA11AF18_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.Analytics::SendCustomEvent(UnityEngine.Analytics.CustomEventData)");
	int32_t retVal = _il2cpp_icall_func(___eventData0);
	return retVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_CustomEvent_mBF296AE9FDCD3538CFFBFF4D5B5DDBC8B477D034 (String_t* ___customEventName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Analytics_CustomEvent_mBF296AE9FDCD3538CFFBFF4D5B5DDBC8B477D034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___customEventName0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_3, _stringLiteralEF9343981EC10013222A31ABF8393BC213AEAF80, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Analytics_CustomEvent_mBF296AE9FDCD3538CFFBFF4D5B5DDBC8B477D034_RuntimeMethod_var);
	}

IL_0016:
	{
		bool L_4 = Analytics_IsInitialized_m8F7A2AA62A95AFB1362BB98DC5C45FEEC27E38F3(/*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		V_2 = 1;
		goto IL_002f;
	}

IL_0026:
	{
		String_t* L_6 = ___customEventName0;
		int32_t L_7 = Analytics_SendCustomEventName_mF80F99569E2BEC2B440F13CF4B7019F867B7D92E(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_002f;
	}

IL_002f:
	{
		int32_t L_8 = V_2;
		return L_8;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_CustomEvent_mB0F6DDF5C94D0D6540E427B71E4081F443CA6E02 (String_t* ___customEventName0, RuntimeObject* ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Analytics_CustomEvent_mB0F6DDF5C94D0D6540E427B71E4081F443CA6E02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ___customEventName0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_3, _stringLiteralEF9343981EC10013222A31ABF8393BC213AEAF80, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Analytics_CustomEvent_mB0F6DDF5C94D0D6540E427B71E4081F443CA6E02_RuntimeMethod_var);
	}

IL_0016:
	{
		bool L_4 = Analytics_IsInitialized_m8F7A2AA62A95AFB1362BB98DC5C45FEEC27E38F3(/*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		V_4 = 1;
		goto IL_0066;
	}

IL_0027:
	{
		RuntimeObject* L_6 = ___eventData1;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_8 = ___customEventName0;
		int32_t L_9 = Analytics_SendCustomEventName_mF80F99569E2BEC2B440F13CF4B7019F867B7D92E(L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		goto IL_0066;
	}

IL_003b:
	{
		String_t* L_10 = ___customEventName0;
		CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * L_11 = (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 *)il2cpp_codegen_object_new(CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_il2cpp_TypeInfo_var);
		CustomEventData__ctor_mDD616A5357DCBBBEB79725C779E86B9AC2F73078(L_11, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		V_1 = 6;
	}

IL_0044:
	try
	{ // begin try (depth: 1)
		CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * L_12 = V_0;
		RuntimeObject* L_13 = ___eventData1;
		NullCheck(L_12);
		CustomEventData_AddDictionary_mDA0270C0DE80222EEB3D5B9E6432E59E99C48FA4(L_12, L_13, /*hidden argument*/NULL);
		CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * L_14 = V_0;
		int32_t L_15 = Analytics_SendCustomEvent_mBF3E8A1FDB7F4B32F6A0CEB60EC59185CA11AF18(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		IL2CPP_LEAVE(0x61, FINALLY_0057);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * L_16 = V_0;
		NullCheck(L_16);
		CustomEventData_Dispose_m62D34DC34233E96231793EB2A3F165ED17C29B6C(L_16, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(87)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0061:
	{
		int32_t L_17 = V_1;
		V_4 = L_17;
		goto IL_0066;
	}

IL_0066:
	{
		int32_t L_18 = V_4;
		return L_18;
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
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsSessionInfo_CallSessionStateChanged_mB5E3A42407B97BD8A6A4827FADDA91DB85B0F294 (int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsSessionInfo_CallSessionStateChanged_mB5E3A42407B97BD8A6A4827FADDA91DB85B0F294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F * V_0 = NULL;
	bool V_1 = false;
	{
		SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F * L_0 = ((AnalyticsSessionInfo_tE075F764A74D2B095CFD57F3B179397F504B7D8C_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsSessionInfo_tE075F764A74D2B095CFD57F3B179397F504B7D8C_il2cpp_TypeInfo_var))->get_sessionStateChanged_0();
		V_0 = L_0;
		SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F * L_3 = V_0;
		int32_t L_4 = ___sessionState0;
		int64_t L_5 = ___sessionId1;
		int64_t L_6 = ___sessionElapsedTime2;
		bool L_7 = ___sessionChanged3;
		NullCheck(L_3);
		SessionStateChanged_Invoke_m04E35EE6755FE675385F783A6FA7096BACD96740(L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallIdentityTokenChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsSessionInfo_CallIdentityTokenChanged_m975E899E5BF56456D2B4D6A1296567252006095F (String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsSessionInfo_CallIdentityTokenChanged_m975E899E5BF56456D2B4D6A1296567252006095F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C * V_0 = NULL;
	bool V_1 = false;
	{
		IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C * L_0 = ((AnalyticsSessionInfo_tE075F764A74D2B095CFD57F3B179397F504B7D8C_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsSessionInfo_tE075F764A74D2B095CFD57F3B179397F504B7D8C_il2cpp_TypeInfo_var))->get_identityTokenChanged_1();
		V_0 = L_0;
		IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C * L_3 = V_0;
		String_t* L_4 = ___token0;
		NullCheck(L_3);
		IdentityTokenChanged_Invoke_m880802905DFE9AF46BAF48219CADF33938E0854F(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0017:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C (IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C * __this, String_t* ___token0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___token0' to native representation
	char* ____token0_marshaled = NULL;
	____token0_marshaled = il2cpp_codegen_marshal_string(___token0);

	// Native function invocation
	il2cppPInvokeFunc(____token0_marshaled);

	// Marshaling cleanup of parameter '___token0' native representation
	il2cpp_codegen_marshal_free(____token0_marshaled);
	____token0_marshaled = NULL;

}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo_IdentityTokenChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged__ctor_mF19200229726CE9C9D46D748EE445508F1CB4812 (IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo_IdentityTokenChanged::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged_Invoke_m880802905DFE9AF46BAF48219CADF33938E0854F (IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C * __this, String_t* ___token0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___token0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___token0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___token0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___token0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___token0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___token0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___token0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___token0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___token0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___token0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___token0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Analytics.AnalyticsSessionInfo_IdentityTokenChanged::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IdentityTokenChanged_BeginInvoke_m11482CACCF3D4EEC0D4118E71F54DFE620B0EE3E (IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C * __this, String_t* ___token0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___token0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo_IdentityTokenChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged_EndInvoke_m32757996DF7858ABA18173565A444DD948757C81 (IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F (SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int64_t, int64_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___sessionState0, ___sessionId1, ___sessionElapsedTime2, static_cast<int32_t>(___sessionChanged3));

}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo_SessionStateChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged__ctor_m596C4D6873E1F9841C454BA7542D468F53A2DB25 (SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo_SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged_Invoke_m04E35EE6755FE675385F783A6FA7096BACD96740 (SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(targetMethod, targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
					else
						GenericVirtActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(targetMethod, targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
					else
						VirtActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int64_t, int64_t, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___sessionState0) - 1), ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Analytics.AnalyticsSessionInfo_SessionStateChanged::BeginInvoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SessionStateChanged_BeginInvoke_mD75E6832EC29F8B01CEEAAACD5DC54322F03D4B3 (SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SessionStateChanged_BeginInvoke_mD75E6832EC29F8B01CEEAAACD5DC54322F03D4B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(AnalyticsSessionState_t61CA873937E9A3B881B71B32F518A954A4C8F267_il2cpp_TypeInfo_var, &___sessionState0);
	__d_args[1] = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &___sessionId1);
	__d_args[2] = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &___sessionElapsedTime2);
	__d_args[3] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___sessionChanged3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo_SessionStateChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged_EndInvoke_m1BE07B322DE61DE095B2E2F0D99F41D125F95E42 (SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// Conversion methods for marshalling of: UnityEngine.Analytics.CustomEventData
IL2CPP_EXTERN_C void CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_marshal_pinvoke(const CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37& unmarshaled, CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_marshal_pinvoke_back(const CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_marshaled_pinvoke& marshaled, CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.CustomEventData
IL2CPP_EXTERN_C void CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_marshal_pinvoke_cleanup(CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Analytics.CustomEventData
IL2CPP_EXTERN_C void CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_marshal_com(const CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37& unmarshaled, CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_marshal_com_back(const CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_marshaled_com& marshaled, CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.CustomEventData
IL2CPP_EXTERN_C void CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_marshal_com_cleanup(CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Analytics.CustomEventData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData__ctor_mDD616A5357DCBBBEB79725C779E86B9AC2F73078 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		intptr_t L_1 = CustomEventData_Internal_Create_m42DF97054891EB8D52D92EC1E1875AF1E0893A1C(__this, L_0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
// System.Void UnityEngine.Analytics.CustomEventData::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData_Finalize_mD75450572E12709EC321DF5E82B8FF0F861EE423 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		CustomEventData_Destroy_m60BE08121AFF38808FBD62CC9BF5929E30C444CA(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.CustomEventData::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData_Destroy_m60BE08121AFF38808FBD62CC9BF5929E30C444CA (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomEventData_Destroy_m60BE08121AFF38808FBD62CC9BF5929E30C444CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Ptr_0();
		CustomEventData_Internal_Destroy_mE1D3E1966E7D047C3AB2C49A2E6680DF3097C683((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.CustomEventData::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData_Dispose_m62D34DC34233E96231793EB2A3F165ED17C29B6C (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomEventData_Dispose_m62D34DC34233E96231793EB2A3F165ED17C29B6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CustomEventData_Destroy_m60BE08121AFF38808FBD62CC9BF5929E30C444CA(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr UnityEngine.Analytics.CustomEventData::Internal_Create(UnityEngine.Analytics.CustomEventData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CustomEventData_Internal_Create_m42DF97054891EB8D52D92EC1E1875AF1E0893A1C (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * ___ced0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef intptr_t (*CustomEventData_Internal_Create_m42DF97054891EB8D52D92EC1E1875AF1E0893A1C_ftn) (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 *, String_t*);
	static CustomEventData_Internal_Create_m42DF97054891EB8D52D92EC1E1875AF1E0893A1C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_Internal_Create_m42DF97054891EB8D52D92EC1E1875AF1E0893A1C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::Internal_Create(UnityEngine.Analytics.CustomEventData,System.String)");
	intptr_t retVal = _il2cpp_icall_func(___ced0, ___name1);
	return retVal;
}
// System.Void UnityEngine.Analytics.CustomEventData::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData_Internal_Destroy_mE1D3E1966E7D047C3AB2C49A2E6680DF3097C683 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*CustomEventData_Internal_Destroy_mE1D3E1966E7D047C3AB2C49A2E6680DF3097C683_ftn) (intptr_t);
	static CustomEventData_Internal_Destroy_mE1D3E1966E7D047C3AB2C49A2E6680DF3097C683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_Internal_Destroy_mE1D3E1966E7D047C3AB2C49A2E6680DF3097C683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddString_m5E4382F85BC1A6A9814F4DCF887D86EC4D30BF3C (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddString_m5E4382F85BC1A6A9814F4DCF887D86EC4D30BF3C_ftn) (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 *, String_t*, String_t*);
	static CustomEventData_AddString_m5E4382F85BC1A6A9814F4DCF887D86EC4D30BF3C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddString_m5E4382F85BC1A6A9814F4DCF887D86EC4D30BF3C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddString(System.String,System.String)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddInt32_m473A606F146A2ABDC1F1E5F0401217E10E088A75 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddInt32_m473A606F146A2ABDC1F1E5F0401217E10E088A75_ftn) (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 *, String_t*, int32_t);
	static CustomEventData_AddInt32_m473A606F146A2ABDC1F1E5F0401217E10E088A75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddInt32_m473A606F146A2ABDC1F1E5F0401217E10E088A75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddInt32(System.String,System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt32(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddUInt32_mEBEA494F859541865FDEC26CBD925E03AB11D78A (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___key0, uint32_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddUInt32_mEBEA494F859541865FDEC26CBD925E03AB11D78A_ftn) (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 *, String_t*, uint32_t);
	static CustomEventData_AddUInt32_mEBEA494F859541865FDEC26CBD925E03AB11D78A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddUInt32_mEBEA494F859541865FDEC26CBD925E03AB11D78A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddUInt32(System.String,System.UInt32)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt64(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddInt64_mF79A8D03EB18BE5CC097FDFED8E7DDF9D931B224 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddInt64_mF79A8D03EB18BE5CC097FDFED8E7DDF9D931B224_ftn) (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 *, String_t*, int64_t);
	static CustomEventData_AddInt64_mF79A8D03EB18BE5CC097FDFED8E7DDF9D931B224_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddInt64_mF79A8D03EB18BE5CC097FDFED8E7DDF9D931B224_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddInt64(System.String,System.Int64)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt64(System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddUInt64_mE0C4870736E758BC54EB4360A834304C72A23432 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___key0, uint64_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddUInt64_mE0C4870736E758BC54EB4360A834304C72A23432_ftn) (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 *, String_t*, uint64_t);
	static CustomEventData_AddUInt64_mE0C4870736E758BC54EB4360A834304C72A23432_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddUInt64_mE0C4870736E758BC54EB4360A834304C72A23432_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddUInt64(System.String,System.UInt64)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddBool_m0807E669CA6F9EB72FB53FDD3E45DC66C83B9E41 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddBool_m0807E669CA6F9EB72FB53FDD3E45DC66C83B9E41_ftn) (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 *, String_t*, bool);
	static CustomEventData_AddBool_m0807E669CA6F9EB72FB53FDD3E45DC66C83B9E41_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddBool_m0807E669CA6F9EB72FB53FDD3E45DC66C83B9E41_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddBool(System.String,System.Boolean)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddDouble(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddDouble_m71B600B1553314D300A4C250272BD97706DE48F5 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddDouble_m71B600B1553314D300A4C250272BD97706DE48F5_ftn) (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 *, String_t*, double);
	static CustomEventData_AddDouble_m71B600B1553314D300A4C250272BD97706DE48F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddDouble_m71B600B1553314D300A4C250272BD97706DE48F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddDouble(System.String,System.Double)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddDictionary_mDA0270C0DE80222EEB3D5B9E6432E59E99C48FA4 (CustomEventData_t0FB0E3B1FD10141E3ADDA256C8F00C46B7BCCA37 * __this, RuntimeObject* ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomEventData_AddDictionary_mDA0270C0DE80222EEB3D5B9E6432E59E99C48FA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tBC573EE45BE549307D189378677DF98C3A6C8059  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Type_t * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t228E0A04E82D18717D57712E2B1A5A685AD987C9_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02b8;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			KeyValuePair_2_tBC573EE45BE549307D189378677DF98C3A6C8059  L_3 = InterfaceFuncInvoker0< KeyValuePair_2_tBC573EE45BE549307D189378677DF98C3A6C8059  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t13E977F5B7D3467DB6E01785432A3C4E21E4CDE0_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			String_t* L_4 = KeyValuePair_2_get_Key_mAC09B6950211936EF2A4251B70DF5124DED3CD0B_inline((KeyValuePair_2_tBC573EE45BE549307D189378677DF98C3A6C8059 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mAC09B6950211936EF2A4251B70DF5124DED3CD0B_RuntimeMethod_var);
			V_2 = L_4;
			RuntimeObject * L_5 = KeyValuePair_2_get_Value_m5D1180FCE84ACA037CCCF151B9696C4575634758_inline((KeyValuePair_2_tBC573EE45BE549307D189378677DF98C3A6C8059 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m5D1180FCE84ACA037CCCF151B9696C4575634758_RuntimeMethod_var);
			V_3 = L_5;
			RuntimeObject * L_6 = V_3;
			V_5 = (bool)((((RuntimeObject*)(RuntimeObject *)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_7 = V_5;
			if (!L_7)
			{
				goto IL_0043;
			}
		}

IL_0030:
		{
			String_t* L_8 = V_2;
			CustomEventData_AddString_m5E4382F85BC1A6A9814F4DCF887D86EC4D30BF3C(__this, L_8, _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833, /*hidden argument*/NULL);
			goto IL_02b8;
		}

IL_0043:
		{
			RuntimeObject * L_9 = V_3;
			NullCheck(L_9);
			Type_t * L_10 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_9, /*hidden argument*/NULL);
			V_4 = L_10;
			Type_t * L_11 = V_4;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_12 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_13 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_12, /*hidden argument*/NULL);
			V_6 = (bool)((((RuntimeObject*)(Type_t *)L_11) == ((RuntimeObject*)(Type_t *)L_13))? 1 : 0);
			bool L_14 = V_6;
			if (!L_14)
			{
				goto IL_0072;
			}
		}

IL_005f:
		{
			String_t* L_15 = V_2;
			RuntimeObject * L_16 = V_3;
			CustomEventData_AddString_m5E4382F85BC1A6A9814F4DCF887D86EC4D30BF3C(__this, L_15, ((String_t*)CastclassSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_0072:
		{
			Type_t * L_17 = V_4;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_18 = { reinterpret_cast<intptr_t> (Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_19 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_18, /*hidden argument*/NULL);
			V_7 = (bool)((((RuntimeObject*)(Type_t *)L_17) == ((RuntimeObject*)(Type_t *)L_19))? 1 : 0);
			bool L_20 = V_7;
			if (!L_20)
			{
				goto IL_009e;
			}
		}

IL_0086:
		{
			String_t* L_21 = V_2;
			RuntimeObject * L_22 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
			String_t* L_23 = Char_ToString_m106C901B4CB0DDEF732750349DAB71498C42C53F(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_22, Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			CustomEventData_AddString_m5E4382F85BC1A6A9814F4DCF887D86EC4D30BF3C(__this, L_21, L_23, /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_009e:
		{
			Type_t * L_24 = V_4;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_25 = { reinterpret_cast<intptr_t> (SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_26 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_25, /*hidden argument*/NULL);
			V_8 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
			bool L_27 = V_8;
			if (!L_27)
			{
				goto IL_00c5;
			}
		}

IL_00b2:
		{
			String_t* L_28 = V_2;
			RuntimeObject * L_29 = V_3;
			CustomEventData_AddInt32_m473A606F146A2ABDC1F1E5F0401217E10E088A75(__this, L_28, ((*(int8_t*)((int8_t*)UnBox(L_29, SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_00c5:
		{
			Type_t * L_30 = V_4;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_31 = { reinterpret_cast<intptr_t> (Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_32 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_31, /*hidden argument*/NULL);
			V_9 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
			bool L_33 = V_9;
			if (!L_33)
			{
				goto IL_00ec;
			}
		}

IL_00d9:
		{
			String_t* L_34 = V_2;
			RuntimeObject * L_35 = V_3;
			CustomEventData_AddInt32_m473A606F146A2ABDC1F1E5F0401217E10E088A75(__this, L_34, ((*(uint8_t*)((uint8_t*)UnBox(L_35, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_00ec:
		{
			Type_t * L_36 = V_4;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_37 = { reinterpret_cast<intptr_t> (Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_38 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_37, /*hidden argument*/NULL);
			V_10 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
			bool L_39 = V_10;
			if (!L_39)
			{
				goto IL_0113;
			}
		}

IL_0100:
		{
			String_t* L_40 = V_2;
			RuntimeObject * L_41 = V_3;
			CustomEventData_AddInt32_m473A606F146A2ABDC1F1E5F0401217E10E088A75(__this, L_40, ((*(int16_t*)((int16_t*)UnBox(L_41, Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_0113:
		{
			Type_t * L_42 = V_4;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_43 = { reinterpret_cast<intptr_t> (UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_44 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_43, /*hidden argument*/NULL);
			V_11 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
			bool L_45 = V_11;
			if (!L_45)
			{
				goto IL_013a;
			}
		}

IL_0127:
		{
			String_t* L_46 = V_2;
			RuntimeObject * L_47 = V_3;
			CustomEventData_AddUInt32_mEBEA494F859541865FDEC26CBD925E03AB11D78A(__this, L_46, ((*(uint16_t*)((uint16_t*)UnBox(L_47, UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_013a:
		{
			Type_t * L_48 = V_4;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_49 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_50 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_49, /*hidden argument*/NULL);
			V_12 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
			bool L_51 = V_12;
			if (!L_51)
			{
				goto IL_0161;
			}
		}

IL_014e:
		{
			String_t* L_52 = V_2;
			RuntimeObject * L_53 = V_3;
			CustomEventData_AddInt32_m473A606F146A2ABDC1F1E5F0401217E10E088A75(__this, L_52, ((*(int32_t*)((int32_t*)UnBox(L_53, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_0161:
		{
			Type_t * L_54 = V_4;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_55 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_56 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_55, /*hidden argument*/NULL);
			V_13 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
			bool L_57 = V_13;
			if (!L_57)
			{
				goto IL_018e;
			}
		}

IL_0175:
		{
			String_t* L_58 = KeyValuePair_2_get_Key_mAC09B6950211936EF2A4251B70DF5124DED3CD0B_inline((KeyValuePair_2_tBC573EE45BE549307D189378677DF98C3A6C8059 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mAC09B6950211936EF2A4251B70DF5124DED3CD0B_RuntimeMethod_var);
			RuntimeObject * L_59 = V_3;
			CustomEventData_AddUInt32_mEBEA494F859541865FDEC26CBD925E03AB11D78A(__this, L_58, ((*(uint32_t*)((uint32_t*)UnBox(L_59, UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_018e:
		{
			Type_t * L_60 = V_4;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_61 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_62 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_61, /*hidden argument*/NULL);
			V_14 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
			bool L_63 = V_14;
			if (!L_63)
			{
				goto IL_01b5;
			}
		}

IL_01a2:
		{
			String_t* L_64 = V_2;
			RuntimeObject * L_65 = V_3;
			CustomEventData_AddInt64_mF79A8D03EB18BE5CC097FDFED8E7DDF9D931B224(__this, L_64, ((*(int64_t*)((int64_t*)UnBox(L_65, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_01b5:
		{
			Type_t * L_66 = V_4;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_67 = { reinterpret_cast<intptr_t> (UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_68 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_67, /*hidden argument*/NULL);
			V_15 = (bool)((((RuntimeObject*)(Type_t *)L_66) == ((RuntimeObject*)(Type_t *)L_68))? 1 : 0);
			bool L_69 = V_15;
			if (!L_69)
			{
				goto IL_01dc;
			}
		}

IL_01c9:
		{
			String_t* L_70 = V_2;
			RuntimeObject * L_71 = V_3;
			CustomEventData_AddUInt64_mE0C4870736E758BC54EB4360A834304C72A23432(__this, L_70, ((*(uint64_t*)((uint64_t*)UnBox(L_71, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_01dc:
		{
			Type_t * L_72 = V_4;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_73 = { reinterpret_cast<intptr_t> (Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_74 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_73, /*hidden argument*/NULL);
			V_16 = (bool)((((RuntimeObject*)(Type_t *)L_72) == ((RuntimeObject*)(Type_t *)L_74))? 1 : 0);
			bool L_75 = V_16;
			if (!L_75)
			{
				goto IL_0203;
			}
		}

IL_01f0:
		{
			String_t* L_76 = V_2;
			RuntimeObject * L_77 = V_3;
			CustomEventData_AddBool_m0807E669CA6F9EB72FB53FDD3E45DC66C83B9E41(__this, L_76, ((*(bool*)((bool*)UnBox(L_77, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_0203:
		{
			Type_t * L_78 = V_4;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_79 = { reinterpret_cast<intptr_t> (Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_80 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_79, /*hidden argument*/NULL);
			V_17 = (bool)((((RuntimeObject*)(Type_t *)L_78) == ((RuntimeObject*)(Type_t *)L_80))? 1 : 0);
			bool L_81 = V_17;
			if (!L_81)
			{
				goto IL_0235;
			}
		}

IL_0217:
		{
			String_t* L_82 = V_2;
			RuntimeObject * L_83 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
			Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_84 = Convert_ToDecimal_m0723C02BC98733C38A826B8BBF2C4AE24B7CB557(((*(float*)((float*)UnBox(L_83, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var);
			double L_85 = Decimal_op_Explicit_mB7F34E3B2DFB6211CA5ACB5497DA6CDCB09FC6CE(L_84, /*hidden argument*/NULL);
			CustomEventData_AddDouble_m71B600B1553314D300A4C250272BD97706DE48F5(__this, L_82, (((double)((double)L_85))), /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_0235:
		{
			Type_t * L_86 = V_4;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_87 = { reinterpret_cast<intptr_t> (Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_88 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_87, /*hidden argument*/NULL);
			V_18 = (bool)((((RuntimeObject*)(Type_t *)L_86) == ((RuntimeObject*)(Type_t *)L_88))? 1 : 0);
			bool L_89 = V_18;
			if (!L_89)
			{
				goto IL_0259;
			}
		}

IL_0249:
		{
			String_t* L_90 = V_2;
			RuntimeObject * L_91 = V_3;
			CustomEventData_AddDouble_m71B600B1553314D300A4C250272BD97706DE48F5(__this, L_90, ((*(double*)((double*)UnBox(L_91, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_0259:
		{
			Type_t * L_92 = V_4;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_93 = { reinterpret_cast<intptr_t> (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_94 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_93, /*hidden argument*/NULL);
			V_19 = (bool)((((RuntimeObject*)(Type_t *)L_92) == ((RuntimeObject*)(Type_t *)L_94))? 1 : 0);
			bool L_95 = V_19;
			if (!L_95)
			{
				goto IL_0288;
			}
		}

IL_026d:
		{
			String_t* L_96 = V_2;
			RuntimeObject * L_97 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
			Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_98 = Convert_ToDecimal_m4084B6BF683AE0078FDC431EAE0A77DD161AC045(((*(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)((Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)UnBox(L_97, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var);
			double L_99 = Decimal_op_Explicit_mB7F34E3B2DFB6211CA5ACB5497DA6CDCB09FC6CE(L_98, /*hidden argument*/NULL);
			CustomEventData_AddDouble_m71B600B1553314D300A4C250272BD97706DE48F5(__this, L_96, (((double)((double)L_99))), /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_0288:
		{
			Type_t * L_100 = V_4;
			NullCheck(L_100);
			bool L_101 = Type_get_IsValueType_mDDCCBAE9B59A483CBC3E5C02E3D68CEBEB2E41A8(L_100, /*hidden argument*/NULL);
			V_20 = L_101;
			bool L_102 = V_20;
			if (!L_102)
			{
				goto IL_02a5;
			}
		}

IL_0295:
		{
			String_t* L_103 = V_2;
			RuntimeObject * L_104 = V_3;
			NullCheck(L_104);
			String_t* L_105 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_104);
			CustomEventData_AddString_m5E4382F85BC1A6A9814F4DCF887D86EC4D30BF3C(__this, L_103, L_105, /*hidden argument*/NULL);
			goto IL_02b7;
		}

IL_02a5:
		{
			Type_t * L_106 = V_4;
			String_t* L_107 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral351DB7DBABE98AE0DDE4A114100B1D9CFE38CDC8, L_106, /*hidden argument*/NULL);
			ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_108 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_108, L_107, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_108, CustomEventData_AddDictionary_mDA0270C0DE80222EEB3D5B9E6432E59E99C48FA4_RuntimeMethod_var);
		}

IL_02b7:
		{
		}

IL_02b8:
		{
			RuntimeObject* L_109 = V_0;
			NullCheck(L_109);
			bool L_110 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_109);
			if (L_110)
			{
				goto IL_000e;
			}
		}

IL_02c3:
		{
			IL2CPP_LEAVE(0x2D0, FINALLY_02c5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02c5;
	}

FINALLY_02c5:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_111 = V_0;
			if (!L_111)
			{
				goto IL_02cf;
			}
		}

IL_02c8:
		{
			RuntimeObject* L_112 = V_0;
			NullCheck(L_112);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_112);
		}

IL_02cf:
		{
			IL2CPP_END_FINALLY(709)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(709)
	{
		IL2CPP_JUMP_TBL(0x2D0, IL_02d0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02d0:
	{
		V_21 = (bool)1;
		goto IL_02d5;
	}

IL_02d5:
	{
		bool L_113 = V_21;
		return L_113;
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
// Conversion methods for marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke(const RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A& unmarshaled, RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___Updated_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Updated_1()));
}
IL2CPP_EXTERN_C void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke_back(const RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshaled_pinvoke& marshaled, RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_Updated_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD>(marshaled.___Updated_1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke_cleanup(RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_com(const RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A& unmarshaled, RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___Updated_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Updated_1()));
}
IL2CPP_EXTERN_C void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_com_back(const RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshaled_com& marshaled, RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_Updated_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD>(marshaled.___Updated_1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_com_cleanup(RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_RemoteConfigSettingsUpdated_mF72E8C9F99B752FEA9EA388CCC1EFECC24733504 (RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * ___rcs0, bool ___wasLastUpdatedFromServer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigSettings_RemoteConfigSettingsUpdated_mF72E8C9F99B752FEA9EA388CCC1EFECC24733504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * V_0 = NULL;
	bool V_1 = false;
	{
		RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * L_0 = ___rcs0;
		NullCheck(L_0);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = L_0->get_Updated_1();
		V_0 = L_1;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_4 = V_0;
		bool L_5 = ___wasLastUpdatedFromServer1;
		NullCheck(L_4);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_4, L_5, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
	}

IL_0018:
	{
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
// System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdated_mD5427A08A622FDAA576A3D9CF05AD4C7CC6102F5 (bool ___wasLastUpdatedFromServer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_RemoteSettingsUpdated_mD5427A08A622FDAA576A3D9CF05AD4C7CC6102F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * V_0 = NULL;
	bool V_1 = false;
	{
		UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * L_0 = ((RemoteSettings_t3F7E07D15288B0DF84A4A32044592D8AFA6D36ED_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t3F7E07D15288B0DF84A4A32044592D8AFA6D36ED_il2cpp_TypeInfo_var))->get_Updated_0();
		V_0 = L_0;
		UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * L_3 = V_0;
		NullCheck(L_3);
		UpdatedEventHandler_Invoke_mD2D72D86708690251A8A947FECE091E8EE0107E7(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::RemoteSettingsBeforeFetchFromServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsBeforeFetchFromServer_mBF1BEF2ACAFE13AE7B820FCA5CB7B81CF614EF11 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_RemoteSettingsBeforeFetchFromServer_mBF1BEF2ACAFE13AE7B820FCA5CB7B81CF614EF11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	bool V_1 = false;
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ((RemoteSettings_t3F7E07D15288B0DF84A4A32044592D8AFA6D36ED_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t3F7E07D15288B0DF84A4A32044592D8AFA6D36ED_il2cpp_TypeInfo_var))->get_BeforeFetchFromServer_1();
		V_0 = L_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdateCompleted(System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdateCompleted_m6C6C3568C5A8F319CD06F8303111F06AB3718A02 (bool ___wasLastUpdatedFromServer0, bool ___settingsChanged1, int32_t ___response2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_RemoteSettingsUpdateCompleted_m6C6C3568C5A8F319CD06F8303111F06AB3718A02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * V_0 = NULL;
	bool V_1 = false;
	{
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_0 = ((RemoteSettings_t3F7E07D15288B0DF84A4A32044592D8AFA6D36ED_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t3F7E07D15288B0DF84A4A32044592D8AFA6D36ED_il2cpp_TypeInfo_var))->get_Completed_2();
		V_0 = L_0;
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_3 = V_0;
		bool L_4 = ___wasLastUpdatedFromServer0;
		bool L_5 = ___settingsChanged1;
		int32_t L_6 = ___response2;
		NullCheck(L_3);
		Action_3_Invoke_m8A4240174E60397816F6EACC65FE1E27F4275FA5(L_3, L_4, L_5, L_6, /*hidden argument*/Action_3_Invoke_m8A4240174E60397816F6EACC65FE1E27F4275FA5_RuntimeMethod_var);
	}

IL_0019:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F (UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.RemoteSettings_UpdatedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler__ctor_mB0CFE6A3B394C3858502E54A9CBEE97B40690DE7 (UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.RemoteSettings_UpdatedEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler_Invoke_mD2D72D86708690251A8A947FECE091E8EE0107E7 (UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.RemoteSettings_UpdatedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdatedEventHandler_BeginInvoke_m45D924AF948243AD8BD8D2E403DD57544E34507E (UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.RemoteSettings_UpdatedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler_EndInvoke_m54BCADBF1EE00E9C6DFF9D59C578C3C244CA3EA5 (UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m3AA5875E6F038F027D9B80929300B746525F9D65_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
