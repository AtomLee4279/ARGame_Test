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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Vuforia.VuMarkTargetImpl
struct VuMarkTargetImpl_t1052843922;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// Vuforia.VuMarkTemplateImpl
struct VuMarkTemplateImpl_t667343433;
// Vuforia.InstanceIdImpl
struct InstanceIdImpl_t2824054591;
// System.String
struct String_t;
// Vuforia.TrackableImpl
struct TrackableImpl_t3595316917;
// Vuforia.InstanceId
struct InstanceId_t2455430337;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3623118391;
// Vuforia.Image
struct Image_t745056343;
// System.Type
struct Type_t;
// Vuforia.IVuforiaWrapper
struct IVuforiaWrapper_t2381307640;
// Vuforia.ImageImpl
struct ImageImpl_t1502331638;
// Vuforia.DataSet
struct DataSet_t3286034874;
// Vuforia.ObjectTargetImpl
struct ObjectTargetImpl_t3614635090;
// System.Text.StringBuilder
struct StringBuilder_t;
// Vuforia.DataSetImpl
struct DataSetImpl_t2094717509;
// Vuforia.WebCamARController
struct WebCamARController_t3718642882;
// Vuforia.ARController
struct ARController_t116632334;
// Vuforia.WebCamImpl
struct WebCamImpl_t124212097;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t3510878193;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.Camera
struct Camera_t4157153871;
// Vuforia.VuforiaAbstractConfiguration
struct VuforiaAbstractConfiguration_t2684447159;
// Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration
struct WebCamConfiguration_t802847339;
// Vuforia.TextureRenderer
struct TextureRenderer_t3278815845;
// Vuforia.WebCamProfile
struct WebCamProfile_t4166408645;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t4294070825;
// Vuforia.WebCamTexAdaptorImpl
struct WebCamTexAdaptorImpl_t4146576487;
// Vuforia.NullWebCamTexAdaptor
struct NullWebCamTexAdaptor_t740403440;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// Vuforia.VuforiaRenderer
struct VuforiaRenderer_t3433045970;
// UnityEngine.Object
struct Object_t631007953;
// Vuforia.CameraDevice
struct CameraDevice_t960297568;
// UnityEngine.Texture
struct Texture_t3661962703;
// Vuforia.IPlayModeEditorUtility
struct IPlayModeEditorUtility_t752570519;
// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t3304648224;
// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t571830913;
// Vuforia.WebCamTexAdaptor
struct WebCamTexAdaptor_t3430449046;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1514609158;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// Vuforia.WordAbstractBehaviour
struct WordAbstractBehaviour_t3502498754;
// Vuforia.Word
struct Word_t1116038618;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Transform
struct Transform_t3600365921;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// Vuforia.WordImpl
struct WordImpl_t2494369133;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t804827427;
// Vuforia.WordList
struct WordList_t3693642253;
// Vuforia.WordListImpl
struct WordListImpl_t4149586592;
// Vuforia.WordManager
struct WordManager_t3100853168;
// Vuforia.WordManagerImpl
struct WordManagerImpl_t1706254019;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t2620626691;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>
struct Dictionary_2_t2529487133;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.WordResult>
struct ValueCollection_t4245531451;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t3684863813;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t95891507;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>
struct Dictionary_2_t2391212085;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour>
struct IEnumerable_1_t2482351643;
// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>
struct List_1_t679606200;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct Dictionary_2_t464862499;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct ValueCollection_t2180906817;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1848589470;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct KeyCollection_t654537970;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t322220623;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.WordAbstractBehaviour>
struct KeyCollection_t2580887556;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2158494966;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1930798642;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t1962267332;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t2504770112;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>
struct IEnumerable_1_t1863678610;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>
struct IEnumerable_1_t814971846;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.WordAbstractBehaviour>
struct ValueCollection_t4107256403;
// System.Collections.Generic.List`1<Vuforia.WordResult>
struct List_1_t817881248;
// System.Collections.Generic.List`1<Vuforia.Word>
struct List_1_t2588113360;
// Vuforia.WordResultImpl
struct WordResultImpl_t709252498;
// Vuforia.WordResult
struct WordResult_t3640773802;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.WordResult>
struct KeyCollection_t2719162604;
// Vuforia.VuforiaARController
struct VuforiaARController_t1876945237;
// Vuforia.IBehaviourComponentFactory
struct IBehaviourComponentFactory_t960979374;
// Vuforia.Word[]
struct WordU5BU5D_t2708870527;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// Vuforia.WordAbstractBehaviour[]
struct WordAbstractBehaviourU5BU5D_t824744695;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordAbstractBehaviour,System.Collections.DictionaryEntry>
struct Transform_1_t429083539;
// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>[]
struct List_1U5BU5D_t4020329065;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.Collections.DictionaryEntry>
struct Transform_1_t2870740781;
// Vuforia.WebCamProfile/ProfileData[]
struct ProfileDataU5BU5D_t362536152;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>
struct Transform_1_t3507915164;
// Vuforia.WordResult[]
struct WordResultU5BU5D_t1041344879;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.DictionaryEntry>
struct Transform_1_t645683723;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>
struct List_1_t3814467961;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t905170877;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t283990539;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t1054226036;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_t2198727358;
// UnityEngine.Material
struct Material_t340375123;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t3956019502;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>
struct Dictionary_2_t1340713322;
// Vuforia.VuforiaAbstractConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t1909783692;
// Vuforia.VuforiaAbstractConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t2828783036;
// Vuforia.VuforiaAbstractConfiguration/DatabaseLoadConfiguration
struct DatabaseLoadConfiguration_t3815674388;
// Vuforia.VuforiaAbstractConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t1174662728;
// Vuforia.VuforiaAbstractConfiguration/SmartTerrainTrackerConfiguration
struct SmartTerrainTrackerConfiguration_t3112457179;
// Vuforia.VuforiaAbstractConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_t1841344395;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// Vuforia.Trackable
struct Trackable_t2451999991;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t2968050330;
// System.Action`1<Vuforia.VuforiaAbstractBehaviour>
struct Action_1_t3683345788;

extern RuntimeClass* InstanceIdImpl_t2824054591_il2cpp_TypeInfo_var;
extern const uint32_t VuMarkTargetImpl__ctor_m2963334285_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t VuMarkTargetImpl_GetLargestSizeComponent_m708787120_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2300734387;
extern const uint32_t VuMarkTargetImpl_SetSize_m1238191257_MetadataUsageId;
extern RuntimeClass* VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var;
extern const uint32_t VuMarkTargetImpl_get_InstanceImage_m2552028378_MetadataUsageId;
extern const RuntimeType* ImageHeaderData_t1300500262_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern RuntimeClass* ImageHeaderData_t1300500262_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var;
extern RuntimeClass* IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var;
extern const uint32_t VuMarkTargetImpl_CallNativeGetInstanceImage_m1381867968_MetadataUsageId;
extern RuntimeClass* ImageImpl_t1502331638_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1256203510;
extern const uint32_t VuMarkTargetImpl_CreateInstanceImage_m848615665_MetadataUsageId;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const uint32_t VuMarkTargetImpl_AllocateImage_m3271861916_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral757602046;
extern const uint32_t VuMarkTemplateImpl_get_VuMarkUserData_m523386316_MetadataUsageId;
extern const uint32_t VuMarkTemplateImpl_set_TrackingFromRuntimeAppearance_m1654671822_MetadataUsageId;
extern const RuntimeType* Vector2_t2156229523_0_0_0_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral168135706;
extern const uint32_t VuMarkTemplateImpl_UpdateOrigin_m517667178_MetadataUsageId;
extern RuntimeClass* WebCamARController_t3718642882_il2cpp_TypeInfo_var;
extern const uint32_t WebCamARController_get_Instance_m1980552932_MetadataUsageId;
extern const uint32_t WebCamARController_RegisterARController_m2119076139_MetadataUsageId;
extern RuntimeClass* WebCamImpl_t124212097_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCamera_t4157153871_m1870358404_RuntimeMethod_var;
extern const uint32_t WebCamARController_InitCamera_m1118184140_MetadataUsageId;
extern RuntimeClass* VuforiaAbstractConfiguration_t2684447159_il2cpp_TypeInfo_var;
extern const uint32_t WebCamARController_Awake_m4020518652_MetadataUsageId;
extern const uint32_t WebCamARController_OnLevelWasLoaded_m3407873239_MetadataUsageId;
extern const uint32_t WebCamARController_OnDestroy_m1720525424_MetadataUsageId;
extern const uint32_t WebCamARController_Update_m2251066661_MetadataUsageId;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern const uint32_t WebCamARController__cctor_m3035936290_MetadataUsageId;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* WebCamProfile_t4166408645_il2cpp_TypeInfo_var;
extern RuntimeClass* WebCamTexAdaptorImpl_t4146576487_il2cpp_TypeInfo_var;
extern RuntimeClass* NullWebCamTexAdaptor_t740403440_il2cpp_TypeInfo_var;
extern const uint32_t WebCamImpl__ctor_m1598238101_MetadataUsageId;
extern RuntimeClass* VuforiaRenderer_t3433045970_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* CameraDevice_t960297568_il2cpp_TypeInfo_var;
extern const uint32_t WebCamImpl_RenderFrame_m2571124679_MetadataUsageId;
extern const uint32_t WebCamImpl_OnDestroy_m861282575_MetadataUsageId;
extern RuntimeClass* TextureRenderer_t3278815845_il2cpp_TypeInfo_var;
extern const uint32_t WebCamImpl_Update_m2054556650_MetadataUsageId;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* IPlayModeEditorUtility_t752570519_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4070863549;
extern const uint32_t WebCamProfile__ctor_m820471938_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1260807329_RuntimeMethod_var;
extern const uint32_t WebCamProfile_GetProfile_m3959388229_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m4190276240_RuntimeMethod_var;
extern const uint32_t WebCamProfile_ProfileAvailable_m801322015_MetadataUsageId;
extern RuntimeClass* WebCamTexture_t1514609158_il2cpp_TypeInfo_var;
extern const uint32_t WebCamTexAdaptorImpl__ctor_m145373239_MetadataUsageId;
extern String_t* _stringLiteral2036431799;
extern const uint32_t WebCamTexAdaptorImpl_CheckPermissions_m2944684210_MetadataUsageId;
extern RuntimeClass* Word_t1116038618_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisMeshFilter_t3523625662_m569847836_RuntimeMethod_var;
extern const uint32_t WordAbstractBehaviour_InitializeWord_m3005938285_MetadataUsageId;
extern String_t* _stringLiteral1699185095;
extern const uint32_t WordAbstractBehaviour_OnValidate_m2102345120_MetadataUsageId;
extern const uint32_t WordImpl_GetLetterMask_m742086191_MetadataUsageId;
extern const RuntimeType* RectangleData_t1039179782_0_0_0_var;
extern RuntimeClass* RectangleDataU5BU5D_t804827427_il2cpp_TypeInfo_var;
extern RuntimeClass* RectangleData_t1039179782_il2cpp_TypeInfo_var;
extern const uint32_t WordImpl_GetLetterBoundingBoxes_m1855461210_MetadataUsageId;
extern const uint32_t WordImpl_InitImageHeader_m3006118628_MetadataUsageId;
extern String_t* _stringLiteral1198487051;
extern const uint32_t WordImpl_CreateLetterMask_m224036644_MetadataUsageId;
extern const uint32_t WordImpl_AllocateImage_m2647442905_MetadataUsageId;
extern const uint32_t WordListImpl_LoadWordListFile_m3735652484_MetadataUsageId;
extern const uint32_t WordListImpl_AddWordsFromFile_m469663869_MetadataUsageId;
extern const uint32_t WordListImpl_AddWord_m4128054862_MetadataUsageId;
extern const uint32_t WordListImpl_RemoveWord_m2880790773_MetadataUsageId;
extern const uint32_t WordListImpl_ContainsWord_m3891893966_MetadataUsageId;
extern const uint32_t WordListImpl_UnloadAllLists_m4206234415_MetadataUsageId;
extern const uint32_t WordListImpl_GetFilterMode_m2612055127_MetadataUsageId;
extern const uint32_t WordListImpl_SetFilterMode_m687373688_MetadataUsageId;
extern const uint32_t WordListImpl_LoadFilterListFile_m174515806_MetadataUsageId;
extern const uint32_t WordListImpl_AddWordToFilterList_m2042771583_MetadataUsageId;
extern const uint32_t WordListImpl_RemoveWordFromFilterList_m794378321_MetadataUsageId;
extern const uint32_t WordListImpl_ClearFilterList_m1564849173_MetadataUsageId;
extern const uint32_t WordListImpl_GetFilterListWordCount_m2410144288_MetadataUsageId;
extern const uint32_t WordListImpl_GetFilterListWord_m312920410_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Values_m1988163935_RuntimeMethod_var;
extern const uint32_t WordManagerImpl_GetActiveWordResults_m3622687505_MetadataUsageId;
extern RuntimeClass* Trackable_t2451999991_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2473385441_RuntimeMethod_var;
extern const uint32_t WordManagerImpl_TryGetWordBehaviour_m2311062993_MetadataUsageId;
extern RuntimeClass* List_1_t679606200_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1340911630_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Values_m3684722382_RuntimeMethod_var;
extern const RuntimeMethod* ValueCollection_GetEnumerator_m913759295_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3610606923_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m3556339343_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3077790933_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3245589270_RuntimeMethod_var;
extern const uint32_t WordManagerImpl_GetTrackableBehaviours_m2125317316_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Keys_m3813149867_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisString_t_m1789351813_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m540946376_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m2349174643_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m2457619985_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2304474076_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m718395589_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1844274312_RuntimeMethod_var;
extern const uint32_t WordManagerImpl_DestroyWordBehaviour_m1278966964_MetadataUsageId;
extern const RuntimeType* WordAbstractBehaviour_t3502498754_0_0_0_var;
extern RuntimeClass* WordAbstractBehaviourU5BU5D_t824744695_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_ToList_TisWordAbstractBehaviour_t3502498754_m872951409_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3484035274_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1822998082_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1691037174_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1247233199_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1718767763_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m2715483925_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2842338649_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2017220972_RuntimeMethod_var;
extern String_t* _stringLiteral3255970859;
extern const uint32_t WordManagerImpl_InitializeWordBehaviourTemplates_m1076279545_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m2000450760_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m3027634645_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m1582191240_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisInt32_t2950945753_m2311522548_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1262508171_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m374102063_RuntimeMethod_var;
extern const uint32_t WordManagerImpl_RemoveDestroyedTrackables_m359084982_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Values_m2630701907_RuntimeMethod_var;
extern const RuntimeMethod* ValueCollection_GetEnumerator_m3782761598_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m908514610_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1499977780_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m34336611_RuntimeMethod_var;
extern const uint32_t WordManagerImpl_SetWordBehavioursToNotFound_m3674997050_MetadataUsageId;
extern const RuntimeMethod* List_1_Clear_m3053871591_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3489354309_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m3931322809_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m311547095_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m776003790_RuntimeMethod_var;
extern const uint32_t WordManagerImpl_CleanupWordBehaviours_m3529255993_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t1863678610_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3316396189_il2cpp_TypeInfo_var;
extern RuntimeClass* WordImpl_t2494369133_il2cpp_TypeInfo_var;
extern RuntimeClass* WordResultImpl_t709252498_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t814971846_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2267689425_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m452890411_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m417576055_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m309338820_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m2166097550_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisInt32_t2950945753_m1435865193_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m731136149_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4088456620_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m2934014725_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2551113427_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3459031900_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m1088040339_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2218650275_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m222348240_RuntimeMethod_var;
extern const uint32_t WordManagerImpl_UpdateWords_m45616103_MetadataUsageId;
extern RuntimeClass* VuforiaARController_t1876945237_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t WordManagerImpl_UpdateWordResultPoses_m202733181_MetadataUsageId;
extern RuntimeClass* List_1_t2588113360_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3158419898_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2302738403_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2736178487_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m1056585745_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2288170636_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3471433355_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2482267928_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4042749952_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2572193847_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1326660095_RuntimeMethod_var;
extern const uint32_t WordManagerImpl_AssociateWordResultsWithBehaviours_m2814807548_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m2817422666_RuntimeMethod_var;
extern const uint32_t WordManagerImpl_UnregisterLostWords_m1779929106_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m3523622513_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2971210107_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2231391363_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1287558029_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2155600675_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2180775004_RuntimeMethod_var;
extern const uint32_t WordManagerImpl_UpdateWordBehaviourPoses_m1959006798_MetadataUsageId;
extern const RuntimeMethod* Enumerable_First_TisWordAbstractBehaviour_t3502498754_m2180848752_RuntimeMethod_var;
extern String_t* _stringLiteral508940442;
extern const uint32_t WordManagerImpl_AssociateWordBehaviour_m533403448_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Count_m931247448_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2441072686_RuntimeMethod_var;
extern const uint32_t WordManagerImpl_AssociateWordBehaviour_m1328890788_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3342487772_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisWordAbstractBehaviour_t3502498754_m3936702387_RuntimeMethod_var;
extern const uint32_t WordManagerImpl_InstantiateWordBehaviour_m755952090_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* IBehaviourComponentFactory_t960979374_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1861372873;
extern String_t* _stringLiteral277781720;
extern const uint32_t WordManagerImpl_CreateWordBehaviour_m2184743325_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2529487133_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t817881248_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2391212085_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t464862499_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2165170305_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3369957770_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3294312876_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m888218496_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2015578239_RuntimeMethod_var;
extern const uint32_t WordManagerImpl__ctor_m1897184631_MetadataUsageId;

struct ByteU5BU5D_t4116647657;
struct CameraU5BU5D_t1709987734;
struct WebCamDeviceU5BU5D_t4294070825;
struct Int32U5BU5D_t385246372;
struct Color32U5BU5D_t3850468773;
struct RectangleDataU5BU5D_t804827427;
struct StringU5BU5D_t1281789340;
struct WordAbstractBehaviourU5BU5D_t824744695;
struct ObjectU5BU5D_t1417781964;
struct WordDataU5BU5D_t1962267332;
struct WordResultDataU5BU5D_t2504770112;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T2588113360_H
#define LIST_1_T2588113360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Vuforia.Word>
struct  List_1_t2588113360  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WordU5BU5D_t2708870527* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2588113360, ____items_1)); }
	inline WordU5BU5D_t2708870527* get__items_1() const { return ____items_1; }
	inline WordU5BU5D_t2708870527** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WordU5BU5D_t2708870527* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2588113360, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2588113360, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2588113360_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	WordU5BU5D_t2708870527* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2588113360_StaticFields, ___EmptyArray_4)); }
	inline WordU5BU5D_t2708870527* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline WordU5BU5D_t2708870527** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(WordU5BU5D_t2708870527* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2588113360_H
#ifndef DICTIONARY_2_T2391212085_H
#define DICTIONARY_2_T2391212085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>
struct  Dictionary_2_t2391212085  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	WordAbstractBehaviourU5BU5D_t824744695* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2391212085, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2391212085, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2391212085, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2391212085, ___valueSlots_7)); }
	inline WordAbstractBehaviourU5BU5D_t824744695* get_valueSlots_7() const { return ___valueSlots_7; }
	inline WordAbstractBehaviourU5BU5D_t824744695** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(WordAbstractBehaviourU5BU5D_t824744695* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2391212085, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2391212085, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2391212085, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2391212085, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2391212085, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2391212085, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2391212085, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2391212085_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t429083539 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2391212085_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t429083539 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t429083539 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t429083539 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2391212085_H
#ifndef LIST_1_T679606200_H
#define LIST_1_T679606200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>
struct  List_1_t679606200  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WordAbstractBehaviourU5BU5D_t824744695* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t679606200, ____items_1)); }
	inline WordAbstractBehaviourU5BU5D_t824744695* get__items_1() const { return ____items_1; }
	inline WordAbstractBehaviourU5BU5D_t824744695** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WordAbstractBehaviourU5BU5D_t824744695* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t679606200, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t679606200, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t679606200_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	WordAbstractBehaviourU5BU5D_t824744695* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t679606200_StaticFields, ___EmptyArray_4)); }
	inline WordAbstractBehaviourU5BU5D_t824744695* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline WordAbstractBehaviourU5BU5D_t824744695** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(WordAbstractBehaviourU5BU5D_t824744695* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T679606200_H
#ifndef DICTIONARY_2_T464862499_H
#define DICTIONARY_2_T464862499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct  Dictionary_2_t464862499  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	List_1U5BU5D_t4020329065* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t464862499, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t464862499, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t464862499, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t464862499, ___valueSlots_7)); }
	inline List_1U5BU5D_t4020329065* get_valueSlots_7() const { return ___valueSlots_7; }
	inline List_1U5BU5D_t4020329065** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(List_1U5BU5D_t4020329065* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t464862499, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t464862499, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t464862499, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t464862499, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t464862499, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t464862499, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t464862499, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t464862499_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2870740781 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t464862499_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2870740781 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2870740781 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2870740781 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T464862499_H
#ifndef ARCONTROLLER_T116632334_H
#define ARCONTROLLER_T116632334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_t116632334  : public RuntimeObject
{
public:
	// Vuforia.VuforiaAbstractBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t3510878193 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_t116632334, ___mVuforiaBehaviour_0)); }
	inline VuforiaAbstractBehaviour_t3510878193 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaAbstractBehaviour_t3510878193 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaAbstractBehaviour_t3510878193 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCONTROLLER_T116632334_H
#ifndef VALUECOLLECTION_T2180906817_H
#define VALUECOLLECTION_T2180906817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct  ValueCollection_t2180906817  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t464862499 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t2180906817, ___dictionary_0)); }
	inline Dictionary_2_t464862499 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t464862499 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t464862499 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T2180906817_H
#ifndef KEYCOLLECTION_T654537970_H
#define KEYCOLLECTION_T654537970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct  KeyCollection_t654537970  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t464862499 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t654537970, ___dictionary_0)); }
	inline Dictionary_2_t464862499 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t464862499 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t464862499 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T654537970_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef DATASET_T3286034874_H
#define DATASET_T3286034874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSet
struct  DataSet_t3286034874  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASET_T3286034874_H
#ifndef WEBCAMCONFIGURATION_T802847339_H
#define WEBCAMCONFIGURATION_T802847339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration
struct  WebCamConfiguration_t802847339  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration::deviceNameSetInEditor
	String_t* ___deviceNameSetInEditor_0;
	// System.Boolean Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration::flipHorizontally
	bool ___flipHorizontally_1;
	// System.Boolean Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration::turnOffWebCam
	bool ___turnOffWebCam_2;
	// System.Int32 Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration::renderTextureLayer
	int32_t ___renderTextureLayer_3;

public:
	inline static int32_t get_offset_of_deviceNameSetInEditor_0() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t802847339, ___deviceNameSetInEditor_0)); }
	inline String_t* get_deviceNameSetInEditor_0() const { return ___deviceNameSetInEditor_0; }
	inline String_t** get_address_of_deviceNameSetInEditor_0() { return &___deviceNameSetInEditor_0; }
	inline void set_deviceNameSetInEditor_0(String_t* value)
	{
		___deviceNameSetInEditor_0 = value;
		Il2CppCodeGenWriteBarrier((&___deviceNameSetInEditor_0), value);
	}

	inline static int32_t get_offset_of_flipHorizontally_1() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t802847339, ___flipHorizontally_1)); }
	inline bool get_flipHorizontally_1() const { return ___flipHorizontally_1; }
	inline bool* get_address_of_flipHorizontally_1() { return &___flipHorizontally_1; }
	inline void set_flipHorizontally_1(bool value)
	{
		___flipHorizontally_1 = value;
	}

	inline static int32_t get_offset_of_turnOffWebCam_2() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t802847339, ___turnOffWebCam_2)); }
	inline bool get_turnOffWebCam_2() const { return ___turnOffWebCam_2; }
	inline bool* get_address_of_turnOffWebCam_2() { return &___turnOffWebCam_2; }
	inline void set_turnOffWebCam_2(bool value)
	{
		___turnOffWebCam_2 = value;
	}

	inline static int32_t get_offset_of_renderTextureLayer_3() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t802847339, ___renderTextureLayer_3)); }
	inline int32_t get_renderTextureLayer_3() const { return ___renderTextureLayer_3; }
	inline int32_t* get_address_of_renderTextureLayer_3() { return &___renderTextureLayer_3; }
	inline void set_renderTextureLayer_3(int32_t value)
	{
		___renderTextureLayer_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMCONFIGURATION_T802847339_H
#ifndef VUFORIARENDERER_T3433045970_H
#define VUFORIARENDERER_T3433045970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer
struct  VuforiaRenderer_t3433045970  : public RuntimeObject
{
public:

public:
};

struct VuforiaRenderer_t3433045970_StaticFields
{
public:
	// Vuforia.VuforiaRenderer Vuforia.VuforiaRenderer::sInstance
	VuforiaRenderer_t3433045970 * ___sInstance_0;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970_StaticFields, ___sInstance_0)); }
	inline VuforiaRenderer_t3433045970 * get_sInstance_0() const { return ___sInstance_0; }
	inline VuforiaRenderer_t3433045970 ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(VuforiaRenderer_t3433045970 * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___sInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARENDERER_T3433045970_H
#ifndef CAMERADEVICE_T960297568_H
#define CAMERADEVICE_T960297568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice
struct  CameraDevice_t960297568  : public RuntimeObject
{
public:

public:
};

struct CameraDevice_t960297568_StaticFields
{
public:
	// Vuforia.CameraDevice Vuforia.CameraDevice::mInstance
	CameraDevice_t960297568 * ___mInstance_0;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mInstance_0)); }
	inline CameraDevice_t960297568 * get_mInstance_0() const { return ___mInstance_0; }
	inline CameraDevice_t960297568 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(CameraDevice_t960297568 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICE_T960297568_H
#ifndef DICTIONARY_2_T3304648224_H
#define DICTIONARY_2_T3304648224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct  Dictionary_2_t3304648224  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ProfileDataU5BU5D_t362536152* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___valueSlots_7)); }
	inline ProfileDataU5BU5D_t362536152* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ProfileDataU5BU5D_t362536152** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ProfileDataU5BU5D_t362536152* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3304648224_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3507915164 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3507915164 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3507915164 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3507915164 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3304648224_H
#ifndef WORDLIST_T3693642253_H
#define WORDLIST_T3693642253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordList
struct  WordList_t3693642253  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDLIST_T3693642253_H
#ifndef WORDMANAGER_T3100853168_H
#define WORDMANAGER_T3100853168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordManager
struct  WordManager_t3100853168  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDMANAGER_T3100853168_H
#ifndef DICTIONARY_2_T2529487133_H
#define DICTIONARY_2_T2529487133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>
struct  Dictionary_2_t2529487133  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	WordResultU5BU5D_t1041344879* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___valueSlots_7)); }
	inline WordResultU5BU5D_t1041344879* get_valueSlots_7() const { return ___valueSlots_7; }
	inline WordResultU5BU5D_t1041344879** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(WordResultU5BU5D_t1041344879* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2529487133_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t645683723 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t645683723 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t645683723 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t645683723 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2529487133_H
#ifndef VALUECOLLECTION_T4245531451_H
#define VALUECOLLECTION_T4245531451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.WordResult>
struct  ValueCollection_t4245531451  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t2529487133 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t4245531451, ___dictionary_0)); }
	inline Dictionary_2_t2529487133 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2529487133 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2529487133 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T4245531451_H
#ifndef TEXTURERENDERER_T3278815845_H
#define TEXTURERENDERER_T3278815845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TextureRenderer
struct  TextureRenderer_t3278815845  : public RuntimeObject
{
public:
	// UnityEngine.Camera Vuforia.TextureRenderer::mTextureBufferCamera
	Camera_t4157153871 * ___mTextureBufferCamera_0;
	// System.Int32 Vuforia.TextureRenderer::mTextureWidth
	int32_t ___mTextureWidth_1;
	// System.Int32 Vuforia.TextureRenderer::mTextureHeight
	int32_t ___mTextureHeight_2;

public:
	inline static int32_t get_offset_of_mTextureBufferCamera_0() { return static_cast<int32_t>(offsetof(TextureRenderer_t3278815845, ___mTextureBufferCamera_0)); }
	inline Camera_t4157153871 * get_mTextureBufferCamera_0() const { return ___mTextureBufferCamera_0; }
	inline Camera_t4157153871 ** get_address_of_mTextureBufferCamera_0() { return &___mTextureBufferCamera_0; }
	inline void set_mTextureBufferCamera_0(Camera_t4157153871 * value)
	{
		___mTextureBufferCamera_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTextureBufferCamera_0), value);
	}

	inline static int32_t get_offset_of_mTextureWidth_1() { return static_cast<int32_t>(offsetof(TextureRenderer_t3278815845, ___mTextureWidth_1)); }
	inline int32_t get_mTextureWidth_1() const { return ___mTextureWidth_1; }
	inline int32_t* get_address_of_mTextureWidth_1() { return &___mTextureWidth_1; }
	inline void set_mTextureWidth_1(int32_t value)
	{
		___mTextureWidth_1 = value;
	}

	inline static int32_t get_offset_of_mTextureHeight_2() { return static_cast<int32_t>(offsetof(TextureRenderer_t3278815845, ___mTextureHeight_2)); }
	inline int32_t get_mTextureHeight_2() const { return ___mTextureHeight_2; }
	inline int32_t* get_address_of_mTextureHeight_2() { return &___mTextureHeight_2; }
	inline void set_mTextureHeight_2(int32_t value)
	{
		___mTextureHeight_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURERENDERER_T3278815845_H
#ifndef WEBCAMTEXADAPTOR_T3430449046_H
#define WEBCAMTEXADAPTOR_T3430449046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamTexAdaptor
struct  WebCamTexAdaptor_t3430449046  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMTEXADAPTOR_T3430449046_H
#ifndef LIST_1_T817881248_H
#define LIST_1_T817881248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Vuforia.WordResult>
struct  List_1_t817881248  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WordResultU5BU5D_t1041344879* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t817881248, ____items_1)); }
	inline WordResultU5BU5D_t1041344879* get__items_1() const { return ____items_1; }
	inline WordResultU5BU5D_t1041344879** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WordResultU5BU5D_t1041344879* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t817881248, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t817881248, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t817881248_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	WordResultU5BU5D_t1041344879* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t817881248_StaticFields, ___EmptyArray_4)); }
	inline WordResultU5BU5D_t1041344879* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline WordResultU5BU5D_t1041344879** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(WordResultU5BU5D_t1041344879* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T817881248_H
#ifndef KEYCOLLECTION_T2580887556_H
#define KEYCOLLECTION_T2580887556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.WordAbstractBehaviour>
struct  KeyCollection_t2580887556  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t2391212085 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t2580887556, ___dictionary_0)); }
	inline Dictionary_2_t2391212085 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2391212085 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2391212085 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T2580887556_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef KEYCOLLECTION_T2719162604_H
#define KEYCOLLECTION_T2719162604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.WordResult>
struct  KeyCollection_t2719162604  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t2529487133 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t2719162604, ___dictionary_0)); }
	inline Dictionary_2_t2529487133 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2529487133 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2529487133 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T2719162604_H
#ifndef TRACKABLEIMPL_T3595316917_H
#define TRACKABLEIMPL_T3595316917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableImpl
struct  TrackableImpl_t3595316917  : public RuntimeObject
{
public:
	// System.String Vuforia.TrackableImpl::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Vuforia.TrackableImpl::<ID>k__BackingField
	int32_t ___U3CIDU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableImpl_t3595316917, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TrackableImpl_t3595316917, ___U3CIDU3Ek__BackingField_1)); }
	inline int32_t get_U3CIDU3Ek__BackingField_1() const { return ___U3CIDU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIDU3Ek__BackingField_1() { return &___U3CIDU3Ek__BackingField_1; }
	inline void set_U3CIDU3Ek__BackingField_1(int32_t value)
	{
		___U3CIDU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEIMPL_T3595316917_H
#ifndef IMAGE_T745056343_H
#define IMAGE_T745056343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image
struct  Image_t745056343  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T745056343_H
#ifndef VALUECOLLECTION_T4107256403_H
#define VALUECOLLECTION_T4107256403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.WordAbstractBehaviour>
struct  ValueCollection_t4107256403  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t2391212085 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t4107256403, ___dictionary_0)); }
	inline Dictionary_2_t2391212085 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2391212085 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2391212085 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T4107256403_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef WORDRESULT_T3640773802_H
#define WORDRESULT_T3640773802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordResult
struct  WordResult_t3640773802  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDRESULT_T3640773802_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef KEYVALUEPAIR_2_T2862534666_H
#define KEYVALUEPAIR_2_T2862534666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct  KeyValuePair_2_t2862534666 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t679606200 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2862534666, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2862534666, ___value_1)); }
	inline List_1_t679606200 * get_value_1() const { return ___value_1; }
	inline List_1_t679606200 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_t679606200 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2862534666_H
#ifndef WORDLISTIMPL_T4149586592_H
#define WORDLISTIMPL_T4149586592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordListImpl
struct  WordListImpl_t4149586592  : public WordList_t3693642253
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDLISTIMPL_T4149586592_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef RECTANGLEDATA_T1039179782_H
#define RECTANGLEDATA_T1039179782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RectangleData
#pragma pack(push, tp, 1)
struct  RectangleData_t1039179782 
{
public:
	// System.Single Vuforia.RectangleData::leftTopX
	float ___leftTopX_0;
	// System.Single Vuforia.RectangleData::leftTopY
	float ___leftTopY_1;
	// System.Single Vuforia.RectangleData::rightBottomX
	float ___rightBottomX_2;
	// System.Single Vuforia.RectangleData::rightBottomY
	float ___rightBottomY_3;

public:
	inline static int32_t get_offset_of_leftTopX_0() { return static_cast<int32_t>(offsetof(RectangleData_t1039179782, ___leftTopX_0)); }
	inline float get_leftTopX_0() const { return ___leftTopX_0; }
	inline float* get_address_of_leftTopX_0() { return &___leftTopX_0; }
	inline void set_leftTopX_0(float value)
	{
		___leftTopX_0 = value;
	}

	inline static int32_t get_offset_of_leftTopY_1() { return static_cast<int32_t>(offsetof(RectangleData_t1039179782, ___leftTopY_1)); }
	inline float get_leftTopY_1() const { return ___leftTopY_1; }
	inline float* get_address_of_leftTopY_1() { return &___leftTopY_1; }
	inline void set_leftTopY_1(float value)
	{
		___leftTopY_1 = value;
	}

	inline static int32_t get_offset_of_rightBottomX_2() { return static_cast<int32_t>(offsetof(RectangleData_t1039179782, ___rightBottomX_2)); }
	inline float get_rightBottomX_2() const { return ___rightBottomX_2; }
	inline float* get_address_of_rightBottomX_2() { return &___rightBottomX_2; }
	inline void set_rightBottomX_2(float value)
	{
		___rightBottomX_2 = value;
	}

	inline static int32_t get_offset_of_rightBottomY_3() { return static_cast<int32_t>(offsetof(RectangleData_t1039179782, ___rightBottomY_3)); }
	inline float get_rightBottomY_3() const { return ___rightBottomY_3; }
	inline float* get_address_of_rightBottomY_3() { return &___rightBottomY_3; }
	inline void set_rightBottomY_3(float value)
	{
		___rightBottomY_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTANGLEDATA_T1039179782_H
#ifndef VIDEOMODEDATA_T2066817255_H
#define VIDEOMODEDATA_T2066817255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/VideoModeData
#pragma pack(push, tp, 1)
struct  VideoModeData_t2066817255 
{
public:
	// System.Int32 Vuforia.CameraDevice/VideoModeData::width
	int32_t ___width_0;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::height
	int32_t ___height_1;
	// System.Single Vuforia.CameraDevice/VideoModeData::frameRate
	float ___frameRate_2;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_frameRate_2() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___frameRate_2)); }
	inline float get_frameRate_2() const { return ___frameRate_2; }
	inline float* get_address_of_frameRate_2() { return &___frameRate_2; }
	inline void set_frameRate_2(float value)
	{
		___frameRate_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOMODEDATA_T2066817255_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T2568850077_H
#define ENUMERATOR_T2568850077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Vuforia.WordAbstractBehaviour>
struct  Enumerator_t2568850077 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t679606200 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	WordAbstractBehaviour_t3502498754 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2568850077, ___l_0)); }
	inline List_1_t679606200 * get_l_0() const { return ___l_0; }
	inline List_1_t679606200 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t679606200 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2568850077, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2568850077, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2568850077, ___current_3)); }
	inline WordAbstractBehaviour_t3502498754 * get_current_3() const { return ___current_3; }
	inline WordAbstractBehaviour_t3502498754 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(WordAbstractBehaviour_t3502498754 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2568850077_H
#ifndef ENUMERATOR_T2017297076_H
#define ENUMERATOR_T2017297076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct  Enumerator_t2017297076 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t128053199 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2017297076, ___l_0)); }
	inline List_1_t128053199 * get_l_0() const { return ___l_0; }
	inline List_1_t128053199 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t128053199 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2017297076, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2017297076, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2017297076, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2017297076_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef ENUMERATOR_T182389941_H
#define ENUMERATOR_T182389941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Vuforia.Word>
struct  Enumerator_t182389941 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2588113360 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t182389941, ___l_0)); }
	inline List_1_t2588113360 * get_l_0() const { return ___l_0; }
	inline List_1_t2588113360 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2588113360 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t182389941, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t182389941, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t182389941, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T182389941_H
#ifndef ENUMERATOR_T2707125125_H
#define ENUMERATOR_T2707125125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Vuforia.WordResult>
struct  Enumerator_t2707125125 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t817881248 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	WordResult_t3640773802 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2707125125, ___l_0)); }
	inline List_1_t817881248 * get_l_0() const { return ___l_0; }
	inline List_1_t817881248 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t817881248 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2707125125, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2707125125, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2707125125, ___current_3)); }
	inline WordResult_t3640773802 * get_current_3() const { return ___current_3; }
	inline WordResult_t3640773802 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(WordResult_t3640773802 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2707125125_H
#ifndef KEYVALUEPAIR_2_T493916956_H
#define KEYVALUEPAIR_2_T493916956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordAbstractBehaviour>
struct  KeyValuePair_2_t493916956 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WordAbstractBehaviour_t3502498754 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t493916956, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t493916956, ___value_1)); }
	inline WordAbstractBehaviour_t3502498754 * get_value_1() const { return ___value_1; }
	inline WordAbstractBehaviour_t3502498754 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(WordAbstractBehaviour_t3502498754 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T493916956_H
#ifndef KEYVALUEPAIR_2_T71524366_H
#define KEYVALUEPAIR_2_T71524366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t71524366 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T71524366_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef WEBCAMARCONTROLLER_T3718642882_H
#define WEBCAMARCONTROLLER_T3718642882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamARController
struct  WebCamARController_t3718642882  : public ARController_t116632334
{
public:
	// System.Int32 Vuforia.WebCamARController::RenderTextureLayer
	int32_t ___RenderTextureLayer_1;
	// System.String Vuforia.WebCamARController::mDeviceNameSetInEditor
	String_t* ___mDeviceNameSetInEditor_2;
	// System.Boolean Vuforia.WebCamARController::mFlipHorizontally
	bool ___mFlipHorizontally_3;
	// Vuforia.WebCamImpl Vuforia.WebCamARController::mWebCamImpl
	WebCamImpl_t124212097 * ___mWebCamImpl_4;

public:
	inline static int32_t get_offset_of_RenderTextureLayer_1() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___RenderTextureLayer_1)); }
	inline int32_t get_RenderTextureLayer_1() const { return ___RenderTextureLayer_1; }
	inline int32_t* get_address_of_RenderTextureLayer_1() { return &___RenderTextureLayer_1; }
	inline void set_RenderTextureLayer_1(int32_t value)
	{
		___RenderTextureLayer_1 = value;
	}

	inline static int32_t get_offset_of_mDeviceNameSetInEditor_2() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mDeviceNameSetInEditor_2)); }
	inline String_t* get_mDeviceNameSetInEditor_2() const { return ___mDeviceNameSetInEditor_2; }
	inline String_t** get_address_of_mDeviceNameSetInEditor_2() { return &___mDeviceNameSetInEditor_2; }
	inline void set_mDeviceNameSetInEditor_2(String_t* value)
	{
		___mDeviceNameSetInEditor_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceNameSetInEditor_2), value);
	}

	inline static int32_t get_offset_of_mFlipHorizontally_3() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mFlipHorizontally_3)); }
	inline bool get_mFlipHorizontally_3() const { return ___mFlipHorizontally_3; }
	inline bool* get_address_of_mFlipHorizontally_3() { return &___mFlipHorizontally_3; }
	inline void set_mFlipHorizontally_3(bool value)
	{
		___mFlipHorizontally_3 = value;
	}

	inline static int32_t get_offset_of_mWebCamImpl_4() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mWebCamImpl_4)); }
	inline WebCamImpl_t124212097 * get_mWebCamImpl_4() const { return ___mWebCamImpl_4; }
	inline WebCamImpl_t124212097 ** get_address_of_mWebCamImpl_4() { return &___mWebCamImpl_4; }
	inline void set_mWebCamImpl_4(WebCamImpl_t124212097 * value)
	{
		___mWebCamImpl_4 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamImpl_4), value);
	}
};

struct WebCamARController_t3718642882_StaticFields
{
public:
	// Vuforia.WebCamARController Vuforia.WebCamARController::mInstance
	WebCamARController_t3718642882 * ___mInstance_5;
	// System.Object Vuforia.WebCamARController::mPadlock
	RuntimeObject * ___mPadlock_6;

public:
	inline static int32_t get_offset_of_mInstance_5() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882_StaticFields, ___mInstance_5)); }
	inline WebCamARController_t3718642882 * get_mInstance_5() const { return ___mInstance_5; }
	inline WebCamARController_t3718642882 ** get_address_of_mInstance_5() { return &___mInstance_5; }
	inline void set_mInstance_5(WebCamARController_t3718642882 * value)
	{
		___mInstance_5 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_5), value);
	}

	inline static int32_t get_offset_of_mPadlock_6() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882_StaticFields, ___mPadlock_6)); }
	inline RuntimeObject * get_mPadlock_6() const { return ___mPadlock_6; }
	inline RuntimeObject ** get_address_of_mPadlock_6() { return &___mPadlock_6; }
	inline void set_mPadlock_6(RuntimeObject * value)
	{
		___mPadlock_6 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMARCONTROLLER_T3718642882_H
#ifndef VEC2I_T3527036565_H
#define VEC2I_T3527036565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_t3527036565 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_t3527036565, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_t3527036565, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VEC2I_T3527036565_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef WEBCAMDEVICE_T1322781432_H
#define WEBCAMDEVICE_T1322781432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamDevice
struct  WebCamDevice_t1322781432 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_1;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_t1322781432, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Flags_1() { return static_cast<int32_t>(offsetof(WebCamDevice_t1322781432, ___m_Flags_1)); }
	inline int32_t get_m_Flags_1() const { return ___m_Flags_1; }
	inline int32_t* get_address_of_m_Flags_1() { return &___m_Flags_1; }
	inline void set_m_Flags_1(int32_t value)
	{
		___m_Flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t1322781432_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Flags_1;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t1322781432_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Flags_1;
};
#endif // WEBCAMDEVICE_T1322781432_H
#ifndef WEBCAMTEXADAPTORIMPL_T4146576487_H
#define WEBCAMTEXADAPTORIMPL_T4146576487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamTexAdaptorImpl
struct  WebCamTexAdaptorImpl_t4146576487  : public WebCamTexAdaptor_t3430449046
{
public:
	// UnityEngine.WebCamTexture Vuforia.WebCamTexAdaptorImpl::mWebCamTexture
	WebCamTexture_t1514609158 * ___mWebCamTexture_0;
	// UnityEngine.AsyncOperation Vuforia.WebCamTexAdaptorImpl::mCheckCameraPermissions
	AsyncOperation_t1445031843 * ___mCheckCameraPermissions_1;

public:
	inline static int32_t get_offset_of_mWebCamTexture_0() { return static_cast<int32_t>(offsetof(WebCamTexAdaptorImpl_t4146576487, ___mWebCamTexture_0)); }
	inline WebCamTexture_t1514609158 * get_mWebCamTexture_0() const { return ___mWebCamTexture_0; }
	inline WebCamTexture_t1514609158 ** get_address_of_mWebCamTexture_0() { return &___mWebCamTexture_0; }
	inline void set_mWebCamTexture_0(WebCamTexture_t1514609158 * value)
	{
		___mWebCamTexture_0 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamTexture_0), value);
	}

	inline static int32_t get_offset_of_mCheckCameraPermissions_1() { return static_cast<int32_t>(offsetof(WebCamTexAdaptorImpl_t4146576487, ___mCheckCameraPermissions_1)); }
	inline AsyncOperation_t1445031843 * get_mCheckCameraPermissions_1() const { return ___mCheckCameraPermissions_1; }
	inline AsyncOperation_t1445031843 ** get_address_of_mCheckCameraPermissions_1() { return &___mCheckCameraPermissions_1; }
	inline void set_mCheckCameraPermissions_1(AsyncOperation_t1445031843 * value)
	{
		___mCheckCameraPermissions_1 = value;
		Il2CppCodeGenWriteBarrier((&___mCheckCameraPermissions_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMTEXADAPTORIMPL_T4146576487_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef ENUMERATOR_T3923002270_H
#define ENUMERATOR_T3923002270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct  Enumerator_t3923002270 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1968819495 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t71524366  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___dictionary_0)); }
	inline Dictionary_2_t1968819495 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1968819495 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1968819495 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___current_3)); }
	inline KeyValuePair_2_t71524366  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t71524366 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t71524366  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3923002270_H
#ifndef OBJECTTARGETIMPL_T3614635090_H
#define OBJECTTARGETIMPL_T3614635090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTargetImpl
struct  ObjectTargetImpl_t3614635090  : public TrackableImpl_t3595316917
{
public:
	// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::mSize
	Vector3_t3722313464  ___mSize_2;
	// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::mDataSet
	DataSetImpl_t2094717509 * ___mDataSet_3;

public:
	inline static int32_t get_offset_of_mSize_2() { return static_cast<int32_t>(offsetof(ObjectTargetImpl_t3614635090, ___mSize_2)); }
	inline Vector3_t3722313464  get_mSize_2() const { return ___mSize_2; }
	inline Vector3_t3722313464 * get_address_of_mSize_2() { return &___mSize_2; }
	inline void set_mSize_2(Vector3_t3722313464  value)
	{
		___mSize_2 = value;
	}

	inline static int32_t get_offset_of_mDataSet_3() { return static_cast<int32_t>(offsetof(ObjectTargetImpl_t3614635090, ___mDataSet_3)); }
	inline DataSetImpl_t2094717509 * get_mDataSet_3() const { return ___mDataSet_3; }
	inline DataSetImpl_t2094717509 ** get_address_of_mDataSet_3() { return &___mDataSet_3; }
	inline void set_mDataSet_3(DataSetImpl_t2094717509 * value)
	{
		___mDataSet_3 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSet_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTARGETIMPL_T3614635090_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef VIDEOBACKGROUNDREFLECTION_T736962841_H
#define VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t736962841 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t736962841, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifndef ENUMERATOR_T50427564_H
#define ENUMERATOR_T50427564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.WordAbstractBehaviour>
struct  Enumerator_t50427564 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2391212085 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t493916956  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t50427564, ___dictionary_0)); }
	inline Dictionary_2_t2391212085 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2391212085 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2391212085 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t50427564, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t50427564, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t50427564, ___current_3)); }
	inline KeyValuePair_2_t493916956  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t493916956 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t493916956  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T50427564_H
#ifndef PIXEL_FORMAT_T3209881435_H
#define PIXEL_FORMAT_T3209881435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image/PIXEL_FORMAT
struct  PIXEL_FORMAT_t3209881435 
{
public:
	// System.Int32 Vuforia.Image/PIXEL_FORMAT::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PIXEL_FORMAT_t3209881435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIXEL_FORMAT_T3209881435_H
#ifndef OBB2D_T3709259836_H
#define OBB2D_T3709259836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/Obb2D
#pragma pack(push, tp, 1)
struct  Obb2D_t3709259836 
{
public:
	// UnityEngine.Vector2 Vuforia.VuforiaManagerImpl/Obb2D::center
	Vector2_t2156229523  ___center_0;
	// UnityEngine.Vector2 Vuforia.VuforiaManagerImpl/Obb2D::halfExtents
	Vector2_t2156229523  ___halfExtents_1;
	// System.Single Vuforia.VuforiaManagerImpl/Obb2D::rotation
	float ___rotation_2;
	// System.Int32 Vuforia.VuforiaManagerImpl/Obb2D::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(Obb2D_t3709259836, ___center_0)); }
	inline Vector2_t2156229523  get_center_0() const { return ___center_0; }
	inline Vector2_t2156229523 * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector2_t2156229523  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_halfExtents_1() { return static_cast<int32_t>(offsetof(Obb2D_t3709259836, ___halfExtents_1)); }
	inline Vector2_t2156229523  get_halfExtents_1() const { return ___halfExtents_1; }
	inline Vector2_t2156229523 * get_address_of_halfExtents_1() { return &___halfExtents_1; }
	inline void set_halfExtents_1(Vector2_t2156229523  value)
	{
		___halfExtents_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(Obb2D_t3709259836, ___rotation_2)); }
	inline float get_rotation_2() const { return ___rotation_2; }
	inline float* get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(float value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(Obb2D_t3709259836, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBB2D_T3709259836_H
#ifndef WORDDATA_T2883825721_H
#define WORDDATA_T2883825721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/WordData
#pragma pack(push, tp, 1)
struct  WordData_t2883825721 
{
public:
	// System.IntPtr Vuforia.VuforiaManagerImpl/WordData::stringValue
	intptr_t ___stringValue_0;
	// System.Int32 Vuforia.VuforiaManagerImpl/WordData::id
	int32_t ___id_1;
	// UnityEngine.Vector2 Vuforia.VuforiaManagerImpl/WordData::size
	Vector2_t2156229523  ___size_2;
	// System.Int32 Vuforia.VuforiaManagerImpl/WordData::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_stringValue_0() { return static_cast<int32_t>(offsetof(WordData_t2883825721, ___stringValue_0)); }
	inline intptr_t get_stringValue_0() const { return ___stringValue_0; }
	inline intptr_t* get_address_of_stringValue_0() { return &___stringValue_0; }
	inline void set_stringValue_0(intptr_t value)
	{
		___stringValue_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(WordData_t2883825721, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(WordData_t2883825721, ___size_2)); }
	inline Vector2_t2156229523  get_size_2() const { return ___size_2; }
	inline Vector2_t2156229523 * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(Vector2_t2156229523  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(WordData_t2883825721, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDDATA_T2883825721_H
#ifndef POSEDATA_T3114383412_H
#define POSEDATA_T3114383412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/PoseData
#pragma pack(push, tp, 1)
struct  PoseData_t3114383412 
{
public:
	// UnityEngine.Vector3 Vuforia.VuforiaManagerImpl/PoseData::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Quaternion Vuforia.VuforiaManagerImpl/PoseData::orientation
	Quaternion_t2301928331  ___orientation_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/PoseData::csInteger
	int32_t ___csInteger_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_t3114383412, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_t3114383412, ___orientation_1)); }
	inline Quaternion_t2301928331  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t2301928331 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t2301928331  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_csInteger_2() { return static_cast<int32_t>(offsetof(PoseData_t3114383412, ___csInteger_2)); }
	inline int32_t get_csInteger_2() const { return ___csInteger_2; }
	inline int32_t* get_address_of_csInteger_2() { return &___csInteger_2; }
	inline void set_csInteger_2(int32_t value)
	{
		___csInteger_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEDATA_T3114383412_H
#ifndef ORIENTEDBOUNDINGBOX_T2769728497_H
#define ORIENTEDBOUNDINGBOX_T2769728497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.OrientedBoundingBox
struct  OrientedBoundingBox_t2769728497 
{
public:
	// UnityEngine.Vector2 Vuforia.OrientedBoundingBox::<Center>k__BackingField
	Vector2_t2156229523  ___U3CCenterU3Ek__BackingField_0;
	// UnityEngine.Vector2 Vuforia.OrientedBoundingBox::<HalfExtents>k__BackingField
	Vector2_t2156229523  ___U3CHalfExtentsU3Ek__BackingField_1;
	// System.Single Vuforia.OrientedBoundingBox::<Rotation>k__BackingField
	float ___U3CRotationU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(OrientedBoundingBox_t2769728497, ___U3CCenterU3Ek__BackingField_0)); }
	inline Vector2_t2156229523  get_U3CCenterU3Ek__BackingField_0() const { return ___U3CCenterU3Ek__BackingField_0; }
	inline Vector2_t2156229523 * get_address_of_U3CCenterU3Ek__BackingField_0() { return &___U3CCenterU3Ek__BackingField_0; }
	inline void set_U3CCenterU3Ek__BackingField_0(Vector2_t2156229523  value)
	{
		___U3CCenterU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHalfExtentsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OrientedBoundingBox_t2769728497, ___U3CHalfExtentsU3Ek__BackingField_1)); }
	inline Vector2_t2156229523  get_U3CHalfExtentsU3Ek__BackingField_1() const { return ___U3CHalfExtentsU3Ek__BackingField_1; }
	inline Vector2_t2156229523 * get_address_of_U3CHalfExtentsU3Ek__BackingField_1() { return &___U3CHalfExtentsU3Ek__BackingField_1; }
	inline void set_U3CHalfExtentsU3Ek__BackingField_1(Vector2_t2156229523  value)
	{
		___U3CHalfExtentsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(OrientedBoundingBox_t2769728497, ___U3CRotationU3Ek__BackingField_2)); }
	inline float get_U3CRotationU3Ek__BackingField_2() const { return ___U3CRotationU3Ek__BackingField_2; }
	inline float* get_address_of_U3CRotationU3Ek__BackingField_2() { return &___U3CRotationU3Ek__BackingField_2; }
	inline void set_U3CRotationU3Ek__BackingField_2(float value)
	{
		___U3CRotationU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORIENTEDBOUNDINGBOX_T2769728497_H
#ifndef IMAGEHEADERDATA_T1300500262_H
#define IMAGEHEADERDATA_T1300500262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/ImageHeaderData
#pragma pack(push, tp, 1)
struct  ImageHeaderData_t1300500262 
{
public:
	// System.IntPtr Vuforia.VuforiaManagerImpl/ImageHeaderData::data
	intptr_t ___data_0;
	// System.Int32 Vuforia.VuforiaManagerImpl/ImageHeaderData::width
	int32_t ___width_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/ImageHeaderData::height
	int32_t ___height_2;
	// System.Int32 Vuforia.VuforiaManagerImpl/ImageHeaderData::stride
	int32_t ___stride_3;
	// System.Int32 Vuforia.VuforiaManagerImpl/ImageHeaderData::bufferWidth
	int32_t ___bufferWidth_4;
	// System.Int32 Vuforia.VuforiaManagerImpl/ImageHeaderData::bufferHeight
	int32_t ___bufferHeight_5;
	// System.Int32 Vuforia.VuforiaManagerImpl/ImageHeaderData::format
	int32_t ___format_6;
	// System.Int32 Vuforia.VuforiaManagerImpl/ImageHeaderData::reallocate
	int32_t ___reallocate_7;
	// System.Int32 Vuforia.VuforiaManagerImpl/ImageHeaderData::updated
	int32_t ___updated_8;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ImageHeaderData_t1300500262, ___data_0)); }
	inline intptr_t get_data_0() const { return ___data_0; }
	inline intptr_t* get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(intptr_t value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(ImageHeaderData_t1300500262, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(ImageHeaderData_t1300500262, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_stride_3() { return static_cast<int32_t>(offsetof(ImageHeaderData_t1300500262, ___stride_3)); }
	inline int32_t get_stride_3() const { return ___stride_3; }
	inline int32_t* get_address_of_stride_3() { return &___stride_3; }
	inline void set_stride_3(int32_t value)
	{
		___stride_3 = value;
	}

	inline static int32_t get_offset_of_bufferWidth_4() { return static_cast<int32_t>(offsetof(ImageHeaderData_t1300500262, ___bufferWidth_4)); }
	inline int32_t get_bufferWidth_4() const { return ___bufferWidth_4; }
	inline int32_t* get_address_of_bufferWidth_4() { return &___bufferWidth_4; }
	inline void set_bufferWidth_4(int32_t value)
	{
		___bufferWidth_4 = value;
	}

	inline static int32_t get_offset_of_bufferHeight_5() { return static_cast<int32_t>(offsetof(ImageHeaderData_t1300500262, ___bufferHeight_5)); }
	inline int32_t get_bufferHeight_5() const { return ___bufferHeight_5; }
	inline int32_t* get_address_of_bufferHeight_5() { return &___bufferHeight_5; }
	inline void set_bufferHeight_5(int32_t value)
	{
		___bufferHeight_5 = value;
	}

	inline static int32_t get_offset_of_format_6() { return static_cast<int32_t>(offsetof(ImageHeaderData_t1300500262, ___format_6)); }
	inline int32_t get_format_6() const { return ___format_6; }
	inline int32_t* get_address_of_format_6() { return &___format_6; }
	inline void set_format_6(int32_t value)
	{
		___format_6 = value;
	}

	inline static int32_t get_offset_of_reallocate_7() { return static_cast<int32_t>(offsetof(ImageHeaderData_t1300500262, ___reallocate_7)); }
	inline int32_t get_reallocate_7() const { return ___reallocate_7; }
	inline int32_t* get_address_of_reallocate_7() { return &___reallocate_7; }
	inline void set_reallocate_7(int32_t value)
	{
		___reallocate_7 = value;
	}

	inline static int32_t get_offset_of_updated_8() { return static_cast<int32_t>(offsetof(ImageHeaderData_t1300500262, ___updated_8)); }
	inline int32_t get_updated_8() const { return ___updated_8; }
	inline int32_t* get_address_of_updated_8() { return &___updated_8; }
	inline void set_updated_8(int32_t value)
	{
		___updated_8 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEHEADERDATA_T1300500262_H
#ifndef STATUS_T1100905814_H
#define STATUS_T1100905814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t1100905814 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t1100905814, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T1100905814_H
#ifndef WORDPREFABCREATIONMODE_T3691738946_H
#define WORDPREFABCREATIONMODE_T3691738946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordPrefabCreationMode
struct  WordPrefabCreationMode_t3691738946 
{
public:
	// System.Int32 Vuforia.WordPrefabCreationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WordPrefabCreationMode_t3691738946, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDPREFABCREATIONMODE_T3691738946_H
#ifndef WORDTEMPLATEMODE_T435619688_H
#define WORDTEMPLATEMODE_T435619688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordTemplateMode
struct  WordTemplateMode_t435619688 
{
public:
	// System.Int32 Vuforia.WordTemplateMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WordTemplateMode_t435619688, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDTEMPLATEMODE_T435619688_H
#ifndef CAMERADEVICEMODE_T2478715656_H
#define CAMERADEVICEMODE_T2478715656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2478715656 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2478715656, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICEMODE_T2478715656_H
#ifndef CAMERADIRECTION_T637748435_H
#define CAMERADIRECTION_T637748435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t637748435 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDirection_t637748435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADIRECTION_T637748435_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef USERAUTHORIZATION_T2950000085_H
#define USERAUTHORIZATION_T2950000085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UserAuthorization
struct  UserAuthorization_t2950000085 
{
public:
	// System.Int32 UnityEngine.UserAuthorization::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserAuthorization_t2950000085, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERAUTHORIZATION_T2950000085_H
#ifndef INSTANCEIDTYPE_T420283664_H
#define INSTANCEIDTYPE_T420283664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.InstanceIdType
struct  InstanceIdType_t420283664 
{
public:
	// System.Int32 Vuforia.InstanceIdType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InstanceIdType_t420283664, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEIDTYPE_T420283664_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef VIDEOTEXTUREINFO_T1805965052_H
#define VIDEOTEXTUREINFO_T1805965052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoTextureInfo
#pragma pack(push, tp, 1)
struct  VideoTextureInfo_t1805965052 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::textureSize
	Vec2I_t3527036565  ___textureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::imageSize
	Vec2I_t3527036565  ___imageSize_1;

public:
	inline static int32_t get_offset_of_textureSize_0() { return static_cast<int32_t>(offsetof(VideoTextureInfo_t1805965052, ___textureSize_0)); }
	inline Vec2I_t3527036565  get_textureSize_0() const { return ___textureSize_0; }
	inline Vec2I_t3527036565 * get_address_of_textureSize_0() { return &___textureSize_0; }
	inline void set_textureSize_0(Vec2I_t3527036565  value)
	{
		___textureSize_0 = value;
	}

	inline static int32_t get_offset_of_imageSize_1() { return static_cast<int32_t>(offsetof(VideoTextureInfo_t1805965052, ___imageSize_1)); }
	inline Vec2I_t3527036565  get_imageSize_1() const { return ___imageSize_1; }
	inline Vec2I_t3527036565 * get_address_of_imageSize_1() { return &___imageSize_1; }
	inline void set_imageSize_1(Vec2I_t3527036565  value)
	{
		___imageSize_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOTEXTUREINFO_T1805965052_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef WORLDCENTERMODE_T3672819471_H
#define WORLDCENTERMODE_T3672819471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t3672819471 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WorldCenterMode_t3672819471, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDCENTERMODE_T3672819471_H
#ifndef STORAGETYPE_T857810839_H
#define STORAGETYPE_T857810839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/StorageType
struct  StorageType_t857810839 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/StorageType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StorageType_t857810839, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORAGETYPE_T857810839_H
#ifndef PROFILEDATA_T3519391925_H
#define PROFILEDATA_T3519391925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileData
struct  ProfileData_t3519391925 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::RequestedTextureSize
	Vec2I_t3527036565  ___RequestedTextureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::ResampledTextureSize
	Vec2I_t3527036565  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile/ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_t3519391925, ___RequestedTextureSize_0)); }
	inline Vec2I_t3527036565  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vec2I_t3527036565 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vec2I_t3527036565  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_t3519391925, ___ResampledTextureSize_1)); }
	inline Vec2I_t3527036565  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vec2I_t3527036565 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vec2I_t3527036565  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_t3519391925, ___RequestedFPS_2)); }
	inline int32_t get_RequestedFPS_2() const { return ___RequestedFPS_2; }
	inline int32_t* get_address_of_RequestedFPS_2() { return &___RequestedFPS_2; }
	inline void set_RequestedFPS_2(int32_t value)
	{
		___RequestedFPS_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILEDATA_T3519391925_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef ENUMERATOR_T2419045274_H
#define ENUMERATOR_T2419045274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct  Enumerator_t2419045274 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t464862499 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2862534666  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2419045274, ___dictionary_0)); }
	inline Dictionary_2_t464862499 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t464862499 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t464862499 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2419045274, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2419045274, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2419045274, ___current_3)); }
	inline KeyValuePair_2_t2862534666  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2862534666 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2862534666  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2419045274_H
#ifndef WORDFILTERMODE_T1058214526_H
#define WORDFILTERMODE_T1058214526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordFilterMode
struct  WordFilterMode_t1058214526 
{
public:
	// System.Int32 Vuforia.WordFilterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WordFilterMode_t1058214526, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDFILTERMODE_T1058214526_H
#ifndef VUMARKTARGETIMPL_T1052843922_H
#define VUMARKTARGETIMPL_T1052843922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTargetImpl
struct  VuMarkTargetImpl_t1052843922  : public RuntimeObject
{
public:
	// Vuforia.VuMarkTemplateImpl Vuforia.VuMarkTargetImpl::mVuMarkTemplate
	VuMarkTemplateImpl_t667343433 * ___mVuMarkTemplate_0;
	// Vuforia.InstanceIdImpl Vuforia.VuMarkTargetImpl::mInstanceId
	InstanceIdImpl_t2824054591 * ___mInstanceId_1;
	// System.Int32 Vuforia.VuMarkTargetImpl::mTargetId
	int32_t ___mTargetId_2;
	// Vuforia.Image Vuforia.VuMarkTargetImpl::mInstanceImage
	Image_t745056343 * ___mInstanceImage_3;
	// Vuforia.VuforiaManagerImpl/ImageHeaderData Vuforia.VuMarkTargetImpl::mInstanceImageHeader
	ImageHeaderData_t1300500262  ___mInstanceImageHeader_4;

public:
	inline static int32_t get_offset_of_mVuMarkTemplate_0() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mVuMarkTemplate_0)); }
	inline VuMarkTemplateImpl_t667343433 * get_mVuMarkTemplate_0() const { return ___mVuMarkTemplate_0; }
	inline VuMarkTemplateImpl_t667343433 ** get_address_of_mVuMarkTemplate_0() { return &___mVuMarkTemplate_0; }
	inline void set_mVuMarkTemplate_0(VuMarkTemplateImpl_t667343433 * value)
	{
		___mVuMarkTemplate_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkTemplate_0), value);
	}

	inline static int32_t get_offset_of_mInstanceId_1() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mInstanceId_1)); }
	inline InstanceIdImpl_t2824054591 * get_mInstanceId_1() const { return ___mInstanceId_1; }
	inline InstanceIdImpl_t2824054591 ** get_address_of_mInstanceId_1() { return &___mInstanceId_1; }
	inline void set_mInstanceId_1(InstanceIdImpl_t2824054591 * value)
	{
		___mInstanceId_1 = value;
		Il2CppCodeGenWriteBarrier((&___mInstanceId_1), value);
	}

	inline static int32_t get_offset_of_mTargetId_2() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mTargetId_2)); }
	inline int32_t get_mTargetId_2() const { return ___mTargetId_2; }
	inline int32_t* get_address_of_mTargetId_2() { return &___mTargetId_2; }
	inline void set_mTargetId_2(int32_t value)
	{
		___mTargetId_2 = value;
	}

	inline static int32_t get_offset_of_mInstanceImage_3() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mInstanceImage_3)); }
	inline Image_t745056343 * get_mInstanceImage_3() const { return ___mInstanceImage_3; }
	inline Image_t745056343 ** get_address_of_mInstanceImage_3() { return &___mInstanceImage_3; }
	inline void set_mInstanceImage_3(Image_t745056343 * value)
	{
		___mInstanceImage_3 = value;
		Il2CppCodeGenWriteBarrier((&___mInstanceImage_3), value);
	}

	inline static int32_t get_offset_of_mInstanceImageHeader_4() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mInstanceImageHeader_4)); }
	inline ImageHeaderData_t1300500262  get_mInstanceImageHeader_4() const { return ___mInstanceImageHeader_4; }
	inline ImageHeaderData_t1300500262 * get_address_of_mInstanceImageHeader_4() { return &___mInstanceImageHeader_4; }
	inline void set_mInstanceImageHeader_4(ImageHeaderData_t1300500262  value)
	{
		___mInstanceImageHeader_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTARGETIMPL_T1052843922_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef VUMARKTEMPLATEIMPL_T667343433_H
#define VUMARKTEMPLATEIMPL_T667343433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTemplateImpl
struct  VuMarkTemplateImpl_t667343433  : public ObjectTargetImpl_t3614635090
{
public:
	// System.String Vuforia.VuMarkTemplateImpl::mUserData
	String_t* ___mUserData_4;
	// UnityEngine.Vector2 Vuforia.VuMarkTemplateImpl::mOrigin
	Vector2_t2156229523  ___mOrigin_5;
	// System.Boolean Vuforia.VuMarkTemplateImpl::mTrackingFromRuntimeAppearance
	bool ___mTrackingFromRuntimeAppearance_6;

public:
	inline static int32_t get_offset_of_mUserData_4() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t667343433, ___mUserData_4)); }
	inline String_t* get_mUserData_4() const { return ___mUserData_4; }
	inline String_t** get_address_of_mUserData_4() { return &___mUserData_4; }
	inline void set_mUserData_4(String_t* value)
	{
		___mUserData_4 = value;
		Il2CppCodeGenWriteBarrier((&___mUserData_4), value);
	}

	inline static int32_t get_offset_of_mOrigin_5() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t667343433, ___mOrigin_5)); }
	inline Vector2_t2156229523  get_mOrigin_5() const { return ___mOrigin_5; }
	inline Vector2_t2156229523 * get_address_of_mOrigin_5() { return &___mOrigin_5; }
	inline void set_mOrigin_5(Vector2_t2156229523  value)
	{
		___mOrigin_5 = value;
	}

	inline static int32_t get_offset_of_mTrackingFromRuntimeAppearance_6() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t667343433, ___mTrackingFromRuntimeAppearance_6)); }
	inline bool get_mTrackingFromRuntimeAppearance_6() const { return ___mTrackingFromRuntimeAppearance_6; }
	inline bool* get_address_of_mTrackingFromRuntimeAppearance_6() { return &___mTrackingFromRuntimeAppearance_6; }
	inline void set_mTrackingFromRuntimeAppearance_6(bool value)
	{
		___mTrackingFromRuntimeAppearance_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTEMPLATEIMPL_T667343433_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef VUFORIAARCONTROLLER_T1876945237_H
#define VUFORIAARCONTROLLER_T1876945237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController
struct  VuforiaARController_t1876945237  : public ARController_t116632334
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaARController::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_1;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_2;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_3;
	// System.Boolean Vuforia.VuforiaARController::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_4;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaARController::CameraDirection
	int32_t ___CameraDirection_5;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaARController::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_6;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaARController::mWorldCenterMode
	int32_t ___mWorldCenterMode_7;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaARController::mWorldCenter
	TrackableBehaviour_t1113559212 * ___mWorldCenter_8;
	// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler> Vuforia.VuforiaARController::mTrackerEventHandlers
	List_1_t3814467961 * ___mTrackerEventHandlers_9;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaARController::mVideoBgEventHandlers
	List_1_t905170877 * ___mVideoBgEventHandlers_10;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaInitialized
	Action_t1264377477 * ___mOnVuforiaInitialized_11;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaStarted
	Action_t1264377477 * ___mOnVuforiaStarted_12;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaDeinitialized
	Action_t1264377477 * ___mOnVuforiaDeinitialized_13;
	// System.Action Vuforia.VuforiaARController::mOnTrackablesUpdated
	Action_t1264377477 * ___mOnTrackablesUpdated_14;
	// System.Action Vuforia.VuforiaARController::mRenderOnUpdate
	Action_t1264377477 * ___mRenderOnUpdate_15;
	// System.Action`1<System.Boolean> Vuforia.VuforiaARController::mOnPause
	Action_1_t269755560 * ___mOnPause_16;
	// System.Boolean Vuforia.VuforiaARController::mPaused
	bool ___mPaused_17;
	// System.Action Vuforia.VuforiaARController::mOnBackgroundTextureChanged
	Action_t1264377477 * ___mOnBackgroundTextureChanged_18;
	// System.Boolean Vuforia.VuforiaARController::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_19;
	// System.Boolean Vuforia.VuforiaARController::mHasStarted
	bool ___mHasStarted_20;
	// System.Boolean Vuforia.VuforiaARController::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_21;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaARController::mCameraConfiguration
	RuntimeObject* ___mCameraConfiguration_22;
	// Vuforia.DigitalEyewearARController Vuforia.VuforiaARController::mEyewearBehaviour
	DigitalEyewearARController_t1054226036 * ___mEyewearBehaviour_23;
	// Vuforia.VideoBackgroundManager Vuforia.VuforiaARController::mVideoBackgroundMgr
	VideoBackgroundManager_t2198727358 * ___mVideoBackgroundMgr_24;
	// System.Boolean Vuforia.VuforiaARController::mCheckStopCamera
	bool ___mCheckStopCamera_25;
	// UnityEngine.Material Vuforia.VuforiaARController::mClearMaterial
	Material_t340375123 * ___mClearMaterial_26;
	// System.Boolean Vuforia.VuforiaARController::mMetalRendering
	bool ___mMetalRendering_27;
	// System.Boolean Vuforia.VuforiaARController::mHasStartedOnce
	bool ___mHasStartedOnce_28;
	// System.Boolean Vuforia.VuforiaARController::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_29;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_30;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_31;
	// System.Int32 Vuforia.VuforiaARController::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_32;
	// System.Collections.Generic.List`1<System.Type> Vuforia.VuforiaARController::mTrackersRequestedToDeinit
	List_1_t3956019502 * ___mTrackersRequestedToDeinit_33;
	// System.Boolean Vuforia.VuforiaARController::mMissedToApplyLeftProjectionMatrix
	bool ___mMissedToApplyLeftProjectionMatrix_34;
	// System.Boolean Vuforia.VuforiaARController::mMissedToApplyRightProjectionMatrix
	bool ___mMissedToApplyRightProjectionMatrix_35;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaARController::mLeftProjectMatrixToApply
	Matrix4x4_t1817901843  ___mLeftProjectMatrixToApply_36;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaARController::mRightProjectMatrixToApply
	Matrix4x4_t1817901843  ___mRightProjectMatrixToApply_37;

public:
	inline static int32_t get_offset_of_CameraDeviceModeSetting_1() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDeviceModeSetting_1)); }
	inline int32_t get_CameraDeviceModeSetting_1() const { return ___CameraDeviceModeSetting_1; }
	inline int32_t* get_address_of_CameraDeviceModeSetting_1() { return &___CameraDeviceModeSetting_1; }
	inline void set_CameraDeviceModeSetting_1(int32_t value)
	{
		___CameraDeviceModeSetting_1 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousImageTargets_2() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousImageTargets_2)); }
	inline int32_t get_MaxSimultaneousImageTargets_2() const { return ___MaxSimultaneousImageTargets_2; }
	inline int32_t* get_address_of_MaxSimultaneousImageTargets_2() { return &___MaxSimultaneousImageTargets_2; }
	inline void set_MaxSimultaneousImageTargets_2(int32_t value)
	{
		___MaxSimultaneousImageTargets_2 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousObjectTargets_3() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousObjectTargets_3)); }
	inline int32_t get_MaxSimultaneousObjectTargets_3() const { return ___MaxSimultaneousObjectTargets_3; }
	inline int32_t* get_address_of_MaxSimultaneousObjectTargets_3() { return &___MaxSimultaneousObjectTargets_3; }
	inline void set_MaxSimultaneousObjectTargets_3(int32_t value)
	{
		___MaxSimultaneousObjectTargets_3 = value;
	}

	inline static int32_t get_offset_of_UseDelayedLoadingObjectTargets_4() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___UseDelayedLoadingObjectTargets_4)); }
	inline bool get_UseDelayedLoadingObjectTargets_4() const { return ___UseDelayedLoadingObjectTargets_4; }
	inline bool* get_address_of_UseDelayedLoadingObjectTargets_4() { return &___UseDelayedLoadingObjectTargets_4; }
	inline void set_UseDelayedLoadingObjectTargets_4(bool value)
	{
		___UseDelayedLoadingObjectTargets_4 = value;
	}

	inline static int32_t get_offset_of_CameraDirection_5() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDirection_5)); }
	inline int32_t get_CameraDirection_5() const { return ___CameraDirection_5; }
	inline int32_t* get_address_of_CameraDirection_5() { return &___CameraDirection_5; }
	inline void set_CameraDirection_5(int32_t value)
	{
		___CameraDirection_5 = value;
	}

	inline static int32_t get_offset_of_MirrorVideoBackground_6() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MirrorVideoBackground_6)); }
	inline int32_t get_MirrorVideoBackground_6() const { return ___MirrorVideoBackground_6; }
	inline int32_t* get_address_of_MirrorVideoBackground_6() { return &___MirrorVideoBackground_6; }
	inline void set_MirrorVideoBackground_6(int32_t value)
	{
		___MirrorVideoBackground_6 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_7() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenterMode_7)); }
	inline int32_t get_mWorldCenterMode_7() const { return ___mWorldCenterMode_7; }
	inline int32_t* get_address_of_mWorldCenterMode_7() { return &___mWorldCenterMode_7; }
	inline void set_mWorldCenterMode_7(int32_t value)
	{
		___mWorldCenterMode_7 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_8() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenter_8)); }
	inline TrackableBehaviour_t1113559212 * get_mWorldCenter_8() const { return ___mWorldCenter_8; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mWorldCenter_8() { return &___mWorldCenter_8; }
	inline void set_mWorldCenter_8(TrackableBehaviour_t1113559212 * value)
	{
		___mWorldCenter_8 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_8), value);
	}

	inline static int32_t get_offset_of_mTrackerEventHandlers_9() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mTrackerEventHandlers_9)); }
	inline List_1_t3814467961 * get_mTrackerEventHandlers_9() const { return ___mTrackerEventHandlers_9; }
	inline List_1_t3814467961 ** get_address_of_mTrackerEventHandlers_9() { return &___mTrackerEventHandlers_9; }
	inline void set_mTrackerEventHandlers_9(List_1_t3814467961 * value)
	{
		___mTrackerEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackerEventHandlers_9), value);
	}

	inline static int32_t get_offset_of_mVideoBgEventHandlers_10() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBgEventHandlers_10)); }
	inline List_1_t905170877 * get_mVideoBgEventHandlers_10() const { return ___mVideoBgEventHandlers_10; }
	inline List_1_t905170877 ** get_address_of_mVideoBgEventHandlers_10() { return &___mVideoBgEventHandlers_10; }
	inline void set_mVideoBgEventHandlers_10(List_1_t905170877 * value)
	{
		___mVideoBgEventHandlers_10 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBgEventHandlers_10), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_11() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaInitialized_11)); }
	inline Action_t1264377477 * get_mOnVuforiaInitialized_11() const { return ___mOnVuforiaInitialized_11; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaInitialized_11() { return &___mOnVuforiaInitialized_11; }
	inline void set_mOnVuforiaInitialized_11(Action_t1264377477 * value)
	{
		___mOnVuforiaInitialized_11 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitialized_11), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_12() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaStarted_12)); }
	inline Action_t1264377477 * get_mOnVuforiaStarted_12() const { return ___mOnVuforiaStarted_12; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaStarted_12() { return &___mOnVuforiaStarted_12; }
	inline void set_mOnVuforiaStarted_12(Action_t1264377477 * value)
	{
		___mOnVuforiaStarted_12 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaStarted_12), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaDeinitialized_13() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaDeinitialized_13)); }
	inline Action_t1264377477 * get_mOnVuforiaDeinitialized_13() const { return ___mOnVuforiaDeinitialized_13; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaDeinitialized_13() { return &___mOnVuforiaDeinitialized_13; }
	inline void set_mOnVuforiaDeinitialized_13(Action_t1264377477 * value)
	{
		___mOnVuforiaDeinitialized_13 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaDeinitialized_13), value);
	}

	inline static int32_t get_offset_of_mOnTrackablesUpdated_14() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnTrackablesUpdated_14)); }
	inline Action_t1264377477 * get_mOnTrackablesUpdated_14() const { return ___mOnTrackablesUpdated_14; }
	inline Action_t1264377477 ** get_address_of_mOnTrackablesUpdated_14() { return &___mOnTrackablesUpdated_14; }
	inline void set_mOnTrackablesUpdated_14(Action_t1264377477 * value)
	{
		___mOnTrackablesUpdated_14 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTrackablesUpdated_14), value);
	}

	inline static int32_t get_offset_of_mRenderOnUpdate_15() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mRenderOnUpdate_15)); }
	inline Action_t1264377477 * get_mRenderOnUpdate_15() const { return ___mRenderOnUpdate_15; }
	inline Action_t1264377477 ** get_address_of_mRenderOnUpdate_15() { return &___mRenderOnUpdate_15; }
	inline void set_mRenderOnUpdate_15(Action_t1264377477 * value)
	{
		___mRenderOnUpdate_15 = value;
		Il2CppCodeGenWriteBarrier((&___mRenderOnUpdate_15), value);
	}

	inline static int32_t get_offset_of_mOnPause_16() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnPause_16)); }
	inline Action_1_t269755560 * get_mOnPause_16() const { return ___mOnPause_16; }
	inline Action_1_t269755560 ** get_address_of_mOnPause_16() { return &___mOnPause_16; }
	inline void set_mOnPause_16(Action_1_t269755560 * value)
	{
		___mOnPause_16 = value;
		Il2CppCodeGenWriteBarrier((&___mOnPause_16), value);
	}

	inline static int32_t get_offset_of_mPaused_17() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mPaused_17)); }
	inline bool get_mPaused_17() const { return ___mPaused_17; }
	inline bool* get_address_of_mPaused_17() { return &___mPaused_17; }
	inline void set_mPaused_17(bool value)
	{
		___mPaused_17 = value;
	}

	inline static int32_t get_offset_of_mOnBackgroundTextureChanged_18() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnBackgroundTextureChanged_18)); }
	inline Action_t1264377477 * get_mOnBackgroundTextureChanged_18() const { return ___mOnBackgroundTextureChanged_18; }
	inline Action_t1264377477 ** get_address_of_mOnBackgroundTextureChanged_18() { return &___mOnBackgroundTextureChanged_18; }
	inline void set_mOnBackgroundTextureChanged_18(Action_t1264377477 * value)
	{
		___mOnBackgroundTextureChanged_18 = value;
		Il2CppCodeGenWriteBarrier((&___mOnBackgroundTextureChanged_18), value);
	}

	inline static int32_t get_offset_of_mStartHasBeenInvoked_19() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mStartHasBeenInvoked_19)); }
	inline bool get_mStartHasBeenInvoked_19() const { return ___mStartHasBeenInvoked_19; }
	inline bool* get_address_of_mStartHasBeenInvoked_19() { return &___mStartHasBeenInvoked_19; }
	inline void set_mStartHasBeenInvoked_19(bool value)
	{
		___mStartHasBeenInvoked_19 = value;
	}

	inline static int32_t get_offset_of_mHasStarted_20() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStarted_20)); }
	inline bool get_mHasStarted_20() const { return ___mHasStarted_20; }
	inline bool* get_address_of_mHasStarted_20() { return &___mHasStarted_20; }
	inline void set_mHasStarted_20(bool value)
	{
		___mHasStarted_20 = value;
	}

	inline static int32_t get_offset_of_mBackgroundTextureHasChanged_21() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mBackgroundTextureHasChanged_21)); }
	inline bool get_mBackgroundTextureHasChanged_21() const { return ___mBackgroundTextureHasChanged_21; }
	inline bool* get_address_of_mBackgroundTextureHasChanged_21() { return &___mBackgroundTextureHasChanged_21; }
	inline void set_mBackgroundTextureHasChanged_21(bool value)
	{
		___mBackgroundTextureHasChanged_21 = value;
	}

	inline static int32_t get_offset_of_mCameraConfiguration_22() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCameraConfiguration_22)); }
	inline RuntimeObject* get_mCameraConfiguration_22() const { return ___mCameraConfiguration_22; }
	inline RuntimeObject** get_address_of_mCameraConfiguration_22() { return &___mCameraConfiguration_22; }
	inline void set_mCameraConfiguration_22(RuntimeObject* value)
	{
		___mCameraConfiguration_22 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraConfiguration_22), value);
	}

	inline static int32_t get_offset_of_mEyewearBehaviour_23() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mEyewearBehaviour_23)); }
	inline DigitalEyewearARController_t1054226036 * get_mEyewearBehaviour_23() const { return ___mEyewearBehaviour_23; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mEyewearBehaviour_23() { return &___mEyewearBehaviour_23; }
	inline void set_mEyewearBehaviour_23(DigitalEyewearARController_t1054226036 * value)
	{
		___mEyewearBehaviour_23 = value;
		Il2CppCodeGenWriteBarrier((&___mEyewearBehaviour_23), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundMgr_24() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBackgroundMgr_24)); }
	inline VideoBackgroundManager_t2198727358 * get_mVideoBackgroundMgr_24() const { return ___mVideoBackgroundMgr_24; }
	inline VideoBackgroundManager_t2198727358 ** get_address_of_mVideoBackgroundMgr_24() { return &___mVideoBackgroundMgr_24; }
	inline void set_mVideoBackgroundMgr_24(VideoBackgroundManager_t2198727358 * value)
	{
		___mVideoBackgroundMgr_24 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundMgr_24), value);
	}

	inline static int32_t get_offset_of_mCheckStopCamera_25() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCheckStopCamera_25)); }
	inline bool get_mCheckStopCamera_25() const { return ___mCheckStopCamera_25; }
	inline bool* get_address_of_mCheckStopCamera_25() { return &___mCheckStopCamera_25; }
	inline void set_mCheckStopCamera_25(bool value)
	{
		___mCheckStopCamera_25 = value;
	}

	inline static int32_t get_offset_of_mClearMaterial_26() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mClearMaterial_26)); }
	inline Material_t340375123 * get_mClearMaterial_26() const { return ___mClearMaterial_26; }
	inline Material_t340375123 ** get_address_of_mClearMaterial_26() { return &___mClearMaterial_26; }
	inline void set_mClearMaterial_26(Material_t340375123 * value)
	{
		___mClearMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((&___mClearMaterial_26), value);
	}

	inline static int32_t get_offset_of_mMetalRendering_27() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mMetalRendering_27)); }
	inline bool get_mMetalRendering_27() const { return ___mMetalRendering_27; }
	inline bool* get_address_of_mMetalRendering_27() { return &___mMetalRendering_27; }
	inline void set_mMetalRendering_27(bool value)
	{
		___mMetalRendering_27 = value;
	}

	inline static int32_t get_offset_of_mHasStartedOnce_28() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStartedOnce_28)); }
	inline bool get_mHasStartedOnce_28() const { return ___mHasStartedOnce_28; }
	inline bool* get_address_of_mHasStartedOnce_28() { return &___mHasStartedOnce_28; }
	inline void set_mHasStartedOnce_28(bool value)
	{
		___mHasStartedOnce_28 = value;
	}

	inline static int32_t get_offset_of_mWasEnabledBeforePause_29() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWasEnabledBeforePause_29)); }
	inline bool get_mWasEnabledBeforePause_29() const { return ___mWasEnabledBeforePause_29; }
	inline bool* get_address_of_mWasEnabledBeforePause_29() { return &___mWasEnabledBeforePause_29; }
	inline void set_mWasEnabledBeforePause_29(bool value)
	{
		___mWasEnabledBeforePause_29 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforePause_30() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforePause_30)); }
	inline bool get_mObjectTrackerWasActiveBeforePause_30() const { return ___mObjectTrackerWasActiveBeforePause_30; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforePause_30() { return &___mObjectTrackerWasActiveBeforePause_30; }
	inline void set_mObjectTrackerWasActiveBeforePause_30(bool value)
	{
		___mObjectTrackerWasActiveBeforePause_30 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforeDisabling_31() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforeDisabling_31)); }
	inline bool get_mObjectTrackerWasActiveBeforeDisabling_31() const { return ___mObjectTrackerWasActiveBeforeDisabling_31; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforeDisabling_31() { return &___mObjectTrackerWasActiveBeforeDisabling_31; }
	inline void set_mObjectTrackerWasActiveBeforeDisabling_31(bool value)
	{
		___mObjectTrackerWasActiveBeforeDisabling_31 = value;
	}

	inline static int32_t get_offset_of_mLastUpdatedFrame_32() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mLastUpdatedFrame_32)); }
	inline int32_t get_mLastUpdatedFrame_32() const { return ___mLastUpdatedFrame_32; }
	inline int32_t* get_address_of_mLastUpdatedFrame_32() { return &___mLastUpdatedFrame_32; }
	inline void set_mLastUpdatedFrame_32(int32_t value)
	{
		___mLastUpdatedFrame_32 = value;
	}

	inline static int32_t get_offset_of_mTrackersRequestedToDeinit_33() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mTrackersRequestedToDeinit_33)); }
	inline List_1_t3956019502 * get_mTrackersRequestedToDeinit_33() const { return ___mTrackersRequestedToDeinit_33; }
	inline List_1_t3956019502 ** get_address_of_mTrackersRequestedToDeinit_33() { return &___mTrackersRequestedToDeinit_33; }
	inline void set_mTrackersRequestedToDeinit_33(List_1_t3956019502 * value)
	{
		___mTrackersRequestedToDeinit_33 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackersRequestedToDeinit_33), value);
	}

	inline static int32_t get_offset_of_mMissedToApplyLeftProjectionMatrix_34() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mMissedToApplyLeftProjectionMatrix_34)); }
	inline bool get_mMissedToApplyLeftProjectionMatrix_34() const { return ___mMissedToApplyLeftProjectionMatrix_34; }
	inline bool* get_address_of_mMissedToApplyLeftProjectionMatrix_34() { return &___mMissedToApplyLeftProjectionMatrix_34; }
	inline void set_mMissedToApplyLeftProjectionMatrix_34(bool value)
	{
		___mMissedToApplyLeftProjectionMatrix_34 = value;
	}

	inline static int32_t get_offset_of_mMissedToApplyRightProjectionMatrix_35() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mMissedToApplyRightProjectionMatrix_35)); }
	inline bool get_mMissedToApplyRightProjectionMatrix_35() const { return ___mMissedToApplyRightProjectionMatrix_35; }
	inline bool* get_address_of_mMissedToApplyRightProjectionMatrix_35() { return &___mMissedToApplyRightProjectionMatrix_35; }
	inline void set_mMissedToApplyRightProjectionMatrix_35(bool value)
	{
		___mMissedToApplyRightProjectionMatrix_35 = value;
	}

	inline static int32_t get_offset_of_mLeftProjectMatrixToApply_36() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mLeftProjectMatrixToApply_36)); }
	inline Matrix4x4_t1817901843  get_mLeftProjectMatrixToApply_36() const { return ___mLeftProjectMatrixToApply_36; }
	inline Matrix4x4_t1817901843 * get_address_of_mLeftProjectMatrixToApply_36() { return &___mLeftProjectMatrixToApply_36; }
	inline void set_mLeftProjectMatrixToApply_36(Matrix4x4_t1817901843  value)
	{
		___mLeftProjectMatrixToApply_36 = value;
	}

	inline static int32_t get_offset_of_mRightProjectMatrixToApply_37() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mRightProjectMatrixToApply_37)); }
	inline Matrix4x4_t1817901843  get_mRightProjectMatrixToApply_37() const { return ___mRightProjectMatrixToApply_37; }
	inline Matrix4x4_t1817901843 * get_address_of_mRightProjectMatrixToApply_37() { return &___mRightProjectMatrixToApply_37; }
	inline void set_mRightProjectMatrixToApply_37(Matrix4x4_t1817901843  value)
	{
		___mRightProjectMatrixToApply_37 = value;
	}
};

struct VuforiaARController_t1876945237_StaticFields
{
public:
	// Vuforia.VuforiaARController Vuforia.VuforiaARController::mInstance
	VuforiaARController_t1876945237 * ___mInstance_38;
	// System.Object Vuforia.VuforiaARController::mPadlock
	RuntimeObject * ___mPadlock_39;

public:
	inline static int32_t get_offset_of_mInstance_38() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mInstance_38)); }
	inline VuforiaARController_t1876945237 * get_mInstance_38() const { return ___mInstance_38; }
	inline VuforiaARController_t1876945237 ** get_address_of_mInstance_38() { return &___mInstance_38; }
	inline void set_mInstance_38(VuforiaARController_t1876945237 * value)
	{
		___mInstance_38 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_38), value);
	}

	inline static int32_t get_offset_of_mPadlock_39() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mPadlock_39)); }
	inline RuntimeObject * get_mPadlock_39() const { return ___mPadlock_39; }
	inline RuntimeObject ** get_address_of_mPadlock_39() { return &___mPadlock_39; }
	inline void set_mPadlock_39(RuntimeObject * value)
	{
		___mPadlock_39 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAARCONTROLLER_T1876945237_H
#ifndef INSTANCEIDIMPL_T2824054591_H
#define INSTANCEIDIMPL_T2824054591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.InstanceIdImpl
struct  InstanceIdImpl_t2824054591  : public RuntimeObject
{
public:
	// Vuforia.InstanceIdType Vuforia.InstanceIdImpl::mDataType
	int32_t ___mDataType_0;
	// System.Byte[] Vuforia.InstanceIdImpl::mBuffer
	ByteU5BU5D_t4116647657* ___mBuffer_1;
	// System.UInt64 Vuforia.InstanceIdImpl::mNumericValue
	uint64_t ___mNumericValue_2;
	// System.UInt32 Vuforia.InstanceIdImpl::mDataLength
	uint32_t ___mDataLength_3;
	// System.String Vuforia.InstanceIdImpl::mCachedStringValue
	String_t* ___mCachedStringValue_4;

public:
	inline static int32_t get_offset_of_mDataType_0() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mDataType_0)); }
	inline int32_t get_mDataType_0() const { return ___mDataType_0; }
	inline int32_t* get_address_of_mDataType_0() { return &___mDataType_0; }
	inline void set_mDataType_0(int32_t value)
	{
		___mDataType_0 = value;
	}

	inline static int32_t get_offset_of_mBuffer_1() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mBuffer_1)); }
	inline ByteU5BU5D_t4116647657* get_mBuffer_1() const { return ___mBuffer_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_mBuffer_1() { return &___mBuffer_1; }
	inline void set_mBuffer_1(ByteU5BU5D_t4116647657* value)
	{
		___mBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___mBuffer_1), value);
	}

	inline static int32_t get_offset_of_mNumericValue_2() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mNumericValue_2)); }
	inline uint64_t get_mNumericValue_2() const { return ___mNumericValue_2; }
	inline uint64_t* get_address_of_mNumericValue_2() { return &___mNumericValue_2; }
	inline void set_mNumericValue_2(uint64_t value)
	{
		___mNumericValue_2 = value;
	}

	inline static int32_t get_offset_of_mDataLength_3() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mDataLength_3)); }
	inline uint32_t get_mDataLength_3() const { return ___mDataLength_3; }
	inline uint32_t* get_address_of_mDataLength_3() { return &___mDataLength_3; }
	inline void set_mDataLength_3(uint32_t value)
	{
		___mDataLength_3 = value;
	}

	inline static int32_t get_offset_of_mCachedStringValue_4() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mCachedStringValue_4)); }
	inline String_t* get_mCachedStringValue_4() const { return ___mCachedStringValue_4; }
	inline String_t** get_address_of_mCachedStringValue_4() { return &___mCachedStringValue_4; }
	inline void set_mCachedStringValue_4(String_t* value)
	{
		___mCachedStringValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___mCachedStringValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEIDIMPL_T2824054591_H
#ifndef WORDIMPL_T2494369133_H
#define WORDIMPL_T2494369133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordImpl
struct  WordImpl_t2494369133  : public TrackableImpl_t3595316917
{
public:
	// System.String Vuforia.WordImpl::mText
	String_t* ___mText_2;
	// UnityEngine.Vector2 Vuforia.WordImpl::mSize
	Vector2_t2156229523  ___mSize_3;
	// Vuforia.Image Vuforia.WordImpl::mLetterMask
	Image_t745056343 * ___mLetterMask_4;
	// Vuforia.VuforiaManagerImpl/ImageHeaderData Vuforia.WordImpl::mLetterImageHeader
	ImageHeaderData_t1300500262  ___mLetterImageHeader_5;
	// Vuforia.RectangleData[] Vuforia.WordImpl::mLetterBoundingBoxes
	RectangleDataU5BU5D_t804827427* ___mLetterBoundingBoxes_6;

public:
	inline static int32_t get_offset_of_mText_2() { return static_cast<int32_t>(offsetof(WordImpl_t2494369133, ___mText_2)); }
	inline String_t* get_mText_2() const { return ___mText_2; }
	inline String_t** get_address_of_mText_2() { return &___mText_2; }
	inline void set_mText_2(String_t* value)
	{
		___mText_2 = value;
		Il2CppCodeGenWriteBarrier((&___mText_2), value);
	}

	inline static int32_t get_offset_of_mSize_3() { return static_cast<int32_t>(offsetof(WordImpl_t2494369133, ___mSize_3)); }
	inline Vector2_t2156229523  get_mSize_3() const { return ___mSize_3; }
	inline Vector2_t2156229523 * get_address_of_mSize_3() { return &___mSize_3; }
	inline void set_mSize_3(Vector2_t2156229523  value)
	{
		___mSize_3 = value;
	}

	inline static int32_t get_offset_of_mLetterMask_4() { return static_cast<int32_t>(offsetof(WordImpl_t2494369133, ___mLetterMask_4)); }
	inline Image_t745056343 * get_mLetterMask_4() const { return ___mLetterMask_4; }
	inline Image_t745056343 ** get_address_of_mLetterMask_4() { return &___mLetterMask_4; }
	inline void set_mLetterMask_4(Image_t745056343 * value)
	{
		___mLetterMask_4 = value;
		Il2CppCodeGenWriteBarrier((&___mLetterMask_4), value);
	}

	inline static int32_t get_offset_of_mLetterImageHeader_5() { return static_cast<int32_t>(offsetof(WordImpl_t2494369133, ___mLetterImageHeader_5)); }
	inline ImageHeaderData_t1300500262  get_mLetterImageHeader_5() const { return ___mLetterImageHeader_5; }
	inline ImageHeaderData_t1300500262 * get_address_of_mLetterImageHeader_5() { return &___mLetterImageHeader_5; }
	inline void set_mLetterImageHeader_5(ImageHeaderData_t1300500262  value)
	{
		___mLetterImageHeader_5 = value;
	}

	inline static int32_t get_offset_of_mLetterBoundingBoxes_6() { return static_cast<int32_t>(offsetof(WordImpl_t2494369133, ___mLetterBoundingBoxes_6)); }
	inline RectangleDataU5BU5D_t804827427* get_mLetterBoundingBoxes_6() const { return ___mLetterBoundingBoxes_6; }
	inline RectangleDataU5BU5D_t804827427** get_address_of_mLetterBoundingBoxes_6() { return &___mLetterBoundingBoxes_6; }
	inline void set_mLetterBoundingBoxes_6(RectangleDataU5BU5D_t804827427* value)
	{
		___mLetterBoundingBoxes_6 = value;
		Il2CppCodeGenWriteBarrier((&___mLetterBoundingBoxes_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDIMPL_T2494369133_H
#ifndef ENUMERATOR_T701438809_H
#define ENUMERATOR_T701438809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_t701438809 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t2086727927  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t701438809, ___host_enumerator_0)); }
	inline Enumerator_t2086727927  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t2086727927 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t2086727927  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T701438809_H
#ifndef ENUMERATOR_T1033756156_H
#define ENUMERATOR_T1033756156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct  Enumerator_t1033756156 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t2419045274  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t1033756156, ___host_enumerator_0)); }
	inline Enumerator_t2419045274  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t2419045274 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t2419045274  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1033756156_H
#ifndef PROFILECOLLECTION_T901995765_H
#define PROFILECOLLECTION_T901995765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileCollection
struct  ProfileCollection_t901995765 
{
public:
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile/ProfileCollection::DefaultProfile
	ProfileData_t3519391925  ___DefaultProfile_0;
	// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData> Vuforia.WebCamProfile/ProfileCollection::Profiles
	Dictionary_2_t3304648224 * ___Profiles_1;

public:
	inline static int32_t get_offset_of_DefaultProfile_0() { return static_cast<int32_t>(offsetof(ProfileCollection_t901995765, ___DefaultProfile_0)); }
	inline ProfileData_t3519391925  get_DefaultProfile_0() const { return ___DefaultProfile_0; }
	inline ProfileData_t3519391925 * get_address_of_DefaultProfile_0() { return &___DefaultProfile_0; }
	inline void set_DefaultProfile_0(ProfileData_t3519391925  value)
	{
		___DefaultProfile_0 = value;
	}

	inline static int32_t get_offset_of_Profiles_1() { return static_cast<int32_t>(offsetof(ProfileCollection_t901995765, ___Profiles_1)); }
	inline Dictionary_2_t3304648224 * get_Profiles_1() const { return ___Profiles_1; }
	inline Dictionary_2_t3304648224 ** get_address_of_Profiles_1() { return &___Profiles_1; }
	inline void set_Profiles_1(Dictionary_2_t3304648224 * value)
	{
		___Profiles_1 = value;
		Il2CppCodeGenWriteBarrier((&___Profiles_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t901995765_marshaled_pinvoke
{
	ProfileData_t3519391925  ___DefaultProfile_0;
	Dictionary_2_t3304648224 * ___Profiles_1;
};
// Native definition for COM marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t901995765_marshaled_com
{
	ProfileData_t3519391925  ___DefaultProfile_0;
	Dictionary_2_t3304648224 * ___Profiles_1;
};
#endif // PROFILECOLLECTION_T901995765_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef WORDMANAGERIMPL_T1706254019_H
#define WORDMANAGERIMPL_T1706254019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordManagerImpl
struct  WordManagerImpl_t1706254019  : public WordManager_t3100853168
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult> Vuforia.WordManagerImpl::mTrackedWords
	Dictionary_2_t2529487133 * ___mTrackedWords_0;
	// System.Collections.Generic.List`1<Vuforia.WordResult> Vuforia.WordManagerImpl::mNewWords
	List_1_t817881248 * ___mNewWords_1;
	// System.Collections.Generic.List`1<Vuforia.Word> Vuforia.WordManagerImpl::mLostWords
	List_1_t2588113360 * ___mLostWords_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::mActiveWordBehaviours
	Dictionary_2_t2391212085 * ___mActiveWordBehaviours_3;
	// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::mWordBehavioursMarkedForDeletion
	List_1_t679606200 * ___mWordBehavioursMarkedForDeletion_4;
	// System.Collections.Generic.List`1<Vuforia.Word> Vuforia.WordManagerImpl::mWaitingQueue
	List_1_t2588113360 * ___mWaitingQueue_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>> Vuforia.WordManagerImpl::mWordBehaviours
	Dictionary_2_t464862499 * ___mWordBehaviours_7;
	// System.Boolean Vuforia.WordManagerImpl::mAutomaticTemplate
	bool ___mAutomaticTemplate_8;
	// System.Int32 Vuforia.WordManagerImpl::mMaxInstances
	int32_t ___mMaxInstances_9;
	// Vuforia.WordPrefabCreationMode Vuforia.WordManagerImpl::mWordPrefabCreationMode
	int32_t ___mWordPrefabCreationMode_10;
	// Vuforia.VuforiaARController Vuforia.WordManagerImpl::mVuforiaBehaviour
	VuforiaARController_t1876945237 * ___mVuforiaBehaviour_11;

public:
	inline static int32_t get_offset_of_mTrackedWords_0() { return static_cast<int32_t>(offsetof(WordManagerImpl_t1706254019, ___mTrackedWords_0)); }
	inline Dictionary_2_t2529487133 * get_mTrackedWords_0() const { return ___mTrackedWords_0; }
	inline Dictionary_2_t2529487133 ** get_address_of_mTrackedWords_0() { return &___mTrackedWords_0; }
	inline void set_mTrackedWords_0(Dictionary_2_t2529487133 * value)
	{
		___mTrackedWords_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackedWords_0), value);
	}

	inline static int32_t get_offset_of_mNewWords_1() { return static_cast<int32_t>(offsetof(WordManagerImpl_t1706254019, ___mNewWords_1)); }
	inline List_1_t817881248 * get_mNewWords_1() const { return ___mNewWords_1; }
	inline List_1_t817881248 ** get_address_of_mNewWords_1() { return &___mNewWords_1; }
	inline void set_mNewWords_1(List_1_t817881248 * value)
	{
		___mNewWords_1 = value;
		Il2CppCodeGenWriteBarrier((&___mNewWords_1), value);
	}

	inline static int32_t get_offset_of_mLostWords_2() { return static_cast<int32_t>(offsetof(WordManagerImpl_t1706254019, ___mLostWords_2)); }
	inline List_1_t2588113360 * get_mLostWords_2() const { return ___mLostWords_2; }
	inline List_1_t2588113360 ** get_address_of_mLostWords_2() { return &___mLostWords_2; }
	inline void set_mLostWords_2(List_1_t2588113360 * value)
	{
		___mLostWords_2 = value;
		Il2CppCodeGenWriteBarrier((&___mLostWords_2), value);
	}

	inline static int32_t get_offset_of_mActiveWordBehaviours_3() { return static_cast<int32_t>(offsetof(WordManagerImpl_t1706254019, ___mActiveWordBehaviours_3)); }
	inline Dictionary_2_t2391212085 * get_mActiveWordBehaviours_3() const { return ___mActiveWordBehaviours_3; }
	inline Dictionary_2_t2391212085 ** get_address_of_mActiveWordBehaviours_3() { return &___mActiveWordBehaviours_3; }
	inline void set_mActiveWordBehaviours_3(Dictionary_2_t2391212085 * value)
	{
		___mActiveWordBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveWordBehaviours_3), value);
	}

	inline static int32_t get_offset_of_mWordBehavioursMarkedForDeletion_4() { return static_cast<int32_t>(offsetof(WordManagerImpl_t1706254019, ___mWordBehavioursMarkedForDeletion_4)); }
	inline List_1_t679606200 * get_mWordBehavioursMarkedForDeletion_4() const { return ___mWordBehavioursMarkedForDeletion_4; }
	inline List_1_t679606200 ** get_address_of_mWordBehavioursMarkedForDeletion_4() { return &___mWordBehavioursMarkedForDeletion_4; }
	inline void set_mWordBehavioursMarkedForDeletion_4(List_1_t679606200 * value)
	{
		___mWordBehavioursMarkedForDeletion_4 = value;
		Il2CppCodeGenWriteBarrier((&___mWordBehavioursMarkedForDeletion_4), value);
	}

	inline static int32_t get_offset_of_mWaitingQueue_5() { return static_cast<int32_t>(offsetof(WordManagerImpl_t1706254019, ___mWaitingQueue_5)); }
	inline List_1_t2588113360 * get_mWaitingQueue_5() const { return ___mWaitingQueue_5; }
	inline List_1_t2588113360 ** get_address_of_mWaitingQueue_5() { return &___mWaitingQueue_5; }
	inline void set_mWaitingQueue_5(List_1_t2588113360 * value)
	{
		___mWaitingQueue_5 = value;
		Il2CppCodeGenWriteBarrier((&___mWaitingQueue_5), value);
	}

	inline static int32_t get_offset_of_mWordBehaviours_7() { return static_cast<int32_t>(offsetof(WordManagerImpl_t1706254019, ___mWordBehaviours_7)); }
	inline Dictionary_2_t464862499 * get_mWordBehaviours_7() const { return ___mWordBehaviours_7; }
	inline Dictionary_2_t464862499 ** get_address_of_mWordBehaviours_7() { return &___mWordBehaviours_7; }
	inline void set_mWordBehaviours_7(Dictionary_2_t464862499 * value)
	{
		___mWordBehaviours_7 = value;
		Il2CppCodeGenWriteBarrier((&___mWordBehaviours_7), value);
	}

	inline static int32_t get_offset_of_mAutomaticTemplate_8() { return static_cast<int32_t>(offsetof(WordManagerImpl_t1706254019, ___mAutomaticTemplate_8)); }
	inline bool get_mAutomaticTemplate_8() const { return ___mAutomaticTemplate_8; }
	inline bool* get_address_of_mAutomaticTemplate_8() { return &___mAutomaticTemplate_8; }
	inline void set_mAutomaticTemplate_8(bool value)
	{
		___mAutomaticTemplate_8 = value;
	}

	inline static int32_t get_offset_of_mMaxInstances_9() { return static_cast<int32_t>(offsetof(WordManagerImpl_t1706254019, ___mMaxInstances_9)); }
	inline int32_t get_mMaxInstances_9() const { return ___mMaxInstances_9; }
	inline int32_t* get_address_of_mMaxInstances_9() { return &___mMaxInstances_9; }
	inline void set_mMaxInstances_9(int32_t value)
	{
		___mMaxInstances_9 = value;
	}

	inline static int32_t get_offset_of_mWordPrefabCreationMode_10() { return static_cast<int32_t>(offsetof(WordManagerImpl_t1706254019, ___mWordPrefabCreationMode_10)); }
	inline int32_t get_mWordPrefabCreationMode_10() const { return ___mWordPrefabCreationMode_10; }
	inline int32_t* get_address_of_mWordPrefabCreationMode_10() { return &___mWordPrefabCreationMode_10; }
	inline void set_mWordPrefabCreationMode_10(int32_t value)
	{
		___mWordPrefabCreationMode_10 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_11() { return static_cast<int32_t>(offsetof(WordManagerImpl_t1706254019, ___mVuforiaBehaviour_11)); }
	inline VuforiaARController_t1876945237 * get_mVuforiaBehaviour_11() const { return ___mVuforiaBehaviour_11; }
	inline VuforiaARController_t1876945237 ** get_address_of_mVuforiaBehaviour_11() { return &___mVuforiaBehaviour_11; }
	inline void set_mVuforiaBehaviour_11(VuforiaARController_t1876945237 * value)
	{
		___mVuforiaBehaviour_11 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDMANAGERIMPL_T1706254019_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef WEBCAMIMPL_T124212097_H
#define WEBCAMIMPL_T124212097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamImpl
struct  WebCamImpl_t124212097  : public RuntimeObject
{
public:
	// UnityEngine.Camera[] Vuforia.WebCamImpl::mARCameras
	CameraU5BU5D_t1709987734* ___mARCameras_0;
	// System.Int32[] Vuforia.WebCamImpl::mOriginalCameraCullMask
	Int32U5BU5D_t385246372* ___mOriginalCameraCullMask_1;
	// Vuforia.WebCamTexAdaptor Vuforia.WebCamImpl::mWebCamTexture
	WebCamTexAdaptor_t3430449046 * ___mWebCamTexture_2;
	// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::mVideoModeData
	VideoModeData_t2066817255  ___mVideoModeData_3;
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCamImpl::mVideoTextureInfo
	VideoTextureInfo_t1805965052  ___mVideoTextureInfo_4;
	// Vuforia.TextureRenderer Vuforia.WebCamImpl::mTextureRenderer
	TextureRenderer_t3278815845 * ___mTextureRenderer_5;
	// UnityEngine.Texture2D Vuforia.WebCamImpl::mBufferReadTexture
	Texture2D_t3840446185 * ___mBufferReadTexture_6;
	// UnityEngine.Rect Vuforia.WebCamImpl::mReadPixelsRect
	Rect_t2360479859  ___mReadPixelsRect_7;
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamImpl::mWebCamProfile
	ProfileData_t3519391925  ___mWebCamProfile_8;
	// System.Boolean Vuforia.WebCamImpl::mFlipHorizontally
	bool ___mFlipHorizontally_9;
	// System.Boolean Vuforia.WebCamImpl::mIsDirty
	bool ___mIsDirty_10;
	// System.Int32 Vuforia.WebCamImpl::mLastFrameIdx
	int32_t ___mLastFrameIdx_11;
	// System.Int32 Vuforia.WebCamImpl::mRenderTextureLayer
	int32_t ___mRenderTextureLayer_12;
	// System.Boolean Vuforia.WebCamImpl::mWebcamPlaying
	bool ___mWebcamPlaying_13;
	// System.Boolean Vuforia.WebCamImpl::<IsTextureSizeAvailable>k__BackingField
	bool ___U3CIsTextureSizeAvailableU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_mARCameras_0() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___mARCameras_0)); }
	inline CameraU5BU5D_t1709987734* get_mARCameras_0() const { return ___mARCameras_0; }
	inline CameraU5BU5D_t1709987734** get_address_of_mARCameras_0() { return &___mARCameras_0; }
	inline void set_mARCameras_0(CameraU5BU5D_t1709987734* value)
	{
		___mARCameras_0 = value;
		Il2CppCodeGenWriteBarrier((&___mARCameras_0), value);
	}

	inline static int32_t get_offset_of_mOriginalCameraCullMask_1() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___mOriginalCameraCullMask_1)); }
	inline Int32U5BU5D_t385246372* get_mOriginalCameraCullMask_1() const { return ___mOriginalCameraCullMask_1; }
	inline Int32U5BU5D_t385246372** get_address_of_mOriginalCameraCullMask_1() { return &___mOriginalCameraCullMask_1; }
	inline void set_mOriginalCameraCullMask_1(Int32U5BU5D_t385246372* value)
	{
		___mOriginalCameraCullMask_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOriginalCameraCullMask_1), value);
	}

	inline static int32_t get_offset_of_mWebCamTexture_2() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___mWebCamTexture_2)); }
	inline WebCamTexAdaptor_t3430449046 * get_mWebCamTexture_2() const { return ___mWebCamTexture_2; }
	inline WebCamTexAdaptor_t3430449046 ** get_address_of_mWebCamTexture_2() { return &___mWebCamTexture_2; }
	inline void set_mWebCamTexture_2(WebCamTexAdaptor_t3430449046 * value)
	{
		___mWebCamTexture_2 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamTexture_2), value);
	}

	inline static int32_t get_offset_of_mVideoModeData_3() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___mVideoModeData_3)); }
	inline VideoModeData_t2066817255  get_mVideoModeData_3() const { return ___mVideoModeData_3; }
	inline VideoModeData_t2066817255 * get_address_of_mVideoModeData_3() { return &___mVideoModeData_3; }
	inline void set_mVideoModeData_3(VideoModeData_t2066817255  value)
	{
		___mVideoModeData_3 = value;
	}

	inline static int32_t get_offset_of_mVideoTextureInfo_4() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___mVideoTextureInfo_4)); }
	inline VideoTextureInfo_t1805965052  get_mVideoTextureInfo_4() const { return ___mVideoTextureInfo_4; }
	inline VideoTextureInfo_t1805965052 * get_address_of_mVideoTextureInfo_4() { return &___mVideoTextureInfo_4; }
	inline void set_mVideoTextureInfo_4(VideoTextureInfo_t1805965052  value)
	{
		___mVideoTextureInfo_4 = value;
	}

	inline static int32_t get_offset_of_mTextureRenderer_5() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___mTextureRenderer_5)); }
	inline TextureRenderer_t3278815845 * get_mTextureRenderer_5() const { return ___mTextureRenderer_5; }
	inline TextureRenderer_t3278815845 ** get_address_of_mTextureRenderer_5() { return &___mTextureRenderer_5; }
	inline void set_mTextureRenderer_5(TextureRenderer_t3278815845 * value)
	{
		___mTextureRenderer_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTextureRenderer_5), value);
	}

	inline static int32_t get_offset_of_mBufferReadTexture_6() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___mBufferReadTexture_6)); }
	inline Texture2D_t3840446185 * get_mBufferReadTexture_6() const { return ___mBufferReadTexture_6; }
	inline Texture2D_t3840446185 ** get_address_of_mBufferReadTexture_6() { return &___mBufferReadTexture_6; }
	inline void set_mBufferReadTexture_6(Texture2D_t3840446185 * value)
	{
		___mBufferReadTexture_6 = value;
		Il2CppCodeGenWriteBarrier((&___mBufferReadTexture_6), value);
	}

	inline static int32_t get_offset_of_mReadPixelsRect_7() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___mReadPixelsRect_7)); }
	inline Rect_t2360479859  get_mReadPixelsRect_7() const { return ___mReadPixelsRect_7; }
	inline Rect_t2360479859 * get_address_of_mReadPixelsRect_7() { return &___mReadPixelsRect_7; }
	inline void set_mReadPixelsRect_7(Rect_t2360479859  value)
	{
		___mReadPixelsRect_7 = value;
	}

	inline static int32_t get_offset_of_mWebCamProfile_8() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___mWebCamProfile_8)); }
	inline ProfileData_t3519391925  get_mWebCamProfile_8() const { return ___mWebCamProfile_8; }
	inline ProfileData_t3519391925 * get_address_of_mWebCamProfile_8() { return &___mWebCamProfile_8; }
	inline void set_mWebCamProfile_8(ProfileData_t3519391925  value)
	{
		___mWebCamProfile_8 = value;
	}

	inline static int32_t get_offset_of_mFlipHorizontally_9() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___mFlipHorizontally_9)); }
	inline bool get_mFlipHorizontally_9() const { return ___mFlipHorizontally_9; }
	inline bool* get_address_of_mFlipHorizontally_9() { return &___mFlipHorizontally_9; }
	inline void set_mFlipHorizontally_9(bool value)
	{
		___mFlipHorizontally_9 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_10() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___mIsDirty_10)); }
	inline bool get_mIsDirty_10() const { return ___mIsDirty_10; }
	inline bool* get_address_of_mIsDirty_10() { return &___mIsDirty_10; }
	inline void set_mIsDirty_10(bool value)
	{
		___mIsDirty_10 = value;
	}

	inline static int32_t get_offset_of_mLastFrameIdx_11() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___mLastFrameIdx_11)); }
	inline int32_t get_mLastFrameIdx_11() const { return ___mLastFrameIdx_11; }
	inline int32_t* get_address_of_mLastFrameIdx_11() { return &___mLastFrameIdx_11; }
	inline void set_mLastFrameIdx_11(int32_t value)
	{
		___mLastFrameIdx_11 = value;
	}

	inline static int32_t get_offset_of_mRenderTextureLayer_12() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___mRenderTextureLayer_12)); }
	inline int32_t get_mRenderTextureLayer_12() const { return ___mRenderTextureLayer_12; }
	inline int32_t* get_address_of_mRenderTextureLayer_12() { return &___mRenderTextureLayer_12; }
	inline void set_mRenderTextureLayer_12(int32_t value)
	{
		___mRenderTextureLayer_12 = value;
	}

	inline static int32_t get_offset_of_mWebcamPlaying_13() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___mWebcamPlaying_13)); }
	inline bool get_mWebcamPlaying_13() const { return ___mWebcamPlaying_13; }
	inline bool* get_address_of_mWebcamPlaying_13() { return &___mWebcamPlaying_13; }
	inline void set_mWebcamPlaying_13(bool value)
	{
		___mWebcamPlaying_13 = value;
	}

	inline static int32_t get_offset_of_U3CIsTextureSizeAvailableU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WebCamImpl_t124212097, ___U3CIsTextureSizeAvailableU3Ek__BackingField_14)); }
	inline bool get_U3CIsTextureSizeAvailableU3Ek__BackingField_14() const { return ___U3CIsTextureSizeAvailableU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsTextureSizeAvailableU3Ek__BackingField_14() { return &___U3CIsTextureSizeAvailableU3Ek__BackingField_14; }
	inline void set_U3CIsTextureSizeAvailableU3Ek__BackingField_14(bool value)
	{
		___U3CIsTextureSizeAvailableU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMIMPL_T124212097_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ENUMERATOR_T2537713152_H
#define ENUMERATOR_T2537713152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct  Enumerator_t2537713152 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t3923002270  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t2537713152, ___host_enumerator_0)); }
	inline Enumerator_t3923002270  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t3923002270 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t3923002270  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2537713152_H
#ifndef WORDRESULTIMPL_T709252498_H
#define WORDRESULTIMPL_T709252498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordResultImpl
struct  WordResultImpl_t709252498  : public WordResult_t3640773802
{
public:
	// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::mObb
	OrientedBoundingBox_t2769728497  ___mObb_0;
	// UnityEngine.Vector3 Vuforia.WordResultImpl::mPosition
	Vector3_t3722313464  ___mPosition_1;
	// UnityEngine.Quaternion Vuforia.WordResultImpl::mOrientation
	Quaternion_t2301928331  ___mOrientation_2;
	// Vuforia.Word Vuforia.WordResultImpl::mWord
	RuntimeObject* ___mWord_3;
	// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::mStatus
	int32_t ___mStatus_4;

public:
	inline static int32_t get_offset_of_mObb_0() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mObb_0)); }
	inline OrientedBoundingBox_t2769728497  get_mObb_0() const { return ___mObb_0; }
	inline OrientedBoundingBox_t2769728497 * get_address_of_mObb_0() { return &___mObb_0; }
	inline void set_mObb_0(OrientedBoundingBox_t2769728497  value)
	{
		___mObb_0 = value;
	}

	inline static int32_t get_offset_of_mPosition_1() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mPosition_1)); }
	inline Vector3_t3722313464  get_mPosition_1() const { return ___mPosition_1; }
	inline Vector3_t3722313464 * get_address_of_mPosition_1() { return &___mPosition_1; }
	inline void set_mPosition_1(Vector3_t3722313464  value)
	{
		___mPosition_1 = value;
	}

	inline static int32_t get_offset_of_mOrientation_2() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mOrientation_2)); }
	inline Quaternion_t2301928331  get_mOrientation_2() const { return ___mOrientation_2; }
	inline Quaternion_t2301928331 * get_address_of_mOrientation_2() { return &___mOrientation_2; }
	inline void set_mOrientation_2(Quaternion_t2301928331  value)
	{
		___mOrientation_2 = value;
	}

	inline static int32_t get_offset_of_mWord_3() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mWord_3)); }
	inline RuntimeObject* get_mWord_3() const { return ___mWord_3; }
	inline RuntimeObject** get_address_of_mWord_3() { return &___mWord_3; }
	inline void set_mWord_3(RuntimeObject* value)
	{
		___mWord_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWord_3), value);
	}

	inline static int32_t get_offset_of_mStatus_4() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mStatus_4)); }
	inline int32_t get_mStatus_4() const { return ___mStatus_4; }
	inline int32_t* get_address_of_mStatus_4() { return &___mStatus_4; }
	inline void set_mStatus_4(int32_t value)
	{
		___mStatus_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDRESULTIMPL_T709252498_H
#ifndef ENUMERATOR_T2960105742_H
#define ENUMERATOR_T2960105742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.WordAbstractBehaviour>
struct  Enumerator_t2960105742 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t50427564  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t2960105742, ___host_enumerator_0)); }
	inline Enumerator_t50427564  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t50427564 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t50427564  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2960105742_H
#ifndef WORDRESULTDATA_T1835118957_H
#define WORDRESULTDATA_T1835118957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/WordResultData
#pragma pack(push, tp, 1)
struct  WordResultData_t1835118957 
{
public:
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.VuforiaManagerImpl/WordResultData::pose
	PoseData_t3114383412  ___pose_0;
	// System.Double Vuforia.VuforiaManagerImpl/WordResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/WordResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.VuforiaManagerImpl/WordResultData::id
	int32_t ___id_3;
	// Vuforia.VuforiaManagerImpl/Obb2D Vuforia.VuforiaManagerImpl/WordResultData::orientedBoundingBox
	Obb2D_t3709259836  ___orientedBoundingBox_4;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(WordResultData_t1835118957, ___pose_0)); }
	inline PoseData_t3114383412  get_pose_0() const { return ___pose_0; }
	inline PoseData_t3114383412 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t3114383412  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(WordResultData_t1835118957, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(WordResultData_t1835118957, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(WordResultData_t1835118957, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}

	inline static int32_t get_offset_of_orientedBoundingBox_4() { return static_cast<int32_t>(offsetof(WordResultData_t1835118957, ___orientedBoundingBox_4)); }
	inline Obb2D_t3709259836  get_orientedBoundingBox_4() const { return ___orientedBoundingBox_4; }
	inline Obb2D_t3709259836 * get_address_of_orientedBoundingBox_4() { return &___orientedBoundingBox_4; }
	inline void set_orientedBoundingBox_4(Obb2D_t3709259836  value)
	{
		___orientedBoundingBox_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDRESULTDATA_T1835118957_H
#ifndef IMAGEIMPL_T1502331638_H
#define IMAGEIMPL_T1502331638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageImpl
struct  ImageImpl_t1502331638  : public Image_t745056343
{
public:
	// System.Int32 Vuforia.ImageImpl::mWidth
	int32_t ___mWidth_0;
	// System.Int32 Vuforia.ImageImpl::mHeight
	int32_t ___mHeight_1;
	// System.Int32 Vuforia.ImageImpl::mStride
	int32_t ___mStride_2;
	// System.Int32 Vuforia.ImageImpl::mBufferWidth
	int32_t ___mBufferWidth_3;
	// System.Int32 Vuforia.ImageImpl::mBufferHeight
	int32_t ___mBufferHeight_4;
	// Vuforia.Image/PIXEL_FORMAT Vuforia.ImageImpl::mPixelFormat
	int32_t ___mPixelFormat_5;
	// System.Byte[] Vuforia.ImageImpl::mData
	ByteU5BU5D_t4116647657* ___mData_6;
	// System.IntPtr Vuforia.ImageImpl::mUnmanagedData
	intptr_t ___mUnmanagedData_7;
	// System.Boolean Vuforia.ImageImpl::mDataSet
	bool ___mDataSet_8;
	// UnityEngine.Color32[] Vuforia.ImageImpl::mPixel32
	Color32U5BU5D_t3850468773* ___mPixel32_9;

public:
	inline static int32_t get_offset_of_mWidth_0() { return static_cast<int32_t>(offsetof(ImageImpl_t1502331638, ___mWidth_0)); }
	inline int32_t get_mWidth_0() const { return ___mWidth_0; }
	inline int32_t* get_address_of_mWidth_0() { return &___mWidth_0; }
	inline void set_mWidth_0(int32_t value)
	{
		___mWidth_0 = value;
	}

	inline static int32_t get_offset_of_mHeight_1() { return static_cast<int32_t>(offsetof(ImageImpl_t1502331638, ___mHeight_1)); }
	inline int32_t get_mHeight_1() const { return ___mHeight_1; }
	inline int32_t* get_address_of_mHeight_1() { return &___mHeight_1; }
	inline void set_mHeight_1(int32_t value)
	{
		___mHeight_1 = value;
	}

	inline static int32_t get_offset_of_mStride_2() { return static_cast<int32_t>(offsetof(ImageImpl_t1502331638, ___mStride_2)); }
	inline int32_t get_mStride_2() const { return ___mStride_2; }
	inline int32_t* get_address_of_mStride_2() { return &___mStride_2; }
	inline void set_mStride_2(int32_t value)
	{
		___mStride_2 = value;
	}

	inline static int32_t get_offset_of_mBufferWidth_3() { return static_cast<int32_t>(offsetof(ImageImpl_t1502331638, ___mBufferWidth_3)); }
	inline int32_t get_mBufferWidth_3() const { return ___mBufferWidth_3; }
	inline int32_t* get_address_of_mBufferWidth_3() { return &___mBufferWidth_3; }
	inline void set_mBufferWidth_3(int32_t value)
	{
		___mBufferWidth_3 = value;
	}

	inline static int32_t get_offset_of_mBufferHeight_4() { return static_cast<int32_t>(offsetof(ImageImpl_t1502331638, ___mBufferHeight_4)); }
	inline int32_t get_mBufferHeight_4() const { return ___mBufferHeight_4; }
	inline int32_t* get_address_of_mBufferHeight_4() { return &___mBufferHeight_4; }
	inline void set_mBufferHeight_4(int32_t value)
	{
		___mBufferHeight_4 = value;
	}

	inline static int32_t get_offset_of_mPixelFormat_5() { return static_cast<int32_t>(offsetof(ImageImpl_t1502331638, ___mPixelFormat_5)); }
	inline int32_t get_mPixelFormat_5() const { return ___mPixelFormat_5; }
	inline int32_t* get_address_of_mPixelFormat_5() { return &___mPixelFormat_5; }
	inline void set_mPixelFormat_5(int32_t value)
	{
		___mPixelFormat_5 = value;
	}

	inline static int32_t get_offset_of_mData_6() { return static_cast<int32_t>(offsetof(ImageImpl_t1502331638, ___mData_6)); }
	inline ByteU5BU5D_t4116647657* get_mData_6() const { return ___mData_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_mData_6() { return &___mData_6; }
	inline void set_mData_6(ByteU5BU5D_t4116647657* value)
	{
		___mData_6 = value;
		Il2CppCodeGenWriteBarrier((&___mData_6), value);
	}

	inline static int32_t get_offset_of_mUnmanagedData_7() { return static_cast<int32_t>(offsetof(ImageImpl_t1502331638, ___mUnmanagedData_7)); }
	inline intptr_t get_mUnmanagedData_7() const { return ___mUnmanagedData_7; }
	inline intptr_t* get_address_of_mUnmanagedData_7() { return &___mUnmanagedData_7; }
	inline void set_mUnmanagedData_7(intptr_t value)
	{
		___mUnmanagedData_7 = value;
	}

	inline static int32_t get_offset_of_mDataSet_8() { return static_cast<int32_t>(offsetof(ImageImpl_t1502331638, ___mDataSet_8)); }
	inline bool get_mDataSet_8() const { return ___mDataSet_8; }
	inline bool* get_address_of_mDataSet_8() { return &___mDataSet_8; }
	inline void set_mDataSet_8(bool value)
	{
		___mDataSet_8 = value;
	}

	inline static int32_t get_offset_of_mPixel32_9() { return static_cast<int32_t>(offsetof(ImageImpl_t1502331638, ___mPixel32_9)); }
	inline Color32U5BU5D_t3850468773* get_mPixel32_9() const { return ___mPixel32_9; }
	inline Color32U5BU5D_t3850468773** get_address_of_mPixel32_9() { return &___mPixel32_9; }
	inline void set_mPixel32_9(Color32U5BU5D_t3850468773* value)
	{
		___mPixel32_9 = value;
		Il2CppCodeGenWriteBarrier((&___mPixel32_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEIMPL_T1502331638_H
#ifndef DATASETIMPL_T2094717509_H
#define DATASETIMPL_T2094717509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetImpl
struct  DataSetImpl_t2094717509  : public DataSet_t3286034874
{
public:
	// System.IntPtr Vuforia.DataSetImpl::mDataSetPtr
	intptr_t ___mDataSetPtr_0;
	// System.String Vuforia.DataSetImpl::mPath
	String_t* ___mPath_1;
	// Vuforia.VuforiaUnity/StorageType Vuforia.DataSetImpl::mStorageType
	int32_t ___mStorageType_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable> Vuforia.DataSetImpl::mTrackablesDict
	Dictionary_2_t1340713322 * ___mTrackablesDict_3;

public:
	inline static int32_t get_offset_of_mDataSetPtr_0() { return static_cast<int32_t>(offsetof(DataSetImpl_t2094717509, ___mDataSetPtr_0)); }
	inline intptr_t get_mDataSetPtr_0() const { return ___mDataSetPtr_0; }
	inline intptr_t* get_address_of_mDataSetPtr_0() { return &___mDataSetPtr_0; }
	inline void set_mDataSetPtr_0(intptr_t value)
	{
		___mDataSetPtr_0 = value;
	}

	inline static int32_t get_offset_of_mPath_1() { return static_cast<int32_t>(offsetof(DataSetImpl_t2094717509, ___mPath_1)); }
	inline String_t* get_mPath_1() const { return ___mPath_1; }
	inline String_t** get_address_of_mPath_1() { return &___mPath_1; }
	inline void set_mPath_1(String_t* value)
	{
		___mPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___mPath_1), value);
	}

	inline static int32_t get_offset_of_mStorageType_2() { return static_cast<int32_t>(offsetof(DataSetImpl_t2094717509, ___mStorageType_2)); }
	inline int32_t get_mStorageType_2() const { return ___mStorageType_2; }
	inline int32_t* get_address_of_mStorageType_2() { return &___mStorageType_2; }
	inline void set_mStorageType_2(int32_t value)
	{
		___mStorageType_2 = value;
	}

	inline static int32_t get_offset_of_mTrackablesDict_3() { return static_cast<int32_t>(offsetof(DataSetImpl_t2094717509, ___mTrackablesDict_3)); }
	inline Dictionary_2_t1340713322 * get_mTrackablesDict_3() const { return ___mTrackablesDict_3; }
	inline Dictionary_2_t1340713322 ** get_address_of_mTrackablesDict_3() { return &___mTrackablesDict_3; }
	inline void set_mTrackablesDict_3(Dictionary_2_t1340713322 * value)
	{
		___mTrackablesDict_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackablesDict_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETIMPL_T2094717509_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
#ifndef WEBCAMTEXTURE_T1514609158_H
#define WEBCAMTEXTURE_T1514609158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamTexture
struct  WebCamTexture_t1514609158  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMTEXTURE_T1514609158_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef VUFORIAABSTRACTCONFIGURATION_T2684447159_H
#define VUFORIAABSTRACTCONFIGURATION_T2684447159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractConfiguration
struct  VuforiaAbstractConfiguration_t2684447159  : public ScriptableObject_t2528358522
{
public:
	// Vuforia.VuforiaAbstractConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaAbstractConfiguration::vuforia
	GenericVuforiaConfiguration_t1909783692 * ___vuforia_4;
	// Vuforia.VuforiaAbstractConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaAbstractConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t2828783036 * ___digitalEyewear_5;
	// Vuforia.VuforiaAbstractConfiguration/DatabaseLoadConfiguration Vuforia.VuforiaAbstractConfiguration::databaseLoad
	DatabaseLoadConfiguration_t3815674388 * ___databaseLoad_6;
	// Vuforia.VuforiaAbstractConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaAbstractConfiguration::videoBackground
	VideoBackgroundConfiguration_t1174662728 * ___videoBackground_7;
	// Vuforia.VuforiaAbstractConfiguration/SmartTerrainTrackerConfiguration Vuforia.VuforiaAbstractConfiguration::smartTerrainTracker
	SmartTerrainTrackerConfiguration_t3112457179 * ___smartTerrainTracker_8;
	// Vuforia.VuforiaAbstractConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaAbstractConfiguration::deviceTracker
	DeviceTrackerConfiguration_t1841344395 * ___deviceTracker_9;
	// Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration Vuforia.VuforiaAbstractConfiguration::webcam
	WebCamConfiguration_t802847339 * ___webcam_10;

public:
	inline static int32_t get_offset_of_vuforia_4() { return static_cast<int32_t>(offsetof(VuforiaAbstractConfiguration_t2684447159, ___vuforia_4)); }
	inline GenericVuforiaConfiguration_t1909783692 * get_vuforia_4() const { return ___vuforia_4; }
	inline GenericVuforiaConfiguration_t1909783692 ** get_address_of_vuforia_4() { return &___vuforia_4; }
	inline void set_vuforia_4(GenericVuforiaConfiguration_t1909783692 * value)
	{
		___vuforia_4 = value;
		Il2CppCodeGenWriteBarrier((&___vuforia_4), value);
	}

	inline static int32_t get_offset_of_digitalEyewear_5() { return static_cast<int32_t>(offsetof(VuforiaAbstractConfiguration_t2684447159, ___digitalEyewear_5)); }
	inline DigitalEyewearConfiguration_t2828783036 * get_digitalEyewear_5() const { return ___digitalEyewear_5; }
	inline DigitalEyewearConfiguration_t2828783036 ** get_address_of_digitalEyewear_5() { return &___digitalEyewear_5; }
	inline void set_digitalEyewear_5(DigitalEyewearConfiguration_t2828783036 * value)
	{
		___digitalEyewear_5 = value;
		Il2CppCodeGenWriteBarrier((&___digitalEyewear_5), value);
	}

	inline static int32_t get_offset_of_databaseLoad_6() { return static_cast<int32_t>(offsetof(VuforiaAbstractConfiguration_t2684447159, ___databaseLoad_6)); }
	inline DatabaseLoadConfiguration_t3815674388 * get_databaseLoad_6() const { return ___databaseLoad_6; }
	inline DatabaseLoadConfiguration_t3815674388 ** get_address_of_databaseLoad_6() { return &___databaseLoad_6; }
	inline void set_databaseLoad_6(DatabaseLoadConfiguration_t3815674388 * value)
	{
		___databaseLoad_6 = value;
		Il2CppCodeGenWriteBarrier((&___databaseLoad_6), value);
	}

	inline static int32_t get_offset_of_videoBackground_7() { return static_cast<int32_t>(offsetof(VuforiaAbstractConfiguration_t2684447159, ___videoBackground_7)); }
	inline VideoBackgroundConfiguration_t1174662728 * get_videoBackground_7() const { return ___videoBackground_7; }
	inline VideoBackgroundConfiguration_t1174662728 ** get_address_of_videoBackground_7() { return &___videoBackground_7; }
	inline void set_videoBackground_7(VideoBackgroundConfiguration_t1174662728 * value)
	{
		___videoBackground_7 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackground_7), value);
	}

	inline static int32_t get_offset_of_smartTerrainTracker_8() { return static_cast<int32_t>(offsetof(VuforiaAbstractConfiguration_t2684447159, ___smartTerrainTracker_8)); }
	inline SmartTerrainTrackerConfiguration_t3112457179 * get_smartTerrainTracker_8() const { return ___smartTerrainTracker_8; }
	inline SmartTerrainTrackerConfiguration_t3112457179 ** get_address_of_smartTerrainTracker_8() { return &___smartTerrainTracker_8; }
	inline void set_smartTerrainTracker_8(SmartTerrainTrackerConfiguration_t3112457179 * value)
	{
		___smartTerrainTracker_8 = value;
		Il2CppCodeGenWriteBarrier((&___smartTerrainTracker_8), value);
	}

	inline static int32_t get_offset_of_deviceTracker_9() { return static_cast<int32_t>(offsetof(VuforiaAbstractConfiguration_t2684447159, ___deviceTracker_9)); }
	inline DeviceTrackerConfiguration_t1841344395 * get_deviceTracker_9() const { return ___deviceTracker_9; }
	inline DeviceTrackerConfiguration_t1841344395 ** get_address_of_deviceTracker_9() { return &___deviceTracker_9; }
	inline void set_deviceTracker_9(DeviceTrackerConfiguration_t1841344395 * value)
	{
		___deviceTracker_9 = value;
		Il2CppCodeGenWriteBarrier((&___deviceTracker_9), value);
	}

	inline static int32_t get_offset_of_webcam_10() { return static_cast<int32_t>(offsetof(VuforiaAbstractConfiguration_t2684447159, ___webcam_10)); }
	inline WebCamConfiguration_t802847339 * get_webcam_10() const { return ___webcam_10; }
	inline WebCamConfiguration_t802847339 ** get_address_of_webcam_10() { return &___webcam_10; }
	inline void set_webcam_10(WebCamConfiguration_t802847339 * value)
	{
		___webcam_10 = value;
		Il2CppCodeGenWriteBarrier((&___webcam_10), value);
	}
};

struct VuforiaAbstractConfiguration_t2684447159_StaticFields
{
public:
	// Vuforia.VuforiaAbstractConfiguration Vuforia.VuforiaAbstractConfiguration::mInstance
	VuforiaAbstractConfiguration_t2684447159 * ___mInstance_2;
	// System.Object Vuforia.VuforiaAbstractConfiguration::mPadlock
	RuntimeObject * ___mPadlock_3;

public:
	inline static int32_t get_offset_of_mInstance_2() { return static_cast<int32_t>(offsetof(VuforiaAbstractConfiguration_t2684447159_StaticFields, ___mInstance_2)); }
	inline VuforiaAbstractConfiguration_t2684447159 * get_mInstance_2() const { return ___mInstance_2; }
	inline VuforiaAbstractConfiguration_t2684447159 ** get_address_of_mInstance_2() { return &___mInstance_2; }
	inline void set_mInstance_2(VuforiaAbstractConfiguration_t2684447159 * value)
	{
		___mInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_2), value);
	}

	inline static int32_t get_offset_of_mPadlock_3() { return static_cast<int32_t>(offsetof(VuforiaAbstractConfiguration_t2684447159_StaticFields, ___mPadlock_3)); }
	inline RuntimeObject * get_mPadlock_3() const { return ___mPadlock_3; }
	inline RuntimeObject ** get_address_of_mPadlock_3() { return &___mPadlock_3; }
	inline void set_mPadlock_3(RuntimeObject * value)
	{
		___mPadlock_3 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAABSTRACTCONFIGURATION_T2684447159_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef WEBCAMPROFILE_T4166408645_H
#define WEBCAMPROFILE_T4166408645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile
struct  WebCamProfile_t4166408645  : public RuntimeObject
{
public:
	// Vuforia.WebCamProfile/ProfileCollection Vuforia.WebCamProfile::mProfileCollection
	ProfileCollection_t901995765  ___mProfileCollection_0;

public:
	inline static int32_t get_offset_of_mProfileCollection_0() { return static_cast<int32_t>(offsetof(WebCamProfile_t4166408645, ___mProfileCollection_0)); }
	inline ProfileCollection_t901995765  get_mProfileCollection_0() const { return ___mProfileCollection_0; }
	inline ProfileCollection_t901995765 * get_address_of_mProfileCollection_0() { return &___mProfileCollection_0; }
	inline void set_mProfileCollection_0(ProfileCollection_t901995765  value)
	{
		___mProfileCollection_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMPROFILE_T4166408645_H
#ifndef NULLWEBCAMTEXADAPTOR_T740403440_H
#define NULLWEBCAMTEXADAPTOR_T740403440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.NullWebCamTexAdaptor
struct  NullWebCamTexAdaptor_t740403440  : public WebCamTexAdaptor_t3430449046
{
public:
	// UnityEngine.Texture2D Vuforia.NullWebCamTexAdaptor::mTexture
	Texture2D_t3840446185 * ___mTexture_0;
	// System.Boolean Vuforia.NullWebCamTexAdaptor::mPseudoPlaying
	bool ___mPseudoPlaying_1;
	// System.Double Vuforia.NullWebCamTexAdaptor::mMsBetweenFrames
	double ___mMsBetweenFrames_2;
	// System.DateTime Vuforia.NullWebCamTexAdaptor::mLastFrame
	DateTime_t3738529785  ___mLastFrame_3;

public:
	inline static int32_t get_offset_of_mTexture_0() { return static_cast<int32_t>(offsetof(NullWebCamTexAdaptor_t740403440, ___mTexture_0)); }
	inline Texture2D_t3840446185 * get_mTexture_0() const { return ___mTexture_0; }
	inline Texture2D_t3840446185 ** get_address_of_mTexture_0() { return &___mTexture_0; }
	inline void set_mTexture_0(Texture2D_t3840446185 * value)
	{
		___mTexture_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTexture_0), value);
	}

	inline static int32_t get_offset_of_mPseudoPlaying_1() { return static_cast<int32_t>(offsetof(NullWebCamTexAdaptor_t740403440, ___mPseudoPlaying_1)); }
	inline bool get_mPseudoPlaying_1() const { return ___mPseudoPlaying_1; }
	inline bool* get_address_of_mPseudoPlaying_1() { return &___mPseudoPlaying_1; }
	inline void set_mPseudoPlaying_1(bool value)
	{
		___mPseudoPlaying_1 = value;
	}

	inline static int32_t get_offset_of_mMsBetweenFrames_2() { return static_cast<int32_t>(offsetof(NullWebCamTexAdaptor_t740403440, ___mMsBetweenFrames_2)); }
	inline double get_mMsBetweenFrames_2() const { return ___mMsBetweenFrames_2; }
	inline double* get_address_of_mMsBetweenFrames_2() { return &___mMsBetweenFrames_2; }
	inline void set_mMsBetweenFrames_2(double value)
	{
		___mMsBetweenFrames_2 = value;
	}

	inline static int32_t get_offset_of_mLastFrame_3() { return static_cast<int32_t>(offsetof(NullWebCamTexAdaptor_t740403440, ___mLastFrame_3)); }
	inline DateTime_t3738529785  get_mLastFrame_3() const { return ___mLastFrame_3; }
	inline DateTime_t3738529785 * get_address_of_mLastFrame_3() { return &___mLastFrame_3; }
	inline void set_mLastFrame_3(DateTime_t3738529785  value)
	{
		___mLastFrame_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLWEBCAMTEXADAPTOR_T740403440_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef TRACKABLEBEHAVIOUR_T1113559212_H
#define TRACKABLEBEHAVIOUR_T1113559212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t1113559212  : public MonoBehaviour_t3962482529
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_2;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_3;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_4;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_5;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t3722313464  ___mPreviousScale_6;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_7;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_8;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t2968050330 * ___mTrackableEventHandlers_9;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___U3CTimeStampU3Ek__BackingField_2)); }
	inline double get_U3CTimeStampU3Ek__BackingField_2() const { return ___U3CTimeStampU3Ek__BackingField_2; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_2() { return &___U3CTimeStampU3Ek__BackingField_2; }
	inline void set_U3CTimeStampU3Ek__BackingField_2(double value)
	{
		___U3CTimeStampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_3() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableName_3)); }
	inline String_t* get_mTrackableName_3() const { return ___mTrackableName_3; }
	inline String_t** get_address_of_mTrackableName_3() { return &___mTrackableName_3; }
	inline void set_mTrackableName_3(String_t* value)
	{
		___mTrackableName_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_3), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreserveChildSize_4)); }
	inline bool get_mPreserveChildSize_4() const { return ___mPreserveChildSize_4; }
	inline bool* get_address_of_mPreserveChildSize_4() { return &___mPreserveChildSize_4; }
	inline void set_mPreserveChildSize_4(bool value)
	{
		___mPreserveChildSize_4 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mInitializedInEditor_5)); }
	inline bool get_mInitializedInEditor_5() const { return ___mInitializedInEditor_5; }
	inline bool* get_address_of_mInitializedInEditor_5() { return &___mInitializedInEditor_5; }
	inline void set_mInitializedInEditor_5(bool value)
	{
		___mInitializedInEditor_5 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreviousScale_6)); }
	inline Vector3_t3722313464  get_mPreviousScale_6() const { return ___mPreviousScale_6; }
	inline Vector3_t3722313464 * get_address_of_mPreviousScale_6() { return &___mPreviousScale_6; }
	inline void set_mPreviousScale_6(Vector3_t3722313464  value)
	{
		___mPreviousScale_6 = value;
	}

	inline static int32_t get_offset_of_mStatus_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mStatus_7)); }
	inline int32_t get_mStatus_7() const { return ___mStatus_7; }
	inline int32_t* get_address_of_mStatus_7() { return &___mStatus_7; }
	inline void set_mStatus_7(int32_t value)
	{
		___mStatus_7 = value;
	}

	inline static int32_t get_offset_of_mTrackable_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackable_8)); }
	inline RuntimeObject* get_mTrackable_8() const { return ___mTrackable_8; }
	inline RuntimeObject** get_address_of_mTrackable_8() { return &___mTrackable_8; }
	inline void set_mTrackable_8(RuntimeObject* value)
	{
		___mTrackable_8 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_8), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableEventHandlers_9)); }
	inline List_1_t2968050330 * get_mTrackableEventHandlers_9() const { return ___mTrackableEventHandlers_9; }
	inline List_1_t2968050330 ** get_address_of_mTrackableEventHandlers_9() { return &___mTrackableEventHandlers_9; }
	inline void set_mTrackableEventHandlers_9(List_1_t2968050330 * value)
	{
		___mTrackableEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T1113559212_H
#ifndef VUFORIAABSTRACTBEHAVIOUR_T3510878193_H
#define VUFORIAABSTRACTBEHAVIOUR_T3510878193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractBehaviour
struct  VuforiaAbstractBehaviour_t3510878193  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_2;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::mWorldCenter
	TrackableBehaviour_t1113559212 * ___mWorldCenter_3;
	// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::mCentralAnchorPoint
	Transform_t3600365921 * ___mCentralAnchorPoint_4;
	// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::mParentAnchorPoint
	Transform_t3600365921 * ___mParentAnchorPoint_5;
	// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::mPrimaryCamera
	Camera_t4157153871 * ___mPrimaryCamera_6;
	// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::mSecondaryCamera
	Camera_t4157153871 * ___mSecondaryCamera_7;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mWereBindingFieldsExposed
	bool ___mWereBindingFieldsExposed_8;
	// System.Action Vuforia.VuforiaAbstractBehaviour::AwakeEvent
	Action_t1264377477 * ___AwakeEvent_11;
	// System.Action Vuforia.VuforiaAbstractBehaviour::OnEnableEvent
	Action_t1264377477 * ___OnEnableEvent_12;
	// System.Action Vuforia.VuforiaAbstractBehaviour::StartEvent
	Action_t1264377477 * ___StartEvent_13;
	// System.Action Vuforia.VuforiaAbstractBehaviour::UpdateEvent
	Action_t1264377477 * ___UpdateEvent_14;
	// System.Action Vuforia.VuforiaAbstractBehaviour::OnLevelWasLoadedEvent
	Action_t1264377477 * ___OnLevelWasLoadedEvent_15;
	// System.Action`1<System.Boolean> Vuforia.VuforiaAbstractBehaviour::OnApplicationPauseEvent
	Action_1_t269755560 * ___OnApplicationPauseEvent_16;
	// System.Action Vuforia.VuforiaAbstractBehaviour::OnDisableEvent
	Action_t1264377477 * ___OnDisableEvent_17;
	// System.Action Vuforia.VuforiaAbstractBehaviour::OnDestroyEvent
	Action_t1264377477 * ___OnDestroyEvent_18;

public:
	inline static int32_t get_offset_of_mWorldCenterMode_2() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___mWorldCenterMode_2)); }
	inline int32_t get_mWorldCenterMode_2() const { return ___mWorldCenterMode_2; }
	inline int32_t* get_address_of_mWorldCenterMode_2() { return &___mWorldCenterMode_2; }
	inline void set_mWorldCenterMode_2(int32_t value)
	{
		___mWorldCenterMode_2 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_3() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___mWorldCenter_3)); }
	inline TrackableBehaviour_t1113559212 * get_mWorldCenter_3() const { return ___mWorldCenter_3; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mWorldCenter_3() { return &___mWorldCenter_3; }
	inline void set_mWorldCenter_3(TrackableBehaviour_t1113559212 * value)
	{
		___mWorldCenter_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_3), value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_4() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___mCentralAnchorPoint_4)); }
	inline Transform_t3600365921 * get_mCentralAnchorPoint_4() const { return ___mCentralAnchorPoint_4; }
	inline Transform_t3600365921 ** get_address_of_mCentralAnchorPoint_4() { return &___mCentralAnchorPoint_4; }
	inline void set_mCentralAnchorPoint_4(Transform_t3600365921 * value)
	{
		___mCentralAnchorPoint_4 = value;
		Il2CppCodeGenWriteBarrier((&___mCentralAnchorPoint_4), value);
	}

	inline static int32_t get_offset_of_mParentAnchorPoint_5() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___mParentAnchorPoint_5)); }
	inline Transform_t3600365921 * get_mParentAnchorPoint_5() const { return ___mParentAnchorPoint_5; }
	inline Transform_t3600365921 ** get_address_of_mParentAnchorPoint_5() { return &___mParentAnchorPoint_5; }
	inline void set_mParentAnchorPoint_5(Transform_t3600365921 * value)
	{
		___mParentAnchorPoint_5 = value;
		Il2CppCodeGenWriteBarrier((&___mParentAnchorPoint_5), value);
	}

	inline static int32_t get_offset_of_mPrimaryCamera_6() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___mPrimaryCamera_6)); }
	inline Camera_t4157153871 * get_mPrimaryCamera_6() const { return ___mPrimaryCamera_6; }
	inline Camera_t4157153871 ** get_address_of_mPrimaryCamera_6() { return &___mPrimaryCamera_6; }
	inline void set_mPrimaryCamera_6(Camera_t4157153871 * value)
	{
		___mPrimaryCamera_6 = value;
		Il2CppCodeGenWriteBarrier((&___mPrimaryCamera_6), value);
	}

	inline static int32_t get_offset_of_mSecondaryCamera_7() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___mSecondaryCamera_7)); }
	inline Camera_t4157153871 * get_mSecondaryCamera_7() const { return ___mSecondaryCamera_7; }
	inline Camera_t4157153871 ** get_address_of_mSecondaryCamera_7() { return &___mSecondaryCamera_7; }
	inline void set_mSecondaryCamera_7(Camera_t4157153871 * value)
	{
		___mSecondaryCamera_7 = value;
		Il2CppCodeGenWriteBarrier((&___mSecondaryCamera_7), value);
	}

	inline static int32_t get_offset_of_mWereBindingFieldsExposed_8() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___mWereBindingFieldsExposed_8)); }
	inline bool get_mWereBindingFieldsExposed_8() const { return ___mWereBindingFieldsExposed_8; }
	inline bool* get_address_of_mWereBindingFieldsExposed_8() { return &___mWereBindingFieldsExposed_8; }
	inline void set_mWereBindingFieldsExposed_8(bool value)
	{
		___mWereBindingFieldsExposed_8 = value;
	}

	inline static int32_t get_offset_of_AwakeEvent_11() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___AwakeEvent_11)); }
	inline Action_t1264377477 * get_AwakeEvent_11() const { return ___AwakeEvent_11; }
	inline Action_t1264377477 ** get_address_of_AwakeEvent_11() { return &___AwakeEvent_11; }
	inline void set_AwakeEvent_11(Action_t1264377477 * value)
	{
		___AwakeEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___AwakeEvent_11), value);
	}

	inline static int32_t get_offset_of_OnEnableEvent_12() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___OnEnableEvent_12)); }
	inline Action_t1264377477 * get_OnEnableEvent_12() const { return ___OnEnableEvent_12; }
	inline Action_t1264377477 ** get_address_of_OnEnableEvent_12() { return &___OnEnableEvent_12; }
	inline void set_OnEnableEvent_12(Action_t1264377477 * value)
	{
		___OnEnableEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___OnEnableEvent_12), value);
	}

	inline static int32_t get_offset_of_StartEvent_13() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___StartEvent_13)); }
	inline Action_t1264377477 * get_StartEvent_13() const { return ___StartEvent_13; }
	inline Action_t1264377477 ** get_address_of_StartEvent_13() { return &___StartEvent_13; }
	inline void set_StartEvent_13(Action_t1264377477 * value)
	{
		___StartEvent_13 = value;
		Il2CppCodeGenWriteBarrier((&___StartEvent_13), value);
	}

	inline static int32_t get_offset_of_UpdateEvent_14() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___UpdateEvent_14)); }
	inline Action_t1264377477 * get_UpdateEvent_14() const { return ___UpdateEvent_14; }
	inline Action_t1264377477 ** get_address_of_UpdateEvent_14() { return &___UpdateEvent_14; }
	inline void set_UpdateEvent_14(Action_t1264377477 * value)
	{
		___UpdateEvent_14 = value;
		Il2CppCodeGenWriteBarrier((&___UpdateEvent_14), value);
	}

	inline static int32_t get_offset_of_OnLevelWasLoadedEvent_15() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___OnLevelWasLoadedEvent_15)); }
	inline Action_t1264377477 * get_OnLevelWasLoadedEvent_15() const { return ___OnLevelWasLoadedEvent_15; }
	inline Action_t1264377477 ** get_address_of_OnLevelWasLoadedEvent_15() { return &___OnLevelWasLoadedEvent_15; }
	inline void set_OnLevelWasLoadedEvent_15(Action_t1264377477 * value)
	{
		___OnLevelWasLoadedEvent_15 = value;
		Il2CppCodeGenWriteBarrier((&___OnLevelWasLoadedEvent_15), value);
	}

	inline static int32_t get_offset_of_OnApplicationPauseEvent_16() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___OnApplicationPauseEvent_16)); }
	inline Action_1_t269755560 * get_OnApplicationPauseEvent_16() const { return ___OnApplicationPauseEvent_16; }
	inline Action_1_t269755560 ** get_address_of_OnApplicationPauseEvent_16() { return &___OnApplicationPauseEvent_16; }
	inline void set_OnApplicationPauseEvent_16(Action_1_t269755560 * value)
	{
		___OnApplicationPauseEvent_16 = value;
		Il2CppCodeGenWriteBarrier((&___OnApplicationPauseEvent_16), value);
	}

	inline static int32_t get_offset_of_OnDisableEvent_17() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___OnDisableEvent_17)); }
	inline Action_t1264377477 * get_OnDisableEvent_17() const { return ___OnDisableEvent_17; }
	inline Action_t1264377477 ** get_address_of_OnDisableEvent_17() { return &___OnDisableEvent_17; }
	inline void set_OnDisableEvent_17(Action_t1264377477 * value)
	{
		___OnDisableEvent_17 = value;
		Il2CppCodeGenWriteBarrier((&___OnDisableEvent_17), value);
	}

	inline static int32_t get_offset_of_OnDestroyEvent_18() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193, ___OnDestroyEvent_18)); }
	inline Action_t1264377477 * get_OnDestroyEvent_18() const { return ___OnDestroyEvent_18; }
	inline Action_t1264377477 ** get_address_of_OnDestroyEvent_18() { return &___OnDestroyEvent_18; }
	inline void set_OnDestroyEvent_18(Action_t1264377477 * value)
	{
		___OnDestroyEvent_18 = value;
		Il2CppCodeGenWriteBarrier((&___OnDestroyEvent_18), value);
	}
};

struct VuforiaAbstractBehaviour_t3510878193_StaticFields
{
public:
	// System.Action`1<Vuforia.VuforiaAbstractBehaviour> Vuforia.VuforiaAbstractBehaviour::BehaviourCreated
	Action_1_t3683345788 * ___BehaviourCreated_9;
	// System.Action`1<Vuforia.VuforiaAbstractBehaviour> Vuforia.VuforiaAbstractBehaviour::BehaviourDestroyed
	Action_1_t3683345788 * ___BehaviourDestroyed_10;

public:
	inline static int32_t get_offset_of_BehaviourCreated_9() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193_StaticFields, ___BehaviourCreated_9)); }
	inline Action_1_t3683345788 * get_BehaviourCreated_9() const { return ___BehaviourCreated_9; }
	inline Action_1_t3683345788 ** get_address_of_BehaviourCreated_9() { return &___BehaviourCreated_9; }
	inline void set_BehaviourCreated_9(Action_1_t3683345788 * value)
	{
		___BehaviourCreated_9 = value;
		Il2CppCodeGenWriteBarrier((&___BehaviourCreated_9), value);
	}

	inline static int32_t get_offset_of_BehaviourDestroyed_10() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3510878193_StaticFields, ___BehaviourDestroyed_10)); }
	inline Action_1_t3683345788 * get_BehaviourDestroyed_10() const { return ___BehaviourDestroyed_10; }
	inline Action_1_t3683345788 ** get_address_of_BehaviourDestroyed_10() { return &___BehaviourDestroyed_10; }
	inline void set_BehaviourDestroyed_10(Action_1_t3683345788 * value)
	{
		___BehaviourDestroyed_10 = value;
		Il2CppCodeGenWriteBarrier((&___BehaviourDestroyed_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAABSTRACTBEHAVIOUR_T3510878193_H
#ifndef WORDABSTRACTBEHAVIOUR_T3502498754_H
#define WORDABSTRACTBEHAVIOUR_T3502498754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordAbstractBehaviour
struct  WordAbstractBehaviour_t3502498754  : public TrackableBehaviour_t1113559212
{
public:
	// Vuforia.WordTemplateMode Vuforia.WordAbstractBehaviour::mMode
	int32_t ___mMode_10;
	// System.String Vuforia.WordAbstractBehaviour::mSpecificWord
	String_t* ___mSpecificWord_11;
	// Vuforia.Word Vuforia.WordAbstractBehaviour::mWord
	RuntimeObject* ___mWord_12;

public:
	inline static int32_t get_offset_of_mMode_10() { return static_cast<int32_t>(offsetof(WordAbstractBehaviour_t3502498754, ___mMode_10)); }
	inline int32_t get_mMode_10() const { return ___mMode_10; }
	inline int32_t* get_address_of_mMode_10() { return &___mMode_10; }
	inline void set_mMode_10(int32_t value)
	{
		___mMode_10 = value;
	}

	inline static int32_t get_offset_of_mSpecificWord_11() { return static_cast<int32_t>(offsetof(WordAbstractBehaviour_t3502498754, ___mSpecificWord_11)); }
	inline String_t* get_mSpecificWord_11() const { return ___mSpecificWord_11; }
	inline String_t** get_address_of_mSpecificWord_11() { return &___mSpecificWord_11; }
	inline void set_mSpecificWord_11(String_t* value)
	{
		___mSpecificWord_11 = value;
		Il2CppCodeGenWriteBarrier((&___mSpecificWord_11), value);
	}

	inline static int32_t get_offset_of_mWord_12() { return static_cast<int32_t>(offsetof(WordAbstractBehaviour_t3502498754, ___mWord_12)); }
	inline RuntimeObject* get_mWord_12() const { return ___mWord_12; }
	inline RuntimeObject** get_address_of_mWord_12() { return &___mWord_12; }
	inline void set_mWord_12(RuntimeObject* value)
	{
		___mWord_12 = value;
		Il2CppCodeGenWriteBarrier((&___mWord_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDABSTRACTBEHAVIOUR_T3502498754_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_t4157153871 * m_Items[1];

public:
	inline Camera_t4157153871 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_t4157153871 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_t4157153871 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Camera_t4157153871 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_t4157153871 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_t4157153871 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t4294070825  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebCamDevice_t1322781432  m_Items[1];

public:
	inline WebCamDevice_t1322781432  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t1322781432 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t1322781432  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WebCamDevice_t1322781432  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t1322781432 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t1322781432  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t2600501292  m_Items[1];

public:
	inline Color32_t2600501292  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t2600501292  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		m_Items[index] = value;
	}
};
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t804827427  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RectangleData_t1039179782  m_Items[1];

public:
	inline RectangleData_t1039179782  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RectangleData_t1039179782 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RectangleData_t1039179782  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RectangleData_t1039179782  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RectangleData_t1039179782 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RectangleData_t1039179782  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.WordAbstractBehaviour[]
struct WordAbstractBehaviourU5BU5D_t824744695  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WordAbstractBehaviour_t3502498754 * m_Items[1];

public:
	inline WordAbstractBehaviour_t3502498754 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WordAbstractBehaviour_t3502498754 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WordAbstractBehaviour_t3502498754 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline WordAbstractBehaviour_t3502498754 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WordAbstractBehaviour_t3502498754 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WordAbstractBehaviour_t3502498754 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_t631007953 * m_Items[1];

public:
	inline Object_t631007953 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_t631007953 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_t631007953 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Object_t631007953 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_t631007953 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_t631007953 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t1962267332  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WordData_t2883825721  m_Items[1];

public:
	inline WordData_t2883825721  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WordData_t2883825721 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WordData_t2883825721  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WordData_t2883825721  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WordData_t2883825721 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WordData_t2883825721  value)
	{
		m_Items[index] = value;
	}
};
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t2504770112  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WordResultData_t1835118957  m_Items[1];

public:
	inline WordResultData_t1835118957  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WordResultData_t1835118957 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WordResultData_t1835118957  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WordResultData_t1835118957  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WordResultData_t1835118957 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WordResultData_t1835118957  value)
	{
		m_Items[index] = value;
	}
};


// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1664944732_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3004143623_gshared (Dictionary_2_t571830913 * __this, RuntimeObject * p0, ProfileData_t3519391925 * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m757242677_gshared (Dictionary_2_t571830913 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C"  ValueCollection_t3684863813 * Dictionary_2_get_Values_m683714624_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3411363121_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C"  ValueCollection_t1848589470 * Dictionary_2_get_Values_m2492087945_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t701438809  ValueCollection_GetEnumerator_m3808619909_gshared (ValueCollection_t1848589470 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m2014973879_gshared (Enumerator_t701438809 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m3709462088_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m181298207_gshared (Enumerator_t701438809 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m1051275336_gshared (Enumerator_t701438809 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C"  KeyCollection_t322220623 * Dictionary_2_get_Keys_m2217135091_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  ObjectU5BU5D_t2843939325* Enumerable_ToArray_TisRuntimeObject_m3447781822_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C"  bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m1551499789_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C"  void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C"  KeyCollection_t2158494966 * Dictionary_2_get_Keys_m1840317613_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  Int32U5BU5D_t385246372* Enumerable_ToArray_TisInt32_t2950945753_m2311522548_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m107019914_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m4193450060_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2537713152  ValueCollection_GetEnumerator_m616748621_gshared (ValueCollection_t3684863813 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m2250080680_gshared (Enumerator_t2537713152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2602845255_gshared (Enumerator_t2537713152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3503748991_gshared (Enumerator_t2537713152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m212974362_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m1938428402_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2382293057_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2059424751_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C"  void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C"  void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t128053199 * Enumerable_ToList_TisInt32_t2950945753_m1435865193_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C"  Enumerator_t2017297076  List_1_GetEnumerator_m731136149_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
extern "C"  int32_t Enumerator_get_Current_m4088456620_gshared (Enumerator_t2017297076 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
extern "C"  bool List_1_Contains_m2934014725_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2218650275_gshared (Enumerator_t2017297076 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
extern "C"  void Enumerator_Dispose_m222348240_gshared (Enumerator_t2017297076 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1__ctor_m1328752868_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C"  Enumerator_t3923002270  Dictionary_2_GetEnumerator_m1087370259_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C"  KeyValuePair_2_t71524366  Enumerator_get_Current_m3431285658_gshared (Enumerator_t3923002270 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1839753989_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3495598764_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3398155861_gshared (Enumerator_t3923002270 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m562365603_gshared (Enumerator_t3923002270 * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject * Enumerable_First_TisRuntimeObject_m3835263318_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3300912776_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m3168325340_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3241976841_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.InstanceIdImpl::.ctor(System.Byte[],System.UInt64,Vuforia.InstanceIdType,System.UInt32)
extern "C"  void InstanceIdImpl__ctor_m2187318971 (InstanceIdImpl_t2824054591 * __this, ByteU5BU5D_t4116647657* ___buffer0, uint64_t ___numericValue1, int32_t ___dataType2, uint32_t ___dataLength3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.VuMarkTargetImpl::GetSize()
extern "C"  Vector3_t3722313464  VuMarkTargetImpl_GetSize_m965808713 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableImpl::get_Name()
extern "C"  String_t* TrackableImpl_get_Name_m420167445 (TrackableImpl_t3595316917 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsVuforiaEnabled()
extern "C"  bool VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::CreateInstanceImage()
extern "C"  void VuMarkTargetImpl_CreateInstanceImage_m848615665 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
extern "C"  int32_t Marshal_SizeOf_m3069307747 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
extern "C"  intptr_t Marshal_AllocHGlobal_m491131085 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr(System.Object,System.IntPtr,System.Boolean)
extern "C"  void Marshal_StructureToPtr_m2294149499 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, intptr_t p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_Instance()
extern "C"  RuntimeObject* VuforiaWrapper_get_Instance_m2947582594 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuMarkTargetImpl::get_ID()
extern "C"  int32_t VuMarkTargetImpl_get_ID_m3552189221 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
extern "C"  RuntimeObject * Marshal_PtrToStructure_m771949023 (RuntimeObject * __this /* static, unused */, intptr_t p0, Type_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
extern "C"  void Marshal_FreeHGlobal_m1757369653 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuMarkTargetImpl::CallNativeGetInstanceImage()
extern "C"  int32_t VuMarkTargetImpl_CallNativeGetInstanceImage_m1381867968 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::.ctor()
extern "C"  void ImageImpl__ctor_m1791401789 (ImageImpl_t1502331638 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C"  void VuMarkTargetImpl_SetImageValues_m1831779290 (RuntimeObject * __this /* static, unused */, ImageHeaderData_t1300500262  ___imageHeader0, ImageImpl_t1502331638 * ___image1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::AllocateImage(Vuforia.ImageImpl)
extern "C"  void VuMarkTargetImpl_AllocateImage_m3271861916 (RuntimeObject * __this /* static, unused */, ImageImpl_t1502331638 * ___image0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ImageImpl::get_UnmanagedData()
extern "C"  intptr_t ImageImpl_get_UnmanagedData_m226027905 (ImageImpl_t1502331638 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::CopyPixelsFromUnmanagedBuffer()
extern "C"  void ImageImpl_CopyPixelsFromUnmanagedBuffer_m1420224496 (ImageImpl_t1502331638 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_UnmanagedData(System.IntPtr)
extern "C"  void ImageImpl_set_UnmanagedData_m3954115235 (ImageImpl_t1502331638 * __this, intptr_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C"  void ObjectTargetImpl__ctor_m4036201082 (ObjectTargetImpl_t3614635090 * __this, String_t* ___name0, int32_t ___id1, DataSet_t3286034874 * ___dataSet2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C"  void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.DataSetImpl::get_DataSetPtr()
extern "C"  intptr_t DataSetImpl_get_DataSetPtr_m1134603802 (DataSetImpl_t2094717509 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void ObjectTargetImpl_SetSize_m1919261806 (ObjectTargetImpl_t3614635090 * __this, Vector3_t3722313464  ___size0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTemplateImpl::UpdateOrigin()
extern "C"  void VuMarkTemplateImpl_UpdateOrigin_m517667178 (VuMarkTemplateImpl_t667343433 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ARController::.ctor()
extern "C"  void ARController__ctor_m2746373751 (ARController_t116632334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamARController::.ctor()
extern "C"  void WebCamARController__ctor_m751483383 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.WebCamARController Vuforia.WebCamARController::get_Instance()
extern "C"  WebCamARController_t3718642882 * WebCamARController_get_Instance_m1980552932 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ARController::Register(Vuforia.ARController)
extern "C"  void ARController_Register_m1901857971 (RuntimeObject * __this /* static, unused */, ARController_t116632334 * ___controller0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsPlaying()
extern "C"  bool WebCamImpl_get_IsPlaying_m3386441313 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
extern "C"  void Application_set_runInBackground_m2169704730 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractBehaviour Vuforia.ARController::get_VuforiaBehaviour()
extern "C"  VuforiaAbstractBehaviour_t3510878193 * ARController_get_VuforiaBehaviour_m2575156089 (ARController_t116632334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Camera>()
#define Component_GetComponentsInChildren_TisCamera_t4157153871_m1870358404(__this, method) ((  CameraU5BU5D_t1709987734* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1664944732_gshared)(__this, method)
// System.Void Vuforia.WebCamImpl::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean)
extern "C"  void WebCamImpl__ctor_m1598238101 (WebCamImpl_t124212097 * __this, CameraU5BU5D_t1709987734* ___arCameras0, int32_t ___renderTextureLayer1, String_t* ___webcamDeviceName2, bool ___flipHorizontally3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractConfiguration Vuforia.VuforiaAbstractConfiguration::get_Instance()
extern "C"  VuforiaAbstractConfiguration_t2684447159 * VuforiaAbstractConfiguration_get_Instance_m4134651635 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration Vuforia.VuforiaAbstractConfiguration::get_WebCam()
extern "C"  WebCamConfiguration_t802847339 * VuforiaAbstractConfiguration_get_WebCam_m788446001 (VuforiaAbstractConfiguration_t2684447159 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration::get_RenderTextureLayer()
extern "C"  int32_t WebCamConfiguration_get_RenderTextureLayer_m2663672847 (WebCamConfiguration_t802847339 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration::get_DeviceNameSetInEditor()
extern "C"  String_t* WebCamConfiguration_get_DeviceNameSetInEditor_m1098639520 (WebCamConfiguration_t802847339 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration::get_FlipHorizontally()
extern "C"  bool WebCamConfiguration_get_FlipHorizontally_m1332215451 (WebCamConfiguration_t802847339 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
extern "C"  bool VuforiaRuntimeUtilities_IsPlayMode_m4165764373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ResetPlaying()
extern "C"  void WebCamImpl_ResetPlaying_m2807831313 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::OnDestroy()
extern "C"  void WebCamImpl_OnDestroy_m861282575 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::Update()
extern "C"  void WebCamImpl_Update_m2054556650 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsTextureSizeAvailable()
extern "C"  bool WebCamImpl_get_IsTextureSizeAvailable_m1679939213 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Width()
extern "C"  int32_t TextureRenderer_get_Width_m3088621639 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Height()
extern "C"  int32_t TextureRenderer_get_Height_m721659918 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRenderer/Vec2I::.ctor(System.Int32,System.Int32)
extern "C"  void Vec2I__ctor_m1553072655 (Vec2I_t3527036565 * __this, int32_t ___v10, int32_t ___v21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C"  int32_t Camera_get_cullingMask_m679085748 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C"  void Camera_set_cullingMask_m1402455777 (Camera_t4157153871 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamProfile::.ctor()
extern "C"  void WebCamProfile__ctor_m820471938 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C"  WebCamDeviceU5BU5D_t4294070825* WebCamTexture_get_devices_m844246756 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WebCamDevice::get_name()
extern "C"  String_t* WebCamDevice_get_name_m3782173082 (WebCamDevice_t1322781432 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::GetProfile(System.String)
extern "C"  ProfileData_t3519391925  WebCamProfile_GetProfile_m3959388229 (WebCamProfile_t4166408645 * __this, String_t* ___webcamName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::.ctor(System.String,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void WebCamTexAdaptorImpl__ctor_m145373239 (WebCamTexAdaptorImpl_t4146576487 * __this, String_t* ___deviceName0, int32_t ___requestedFPS1, Vec2I_t3527036565  ___requestedTextureSize2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::get_Default()
extern "C"  ProfileData_t3519391925  WebCamProfile_get_Default_m3789142228 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullWebCamTexAdaptor::.ctor(System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void NullWebCamTexAdaptor__ctor_m395908601 (NullWebCamTexAdaptor_t740403440 * __this, int32_t ___requestedFPS0, Vec2I_t3527036565  ___requestedTextureSize1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StartCamera()
extern "C"  void WebCamImpl_StartCamera_m1317305482 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StopCamera()
extern "C"  void WebCamImpl_StopCamera_m2280021157 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Vuforia.TextureRenderer::Render()
extern "C"  RenderTexture_t2108887433 * TextureRenderer_Render_m2768706254 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_set_active_m1437732586 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C"  void Texture2D_ReadPixels_m1510783487 (Texture2D_t3840446185 * __this, Rect_t2360479859  p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
extern "C"  Color32U5BU5D_t3850468773* Texture2D_GetPixels32_m647746242 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_ReleaseTemporary_m2400081536 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer Vuforia.VuforiaRenderer::get_Instance()
extern "C"  VuforiaRenderer_t3433045970 * VuforiaRenderer_get_Instance_m1013623488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice Vuforia.CameraDevice::get_Instance()
extern "C"  CameraDevice_t960297568 * CameraDevice_get_Instance_m2002290155 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C"  int32_t Texture2D_get_format_m2371899271 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  bool Texture2D_Resize_m2702227255 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.ImageImpl::GetPixels32()
extern "C"  Color32U5BU5D_t3850468773* ImageImpl_GetPixels32_m1436666217 (ImageImpl_t1502331638 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
extern "C"  void Texture2D_SetPixels32_m1141065075 (Texture2D_t3840446185 * __this, Color32U5BU5D_t3850468773* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::set_IsTextureSizeAvailable(System.Boolean)
extern "C"  void WebCamImpl_set_IsTextureSizeAvailable_m3924562987 (WebCamImpl_t124212097 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::Destroy()
extern "C"  void TextureRenderer_Destroy_m719921383 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ComputeResampledTextureSize()
extern "C"  void WebCamImpl_ComputeResampledTextureSize_m2796311890 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::.ctor(UnityEngine.Texture,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void TextureRenderer__ctor_m495126481 (TextureRenderer_t3278815845 * __this, Texture_t3661962703 * ___textureToRender0, int32_t ___renderTextureLayer1, Vec2I_t3527036565  ___requestedTextureSize2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C"  void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.IPlayModeEditorUtility Vuforia.PlayModeEditorUtility::get_Instance()
extern "C"  RuntimeObject* PlayModeEditorUtility_get_Instance_m334266941 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_dataPath()
extern "C"  String_t* Application_get_dataPath_m4232621142 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C"  String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
extern "C"  String_t* String_ToLower_m2029374922 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1260807329(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t3304648224 *, String_t*, ProfileData_t3519391925 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m3004143623_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m4190276240(__this, p0, method) ((  bool (*) (Dictionary_2_t3304648224 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m757242677_gshared)(__this, p0, method)
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
extern "C"  void ProfileCollection__ctor_m3713293092 (ProfileCollection_t901995765 * __this, ProfileData_t3519391925  ___defaultProfile0, Dictionary_2_t3304648224 * ___profiles1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
extern "C"  bool WebCamTexture_get_didUpdateThisFrame_m567567483 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
extern "C"  bool WebCamTexture_get_isPlaying_m3525118025 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptor::.ctor()
extern "C"  void WebCamTexAdaptor__ctor_m1308786855 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::.ctor()
extern "C"  void WebCamTexture__ctor_m2601640589 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
extern "C"  void WebCamTexture_set_deviceName_m2479609938 (WebCamTexture_t1514609158 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedFPS(System.Single)
extern "C"  void WebCamTexture_set_requestedFPS_m1422816314 (WebCamTexture_t1514609158 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)
extern "C"  void WebCamTexture_set_requestedWidth_m1301971691 (WebCamTexture_t1514609158 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)
extern "C"  void WebCamTexture_set_requestedHeight_m3636279808 (WebCamTexture_t1514609158 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::HasUserAuthorization(UnityEngine.UserAuthorization)
extern "C"  bool Application_HasUserAuthorization_m3146187033 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::RequestUserAuthorization(UnityEngine.UserAuthorization)
extern "C"  AsyncOperation_t1445031843 * Application_RequestUserAuthorization_m1407144003 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Play()
extern "C"  void WebCamTexture_Play_m3866603461 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Stop()
extern "C"  void WebCamTexture_Stop_m3471034432 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C"  bool AsyncOperation_get_isDone_m412925263 (AsyncOperation_t1445031843 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
#define Component_GetComponent_TisMeshFilter_t3523625662_m569847836(__this, method) ((  MeshFilter_t3523625662 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
extern "C"  Mesh_t3648964284 * MeshFilter_get_sharedMesh_m1726897210 (MeshFilter_t3523625662 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
extern "C"  Bounds_t2266837910  Mesh_get_bounds_m2004960313 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C"  Vector3_t3722313464  Bounds_get_size_m1178783246 (Bounds_t2266837910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordAbstractBehaviour::get_IsSpecificWordMode()
extern "C"  bool WordAbstractBehaviour_get_IsSpecificWordMode_m448863399 (WordAbstractBehaviour_t3502498754 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::.ctor()
extern "C"  void TrackableBehaviour__ctor_m1563377757 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableImpl::.ctor(System.String,System.Int32)
extern "C"  void TrackableImpl__ctor_m3299709682 (TrackableImpl_t3595316917 * __this, String_t* ___name0, int32_t ___id1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::CreateLetterMask()
extern "C"  void WordImpl_CreateLetterMask_m224036644 (WordImpl_t2494369133 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TrackableImpl::get_ID()
extern "C"  int32_t TrackableImpl_get_ID_m2679724236 (TrackableImpl_t3595316917 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IntPtr::ToInt64()
extern "C"  int64_t IntPtr_ToInt64_m192765549 (intptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Int64)
extern "C"  void IntPtr__ctor_m987476171 (intptr_t* __this, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.WordImpl::get_Size()
extern "C"  Vector2_t2156229523  WordImpl_get_Size_m1421284971 (WordImpl_t2494369133 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::InitImageHeader()
extern "C"  void WordImpl_InitImageHeader_m3006118628 (WordImpl_t2494369133 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C"  void WordImpl_SetImageValues_m2457547036 (RuntimeObject * __this /* static, unused */, ImageHeaderData_t1300500262  ___imageHeader0, ImageImpl_t1502331638 * ___image1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::AllocateImage(Vuforia.ImageImpl)
extern "C"  void WordImpl_AllocateImage_m2647442905 (RuntimeObject * __this /* static, unused */, ImageImpl_t1502331638 * ___image0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaRuntimeUtilities::GetStoragePath(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  String_t* VuforiaRuntimeUtilities_GetStoragePath_m3854718746 (RuntimeObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::StringToHGlobalUni(System.String)
extern "C"  intptr_t Marshal_StringToHGlobalUni_m3584015089 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringUni(System.IntPtr)
extern "C"  String_t* Marshal_PtrToStringUni_m175561854 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordList::.ctor()
extern "C"  void WordList__ctor_m3277779240 (WordList_t3693642253 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::get_Values()
#define Dictionary_2_get_Values_m1988163935(__this, method) ((  ValueCollection_t4245531451 * (*) (Dictionary_2_t2529487133 *, const RuntimeMethod*))Dictionary_2_get_Values_m683714624_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m2473385441(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t2391212085 *, int32_t, WordAbstractBehaviour_t3502498754 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3411363121_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::.ctor()
#define List_1__ctor_m1340911630(__this, method) ((  void (*) (List_1_t679606200 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::get_Values()
#define Dictionary_2_get_Values_m3684722382(__this, method) ((  ValueCollection_t2180906817 * (*) (Dictionary_2_t464862499 *, const RuntimeMethod*))Dictionary_2_get_Values_m2492087945_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::GetEnumerator()
#define ValueCollection_GetEnumerator_m913759295(__this, method) ((  Enumerator_t1033756156  (*) (ValueCollection_t2180906817 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m3808619909_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::get_Current()
#define Enumerator_get_Current_m3610606923(__this, method) ((  List_1_t679606200 * (*) (Enumerator_t1033756156 *, const RuntimeMethod*))Enumerator_get_Current_m2014973879_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m3556339343(__this, p0, method) ((  void (*) (List_1_t679606200 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::MoveNext()
#define Enumerator_MoveNext_m3077790933(__this, method) ((  bool (*) (Enumerator_t1033756156 *, const RuntimeMethod*))Enumerator_MoveNext_m181298207_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::Dispose()
#define Enumerator_Dispose_m3245589270(__this, method) ((  void (*) (Enumerator_t1033756156 *, const RuntimeMethod*))Enumerator_Dispose_m1051275336_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::get_Keys()
#define Dictionary_2_get_Keys_m3813149867(__this, method) ((  KeyCollection_t654537970 * (*) (Dictionary_2_t464862499 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2217135091_gshared)(__this, method)
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisString_t_m1789351813(__this /* static, unused */, p0, method) ((  StringU5BU5D_t1281789340* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m3447781822_gshared)(__this /* static, unused */, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::get_Item(!0)
#define Dictionary_2_get_Item_m540946376(__this, p0, method) ((  List_1_t679606200 * (*) (Dictionary_2_t464862499 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Contains(!0)
#define List_1_Contains_m2349174643(__this, p0, method) ((  bool (*) (List_1_t679606200 *, WordAbstractBehaviour_t3502498754 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Remove(!0)
#define List_1_Remove_m2457619985(__this, p0, method) ((  bool (*) (List_1_t679606200 *, WordAbstractBehaviour_t3502498754 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::get_Count()
#define List_1_get_Count_m2304474076(__this, method) ((  int32_t (*) (List_1_t679606200 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::Remove(!0)
#define Dictionary_2_Remove_m718395589(__this, p0, method) ((  bool (*) (Dictionary_2_t464862499 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Add(!0)
#define List_1_Add_m1844274312(__this, p0, method) ((  void (*) (List_1_t679606200 *, WordAbstractBehaviour_t3502498754 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void Vuforia.TrackableBehaviour::UnregisterTrackable()
extern "C"  void TrackableBehaviour_UnregisterTrackable_m1272061837 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates()
extern "C"  void WordManagerImpl_InitializeWordBehaviourTemplates_m1076279545 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Vuforia.WordAbstractBehaviour>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisWordAbstractBehaviour_t3502498754_m872951409(__this /* static, unused */, p0, method) ((  List_1_t679606200 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m1551499789_gshared)(__this /* static, unused */, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m3484035274(__this, p0, method) ((  bool (*) (Dictionary_2_t464862499 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::GetEnumerator()
#define List_1_GetEnumerator_m1822998082(__this, method) ((  Enumerator_t2568850077  (*) (List_1_t679606200 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Vuforia.WordAbstractBehaviour>::get_Current()
#define Enumerator_get_Current_m1691037174(__this, method) ((  WordAbstractBehaviour_t3502498754 * (*) (Enumerator_t2568850077 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.WordAbstractBehaviour>::MoveNext()
#define Enumerator_MoveNext_m1247233199(__this, method) ((  bool (*) (Enumerator_t2568850077 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.WordAbstractBehaviour>::Dispose()
#define Enumerator_Dispose_m1718767763(__this, method) ((  void (*) (Enumerator_t2568850077 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C"  ObjectU5BU5D_t1417781964* Object_FindObjectsOfType_m2295101757 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordAbstractBehaviour::get_IsTemplateMode()
extern "C"  bool WordAbstractBehaviour_get_IsTemplateMode_m3316615685 (WordAbstractBehaviour_t3502498754 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordAbstractBehaviour::get_SpecificWord()
extern "C"  String_t* WordAbstractBehaviour_get_SpecificWord_m4130341814 (WordAbstractBehaviour_t3502498754 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLowerInvariant()
extern "C"  String_t* String_ToLowerInvariant_m110751226 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m2715483925(__this, p0, p1, method) ((  void (*) (Dictionary_2_t464862499 *, String_t*, List_1_t679606200 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::CreateWordBehaviour()
extern "C"  WordAbstractBehaviour_t3502498754 * WordManagerImpl_CreateWordBehaviour_m2184743325 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::Add(!0,!1)
#define Dictionary_2_Add_m2842338649(__this, p0, p1, method) ((  void (*) (Dictionary_2_t464862499 *, String_t*, List_1_t679606200 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Clear()
#define List_1_Clear_m2017220972(__this, method) ((  void (*) (List_1_t679606200 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::get_Item(System.Int32)
#define List_1_get_Item_m2000450760(__this, p0, method) ((  WordAbstractBehaviour_t3502498754 * (*) (List_1_t679606200 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m3027634645(__this, p0, method) ((  void (*) (List_1_t679606200 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::get_Keys()
#define Dictionary_2_get_Keys_m1582191240(__this, method) ((  KeyCollection_t2580887556 * (*) (Dictionary_2_t2391212085 *, const RuntimeMethod*))Dictionary_2_get_Keys_m1840317613_gshared)(__this, method)
// !!0[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisInt32_t2950945753_m2311522548(__this /* static, unused */, p0, method) ((  Int32U5BU5D_t385246372* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisInt32_t2950945753_m2311522548_gshared)(__this /* static, unused */, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::get_Item(!0)
#define Dictionary_2_get_Item_m1262508171(__this, p0, method) ((  WordAbstractBehaviour_t3502498754 * (*) (Dictionary_2_t2391212085 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m107019914_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::Remove(!0)
#define Dictionary_2_Remove_m374102063(__this, p0, method) ((  bool (*) (Dictionary_2_t2391212085 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m4193450060_gshared)(__this, p0, method)
// System.Void Vuforia.WordManagerImpl::UpdateWords(System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C"  void WordManagerImpl_UpdateWords_m45616103 (WordManagerImpl_t1706254019 * __this, RuntimeObject* ___newWordData0, RuntimeObject* ___wordResults1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordResultPoses(UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C"  void WordManagerImpl_UpdateWordResultPoses_m202733181 (WordManagerImpl_t1706254019 * __this, Transform_t3600365921 * ___arCameraTransform0, RuntimeObject* ___wordResults1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::get_Values()
#define Dictionary_2_get_Values_m2630701907(__this, method) ((  ValueCollection_t4107256403 * (*) (Dictionary_2_t2391212085 *, const RuntimeMethod*))Dictionary_2_get_Values_m683714624_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.WordAbstractBehaviour>::GetEnumerator()
#define ValueCollection_GetEnumerator_m3782761598(__this, method) ((  Enumerator_t2960105742  (*) (ValueCollection_t4107256403 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m616748621_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.WordAbstractBehaviour>::get_Current()
#define Enumerator_get_Current_m908514610(__this, method) ((  WordAbstractBehaviour_t3502498754 * (*) (Enumerator_t2960105742 *, const RuntimeMethod*))Enumerator_get_Current_m2250080680_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.WordAbstractBehaviour>::MoveNext()
#define Enumerator_MoveNext_m1499977780(__this, method) ((  bool (*) (Enumerator_t2960105742 *, const RuntimeMethod*))Enumerator_MoveNext_m2602845255_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.WordAbstractBehaviour>::Dispose()
#define Enumerator_Dispose_m34336611(__this, method) ((  void (*) (Enumerator_t2960105742 *, const RuntimeMethod*))Enumerator_Dispose_m3503748991_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::Clear()
#define List_1_Clear_m3053871591(__this, method) ((  void (*) (List_1_t817881248 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Word>::Clear()
#define List_1_Clear_m3489354309(__this, method) ((  void (*) (List_1_t2588113360 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Clear()
#define Dictionary_2_Clear_m3931322809(__this, method) ((  void (*) (Dictionary_2_t2529487133 *, const RuntimeMethod*))Dictionary_2_Clear_m212974362_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::Clear()
#define Dictionary_2_Clear_m311547095(__this, method) ((  void (*) (Dictionary_2_t2391212085 *, const RuntimeMethod*))Dictionary_2_Clear_m212974362_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::Clear()
#define Dictionary_2_Clear_m776003790(__this, method) ((  void (*) (Dictionary_2_t464862499 *, const RuntimeMethod*))Dictionary_2_Clear_m1938428402_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m452890411(__this, p0, method) ((  bool (*) (Dictionary_2_t2529487133 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m2382293057_gshared)(__this, p0, method)
// System.Void Vuforia.WordImpl::.ctor(System.Int32,System.String,UnityEngine.Vector2)
extern "C"  void WordImpl__ctor_m518897599 (WordImpl_t2494369133 * __this, int32_t ___id0, String_t* ___text1, Vector2_t2156229523  ___size2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::.ctor(Vuforia.Word)
extern "C"  void WordResultImpl__ctor_m3731373850 (WordResultImpl_t709252498 * __this, RuntimeObject* ___word0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Add(!0,!1)
#define Dictionary_2_Add_m417576055(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2529487133 *, int32_t, WordResult_t3640773802 *, const RuntimeMethod*))Dictionary_2_Add_m2059424751_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::Add(!0)
#define List_1_Add_m309338820(__this, p0, method) ((  void (*) (List_1_t817881248 *, WordResult_t3640773802 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
#define List_1__ctor_m1628857705(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
#define List_1_Add_m697420525(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::get_Keys()
#define Dictionary_2_get_Keys_m2166097550(__this, method) ((  KeyCollection_t2719162604 * (*) (Dictionary_2_t2529487133 *, const RuntimeMethod*))Dictionary_2_get_Keys_m1840317613_gshared)(__this, method)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisInt32_t2950945753_m1435865193(__this /* static, unused */, p0, method) ((  List_1_t128053199 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInt32_t2950945753_m1435865193_gshared)(__this /* static, unused */, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
#define List_1_GetEnumerator_m731136149(__this, method) ((  Enumerator_t2017297076  (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_GetEnumerator_m731136149_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
#define Enumerator_get_Current_m4088456620(__this, method) ((  int32_t (*) (Enumerator_t2017297076 *, const RuntimeMethod*))Enumerator_get_Current_m4088456620_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
#define List_1_Contains_m2934014725(__this, p0, method) ((  bool (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Contains_m2934014725_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::get_Item(!0)
#define Dictionary_2_get_Item_m2551113427(__this, p0, method) ((  WordResult_t3640773802 * (*) (Dictionary_2_t2529487133 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m107019914_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Word>::Add(!0)
#define List_1_Add_m3459031900(__this, p0, method) ((  void (*) (List_1_t2588113360 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Remove(!0)
#define Dictionary_2_Remove_m1088040339(__this, p0, method) ((  bool (*) (Dictionary_2_t2529487133 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m4193450060_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
#define Enumerator_MoveNext_m2218650275(__this, method) ((  bool (*) (Enumerator_t2017297076 *, const RuntimeMethod*))Enumerator_MoveNext_m2218650275_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
#define Enumerator_Dispose_m222348240(__this, method) ((  void (*) (Enumerator_t2017297076 *, const RuntimeMethod*))Enumerator_Dispose_m222348240_gshared)(__this, method)
// System.Void Vuforia.WordManagerImpl::UnregisterLostWords()
extern "C"  void WordManagerImpl_UnregisterLostWords_m1779929106 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::AssociateWordResultsWithBehaviours()
extern "C"  void WordManagerImpl_AssociateWordResultsWithBehaviours_m2814807548 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaARController Vuforia.VuforiaARController::get_Instance()
extern "C"  VuforiaARController_t1876945237 * VuforiaARController_get_Instance_m1100644214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaARController::GetVideoBackgroundRectInViewPort()
extern "C"  Rect_t2360479859  VuforiaARController_GetVideoBackgroundRectInViewPort_m1517317621 (VuforiaARController_t1876945237 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaARController::get_VideoBackGroundMirrored()
extern "C"  int32_t VuforiaARController_get_VideoBackGroundMirrored_m2793229335 (VuforiaARController_t1876945237 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Transform_TransformPoint_m226827784 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t2301928331  Quaternion_op_Multiply_m1294064023 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C"  Vector3_t3722313464  Vector3_get_left_m2428419009 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_AngleAxis_m1767165696 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetPose(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void WordResultImpl_SetPose_m1787749657 (WordResultImpl_t709252498 * __this, Vector3_t3722313464  ___position0, Quaternion_t2301928331  ___orientation1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour/Status Vuforia.VuforiaManagerImpl/WordResultData::get_status()
extern "C"  int32_t WordResultData_get_status_m1532178015 (WordResultData_t1835118957 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetStatus(Vuforia.TrackableBehaviour/Status)
extern "C"  void WordResultImpl_SetStatus_m1510737358 (WordResultImpl_t709252498 * __this, int32_t ___status0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.OrientedBoundingBox::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  void OrientedBoundingBox__ctor_m1736506094 (OrientedBoundingBox_t2769728497 * __this, Vector2_t2156229523  ___center0, Vector2_t2156229523  ___halfExtents1, float ___rotation2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(Vuforia.OrientedBoundingBox,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  OrientedBoundingBox_t2769728497  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m626826678 (RuntimeObject * __this /* static, unused */, OrientedBoundingBox_t2769728497  ___cameraFrameObb0, Rect_t2360479859  ___bgTextureViewPortRect1, bool ___isTextureMirrored2, VideoModeData_t2066817255  ___videoModeData3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetObb(Vuforia.OrientedBoundingBox)
extern "C"  void WordResultImpl_SetObb_m3870243631 (WordResultImpl_t709252498 * __this, OrientedBoundingBox_t2769728497  ___obb0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordBehaviourPoses()
extern "C"  void WordManagerImpl_UpdateWordBehaviourPoses_m1959006798 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Vuforia.Word>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m3158419898(__this, p0, method) ((  void (*) (List_1_t2588113360 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Vuforia.Word>::GetEnumerator()
#define List_1_GetEnumerator_m2302738403(__this, method) ((  Enumerator_t182389941  (*) (List_1_t2588113360 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Vuforia.Word>::get_Current()
#define Enumerator_get_Current_m2736178487(__this, method) ((  RuntimeObject* (*) (Enumerator_t182389941 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult)
extern "C"  WordAbstractBehaviour_t3502498754 * WordManagerImpl_AssociateWordBehaviour_m533403448 (WordManagerImpl_t1706254019 * __this, WordResult_t3640773802 * ___wordResult0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<Vuforia.Word>::Remove(!0)
#define List_1_Remove_m1056585745(__this, p0, method) ((  bool (*) (List_1_t2588113360 *, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.Word>::MoveNext()
#define Enumerator_MoveNext_m2288170636(__this, method) ((  bool (*) (Enumerator_t182389941 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.Word>::Dispose()
#define Enumerator_Dispose_m3471433355(__this, method) ((  void (*) (Enumerator_t182389941 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Vuforia.WordResult>::GetEnumerator()
#define List_1_GetEnumerator_m2482267928(__this, method) ((  Enumerator_t2707125125  (*) (List_1_t817881248 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Vuforia.WordResult>::get_Current()
#define Enumerator_get_Current_m4042749952(__this, method) ((  WordResult_t3640773802 * (*) (Enumerator_t2707125125 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.WordResult>::MoveNext()
#define Enumerator_MoveNext_m2572193847(__this, method) ((  bool (*) (Enumerator_t2707125125 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.WordResult>::Dispose()
#define Enumerator_Dispose_m1326660095(__this, method) ((  void (*) (Enumerator_t2707125125 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m2817422666(__this, p0, method) ((  bool (*) (Dictionary_2_t2391212085 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m2382293057_gshared)(__this, p0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3523622513(__this, method) ((  Enumerator_t50427564  (*) (Dictionary_2_t2391212085 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m1087370259_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.WordAbstractBehaviour>::get_Current()
#define Enumerator_get_Current_m2971210107(__this, method) ((  KeyValuePair_2_t493916956  (*) (Enumerator_t50427564 *, const RuntimeMethod*))Enumerator_get_Current_m3431285658_gshared)(__this, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordAbstractBehaviour>::get_Key()
#define KeyValuePair_2_get_Key_m2231391363(__this, method) ((  int32_t (*) (KeyValuePair_2_t493916956 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1839753989_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordAbstractBehaviour>::get_Value()
#define KeyValuePair_2_get_Value_m1287558029(__this, method) ((  WordAbstractBehaviour_t3502498754 * (*) (KeyValuePair_2_t493916956 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3495598764_gshared)(__this, method)
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.WordAbstractBehaviour>::MoveNext()
#define Enumerator_MoveNext_m2155600675(__this, method) ((  bool (*) (Enumerator_t50427564 *, const RuntimeMethod*))Enumerator_MoveNext_m3398155861_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.WordAbstractBehaviour>::Dispose()
#define Enumerator_Dispose_m2180775004(__this, method) ((  void (*) (Enumerator_t50427564 *, const RuntimeMethod*))Enumerator_Dispose_m562365603_gshared)(__this, method)
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult,Vuforia.WordAbstractBehaviour)
extern "C"  WordAbstractBehaviour_t3502498754 * WordManagerImpl_AssociateWordBehaviour_m1328890788 (WordManagerImpl_t1706254019 * __this, WordResult_t3640773802 * ___wordResult0, WordAbstractBehaviour_t3502498754 * ___wordBehaviourTemplate1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 System.Linq.Enumerable::First<Vuforia.WordAbstractBehaviour>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_First_TisWordAbstractBehaviour_t3502498754_m2180848752(__this /* static, unused */, p0, method) ((  WordAbstractBehaviour_t3502498754 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_m3835263318_gshared)(__this /* static, unused */, p0, method)
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::InstantiateWordBehaviour(Vuforia.WordAbstractBehaviour)
extern "C"  WordAbstractBehaviour_t3502498754 * WordManagerImpl_InstantiateWordBehaviour_m755952090 (RuntimeObject * __this /* static, unused */, WordAbstractBehaviour_t3502498754 * ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::get_Count()
#define Dictionary_2_get_Count_m931247448(__this, method) ((  int32_t (*) (Dictionary_2_t2391212085 *, const RuntimeMethod*))Dictionary_2_get_Count_m3300912776_gshared)(__this, method)
// System.Void Vuforia.WordAbstractBehaviour::InitializeWord(Vuforia.Word)
extern "C"  void WordAbstractBehaviour_InitializeWord_m3005938285 (WordAbstractBehaviour_t3502498754 * __this, RuntimeObject* ___word0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::Add(!0,!1)
#define Dictionary_2_Add_m2441072686(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2391212085 *, int32_t, WordAbstractBehaviour_t3502498754 *, const RuntimeMethod*))Dictionary_2_Add_m2059424751_gshared)(__this, p0, p1, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m3342487772(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m3168325340_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<Vuforia.WordAbstractBehaviour>()
#define GameObject_GetComponent_TisWordAbstractBehaviour_t3502498754_m3936702387(__this, method) ((  WordAbstractBehaviour_t3502498754 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3241976841_gshared)(__this, method)
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.IBehaviourComponentFactory Vuforia.BehaviourComponentFactory::get_Instance()
extern "C"  RuntimeObject* BehaviourComponentFactory_get_Instance_m2693467477 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::.ctor()
#define Dictionary_2__ctor_m2165170305(__this, method) ((  void (*) (Dictionary_2_t2529487133 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::.ctor()
#define List_1__ctor_m3369957770(__this, method) ((  void (*) (List_1_t817881248 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Word>::.ctor()
#define List_1__ctor_m3294312876(__this, method) ((  void (*) (List_1_t2588113360 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::.ctor()
#define Dictionary_2__ctor_m888218496(__this, method) ((  void (*) (Dictionary_2_t2391212085 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::.ctor()
#define Dictionary_2__ctor_m2015578239(__this, method) ((  void (*) (Dictionary_2_t464862499 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void Vuforia.WordManager::.ctor()
extern "C"  void WordManager__ctor_m3858017893 (WordManager_t3100853168 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResult::.ctor()
extern "C"  void WordResult__ctor_m1058569109 (WordResult_t3640773802 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.VuMarkTargetImpl::.ctor(System.Int32,System.Byte[],System.UInt64,Vuforia.InstanceIdType,System.UInt32,Vuforia.VuMarkTemplateImpl)
extern "C"  void VuMarkTargetImpl__ctor_m2963334285 (VuMarkTargetImpl_t1052843922 * __this, int32_t ___id0, ByteU5BU5D_t4116647657* ___buffer1, uint64_t ___numericValue2, int32_t ___dataType3, uint32_t ___dataLength4, VuMarkTemplateImpl_t667343433 * ___template5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTargetImpl__ctor_m2963334285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___id0;
		__this->set_mTargetId_2(L_0);
		VuMarkTemplateImpl_t667343433 * L_1 = ___template5;
		__this->set_mVuMarkTemplate_0(L_1);
		ByteU5BU5D_t4116647657* L_2 = ___buffer1;
		uint64_t L_3 = ___numericValue2;
		int32_t L_4 = ___dataType3;
		uint32_t L_5 = ___dataLength4;
		InstanceIdImpl_t2824054591 * L_6 = (InstanceIdImpl_t2824054591 *)il2cpp_codegen_object_new(InstanceIdImpl_t2824054591_il2cpp_TypeInfo_var);
		InstanceIdImpl__ctor_m2187318971(L_6, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		__this->set_mInstanceId_1(L_6);
		return;
	}
}
// UnityEngine.Vector3 Vuforia.VuMarkTargetImpl::GetSize()
extern "C"  Vector3_t3722313464  VuMarkTargetImpl_GetSize_m965808713 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	{
		VuMarkTemplateImpl_t667343433 * L_0 = __this->get_mVuMarkTemplate_0();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = VirtFuncInvoker0< Vector3_t3722313464  >::Invoke(11 /* UnityEngine.Vector3 Vuforia.ObjectTargetImpl::GetSize() */, L_0);
		return L_1;
	}
}
// System.Single Vuforia.VuMarkTargetImpl::GetLargestSizeComponent()
extern "C"  float VuMarkTargetImpl_GetLargestSizeComponent_m708787120 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTargetImpl_GetLargestSizeComponent_m708787120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = VuMarkTargetImpl_GetSize_m965808713(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Vector3_t3722313464  L_1 = V_0;
		float L_2 = L_1.get_x_1();
		Vector3_t3722313464  L_3 = V_0;
		float L_4 = L_3.get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_5 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = V_0;
		float L_7 = L_6.get_z_3();
		float L_8 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void Vuforia.VuMarkTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void VuMarkTargetImpl_SetSize_m1238191257 (VuMarkTargetImpl_t1052843922 * __this, Vector3_t3722313464  ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTargetImpl_SetSize_m1238191257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2300734387, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.VuMarkTargetImpl::StartExtendedTracking()
extern "C"  bool VuMarkTargetImpl_StartExtendedTracking_m2338469977 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Vuforia.VuMarkTargetImpl::StopExtendedTracking()
extern "C"  bool VuMarkTargetImpl_StopExtendedTracking_m737032164 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Vuforia.VuMarkTargetImpl::ExtendedTrackingEnabled()
extern "C"  bool VuMarkTargetImpl_ExtendedTrackingEnabled_m1166203112 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String Vuforia.VuMarkTargetImpl::get_Name()
extern "C"  String_t* VuMarkTargetImpl_get_Name_m3922080483 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	{
		VuMarkTemplateImpl_t667343433 * L_0 = __this->get_mVuMarkTemplate_0();
		NullCheck(L_0);
		String_t* L_1 = TrackableImpl_get_Name_m420167445(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuMarkTargetImpl::get_ID()
extern "C"  int32_t VuMarkTargetImpl_get_ID_m3552189221 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mTargetId_2();
		return L_0;
	}
}
// Vuforia.InstanceId Vuforia.VuMarkTargetImpl::get_InstanceId()
extern "C"  RuntimeObject* VuMarkTargetImpl_get_InstanceId_m3227271934 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	{
		InstanceIdImpl_t2824054591 * L_0 = __this->get_mInstanceId_1();
		return L_0;
	}
}
// Vuforia.VuMarkTemplate Vuforia.VuMarkTargetImpl::get_Template()
extern "C"  RuntimeObject* VuMarkTargetImpl_get_Template_m1728243798 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	{
		VuMarkTemplateImpl_t667343433 * L_0 = __this->get_mVuMarkTemplate_0();
		return L_0;
	}
}
// Vuforia.Image Vuforia.VuMarkTargetImpl::get_InstanceImage()
extern "C"  Image_t745056343 * VuMarkTargetImpl_get_InstanceImage_m2552028378 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTargetImpl_get_InstanceImage_m2552028378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (Image_t745056343 *)NULL;
	}

IL_0009:
	{
		Image_t745056343 * L_1 = __this->get_mInstanceImage_3();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		VuMarkTargetImpl_CreateInstanceImage_m848615665(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		Image_t745056343 * L_2 = __this->get_mInstanceImage_3();
		return L_2;
	}
}
// System.Int32 Vuforia.VuMarkTargetImpl::CallNativeGetInstanceImage()
extern "C"  int32_t VuMarkTargetImpl_CallNativeGetInstanceImage_m1381867968 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTargetImpl_CallNativeGetInstanceImage_m1381867968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (ImageHeaderData_t1300500262_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		intptr_t L_3 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		ImageHeaderData_t1300500262  L_4 = __this->get_mInstanceImageHeader_4();
		ImageHeaderData_t1300500262  L_5 = L_4;
		RuntimeObject * L_6 = Box(ImageHeaderData_t1300500262_il2cpp_TypeInfo_var, &L_5);
		intptr_t L_7 = V_0;
		Marshal_StructureToPtr_m2294149499(NULL /*static, unused*/, L_6, L_7, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_9 = VuMarkTargetImpl_get_ID_m3552189221(__this, /*hidden argument*/NULL);
		intptr_t L_10 = V_0;
		NullCheck(L_8);
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, int32_t, intptr_t >::Invoke(209 /* System.Int32 Vuforia.IVuforiaWrapper::VuMarkTargetGetInstanceImage(System.Int32,System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		intptr_t L_12 = V_0;
		RuntimeTypeHandle_t3027515415  L_13 = { reinterpret_cast<intptr_t> (ImageHeaderData_t1300500262_0_0_0_var) };
		Type_t * L_14 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		RuntimeObject * L_15 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		__this->set_mInstanceImageHeader_4(((*(ImageHeaderData_t1300500262 *)((ImageHeaderData_t1300500262 *)UnBox(L_15, ImageHeaderData_t1300500262_il2cpp_TypeInfo_var)))));
		intptr_t L_16 = V_0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void Vuforia.VuMarkTargetImpl::CreateInstanceImage()
extern "C"  void VuMarkTargetImpl_CreateInstanceImage_m848615665 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTargetImpl_CreateInstanceImage_m848615665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ImageImpl_t1502331638 * V_0 = NULL;
	{
		ImageHeaderData_t1300500262 * L_0 = __this->get_address_of_mInstanceImageHeader_4();
		il2cpp_codegen_initobj(L_0, sizeof(ImageHeaderData_t1300500262 ));
		ImageHeaderData_t1300500262 * L_1 = __this->get_address_of_mInstanceImageHeader_4();
		L_1->set_width_1(0);
		ImageHeaderData_t1300500262 * L_2 = __this->get_address_of_mInstanceImageHeader_4();
		L_2->set_height_2(0);
		ImageHeaderData_t1300500262 * L_3 = __this->get_address_of_mInstanceImageHeader_4();
		L_3->set_format_6(((int32_t)16));
		int32_t L_4 = VuMarkTargetImpl_CallNativeGetInstanceImage_m1381867968(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1256203510, /*hidden argument*/NULL);
		return;
	}

IL_0044:
	{
		ImageImpl_t1502331638 * L_5 = (ImageImpl_t1502331638 *)il2cpp_codegen_object_new(ImageImpl_t1502331638_il2cpp_TypeInfo_var);
		ImageImpl__ctor_m1791401789(L_5, /*hidden argument*/NULL);
		__this->set_mInstanceImage_3(L_5);
		Image_t745056343 * L_6 = __this->get_mInstanceImage_3();
		V_0 = ((ImageImpl_t1502331638 *)CastclassClass((RuntimeObject*)L_6, ImageImpl_t1502331638_il2cpp_TypeInfo_var));
		ImageHeaderData_t1300500262  L_7 = __this->get_mInstanceImageHeader_4();
		ImageImpl_t1502331638 * L_8 = V_0;
		VuMarkTargetImpl_SetImageValues_m1831779290(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		ImageImpl_t1502331638 * L_9 = V_0;
		VuMarkTargetImpl_AllocateImage_m3271861916(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		ImageHeaderData_t1300500262 * L_10 = __this->get_address_of_mInstanceImageHeader_4();
		ImageImpl_t1502331638 * L_11 = V_0;
		NullCheck(L_11);
		intptr_t L_12 = ImageImpl_get_UnmanagedData_m226027905(L_11, /*hidden argument*/NULL);
		L_10->set_data_0(L_12);
		int32_t L_13 = VuMarkTargetImpl_CallNativeGetInstanceImage_m1381867968(__this, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1256203510, /*hidden argument*/NULL);
		return;
	}

IL_0091:
	{
		ImageImpl_t1502331638 * L_14 = V_0;
		NullCheck(L_14);
		ImageImpl_CopyPixelsFromUnmanagedBuffer_m1420224496(L_14, /*hidden argument*/NULL);
		ImageImpl_t1502331638 * L_15 = V_0;
		__this->set_mInstanceImage_3(L_15);
		return;
	}
}
// System.Void Vuforia.VuMarkTargetImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C"  void VuMarkTargetImpl_SetImageValues_m1831779290 (RuntimeObject * __this /* static, unused */, ImageHeaderData_t1300500262  ___imageHeader0, ImageImpl_t1502331638 * ___image1, const RuntimeMethod* method)
{
	{
		ImageImpl_t1502331638 * L_0 = ___image1;
		ImageHeaderData_t1300500262  L_1 = ___imageHeader0;
		int32_t L_2 = L_1.get_width_1();
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(5 /* System.Void Vuforia.Image::set_Width(System.Int32) */, L_0, L_2);
		ImageImpl_t1502331638 * L_3 = ___image1;
		ImageHeaderData_t1300500262  L_4 = ___imageHeader0;
		int32_t L_5 = L_4.get_height_2();
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(7 /* System.Void Vuforia.Image::set_Height(System.Int32) */, L_3, L_5);
		ImageImpl_t1502331638 * L_6 = ___image1;
		ImageHeaderData_t1300500262  L_7 = ___imageHeader0;
		int32_t L_8 = L_7.get_stride_3();
		NullCheck(L_6);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void Vuforia.Image::set_Stride(System.Int32) */, L_6, L_8);
		ImageImpl_t1502331638 * L_9 = ___image1;
		ImageHeaderData_t1300500262  L_10 = ___imageHeader0;
		int32_t L_11 = L_10.get_bufferWidth_4();
		NullCheck(L_9);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void Vuforia.Image::set_BufferWidth(System.Int32) */, L_9, L_11);
		ImageImpl_t1502331638 * L_12 = ___image1;
		ImageHeaderData_t1300500262  L_13 = ___imageHeader0;
		int32_t L_14 = L_13.get_bufferHeight_5();
		NullCheck(L_12);
		VirtActionInvoker1< int32_t >::Invoke(13 /* System.Void Vuforia.Image::set_BufferHeight(System.Int32) */, L_12, L_14);
		ImageImpl_t1502331638 * L_15 = ___image1;
		ImageHeaderData_t1300500262  L_16 = ___imageHeader0;
		int32_t L_17 = L_16.get_format_6();
		NullCheck(L_15);
		VirtActionInvoker1< int32_t >::Invoke(15 /* System.Void Vuforia.Image::set_PixelFormat(Vuforia.Image/PIXEL_FORMAT) */, L_15, L_17);
		return;
	}
}
// System.Void Vuforia.VuMarkTargetImpl::AllocateImage(Vuforia.ImageImpl)
extern "C"  void VuMarkTargetImpl_AllocateImage_m3271861916 (RuntimeObject * __this /* static, unused */, ImageImpl_t1502331638 * ___image0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTargetImpl_AllocateImage_m3271861916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		ImageImpl_t1502331638 * L_1 = ___image0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 Vuforia.Image::get_BufferWidth() */, L_1);
		ImageImpl_t1502331638 * L_3 = ___image0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Vuforia.Image::get_BufferHeight() */, L_3);
		ImageImpl_t1502331638 * L_5 = ___image0;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(14 /* Vuforia.Image/PIXEL_FORMAT Vuforia.Image::get_PixelFormat() */, L_5);
		NullCheck(L_0);
		int32_t L_7 = InterfaceFuncInvoker3< int32_t, int32_t, int32_t, int32_t >::Invoke(112 /* System.Int32 Vuforia.IVuforiaWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0, L_2, L_4, L_6);
		V_0 = L_7;
		ImageImpl_t1502331638 * L_8 = ___image0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(17 /* System.Void Vuforia.Image::set_Pixels(System.Byte[]) */, L_8, ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_9)));
		ImageImpl_t1502331638 * L_10 = ___image0;
		NullCheck(L_10);
		intptr_t L_11 = ImageImpl_get_UnmanagedData_m226027905(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		ImageImpl_t1502331638 * L_12 = ___image0;
		int32_t L_13 = V_0;
		intptr_t L_14 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ImageImpl_set_UnmanagedData_m3954115235(L_12, L_14, /*hidden argument*/NULL);
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
// System.Void Vuforia.VuMarkTemplateImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C"  void VuMarkTemplateImpl__ctor_m2434547980 (VuMarkTemplateImpl_t667343433 * __this, String_t* ___name0, int32_t ___id1, DataSet_t3286034874 * ___dataSet2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___id1;
		DataSet_t3286034874 * L_2 = ___dataSet2;
		ObjectTargetImpl__ctor_m4036201082(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String Vuforia.VuMarkTemplateImpl::get_VuMarkUserData()
extern "C"  String_t* VuMarkTemplateImpl_get_VuMarkUserData_m523386316 (VuMarkTemplateImpl_t667343433 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTemplateImpl_get_VuMarkUserData_m523386316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = __this->get_mUserData_4();
		if (L_0)
		{
			goto IL_006f;
		}
	}
	{
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_1, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		DataSetImpl_t2094717509 * L_3 = ((ObjectTargetImpl_t3614635090 *)__this)->get_mDataSet_3();
		NullCheck(L_3);
		intptr_t L_4 = DataSetImpl_get_DataSetPtr_m1134603802(L_3, /*hidden argument*/NULL);
		String_t* L_5 = TrackableImpl_get_Name_m420167445(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_6 = V_0;
		NullCheck(L_2);
		int32_t L_7 = InterfaceFuncInvoker4< int32_t, intptr_t, String_t*, StringBuilder_t *, uint32_t >::Invoke(211 /* System.Int32 Vuforia.IVuforiaWrapper::VuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.Text.StringBuilder,System.UInt32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_2, L_4, L_5, L_6, 0);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		__this->set_mUserData_4(_stringLiteral757602046);
		goto IL_006f;
	}

IL_003e:
	{
		int32_t L_9 = V_1;
		StringBuilder_t * L_10 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_10, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_11 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		DataSetImpl_t2094717509 * L_12 = ((ObjectTargetImpl_t3614635090 *)__this)->get_mDataSet_3();
		NullCheck(L_12);
		intptr_t L_13 = DataSetImpl_get_DataSetPtr_m1134603802(L_12, /*hidden argument*/NULL);
		String_t* L_14 = TrackableImpl_get_Name_m420167445(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_11);
		InterfaceFuncInvoker4< int32_t, intptr_t, String_t*, StringBuilder_t *, uint32_t >::Invoke(211 /* System.Int32 Vuforia.IVuforiaWrapper::VuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.Text.StringBuilder,System.UInt32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_11, L_13, L_14, L_15, L_16);
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		__this->set_mUserData_4(L_18);
	}

IL_006f:
	{
		String_t* L_19 = __this->get_mUserData_4();
		return L_19;
	}
}
// System.Boolean Vuforia.VuMarkTemplateImpl::get_TrackingFromRuntimeAppearance()
extern "C"  bool VuMarkTemplateImpl_get_TrackingFromRuntimeAppearance_m611236549 (VuMarkTemplateImpl_t667343433 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mTrackingFromRuntimeAppearance_6();
		return L_0;
	}
}
// System.Void Vuforia.VuMarkTemplateImpl::set_TrackingFromRuntimeAppearance(System.Boolean)
extern "C"  void VuMarkTemplateImpl_set_TrackingFromRuntimeAppearance_m1654671822 (VuMarkTemplateImpl_t667343433 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTemplateImpl_set_TrackingFromRuntimeAppearance_m1654671822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		DataSetImpl_t2094717509 * L_1 = ((ObjectTargetImpl_t3614635090 *)__this)->get_mDataSet_3();
		NullCheck(L_1);
		intptr_t L_2 = DataSetImpl_get_DataSetPtr_m1134603802(L_1, /*hidden argument*/NULL);
		String_t* L_3 = TrackableImpl_get_Name_m420167445(__this, /*hidden argument*/NULL);
		bool L_4 = ___value0;
		NullCheck(L_0);
		int32_t L_5 = InterfaceFuncInvoker3< int32_t, intptr_t, String_t*, bool >::Invoke(212 /* System.Int32 Vuforia.IVuforiaWrapper::VuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0, L_2, L_3, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		bool L_6 = ___value0;
		__this->set_mTrackingFromRuntimeAppearance_6(L_6);
	}

IL_0026:
	{
		return;
	}
}
// UnityEngine.Vector2 Vuforia.VuMarkTemplateImpl::get_Origin()
extern "C"  Vector2_t2156229523  VuMarkTemplateImpl_get_Origin_m995404167 (VuMarkTemplateImpl_t667343433 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = __this->get_mOrigin_5();
		return L_0;
	}
}
// System.Void Vuforia.VuMarkTemplateImpl::SetSize(UnityEngine.Vector3)
extern "C"  void VuMarkTemplateImpl_SetSize_m2589688950 (VuMarkTemplateImpl_t667343433 * __this, Vector3_t3722313464  ___size0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___size0;
		ObjectTargetImpl_SetSize_m1919261806(__this, L_0, /*hidden argument*/NULL);
		VuMarkTemplateImpl_UpdateOrigin_m517667178(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuMarkTemplateImpl::UpdateOrigin()
extern "C"  void VuMarkTemplateImpl_UpdateOrigin_m517667178 (VuMarkTemplateImpl_t667343433 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTemplateImpl_UpdateOrigin_m517667178_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (Vector2_t2156229523_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		intptr_t L_3 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		DataSetImpl_t2094717509 * L_5 = ((ObjectTargetImpl_t3614635090 *)__this)->get_mDataSet_3();
		NullCheck(L_5);
		intptr_t L_6 = DataSetImpl_get_DataSetPtr_m1134603802(L_5, /*hidden argument*/NULL);
		String_t* L_7 = TrackableImpl_get_Name_m420167445(__this, /*hidden argument*/NULL);
		intptr_t L_8 = V_0;
		NullCheck(L_4);
		int32_t L_9 = InterfaceFuncInvoker3< int32_t, intptr_t, String_t*, intptr_t >::Invoke(210 /* System.Int32 Vuforia.IVuforiaWrapper::VuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_4, L_6, L_7, L_8);
		if (L_9)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_10 = TrackableImpl_get_Name_m420167445(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral168135706, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return;
	}

IL_0049:
	{
		intptr_t L_12 = V_0;
		RuntimeTypeHandle_t3027515415  L_13 = { reinterpret_cast<intptr_t> (Vector2_t2156229523_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_15 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		__this->set_mOrigin_5(((*(Vector2_t2156229523 *)((Vector2_t2156229523 *)UnBox(L_15, Vector2_t2156229523_il2cpp_TypeInfo_var)))));
		intptr_t L_16 = V_0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
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
// System.Void Vuforia.WebCamARController::.ctor()
extern "C"  void WebCamARController__ctor_m751483383 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		ARController__ctor_m2746373751(__this, /*hidden argument*/NULL);
		return;
	}
}
// Vuforia.WebCamARController Vuforia.WebCamARController::get_Instance()
extern "C"  WebCamARController_t3718642882 * WebCamARController_get_Instance_m1980552932 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_get_Instance_m1980552932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		WebCamARController_t3718642882 * L_0 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mInstance_5();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mPadlock_6();
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
			WebCamARController_t3718642882 * L_3 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mInstance_5();
			if (L_3)
			{
				goto IL_0024;
			}
		}

IL_001a:
		{
			WebCamARController_t3718642882 * L_4 = (WebCamARController_t3718642882 *)il2cpp_codegen_object_new(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
			WebCamARController__ctor_m751483383(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
			((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->set_mInstance_5(L_4);
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x2D, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		WebCamARController_t3718642882 * L_6 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mInstance_5();
		return L_6;
	}
}
// System.Void Vuforia.WebCamARController::RegisterARController()
extern "C"  void WebCamARController_RegisterARController_m2119076139 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_RegisterARController_m2119076139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		WebCamARController_t3718642882 * L_0 = WebCamARController_get_Instance_m1980552932(NULL /*static, unused*/, /*hidden argument*/NULL);
		ARController_Register_m1901857971(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Vuforia.WebCamARController::get_DeviceName()
extern "C"  String_t* WebCamARController_get_DeviceName_m370257792 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mDeviceNameSetInEditor_2();
		return L_0;
	}
}
// System.Void Vuforia.WebCamARController::set_DeviceName(System.String)
extern "C"  void WebCamARController_set_DeviceName_m150226649 (WebCamARController_t3718642882 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_mDeviceNameSetInEditor_2(L_0);
		return;
	}
}
// System.Boolean Vuforia.WebCamARController::get_FlipHorizontally()
extern "C"  bool WebCamARController_get_FlipHorizontally_m2274555993 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mFlipHorizontally_3();
		return L_0;
	}
}
// System.Void Vuforia.WebCamARController::set_FlipHorizontally(System.Boolean)
extern "C"  void WebCamARController_set_FlipHorizontally_m357972424 (WebCamARController_t3718642882 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_mFlipHorizontally_3(L_0);
		return;
	}
}
// System.Boolean Vuforia.WebCamARController::get_IsPlaying()
extern "C"  bool WebCamARController_get_IsPlaying_m1662877527 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		WebCamImpl_t124212097 * L_0 = __this->get_mWebCamImpl_4();
		NullCheck(L_0);
		bool L_1 = WebCamImpl_get_IsPlaying_m3386441313(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Vuforia.WebCamImpl Vuforia.WebCamARController::get_ImplementationClass()
extern "C"  WebCamImpl_t124212097 * WebCamARController_get_ImplementationClass_m1726551377 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		WebCamImpl_t124212097 * L_0 = __this->get_mWebCamImpl_4();
		return L_0;
	}
}
// System.Void Vuforia.WebCamARController::InitCamera()
extern "C"  void WebCamARController_InitCamera_m1118184140 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_InitCamera_m1118184140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraU5BU5D_t1709987734* V_0 = NULL;
	{
		WebCamImpl_t124212097 * L_0 = __this->get_mWebCamImpl_4();
		if (L_0)
		{
			goto IL_0038;
		}
	}
	{
		Application_set_runInBackground_m2169704730(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		VuforiaAbstractBehaviour_t3510878193 * L_1 = ARController_get_VuforiaBehaviour_m2575156089(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		CameraU5BU5D_t1709987734* L_2 = Component_GetComponentsInChildren_TisCamera_t4157153871_m1870358404(L_1, /*hidden argument*/Component_GetComponentsInChildren_TisCamera_t4157153871_m1870358404_RuntimeMethod_var);
		V_0 = L_2;
		CameraU5BU5D_t1709987734* L_3 = V_0;
		int32_t L_4 = __this->get_RenderTextureLayer_1();
		String_t* L_5 = __this->get_mDeviceNameSetInEditor_2();
		bool L_6 = __this->get_mFlipHorizontally_3();
		WebCamImpl_t124212097 * L_7 = (WebCamImpl_t124212097 *)il2cpp_codegen_object_new(WebCamImpl_t124212097_il2cpp_TypeInfo_var);
		WebCamImpl__ctor_m1598238101(L_7, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->set_mWebCamImpl_4(L_7);
	}

IL_0038:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::Awake()
extern "C"  void WebCamARController_Awake_m4020518652 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_Awake_m4020518652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebCamConfiguration_t802847339 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaAbstractConfiguration_t2684447159_il2cpp_TypeInfo_var);
		VuforiaAbstractConfiguration_t2684447159 * L_0 = VuforiaAbstractConfiguration_get_Instance_m4134651635(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		WebCamConfiguration_t802847339 * L_1 = VuforiaAbstractConfiguration_get_WebCam_m788446001(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		WebCamConfiguration_t802847339 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = WebCamConfiguration_get_RenderTextureLayer_m2663672847(L_2, /*hidden argument*/NULL);
		__this->set_RenderTextureLayer_1(L_3);
		WebCamConfiguration_t802847339 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = WebCamConfiguration_get_DeviceNameSetInEditor_m1098639520(L_4, /*hidden argument*/NULL);
		__this->set_mDeviceNameSetInEditor_2(L_5);
		WebCamConfiguration_t802847339 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = WebCamConfiguration_get_FlipHorizontally_m1332215451(L_6, /*hidden argument*/NULL);
		__this->set_mFlipHorizontally_3(L_7);
		return;
	}
}
// System.Void Vuforia.WebCamARController::OnLevelWasLoaded()
extern "C"  void WebCamARController_OnLevelWasLoaded_m3407873239 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_OnLevelWasLoaded_m3407873239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WebCamImpl_t124212097 * L_1 = __this->get_mWebCamImpl_4();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WebCamImpl_t124212097 * L_2 = __this->get_mWebCamImpl_4();
		NullCheck(L_2);
		WebCamImpl_ResetPlaying_m2807831313(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::OnDestroy()
extern "C"  void WebCamARController_OnDestroy_m1720525424 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_OnDestroy_m1720525424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WebCamImpl_t124212097 * L_1 = __this->get_mWebCamImpl_4();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WebCamImpl_t124212097 * L_2 = __this->get_mWebCamImpl_4();
		NullCheck(L_2);
		WebCamImpl_OnDestroy_m861282575(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::Update()
extern "C"  void WebCamARController_Update_m2251066661 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_Update_m2251066661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WebCamImpl_t124212097 * L_1 = __this->get_mWebCamImpl_4();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WebCamImpl_t124212097 * L_2 = __this->get_mWebCamImpl_4();
		NullCheck(L_2);
		WebCamImpl_Update_m2054556650(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::.cctor()
extern "C"  void WebCamARController__cctor_m3035936290 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController__cctor_m3035936290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->set_mPadlock_6(L_0);
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
// System.Boolean Vuforia.WebCamImpl::get_DidUpdateThisFrame()
extern "C"  bool WebCamImpl_get_DidUpdateThisFrame_m3654449355 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = WebCamImpl_get_IsTextureSizeAvailable_m1679939213(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WebCamTexAdaptor_t3430449046 * L_1 = __this->get_mWebCamTexture_2();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.WebCamTexAdaptor::get_DidUpdateThisFrame() */, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Vuforia.WebCamImpl::get_IsPlaying()
extern "C"  bool WebCamImpl_get_IsPlaying_m3386441313 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexAdaptor_t3430449046 * L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean Vuforia.WebCamTexAdaptor::get_IsPlaying() */, L_0);
		return L_1;
	}
}
// System.Int32 Vuforia.WebCamImpl::get_ActualWidth()
extern "C"  int32_t WebCamImpl_get_ActualWidth_m2664411007 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	{
		TextureRenderer_t3278815845 * L_0 = __this->get_mTextureRenderer_5();
		NullCheck(L_0);
		int32_t L_1 = TextureRenderer_get_Width_m3088621639(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.WebCamImpl::get_ActualHeight()
extern "C"  int32_t WebCamImpl_get_ActualHeight_m2174032133 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	{
		TextureRenderer_t3278815845 * L_0 = __this->get_mTextureRenderer_5();
		NullCheck(L_0);
		int32_t L_1 = TextureRenderer_get_Height_m721659918(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Vuforia.WebCamImpl::get_IsTextureSizeAvailable()
extern "C"  bool WebCamImpl_get_IsTextureSizeAvailable_m1679939213 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsTextureSizeAvailableU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Vuforia.WebCamImpl::set_IsTextureSizeAvailable(System.Boolean)
extern "C"  void WebCamImpl_set_IsTextureSizeAvailable_m3924562987 (WebCamImpl_t124212097 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsTextureSizeAvailableU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Boolean Vuforia.WebCamImpl::get_FlipHorizontally()
extern "C"  bool WebCamImpl_get_FlipHorizontally_m3996032215 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mFlipHorizontally_9();
		return L_0;
	}
}
// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamImpl::get_ResampledTextureSize()
extern "C"  Vec2I_t3527036565  WebCamImpl_get_ResampledTextureSize_m3032093142 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	{
		ProfileData_t3519391925 * L_0 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_1 = L_0->get_ResampledTextureSize_1();
		return L_1;
	}
}
// System.Void Vuforia.WebCamImpl::ComputeResampledTextureSize()
extern "C"  void WebCamImpl_ComputeResampledTextureSize_m2796311890 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	ProfileData_t3519391925  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ProfileData_t3519391925  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		WebCamTexAdaptor_t3430449046 * L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		Texture_t3661962703 * L_1 = VirtFuncInvoker0< Texture_t3661962703 * >::Invoke(6 /* UnityEngine.Texture Vuforia.WebCamTexAdaptor::get_Texture() */, L_0);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_1);
		WebCamTexAdaptor_t3430449046 * L_3 = __this->get_mWebCamTexture_2();
		NullCheck(L_3);
		Texture_t3661962703 * L_4 = VirtFuncInvoker0< Texture_t3661962703 * >::Invoke(6 /* UnityEngine.Texture Vuforia.WebCamTexAdaptor::get_Texture() */, L_3);
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		V_0 = ((float)((float)(((float)((float)L_2)))/(float)(((float)((float)L_5)))));
		ProfileData_t3519391925 * L_6 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_7 = L_6->get_address_of_ResampledTextureSize_1();
		int32_t L_8 = L_7->get_x_0();
		float L_9 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_8))), (float)L_9));
		float L_10 = V_1;
		V_2 = (((int32_t)((int32_t)L_10)));
		float L_11 = V_1;
		float L_12 = fabsf(((float)il2cpp_codegen_subtract((float)(480.0f), (float)L_11)));
		if ((!(((float)L_12) <= ((float)(1.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		V_2 = ((int32_t)480);
	}

IL_0054:
	{
		float L_13 = V_1;
		float L_14 = fabsf(((float)il2cpp_codegen_subtract((float)(360.0f), (float)L_13)));
		if ((!(((float)L_14) <= ((float)(1.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		V_2 = ((int32_t)360);
	}

IL_006d:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(ProfileData_t3519391925 ));
		ProfileData_t3519391925 * L_15 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_16 = L_15->get_RequestedTextureSize_0();
		(&V_4)->set_RequestedTextureSize_0(L_16);
		ProfileData_t3519391925 * L_17 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_18 = L_17->get_address_of_ResampledTextureSize_1();
		int32_t L_19 = L_18->get_x_0();
		int32_t L_20 = V_2;
		Vec2I_t3527036565  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vec2I__ctor_m1553072655((&L_21), L_19, L_20, /*hidden argument*/NULL);
		(&V_4)->set_ResampledTextureSize_1(L_21);
		ProfileData_t3519391925 * L_22 = __this->get_address_of_mWebCamProfile_8();
		int32_t L_23 = L_22->get_RequestedFPS_2();
		(&V_4)->set_RequestedFPS_2(L_23);
		ProfileData_t3519391925  L_24 = V_4;
		V_3 = L_24;
		ProfileData_t3519391925  L_25 = V_3;
		__this->set_mWebCamProfile_8(L_25);
		return;
	}
}
// System.Void Vuforia.WebCamImpl::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean)
extern "C"  void WebCamImpl__ctor_m1598238101 (WebCamImpl_t124212097 * __this, CameraU5BU5D_t1709987734* ___arCameras0, int32_t ___renderTextureLayer1, String_t* ___webcamDeviceName2, bool ___flipHorizontally3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamImpl__ctor_m1598238101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebCamProfile_t4166408645 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	WebCamDeviceU5BU5D_t4294070825* V_3 = NULL;
	int32_t V_4 = 0;
	WebCamDevice_t1322781432  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		__this->set_mIsDirty_10((bool)1);
		__this->set_mLastFrameIdx_11((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_1 = ___renderTextureLayer1;
		__this->set_mRenderTextureLayer_12(L_1);
		CameraU5BU5D_t1709987734* L_2 = ___arCameras0;
		__this->set_mARCameras_0(L_2);
		CameraU5BU5D_t1709987734* L_3 = __this->get_mARCameras_0();
		NullCheck(L_3);
		__this->set_mOriginalCameraCullMask_1(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))));
		V_1 = 0;
		goto IL_007c;
	}

IL_0043:
	{
		Int32U5BU5D_t385246372* L_4 = __this->get_mOriginalCameraCullMask_1();
		int32_t L_5 = V_1;
		CameraU5BU5D_t1709987734* L_6 = __this->get_mARCameras_0();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Camera_t4157153871 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		int32_t L_10 = Camera_get_cullingMask_m679085748(L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_10);
		CameraU5BU5D_t1709987734* L_11 = __this->get_mARCameras_0();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Camera_t4157153871 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Camera_t4157153871 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = Camera_get_cullingMask_m679085748(L_15, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_mRenderTextureLayer_12();
		NullCheck(L_15);
		Camera_set_cullingMask_m1402455777(L_15, ((int32_t)((int32_t)L_16&(int32_t)((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)31))))))))), /*hidden argument*/NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_007c:
	{
		int32_t L_19 = V_1;
		CameraU5BU5D_t1709987734* L_20 = __this->get_mARCameras_0();
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_0043;
		}
	}
	{
		WebCamProfile_t4166408645 * L_21 = (WebCamProfile_t4166408645 *)il2cpp_codegen_object_new(WebCamProfile_t4166408645_il2cpp_TypeInfo_var);
		WebCamProfile__ctor_m820471938(L_21, /*hidden argument*/NULL);
		V_0 = L_21;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_22 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_011a;
		}
	}
	{
		WebCamDeviceU5BU5D_t4294070825* L_23 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_23);
		if (!(((RuntimeArray *)L_23)->max_length))
		{
			goto IL_011a;
		}
	}
	{
		V_2 = (bool)0;
		WebCamDeviceU5BU5D_t4294070825* L_24 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_24;
		V_4 = 0;
		goto IL_00cd;
	}

IL_00ac:
	{
		WebCamDeviceU5BU5D_t4294070825* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		WebCamDevice_t1322781432  L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_5 = L_28;
		String_t* L_29 = WebCamDevice_get_name_m3782173082((&V_5), /*hidden argument*/NULL);
		String_t* L_30 = ___webcamDeviceName2;
		NullCheck(L_29);
		bool L_31 = String_Equals_m2270643605(L_29, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00c7;
		}
	}
	{
		V_2 = (bool)1;
	}

IL_00c7:
	{
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00cd:
	{
		int32_t L_33 = V_4;
		WebCamDeviceU5BU5D_t4294070825* L_34 = V_3;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))))))
		{
			goto IL_00ac;
		}
	}
	{
		bool L_35 = V_2;
		if (L_35)
		{
			goto IL_00e9;
		}
	}
	{
		WebCamDeviceU5BU5D_t4294070825* L_36 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_37 = WebCamDevice_get_name_m3782173082(((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		___webcamDeviceName2 = L_37;
	}

IL_00e9:
	{
		WebCamProfile_t4166408645 * L_38 = V_0;
		String_t* L_39 = ___webcamDeviceName2;
		NullCheck(L_38);
		ProfileData_t3519391925  L_40 = WebCamProfile_GetProfile_m3959388229(L_38, L_39, /*hidden argument*/NULL);
		__this->set_mWebCamProfile_8(L_40);
		String_t* L_41 = ___webcamDeviceName2;
		ProfileData_t3519391925 * L_42 = __this->get_address_of_mWebCamProfile_8();
		int32_t L_43 = L_42->get_RequestedFPS_2();
		ProfileData_t3519391925 * L_44 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_45 = L_44->get_RequestedTextureSize_0();
		WebCamTexAdaptorImpl_t4146576487 * L_46 = (WebCamTexAdaptorImpl_t4146576487 *)il2cpp_codegen_object_new(WebCamTexAdaptorImpl_t4146576487_il2cpp_TypeInfo_var);
		WebCamTexAdaptorImpl__ctor_m145373239(L_46, L_41, L_43, L_45, /*hidden argument*/NULL);
		__this->set_mWebCamTexture_2(L_46);
		goto IL_0147;
	}

IL_011a:
	{
		WebCamProfile_t4166408645 * L_47 = V_0;
		NullCheck(L_47);
		ProfileData_t3519391925  L_48 = WebCamProfile_get_Default_m3789142228(L_47, /*hidden argument*/NULL);
		__this->set_mWebCamProfile_8(L_48);
		ProfileData_t3519391925 * L_49 = __this->get_address_of_mWebCamProfile_8();
		int32_t L_50 = L_49->get_RequestedFPS_2();
		ProfileData_t3519391925 * L_51 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_52 = L_51->get_RequestedTextureSize_0();
		NullWebCamTexAdaptor_t740403440 * L_53 = (NullWebCamTexAdaptor_t740403440 *)il2cpp_codegen_object_new(NullWebCamTexAdaptor_t740403440_il2cpp_TypeInfo_var);
		NullWebCamTexAdaptor__ctor_m395908601(L_53, L_50, L_52, /*hidden argument*/NULL);
		__this->set_mWebCamTexture_2(L_53);
	}

IL_0147:
	{
		bool L_54 = ___flipHorizontally3;
		__this->set_mFlipHorizontally_9(L_54);
	}

IL_014f:
	{
		return;
	}
}
// System.Void Vuforia.WebCamImpl::StartCamera()
extern "C"  void WebCamImpl_StartCamera_m1317305482 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mWebcamPlaying_13((bool)1);
		WebCamTexAdaptor_t3430449046 * L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean Vuforia.WebCamTexAdaptor::get_IsPlaying() */, L_0);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		WebCamTexAdaptor_t3430449046 * L_2 = __this->get_mWebCamTexture_2();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(7 /* System.Void Vuforia.WebCamTexAdaptor::Play() */, L_2);
	}

IL_001f:
	{
		return;
	}
}
// System.Void Vuforia.WebCamImpl::StopCamera()
extern "C"  void WebCamImpl_StopCamera_m2280021157 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mWebcamPlaying_13((bool)0);
		WebCamTexAdaptor_t3430449046 * L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(8 /* System.Void Vuforia.WebCamTexAdaptor::Stop() */, L_0);
		return;
	}
}
// System.Void Vuforia.WebCamImpl::ResetPlaying()
extern "C"  void WebCamImpl_ResetPlaying_m2807831313 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mWebcamPlaying_13();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		WebCamImpl_StartCamera_m1317305482(__this, /*hidden argument*/NULL);
		return;
	}

IL_000f:
	{
		WebCamImpl_StopCamera_m2280021157(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color32[] Vuforia.WebCamImpl::GetPixels32AndBufferFrame()
extern "C"  Color32U5BU5D_t3850468773* WebCamImpl_GetPixels32AndBufferFrame_m3565325821 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	RenderTexture_t2108887433 * V_0 = NULL;
	{
		TextureRenderer_t3278815845 * L_0 = __this->get_mTextureRenderer_5();
		NullCheck(L_0);
		RenderTexture_t2108887433 * L_1 = TextureRenderer_Render_m2768706254(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RenderTexture_t2108887433 * L_2 = V_0;
		RenderTexture_set_active_m1437732586(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_3 = __this->get_mBufferReadTexture_6();
		Rect_t2360479859  L_4 = __this->get_mReadPixelsRect_7();
		NullCheck(L_3);
		Texture2D_ReadPixels_m1510783487(L_3, L_4, 0, 0, (bool)0, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_5 = __this->get_mBufferReadTexture_6();
		NullCheck(L_5);
		Color32U5BU5D_t3850468773* L_6 = Texture2D_GetPixels32_m647746242(L_5, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_7 = V_0;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Vuforia.WebCamImpl::RenderFrame(System.Int32)
extern "C"  void WebCamImpl_RenderFrame_m2571124679 (WebCamImpl_t124212097 * __this, int32_t ___frameIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamImpl_RenderFrame_m2571124679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture_t3661962703 * V_0 = NULL;
	Texture2D_t3840446185 * V_1 = NULL;
	ImageImpl_t1502331638 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_mLastFrameIdx_11();
		int32_t L_1 = ___frameIndex0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0097;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRenderer_t3433045970_il2cpp_TypeInfo_var);
		VuforiaRenderer_t3433045970 * L_2 = VuforiaRenderer_get_Instance_m1013623488(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Texture_t3661962703 * L_3 = VirtFuncInvoker0< Texture_t3661962703 * >::Invoke(4 /* UnityEngine.Texture Vuforia.VuforiaRenderer::get_VideoBackgroundTexture() */, L_2);
		V_0 = L_3;
		Texture_t3661962703 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0090;
		}
	}
	{
		Texture_t3661962703 * L_6 = V_0;
		if (!((Texture2D_t3840446185 *)IsInstSealed((RuntimeObject*)L_6, Texture2D_t3840446185_il2cpp_TypeInfo_var)))
		{
			goto IL_0090;
		}
	}
	{
		Texture_t3661962703 * L_7 = V_0;
		V_1 = ((Texture2D_t3840446185 *)CastclassSealed((RuntimeObject*)L_7, Texture2D_t3840446185_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_8 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		Image_t745056343 * L_9 = VirtFuncInvoker1< Image_t745056343 *, int32_t >::Invoke(16 /* Vuforia.Image Vuforia.CameraDevice::GetCameraImage(Vuforia.Image/PIXEL_FORMAT) */, L_8, ((int32_t)16));
		V_2 = ((ImageImpl_t1502331638 *)CastclassClass((RuntimeObject*)L_9, ImageImpl_t1502331638_il2cpp_TypeInfo_var));
		ImageImpl_t1502331638 * L_10 = V_2;
		if (!L_10)
		{
			goto IL_0090;
		}
	}
	{
		Texture2D_t3840446185 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		ImageImpl_t1502331638 * L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 Vuforia.Image::get_BufferWidth() */, L_13);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0069;
		}
	}
	{
		Texture2D_t3840446185 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		ImageImpl_t1502331638 * L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Vuforia.Image::get_BufferHeight() */, L_17);
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_0069;
		}
	}
	{
		Texture2D_t3840446185 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = Texture2D_get_format_m2371899271(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) == ((int32_t)3)))
		{
			goto IL_007e;
		}
	}

IL_0069:
	{
		Texture2D_t3840446185 * L_21 = V_1;
		ImageImpl_t1502331638 * L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 Vuforia.Image::get_BufferWidth() */, L_22);
		ImageImpl_t1502331638 * L_24 = V_2;
		NullCheck(L_24);
		int32_t L_25 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Vuforia.Image::get_BufferHeight() */, L_24);
		NullCheck(L_21);
		Texture2D_Resize_m2702227255(L_21, L_23, L_25, 3, (bool)0, /*hidden argument*/NULL);
	}

IL_007e:
	{
		Texture2D_t3840446185 * L_26 = V_1;
		ImageImpl_t1502331638 * L_27 = V_2;
		NullCheck(L_27);
		Color32U5BU5D_t3850468773* L_28 = ImageImpl_GetPixels32_m1436666217(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Texture2D_SetPixels32_m1141065075(L_26, L_28, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_29 = V_1;
		NullCheck(L_29);
		Texture2D_Apply_m2271746283(L_29, /*hidden argument*/NULL);
	}

IL_0090:
	{
		int32_t L_30 = ___frameIndex0;
		__this->set_mLastFrameIdx_11(L_30);
	}

IL_0097:
	{
		return;
	}
}
// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::GetVideoMode()
extern "C"  VideoModeData_t2066817255  WebCamImpl_GetVideoMode_m3241268727 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	{
		VideoModeData_t2066817255  L_0 = __this->get_mVideoModeData_3();
		return L_0;
	}
}
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCamImpl::GetVideoTextureInfo()
extern "C"  VideoTextureInfo_t1805965052  WebCamImpl_GetVideoTextureInfo_m4112270967 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	{
		VideoTextureInfo_t1805965052  L_0 = __this->get_mVideoTextureInfo_4();
		return L_0;
	}
}
// System.Boolean Vuforia.WebCamImpl::IsRendererDirty()
extern "C"  bool WebCamImpl_IsRendererDirty_m1842447325 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	{
		bool L_0 = WebCamImpl_get_IsTextureSizeAvailable_m1679939213(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_mIsDirty_10();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		int32_t L_2 = G_B3_0;
		G_B4_0 = L_2;
		if (!L_2)
		{
			G_B5_0 = L_2;
			goto IL_001b;
		}
	}
	{
		__this->set_mIsDirty_10((bool)0);
		G_B5_0 = G_B4_0;
	}

IL_001b:
	{
		return (bool)G_B5_0;
	}
}
// System.Void Vuforia.WebCamImpl::OnDestroy()
extern "C"  void WebCamImpl_OnDestroy_m861282575 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamImpl_OnDestroy_m861282575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		V_0 = 0;
		goto IL_0034;
	}

IL_000b:
	{
		CameraU5BU5D_t1709987734* L_1 = __this->get_mARCameras_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Camera_t4157153871 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		CameraU5BU5D_t1709987734* L_6 = __this->get_mARCameras_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Camera_t4157153871 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Int32U5BU5D_t385246372* L_10 = __this->get_mOriginalCameraCullMask_1();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		Camera_set_cullingMask_m1402455777(L_9, L_13, /*hidden argument*/NULL);
	}

IL_0030:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_15 = V_0;
		CameraU5BU5D_t1709987734* L_16 = __this->get_mARCameras_0();
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		WebCamImpl_set_IsTextureSizeAvailable_m3924562987(__this, (bool)0, /*hidden argument*/NULL);
		TextureRenderer_t3278815845 * L_17 = __this->get_mTextureRenderer_5();
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		TextureRenderer_t3278815845 * L_18 = __this->get_mTextureRenderer_5();
		NullCheck(L_18);
		TextureRenderer_Destroy_m719921383(L_18, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void Vuforia.WebCamImpl::Update()
extern "C"  void WebCamImpl_Update_m2054556650 (WebCamImpl_t124212097 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamImpl_Update_m2054556650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vec2I_t3527036565  V_0;
	memset(&V_0, 0, sizeof(V_0));
	VideoModeData_t2066817255  V_1;
	memset(&V_1, 0, sizeof(V_1));
	VideoTextureInfo_t1805965052  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0170;
		}
	}
	{
		WebCamTexAdaptor_t3430449046 * L_1 = __this->get_mWebCamTexture_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(9 /* System.Void Vuforia.WebCamTexAdaptor::CheckPermissions() */, L_1);
		bool L_2 = WebCamImpl_get_IsTextureSizeAvailable_m1679939213(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0170;
		}
	}
	{
		WebCamTexAdaptor_t3430449046 * L_3 = __this->get_mWebCamTexture_2();
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.WebCamTexAdaptor::get_DidUpdateThisFrame() */, L_3);
		if (!L_4)
		{
			goto IL_0170;
		}
	}
	{
		WebCamImpl_set_IsTextureSizeAvailable_m3924562987(__this, (bool)1, /*hidden argument*/NULL);
		ProfileData_t3519391925 * L_5 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_6 = L_5->get_address_of_ResampledTextureSize_1();
		int32_t L_7 = L_6->get_y_1();
		if (L_7)
		{
			goto IL_00b2;
		}
	}
	{
		WebCamImpl_ComputeResampledTextureSize_m2796311890(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceStopCamera() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_8);
		RuntimeObject* L_9 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceDeinitCamera() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_10 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		ProfileData_t3519391925 * L_11 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_12 = L_11->get_address_of_ResampledTextureSize_1();
		int32_t L_13 = L_12->get_x_0();
		ProfileData_t3519391925 * L_14 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_15 = L_14->get_address_of_ResampledTextureSize_1();
		int32_t L_16 = L_15->get_y_1();
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(14 /* System.Void Vuforia.IVuforiaWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_10, L_13, L_16);
		RuntimeObject* L_17 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(12 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceInitCamera(System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_17, 1);
		RuntimeObject* L_18 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(13 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceSelectVideoMode(System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_18, (-1));
		RuntimeObject* L_19 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_19);
		InterfaceFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceStartCamera() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_19);
	}

IL_00b2:
	{
		ProfileData_t3519391925 * L_20 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_21 = L_20->get_ResampledTextureSize_1();
		V_0 = L_21;
		il2cpp_codegen_initobj((&V_1), sizeof(VideoModeData_t2066817255 ));
		Vec2I_t3527036565  L_22 = V_0;
		int32_t L_23 = L_22.get_x_0();
		(&V_1)->set_width_0(L_23);
		Vec2I_t3527036565  L_24 = V_0;
		int32_t L_25 = L_24.get_y_1();
		(&V_1)->set_height_1(L_25);
		ProfileData_t3519391925 * L_26 = __this->get_address_of_mWebCamProfile_8();
		int32_t L_27 = L_26->get_RequestedFPS_2();
		(&V_1)->set_frameRate_2((((float)((float)L_27))));
		VideoModeData_t2066817255  L_28 = V_1;
		__this->set_mVideoModeData_3(L_28);
		il2cpp_codegen_initobj((&V_2), sizeof(VideoTextureInfo_t1805965052 ));
		Vec2I_t3527036565  L_29 = V_0;
		(&V_2)->set_imageSize_1(L_29);
		Vec2I_t3527036565  L_30 = V_0;
		(&V_2)->set_textureSize_0(L_30);
		VideoTextureInfo_t1805965052  L_31 = V_2;
		__this->set_mVideoTextureInfo_4(L_31);
		WebCamTexAdaptor_t3430449046 * L_32 = __this->get_mWebCamTexture_2();
		NullCheck(L_32);
		Texture_t3661962703 * L_33 = VirtFuncInvoker0< Texture_t3661962703 * >::Invoke(6 /* UnityEngine.Texture Vuforia.WebCamTexAdaptor::get_Texture() */, L_32);
		int32_t L_34 = __this->get_mRenderTextureLayer_12();
		Vec2I_t3527036565  L_35 = V_0;
		TextureRenderer_t3278815845 * L_36 = (TextureRenderer_t3278815845 *)il2cpp_codegen_object_new(TextureRenderer_t3278815845_il2cpp_TypeInfo_var);
		TextureRenderer__ctor_m495126481(L_36, L_33, L_34, L_35, /*hidden argument*/NULL);
		__this->set_mTextureRenderer_5(L_36);
		Vec2I_t3527036565  L_37 = V_0;
		int32_t L_38 = L_37.get_x_0();
		Vec2I_t3527036565  L_39 = V_0;
		int32_t L_40 = L_39.get_y_1();
		Texture2D_t3840446185 * L_41 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_41, L_38, L_40, /*hidden argument*/NULL);
		__this->set_mBufferReadTexture_6(L_41);
		Vec2I_t3527036565  L_42 = V_0;
		int32_t L_43 = L_42.get_x_0();
		Vec2I_t3527036565  L_44 = V_0;
		int32_t L_45 = L_44.get_y_1();
		Rect_t2360479859  L_46;
		memset(&L_46, 0, sizeof(L_46));
		Rect__ctor_m2614021312((&L_46), (0.0f), (0.0f), (((float)((float)L_43))), (((float)((float)L_45))), /*hidden argument*/NULL);
		__this->set_mReadPixelsRect_7(L_46);
	}

IL_0170:
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
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::get_Default()
extern "C"  ProfileData_t3519391925  WebCamProfile_get_Default_m3789142228 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method)
{
	{
		ProfileCollection_t901995765  L_0 = __this->get_mProfileCollection_0();
		ProfileData_t3519391925  L_1 = L_0.get_DefaultProfile_0();
		return L_1;
	}
}
// System.Void Vuforia.WebCamProfile::.ctor()
extern "C"  void WebCamProfile__ctor_m820471938 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile__ctor_m820471938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = PlayModeEditorUtility_get_Instance_m334266941(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = Application_get_dataPath_m4232621142(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, _stringLiteral4070863549, /*hidden argument*/NULL);
		NullCheck(L_0);
		ProfileCollection_t901995765  L_3 = InterfaceFuncInvoker1< ProfileCollection_t901995765 , String_t* >::Invoke(1 /* Vuforia.WebCamProfile/ProfileCollection Vuforia.IPlayModeEditorUtility::LoadAndParseWebcamProfiles(System.String) */, IPlayModeEditorUtility_t752570519_il2cpp_TypeInfo_var, L_0, L_2);
		__this->set_mProfileCollection_0(L_3);
		return;
	}
}
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::GetProfile(System.String)
extern "C"  ProfileData_t3519391925  WebCamProfile_GetProfile_m3959388229 (WebCamProfile_t4166408645 * __this, String_t* ___webcamName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile_GetProfile_m3959388229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfileData_t3519391925  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ProfileCollection_t901995765  L_0 = __this->get_mProfileCollection_0();
		Dictionary_2_t3304648224 * L_1 = L_0.get_Profiles_1();
		String_t* L_2 = ___webcamName0;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m2029374922(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = Dictionary_2_TryGetValue_m1260807329(L_1, L_3, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1260807329_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		ProfileData_t3519391925  L_5 = V_0;
		return L_5;
	}

IL_001c:
	{
		ProfileCollection_t901995765  L_6 = __this->get_mProfileCollection_0();
		ProfileData_t3519391925  L_7 = L_6.get_DefaultProfile_0();
		return L_7;
	}
}
// System.Boolean Vuforia.WebCamProfile::ProfileAvailable(System.String)
extern "C"  bool WebCamProfile_ProfileAvailable_m801322015 (WebCamProfile_t4166408645 * __this, String_t* ___webcamName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile_ProfileAvailable_m801322015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfileCollection_t901995765  L_0 = __this->get_mProfileCollection_0();
		Dictionary_2_t3304648224 * L_1 = L_0.get_Profiles_1();
		String_t* L_2 = ___webcamName0;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m2029374922(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = Dictionary_2_ContainsKey_m4190276240(L_1, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m4190276240_RuntimeMethod_var);
		return L_4;
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
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_pinvoke(const ProfileCollection_t901995765& unmarshaled, ProfileCollection_t901995765_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception,NULL);
}
extern "C" void ProfileCollection_t901995765_marshal_pinvoke_back(const ProfileCollection_t901995765_marshaled_pinvoke& marshaled, ProfileCollection_t901995765& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception,NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_pinvoke_cleanup(ProfileCollection_t901995765_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_com(const ProfileCollection_t901995765& unmarshaled, ProfileCollection_t901995765_marshaled_com& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception,NULL);
}
extern "C" void ProfileCollection_t901995765_marshal_com_back(const ProfileCollection_t901995765_marshaled_com& marshaled, ProfileCollection_t901995765& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception,NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_com_cleanup(ProfileCollection_t901995765_marshaled_com& marshaled)
{
}
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
extern "C"  void ProfileCollection__ctor_m3713293092 (ProfileCollection_t901995765 * __this, ProfileData_t3519391925  ___defaultProfile0, Dictionary_2_t3304648224 * ___profiles1, const RuntimeMethod* method)
{
	{
		ProfileData_t3519391925  L_0 = ___defaultProfile0;
		__this->set_DefaultProfile_0(L_0);
		Dictionary_2_t3304648224 * L_1 = ___profiles1;
		__this->set_Profiles_1(L_1);
		return;
	}
}
extern "C"  void ProfileCollection__ctor_m3713293092_AdjustorThunk (RuntimeObject * __this, ProfileData_t3519391925  ___defaultProfile0, Dictionary_2_t3304648224 * ___profiles1, const RuntimeMethod* method)
{
	ProfileCollection_t901995765 * _thisAdjusted = reinterpret_cast<ProfileCollection_t901995765 *>(__this + 1);
	ProfileCollection__ctor_m3713293092(_thisAdjusted, ___defaultProfile0, ___profiles1, method);
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
// System.Void Vuforia.WebCamTexAdaptor::.ctor()
extern "C"  void WebCamTexAdaptor__ctor_m1308786855 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_DidUpdateThisFrame()
extern "C"  bool WebCamTexAdaptorImpl_get_DidUpdateThisFrame_m4203728898 (WebCamTexAdaptorImpl_t4146576487 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		bool L_1 = WebCamTexture_get_didUpdateThisFrame_m567567483(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_IsPlaying()
extern "C"  bool WebCamTexAdaptorImpl_get_IsPlaying_m1140896377 (WebCamTexAdaptorImpl_t4146576487 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		bool L_1 = WebCamTexture_get_isPlaying_m3525118025(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Texture Vuforia.WebCamTexAdaptorImpl::get_Texture()
extern "C"  Texture_t3661962703 * WebCamTexAdaptorImpl_get_Texture_m3828208334 (WebCamTexAdaptorImpl_t4146576487 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		return L_0;
	}
}
// System.Void Vuforia.WebCamTexAdaptorImpl::.ctor(System.String,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void WebCamTexAdaptorImpl__ctor_m145373239 (WebCamTexAdaptorImpl_t4146576487 * __this, String_t* ___deviceName0, int32_t ___requestedFPS1, Vec2I_t3527036565  ___requestedTextureSize2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamTexAdaptorImpl__ctor_m145373239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebCamTexAdaptor__ctor_m1308786855(__this, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_0 = (WebCamTexture_t1514609158 *)il2cpp_codegen_object_new(WebCamTexture_t1514609158_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_m2601640589(L_0, /*hidden argument*/NULL);
		__this->set_mWebCamTexture_0(L_0);
		WebCamTexture_t1514609158 * L_1 = __this->get_mWebCamTexture_0();
		String_t* L_2 = ___deviceName0;
		NullCheck(L_1);
		WebCamTexture_set_deviceName_m2479609938(L_1, L_2, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_3 = __this->get_mWebCamTexture_0();
		int32_t L_4 = ___requestedFPS1;
		NullCheck(L_3);
		WebCamTexture_set_requestedFPS_m1422816314(L_3, (((float)((float)L_4))), /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_5 = __this->get_mWebCamTexture_0();
		Vec2I_t3527036565  L_6 = ___requestedTextureSize2;
		int32_t L_7 = L_6.get_x_0();
		NullCheck(L_5);
		WebCamTexture_set_requestedWidth_m1301971691(L_5, L_7, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_8 = __this->get_mWebCamTexture_0();
		Vec2I_t3527036565  L_9 = ___requestedTextureSize2;
		int32_t L_10 = L_9.get_y_1();
		NullCheck(L_8);
		WebCamTexture_set_requestedHeight_m3636279808(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptorImpl::Play()
extern "C"  void WebCamTexAdaptorImpl_Play_m2051458297 (WebCamTexAdaptorImpl_t4146576487 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Application_HasUserAuthorization_m3146187033(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		AsyncOperation_t1445031843 * L_1 = Application_RequestUserAuthorization_m1407144003(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		__this->set_mCheckCameraPermissions_1(L_1);
		return;
	}

IL_0015:
	{
		WebCamTexture_t1514609158 * L_2 = __this->get_mWebCamTexture_0();
		NullCheck(L_2);
		WebCamTexture_Play_m3866603461(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptorImpl::Stop()
extern "C"  void WebCamTexAdaptorImpl_Stop_m889273490 (WebCamTexAdaptorImpl_t4146576487 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		WebCamTexture_Stop_m3471034432(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptorImpl::CheckPermissions()
extern "C"  void WebCamTexAdaptorImpl_CheckPermissions_m2944684210 (WebCamTexAdaptorImpl_t4146576487 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamTexAdaptorImpl_CheckPermissions_m2944684210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncOperation_t1445031843 * L_0 = __this->get_mCheckCameraPermissions_1();
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		AsyncOperation_t1445031843 * L_1 = __this->get_mCheckCameraPermissions_1();
		NullCheck(L_1);
		bool L_2 = AsyncOperation_get_isDone_m412925263(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		bool L_3 = Application_HasUserAuthorization_m3146187033(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		WebCamTexture_t1514609158 * L_4 = __this->get_mWebCamTexture_0();
		NullCheck(L_4);
		WebCamTexture_Play_m3866603461(L_4, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_002a:
	{
		RuntimeObject* L_5 = PlayModeEditorUtility_get_Instance_m334266941(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void Vuforia.IPlayModeEditorUtility::ShowErrorInMouseOverWindow(System.String) */, IPlayModeEditorUtility_t752570519_il2cpp_TypeInfo_var, L_5, _stringLiteral2036431799);
	}

IL_0039:
	{
		__this->set_mCheckCameraPermissions_1((AsyncOperation_t1445031843 *)NULL);
	}

IL_0040:
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
// System.Void Vuforia.WordAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void WordAbstractBehaviour_InternalUnregisterTrackable_m3929227915 (WordAbstractBehaviour_t3502498754 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		V_0 = (RuntimeObject*)NULL;
		__this->set_mWord_12((RuntimeObject*)NULL);
		RuntimeObject* L_0 = V_0;
		((TrackableBehaviour_t1113559212 *)__this)->set_mTrackable_8(L_0);
		return;
	}
}
// Vuforia.Word Vuforia.WordAbstractBehaviour::get_Word()
extern "C"  RuntimeObject* WordAbstractBehaviour_get_Word_m1126416030 (WordAbstractBehaviour_t3502498754 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_mWord_12();
		return L_0;
	}
}
// System.Boolean Vuforia.WordAbstractBehaviour::get_IsTemplateMode()
extern "C"  bool WordAbstractBehaviour_get_IsTemplateMode_m3316615685 (WordAbstractBehaviour_t3502498754 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mMode_10();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordAbstractBehaviour::get_IsSpecificWordMode()
extern "C"  bool WordAbstractBehaviour_get_IsSpecificWordMode_m448863399 (WordAbstractBehaviour_t3502498754 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mMode_10();
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.String Vuforia.WordAbstractBehaviour::get_SpecificWord()
extern "C"  String_t* WordAbstractBehaviour_get_SpecificWord_m4130341814 (WordAbstractBehaviour_t3502498754 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mSpecificWord_11();
		return L_0;
	}
}
// System.Void Vuforia.WordAbstractBehaviour::InitializeWord(Vuforia.Word)
extern "C"  void WordAbstractBehaviour_InitializeWord_m3005938285 (WordAbstractBehaviour_t3502498754 * __this, RuntimeObject* ___word0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordAbstractBehaviour_InitializeWord_m3005938285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	MeshFilter_t3523625662 * V_1 = NULL;
	float V_2 = 0.0f;
	RuntimeObject* V_3 = NULL;
	Bounds_t2266837910  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2_t2156229523  G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	Vector2_t2156229523  G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	{
		RuntimeObject* L_0 = ___word0;
		RuntimeObject* L_1 = L_0;
		V_3 = L_1;
		__this->set_mWord_12(L_1);
		RuntimeObject* L_2 = V_3;
		((TrackableBehaviour_t1113559212 *)__this)->set_mTrackable_8(L_2);
		RuntimeObject* L_3 = ___word0;
		NullCheck(L_3);
		String_t* L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Vuforia.Word::get_StringValue() */, Word_t1116038618_il2cpp_TypeInfo_var, L_3);
		((TrackableBehaviour_t1113559212 *)__this)->set_mTrackableName_3(L_4);
		RuntimeObject* L_5 = ___word0;
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = InterfaceFuncInvoker0< Vector2_t2156229523  >::Invoke(1 /* UnityEngine.Vector2 Vuforia.Word::get_Size() */, Word_t1116038618_il2cpp_TypeInfo_var, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_7;
		MeshFilter_t3523625662 * L_8 = Component_GetComponent_TisMeshFilter_t3523625662_m569847836(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m569847836_RuntimeMethod_var);
		V_1 = L_8;
		MeshFilter_t3523625662 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_9, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B1_0 = L_6;
		if (!L_10)
		{
			G_B2_0 = L_6;
			goto IL_004d;
		}
	}
	{
		MeshFilter_t3523625662 * L_11 = V_1;
		NullCheck(L_11);
		Mesh_t3648964284 * L_12 = MeshFilter_get_sharedMesh_m1726897210(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Bounds_t2266837910  L_13 = Mesh_get_bounds_m2004960313(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		Vector3_t3722313464  L_14 = Bounds_get_size_m1178783246((&V_4), /*hidden argument*/NULL);
		V_0 = L_14;
		G_B2_0 = G_B1_0;
	}

IL_004d:
	{
		float L_15 = G_B2_0.get_y_1();
		Vector3_t3722313464  L_16 = V_0;
		float L_17 = L_16.get_z_3();
		V_2 = ((float)((float)L_15/(float)L_17));
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_19 = V_2;
		float L_20 = V_2;
		float L_21 = V_2;
		Vector3_t3722313464  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Vector3__ctor_m3353183577((&L_22), L_19, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localScale_m3053443106(L_18, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WordAbstractBehaviour::OnValidate()
extern "C"  void WordAbstractBehaviour_OnValidate_m2102345120 (WordAbstractBehaviour_t3502498754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordAbstractBehaviour_OnValidate_m2102345120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = WordAbstractBehaviour_get_IsSpecificWordMode_m448863399(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_1 = __this->get_mSpecificWord_11();
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1699185095, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void Vuforia.WordAbstractBehaviour::.ctor()
extern "C"  void WordAbstractBehaviour__ctor_m1753193521 (WordAbstractBehaviour_t3502498754 * __this, const RuntimeMethod* method)
{
	{
		TrackableBehaviour__ctor_m1563377757(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.WordImpl::.ctor(System.Int32,System.String,UnityEngine.Vector2)
extern "C"  void WordImpl__ctor_m518897599 (WordImpl_t2494369133 * __this, int32_t ___id0, String_t* ___text1, Vector2_t2156229523  ___size2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___text1;
		int32_t L_1 = ___id0;
		TrackableImpl__ctor_m3299709682(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___text1;
		__this->set_mText_2(L_2);
		Vector2_t2156229523  L_3 = ___size2;
		__this->set_mSize_3(L_3);
		return;
	}
}
// System.String Vuforia.WordImpl::get_StringValue()
extern "C"  String_t* WordImpl_get_StringValue_m539642155 (WordImpl_t2494369133 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mText_2();
		return L_0;
	}
}
// UnityEngine.Vector2 Vuforia.WordImpl::get_Size()
extern "C"  Vector2_t2156229523  WordImpl_get_Size_m1421284971 (WordImpl_t2494369133 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = __this->get_mSize_3();
		return L_0;
	}
}
// Vuforia.Image Vuforia.WordImpl::GetLetterMask()
extern "C"  Image_t745056343 * WordImpl_GetLetterMask_m742086191 (WordImpl_t2494369133 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordImpl_GetLetterMask_m742086191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (Image_t745056343 *)NULL;
	}

IL_0009:
	{
		Image_t745056343 * L_1 = __this->get_mLetterMask_4();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		WordImpl_CreateLetterMask_m224036644(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		Image_t745056343 * L_2 = __this->get_mLetterMask_4();
		return L_2;
	}
}
// Vuforia.RectangleData[] Vuforia.WordImpl::GetLetterBoundingBoxes()
extern "C"  RectangleDataU5BU5D_t804827427* WordImpl_GetLetterBoundingBoxes_m1855461210 (WordImpl_t2494369133 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordImpl_GetLetterBoundingBoxes_m1855461210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	intptr_t V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return ((RectangleDataU5BU5D_t804827427*)SZArrayNew(RectangleDataU5BU5D_t804827427_il2cpp_TypeInfo_var, (uint32_t)0));
	}

IL_000e:
	{
		RectangleDataU5BU5D_t804827427* L_1 = __this->get_mLetterBoundingBoxes_6();
		if (L_1)
		{
			goto IL_00ba;
		}
	}
	{
		String_t* L_2 = __this->get_mText_2();
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->set_mLetterBoundingBoxes_6(((RectangleDataU5BU5D_t804827427*)SZArrayNew(RectangleDataU5BU5D_t804827427_il2cpp_TypeInfo_var, (uint32_t)L_4)));
		int32_t L_5 = V_0;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (RectangleData_t1039179782_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_8 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		intptr_t L_9 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_8)), /*hidden argument*/NULL);
		V_1 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_10 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_11 = TrackableImpl_get_ID_m2679724236(__this, /*hidden argument*/NULL);
		intptr_t L_12 = V_1;
		NullCheck(L_10);
		InterfaceFuncInvoker2< int32_t, int32_t, intptr_t >::Invoke(213 /* System.Int32 Vuforia.IVuforiaWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_10, L_11, L_12);
		int64_t L_13 = IntPtr_ToInt64_m192765549((&V_1), /*hidden argument*/NULL);
		IntPtr__ctor_m987476171((&V_2), L_13, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_00b0;
	}

IL_006c:
	{
		RectangleDataU5BU5D_t804827427* L_14 = __this->get_mLetterBoundingBoxes_6();
		int32_t L_15 = V_3;
		intptr_t L_16 = V_2;
		RuntimeTypeHandle_t3027515415  L_17 = { reinterpret_cast<intptr_t> (RectangleData_t1039179782_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_19 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RectangleData_t1039179782 )((*(RectangleData_t1039179782 *)((RectangleData_t1039179782 *)UnBox(L_19, RectangleData_t1039179782_il2cpp_TypeInfo_var)))));
		int64_t L_20 = IntPtr_ToInt64_m192765549((&V_2), /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_21 = { reinterpret_cast<intptr_t> (RectangleData_t1039179782_0_0_0_var) };
		Type_t * L_22 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		int32_t L_23 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		IntPtr__ctor_m987476171((&V_2), ((int64_t)il2cpp_codegen_add((int64_t)L_20, (int64_t)(((int64_t)((int64_t)L_23))))), /*hidden argument*/NULL);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00b0:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_006c;
		}
	}
	{
		intptr_t L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		RectangleDataU5BU5D_t804827427* L_28 = __this->get_mLetterBoundingBoxes_6();
		return L_28;
	}
}
// System.Void Vuforia.WordImpl::InitImageHeader()
extern "C"  void WordImpl_InitImageHeader_m3006118628 (WordImpl_t2494369133 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordImpl_InitImageHeader_m3006118628_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ImageHeaderData_t1300500262 * L_0 = __this->get_address_of_mLetterImageHeader_5();
		il2cpp_codegen_initobj(L_0, sizeof(ImageHeaderData_t1300500262 ));
		ImageHeaderData_t1300500262 * L_1 = __this->get_address_of_mLetterImageHeader_5();
		ImageHeaderData_t1300500262 * L_2 = __this->get_address_of_mLetterImageHeader_5();
		Vector2_t2156229523  L_3 = WordImpl_get_Size_m1421284971(__this, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		int32_t L_5 = (((int32_t)((int32_t)((float)il2cpp_codegen_add((float)L_4, (float)(1.0f))))));
		V_0 = L_5;
		L_2->set_bufferWidth_4(L_5);
		int32_t L_6 = V_0;
		L_1->set_width_1(L_6);
		ImageHeaderData_t1300500262 * L_7 = __this->get_address_of_mLetterImageHeader_5();
		ImageHeaderData_t1300500262 * L_8 = __this->get_address_of_mLetterImageHeader_5();
		Vector2_t2156229523  L_9 = WordImpl_get_Size_m1421284971(__this, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_1();
		int32_t L_11 = (((int32_t)((int32_t)((float)il2cpp_codegen_add((float)L_10, (float)(1.0f))))));
		V_0 = L_11;
		L_8->set_bufferHeight_5(L_11);
		int32_t L_12 = V_0;
		L_7->set_height_2(L_12);
		ImageHeaderData_t1300500262 * L_13 = __this->get_address_of_mLetterImageHeader_5();
		L_13->set_format_6(4);
		ImageImpl_t1502331638 * L_14 = (ImageImpl_t1502331638 *)il2cpp_codegen_object_new(ImageImpl_t1502331638_il2cpp_TypeInfo_var);
		ImageImpl__ctor_m1791401789(L_14, /*hidden argument*/NULL);
		__this->set_mLetterMask_4(L_14);
		return;
	}
}
// System.Void Vuforia.WordImpl::CreateLetterMask()
extern "C"  void WordImpl_CreateLetterMask_m224036644 (WordImpl_t2494369133 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordImpl_CreateLetterMask_m224036644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ImageImpl_t1502331638 * V_0 = NULL;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		WordImpl_InitImageHeader_m3006118628(__this, /*hidden argument*/NULL);
		Image_t745056343 * L_0 = __this->get_mLetterMask_4();
		V_0 = ((ImageImpl_t1502331638 *)CastclassClass((RuntimeObject*)L_0, ImageImpl_t1502331638_il2cpp_TypeInfo_var));
		ImageHeaderData_t1300500262  L_1 = __this->get_mLetterImageHeader_5();
		ImageImpl_t1502331638 * L_2 = V_0;
		WordImpl_SetImageValues_m2457547036(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		ImageImpl_t1502331638 * L_3 = V_0;
		WordImpl_AllocateImage_m2647442905(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		ImageHeaderData_t1300500262 * L_4 = __this->get_address_of_mLetterImageHeader_5();
		ImageImpl_t1502331638 * L_5 = V_0;
		NullCheck(L_5);
		intptr_t L_6 = ImageImpl_get_UnmanagedData_m226027905(L_5, /*hidden argument*/NULL);
		L_4->set_data_0(L_6);
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (ImageHeaderData_t1300500262_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_9 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		intptr_t L_10 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		ImageHeaderData_t1300500262  L_11 = __this->get_mLetterImageHeader_5();
		ImageHeaderData_t1300500262  L_12 = L_11;
		RuntimeObject * L_13 = Box(ImageHeaderData_t1300500262_il2cpp_TypeInfo_var, &L_12);
		intptr_t L_14 = V_1;
		Marshal_StructureToPtr_m2294149499(NULL /*static, unused*/, L_13, L_14, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_16 = TrackableImpl_get_ID_m2679724236(__this, /*hidden argument*/NULL);
		intptr_t L_17 = V_1;
		NullCheck(L_15);
		InterfaceFuncInvoker2< int32_t, int32_t, intptr_t >::Invoke(214 /* System.Int32 Vuforia.IVuforiaWrapper::WordGetLetterMask(System.Int32,System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_15, L_16, L_17);
		intptr_t L_18 = V_1;
		RuntimeTypeHandle_t3027515415  L_19 = { reinterpret_cast<intptr_t> (ImageHeaderData_t1300500262_0_0_0_var) };
		Type_t * L_20 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		RuntimeObject * L_21 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		__this->set_mLetterImageHeader_5(((*(ImageHeaderData_t1300500262 *)((ImageHeaderData_t1300500262 *)UnBox(L_21, ImageHeaderData_t1300500262_il2cpp_TypeInfo_var)))));
		ImageHeaderData_t1300500262 * L_22 = __this->get_address_of_mLetterImageHeader_5();
		int32_t L_23 = L_22->get_reallocate_7();
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_00a2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1198487051, /*hidden argument*/NULL);
		return;
	}

IL_00a2:
	{
		ImageImpl_t1502331638 * L_24 = V_0;
		NullCheck(L_24);
		ImageImpl_CopyPixelsFromUnmanagedBuffer_m1420224496(L_24, /*hidden argument*/NULL);
		ImageImpl_t1502331638 * L_25 = V_0;
		__this->set_mLetterMask_4(L_25);
		intptr_t L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WordImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C"  void WordImpl_SetImageValues_m2457547036 (RuntimeObject * __this /* static, unused */, ImageHeaderData_t1300500262  ___imageHeader0, ImageImpl_t1502331638 * ___image1, const RuntimeMethod* method)
{
	{
		ImageImpl_t1502331638 * L_0 = ___image1;
		ImageHeaderData_t1300500262  L_1 = ___imageHeader0;
		int32_t L_2 = L_1.get_width_1();
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(5 /* System.Void Vuforia.Image::set_Width(System.Int32) */, L_0, L_2);
		ImageImpl_t1502331638 * L_3 = ___image1;
		ImageHeaderData_t1300500262  L_4 = ___imageHeader0;
		int32_t L_5 = L_4.get_height_2();
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(7 /* System.Void Vuforia.Image::set_Height(System.Int32) */, L_3, L_5);
		ImageImpl_t1502331638 * L_6 = ___image1;
		ImageHeaderData_t1300500262  L_7 = ___imageHeader0;
		int32_t L_8 = L_7.get_stride_3();
		NullCheck(L_6);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void Vuforia.Image::set_Stride(System.Int32) */, L_6, L_8);
		ImageImpl_t1502331638 * L_9 = ___image1;
		ImageHeaderData_t1300500262  L_10 = ___imageHeader0;
		int32_t L_11 = L_10.get_bufferWidth_4();
		NullCheck(L_9);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void Vuforia.Image::set_BufferWidth(System.Int32) */, L_9, L_11);
		ImageImpl_t1502331638 * L_12 = ___image1;
		ImageHeaderData_t1300500262  L_13 = ___imageHeader0;
		int32_t L_14 = L_13.get_bufferHeight_5();
		NullCheck(L_12);
		VirtActionInvoker1< int32_t >::Invoke(13 /* System.Void Vuforia.Image::set_BufferHeight(System.Int32) */, L_12, L_14);
		ImageImpl_t1502331638 * L_15 = ___image1;
		ImageHeaderData_t1300500262  L_16 = ___imageHeader0;
		int32_t L_17 = L_16.get_format_6();
		NullCheck(L_15);
		VirtActionInvoker1< int32_t >::Invoke(15 /* System.Void Vuforia.Image::set_PixelFormat(Vuforia.Image/PIXEL_FORMAT) */, L_15, L_17);
		return;
	}
}
// System.Void Vuforia.WordImpl::AllocateImage(Vuforia.ImageImpl)
extern "C"  void WordImpl_AllocateImage_m2647442905 (RuntimeObject * __this /* static, unused */, ImageImpl_t1502331638 * ___image0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordImpl_AllocateImage_m2647442905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ImageImpl_t1502331638 * L_0 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		ImageImpl_t1502331638 * L_2 = ___image0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 Vuforia.Image::get_BufferWidth() */, L_2);
		ImageImpl_t1502331638 * L_4 = ___image0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Vuforia.Image::get_BufferHeight() */, L_4);
		ImageImpl_t1502331638 * L_6 = ___image0;
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(14 /* Vuforia.Image/PIXEL_FORMAT Vuforia.Image::get_PixelFormat() */, L_6);
		NullCheck(L_1);
		int32_t L_8 = InterfaceFuncInvoker3< int32_t, int32_t, int32_t, int32_t >::Invoke(112 /* System.Int32 Vuforia.IVuforiaWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_1, L_3, L_5, L_7);
		NullCheck(L_0);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(17 /* System.Void Vuforia.Image::set_Pixels(System.Byte[]) */, L_0, ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_8)));
		ImageImpl_t1502331638 * L_9 = ___image0;
		NullCheck(L_9);
		intptr_t L_10 = ImageImpl_get_UnmanagedData_m226027905(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		ImageImpl_t1502331638 * L_11 = ___image0;
		RuntimeObject* L_12 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		ImageImpl_t1502331638 * L_13 = ___image0;
		NullCheck(L_13);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 Vuforia.Image::get_BufferWidth() */, L_13);
		ImageImpl_t1502331638 * L_15 = ___image0;
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Vuforia.Image::get_BufferHeight() */, L_15);
		ImageImpl_t1502331638 * L_17 = ___image0;
		NullCheck(L_17);
		int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(14 /* Vuforia.Image/PIXEL_FORMAT Vuforia.Image::get_PixelFormat() */, L_17);
		NullCheck(L_12);
		int32_t L_19 = InterfaceFuncInvoker3< int32_t, int32_t, int32_t, int32_t >::Invoke(112 /* System.Int32 Vuforia.IVuforiaWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_12, L_14, L_16, L_18);
		intptr_t L_20 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_11);
		ImageImpl_set_UnmanagedData_m3954115235(L_11, L_20, /*hidden argument*/NULL);
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
// System.Void Vuforia.WordList::.ctor()
extern "C"  void WordList__ctor_m3277779240 (WordList_t3693642253 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String)
extern "C"  bool WordListImpl_LoadWordListFile_m534648086 (WordListImpl_t4149586592 * __this, String_t* ___relativePath0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___relativePath0;
		bool L_1 = VirtFuncInvoker2< bool, String_t*, int32_t >::Invoke(5 /* System.Boolean Vuforia.WordList::LoadWordListFile(System.String,Vuforia.VuforiaUnity/StorageType) */, __this, L_0, 1);
		return L_1;
	}
}
// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool WordListImpl_LoadWordListFile_m3735652484 (WordListImpl_t4149586592 * __this, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordListImpl_LoadWordListFile_m3735652484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path0;
		int32_t L_1 = ___storageType1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		String_t* L_2 = VuforiaRuntimeUtilities_GetStoragePath_m3854718746(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		___path0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = ___path0;
		int32_t L_5 = ___storageType1;
		NullCheck(L_3);
		int32_t L_6 = InterfaceFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(224 /* System.Int32 Vuforia.IVuforiaWrapper::WordListLoadWordList(System.String,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		return (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
	}
}
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String)
extern "C"  int32_t WordListImpl_AddWordsFromFile_m43741221 (WordListImpl_t4149586592 * __this, String_t* ___relativePath0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___relativePath0;
		int32_t L_1 = VirtFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(7 /* System.Int32 Vuforia.WordList::AddWordsFromFile(System.String,Vuforia.VuforiaUnity/StorageType) */, __this, L_0, 1);
		return L_1;
	}
}
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  int32_t WordListImpl_AddWordsFromFile_m469663869 (WordListImpl_t4149586592 * __this, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordListImpl_AddWordsFromFile_m469663869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path0;
		int32_t L_1 = ___storageType1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		String_t* L_2 = VuforiaRuntimeUtilities_GetStoragePath_m3854718746(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		___path0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = ___path0;
		int32_t L_5 = ___storageType1;
		NullCheck(L_3);
		int32_t L_6 = InterfaceFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(215 /* System.Int32 Vuforia.IVuforiaWrapper::WordListAddWordsFromFile(System.String,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Boolean Vuforia.WordListImpl::AddWord(System.String)
extern "C"  bool WordListImpl_AddWord_m4128054862 (WordListImpl_t4149586592 * __this, String_t* ___word0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordListImpl_AddWord_m4128054862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___word0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_1 = Marshal_StringToHGlobalUni_m3584015089(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(217 /* System.Int32 Vuforia.IVuforiaWrapper::WordListAddWordU(System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_2, L_3);
		intptr_t L_5 = V_0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordListImpl::RemoveWord(System.String)
extern "C"  bool WordListImpl_RemoveWord_m2880790773 (WordListImpl_t4149586592 * __this, String_t* ___word0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordListImpl_RemoveWord_m2880790773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___word0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_1 = Marshal_StringToHGlobalUni_m3584015089(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(226 /* System.Int32 Vuforia.IVuforiaWrapper::WordListRemoveWordU(System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_2, L_3);
		intptr_t L_5 = V_0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordListImpl::ContainsWord(System.String)
extern "C"  bool WordListImpl_ContainsWord_m3891893966 (WordListImpl_t4149586592 * __this, String_t* ___word0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordListImpl_ContainsWord_m3891893966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___word0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_1 = Marshal_StringToHGlobalUni_m3584015089(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(219 /* System.Int32 Vuforia.IVuforiaWrapper::WordListContainsWordU(System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_2, L_3);
		intptr_t L_5 = V_0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordListImpl::UnloadAllLists()
extern "C"  bool WordListImpl_UnloadAllLists_m4206234415 (WordListImpl_t4149586592 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordListImpl_UnloadAllLists_m4206234415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(228 /* System.Int32 Vuforia.IVuforiaWrapper::WordListUnloadAllLists() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// Vuforia.WordFilterMode Vuforia.WordListImpl::GetFilterMode()
extern "C"  int32_t WordListImpl_GetFilterMode_m2612055127 (WordListImpl_t4149586592 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordListImpl_GetFilterMode_m2612055127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(222 /* System.Int32 Vuforia.IVuforiaWrapper::WordListGetFilterMode() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0);
		return (int32_t)(L_1);
	}
}
// System.Boolean Vuforia.WordListImpl::SetFilterMode(Vuforia.WordFilterMode)
extern "C"  bool WordListImpl_SetFilterMode_m687373688 (WordListImpl_t4149586592 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordListImpl_SetFilterMode_m687373688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___mode0;
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(227 /* System.Int32 Vuforia.IVuforiaWrapper::WordListSetFilterMode(System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0, L_1);
		return (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String)
extern "C"  bool WordListImpl_LoadFilterListFile_m3071870260 (WordListImpl_t4149586592 * __this, String_t* ___relativePath0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___relativePath0;
		bool L_1 = VirtFuncInvoker2< bool, String_t*, int32_t >::Invoke(15 /* System.Boolean Vuforia.WordList::LoadFilterListFile(System.String,Vuforia.VuforiaUnity/StorageType) */, __this, L_0, 1);
		return L_1;
	}
}
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool WordListImpl_LoadFilterListFile_m174515806 (WordListImpl_t4149586592 * __this, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordListImpl_LoadFilterListFile_m174515806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path0;
		int32_t L_1 = ___storageType1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		String_t* L_2 = VuforiaRuntimeUtilities_GetStoragePath_m3854718746(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		___path0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = ___path0;
		int32_t L_5 = ___storageType1;
		NullCheck(L_3);
		int32_t L_6 = InterfaceFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(223 /* System.Int32 Vuforia.IVuforiaWrapper::WordListLoadFilterList(System.String,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		return (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordListImpl::AddWordToFilterList(System.String)
extern "C"  bool WordListImpl_AddWordToFilterList_m2042771583 (WordListImpl_t4149586592 * __this, String_t* ___word0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordListImpl_AddWordToFilterList_m2042771583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___word0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_1 = Marshal_StringToHGlobalUni_m3584015089(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(216 /* System.Int32 Vuforia.IVuforiaWrapper::WordListAddWordToFilterListU(System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_2, L_3);
		intptr_t L_5 = V_0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordListImpl::RemoveWordFromFilterList(System.String)
extern "C"  bool WordListImpl_RemoveWordFromFilterList_m794378321 (WordListImpl_t4149586592 * __this, String_t* ___word0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordListImpl_RemoveWordFromFilterList_m794378321_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___word0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_1 = Marshal_StringToHGlobalUni_m3584015089(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(225 /* System.Int32 Vuforia.IVuforiaWrapper::WordListRemoveWordFromFilterListU(System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_2, L_3);
		intptr_t L_5 = V_0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordListImpl::ClearFilterList()
extern "C"  bool WordListImpl_ClearFilterList_m1564849173 (WordListImpl_t4149586592 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordListImpl_ClearFilterList_m1564849173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(218 /* System.Int32 Vuforia.IVuforiaWrapper::WordListClearFilterList() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// System.Int32 Vuforia.WordListImpl::GetFilterListWordCount()
extern "C"  int32_t WordListImpl_GetFilterListWordCount_m2410144288 (WordListImpl_t4149586592 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordListImpl_GetFilterListWordCount_m2410144288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(220 /* System.Int32 Vuforia.IVuforiaWrapper::WordListGetFilterListWordCount() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String Vuforia.WordListImpl::GetFilterListWord(System.Int32)
extern "C"  String_t* WordListImpl_GetFilterListWord_m312920410 (WordListImpl_t4149586592 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordListImpl_GetFilterListWord_m312920410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		intptr_t L_2 = InterfaceFuncInvoker1< intptr_t, int32_t >::Invoke(221 /* System.IntPtr Vuforia.IVuforiaWrapper::WordListGetFilterListWordU(System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_3 = Marshal_PtrToStringUni_m175561854(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Vuforia.WordListImpl::.ctor()
extern "C"  void WordListImpl__ctor_m2933681669 (WordListImpl_t4149586592 * __this, const RuntimeMethod* method)
{
	{
		WordList__ctor_m3277779240(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.WordManager::.ctor()
extern "C"  void WordManager__ctor_m3858017893 (WordManager_t3100853168 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetActiveWordResults()
extern "C"  RuntimeObject* WordManagerImpl_GetActiveWordResults_m3622687505 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_GetActiveWordResults_m3622687505_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2529487133 * L_0 = __this->get_mTrackedWords_0();
		NullCheck(L_0);
		ValueCollection_t4245531451 * L_1 = Dictionary_2_get_Values_m1988163935(L_0, /*hidden argument*/Dictionary_2_get_Values_m1988163935_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetNewWords()
extern "C"  RuntimeObject* WordManagerImpl_GetNewWords_m1318048449 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method)
{
	{
		List_1_t817881248 * L_0 = __this->get_mNewWords_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.Word> Vuforia.WordManagerImpl::GetLostWords()
extern "C"  RuntimeObject* WordManagerImpl_GetLostWords_m1683678221 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method)
{
	{
		List_1_t2588113360 * L_0 = __this->get_mLostWords_2();
		return L_0;
	}
}
// System.Boolean Vuforia.WordManagerImpl::TryGetWordBehaviour(Vuforia.Word,Vuforia.WordAbstractBehaviour&)
extern "C"  bool WordManagerImpl_TryGetWordBehaviour_m2311062993 (WordManagerImpl_t1706254019 * __this, RuntimeObject* ___word0, WordAbstractBehaviour_t3502498754 ** ___behaviour1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_TryGetWordBehaviour_m2311062993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2391212085 * L_0 = __this->get_mActiveWordBehaviours_3();
		RuntimeObject* L_1 = ___word0;
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_1);
		WordAbstractBehaviour_t3502498754 ** L_3 = ___behaviour1;
		NullCheck(L_0);
		bool L_4 = Dictionary_2_TryGetValue_m2473385441(L_0, L_2, L_3, /*hidden argument*/Dictionary_2_TryGetValue_m2473385441_RuntimeMethod_var);
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::GetTrackableBehaviours()
extern "C"  RuntimeObject* WordManagerImpl_GetTrackableBehaviours_m2125317316 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_GetTrackableBehaviours_m2125317316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t679606200 * V_0 = NULL;
	Enumerator_t1033756156  V_1;
	memset(&V_1, 0, sizeof(V_1));
	List_1_t679606200 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t679606200 * L_0 = (List_1_t679606200 *)il2cpp_codegen_object_new(List_1_t679606200_il2cpp_TypeInfo_var);
		List_1__ctor_m1340911630(L_0, /*hidden argument*/List_1__ctor_m1340911630_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t464862499 * L_1 = __this->get_mWordBehaviours_7();
		NullCheck(L_1);
		ValueCollection_t2180906817 * L_2 = Dictionary_2_get_Values_m3684722382(L_1, /*hidden argument*/Dictionary_2_get_Values_m3684722382_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t1033756156  L_3 = ValueCollection_GetEnumerator_m913759295(L_2, /*hidden argument*/ValueCollection_GetEnumerator_m913759295_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0019:
		{
			List_1_t679606200 * L_4 = Enumerator_get_Current_m3610606923((&V_1), /*hidden argument*/Enumerator_get_Current_m3610606923_RuntimeMethod_var);
			V_2 = L_4;
			List_1_t679606200 * L_5 = V_0;
			List_1_t679606200 * L_6 = V_2;
			NullCheck(L_5);
			List_1_AddRange_m3556339343(L_5, L_6, /*hidden argument*/List_1_AddRange_m3556339343_RuntimeMethod_var);
		}

IL_0028:
		{
			bool L_7 = Enumerator_MoveNext_m3077790933((&V_1), /*hidden argument*/Enumerator_MoveNext_m3077790933_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0019;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3245589270((&V_1), /*hidden argument*/Enumerator_Dispose_m3245589270_RuntimeMethod_var);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0041:
	{
		List_1_t679606200 * L_8 = V_0;
		return L_8;
	}
}
// System.Void Vuforia.WordManagerImpl::DestroyWordBehaviour(Vuforia.WordAbstractBehaviour,System.Boolean)
extern "C"  void WordManagerImpl_DestroyWordBehaviour_m1278966964 (WordManagerImpl_t1706254019 * __this, WordAbstractBehaviour_t3502498754 * ___behaviour0, bool ___destroyGameObject1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_DestroyWordBehaviour_m1278966964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		Dictionary_2_t464862499 * L_0 = __this->get_mWordBehaviours_7();
		NullCheck(L_0);
		KeyCollection_t654537970 * L_1 = Dictionary_2_get_Keys_m3813149867(L_0, /*hidden argument*/Dictionary_2_get_Keys_m3813149867_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_2 = Enumerable_ToArray_TisString_t_m1789351813(NULL /*static, unused*/, L_1, /*hidden argument*/Enumerable_ToArray_TisString_t_m1789351813_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0086;
	}

IL_0015:
	{
		StringU5BU5D_t1281789340* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Dictionary_2_t464862499 * L_7 = __this->get_mWordBehaviours_7();
		String_t* L_8 = V_2;
		NullCheck(L_7);
		List_1_t679606200 * L_9 = Dictionary_2_get_Item_m540946376(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_m540946376_RuntimeMethod_var);
		WordAbstractBehaviour_t3502498754 * L_10 = ___behaviour0;
		NullCheck(L_9);
		bool L_11 = List_1_Contains_m2349174643(L_9, L_10, /*hidden argument*/List_1_Contains_m2349174643_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0082;
		}
	}
	{
		Dictionary_2_t464862499 * L_12 = __this->get_mWordBehaviours_7();
		String_t* L_13 = V_2;
		NullCheck(L_12);
		List_1_t679606200 * L_14 = Dictionary_2_get_Item_m540946376(L_12, L_13, /*hidden argument*/Dictionary_2_get_Item_m540946376_RuntimeMethod_var);
		WordAbstractBehaviour_t3502498754 * L_15 = ___behaviour0;
		NullCheck(L_14);
		List_1_Remove_m2457619985(L_14, L_15, /*hidden argument*/List_1_Remove_m2457619985_RuntimeMethod_var);
		Dictionary_2_t464862499 * L_16 = __this->get_mWordBehaviours_7();
		String_t* L_17 = V_2;
		NullCheck(L_16);
		List_1_t679606200 * L_18 = Dictionary_2_get_Item_m540946376(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_m540946376_RuntimeMethod_var);
		NullCheck(L_18);
		int32_t L_19 = List_1_get_Count_m2304474076(L_18, /*hidden argument*/List_1_get_Count_m2304474076_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_0060;
		}
	}
	{
		Dictionary_2_t464862499 * L_20 = __this->get_mWordBehaviours_7();
		String_t* L_21 = V_2;
		NullCheck(L_20);
		Dictionary_2_Remove_m718395589(L_20, L_21, /*hidden argument*/Dictionary_2_Remove_m718395589_RuntimeMethod_var);
	}

IL_0060:
	{
		bool L_22 = ___destroyGameObject1;
		if (!L_22)
		{
			goto IL_007c;
		}
	}
	{
		WordAbstractBehaviour_t3502498754 * L_23 = ___behaviour0;
		NullCheck(L_23);
		GameObject_t1113636619 * L_24 = Component_get_gameObject_m442555142(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		List_1_t679606200 * L_25 = __this->get_mWordBehavioursMarkedForDeletion_4();
		WordAbstractBehaviour_t3502498754 * L_26 = ___behaviour0;
		NullCheck(L_25);
		List_1_Add_m1844274312(L_25, L_26, /*hidden argument*/List_1_Add_m1844274312_RuntimeMethod_var);
		goto IL_0082;
	}

IL_007c:
	{
		WordAbstractBehaviour_t3502498754 * L_27 = ___behaviour0;
		NullCheck(L_27);
		TrackableBehaviour_UnregisterTrackable_m1272061837(L_27, /*hidden argument*/NULL);
	}

IL_0082:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0086:
	{
		int32_t L_29 = V_1;
		StringU5BU5D_t1281789340* L_30 = V_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates(Vuforia.WordPrefabCreationMode,System.Int32)
extern "C"  void WordManagerImpl_InitializeWordBehaviourTemplates_m3379382326 (WordManagerImpl_t1706254019 * __this, int32_t ___wordPrefabCreationMode0, int32_t ___maxInstances1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___wordPrefabCreationMode0;
		__this->set_mWordPrefabCreationMode_10(L_0);
		int32_t L_1 = ___maxInstances1;
		__this->set_mMaxInstances_9(L_1);
		WordManagerImpl_InitializeWordBehaviourTemplates_m1076279545(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates()
extern "C"  void WordManagerImpl_InitializeWordBehaviourTemplates_m1076279545 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_InitializeWordBehaviourTemplates_m1076279545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t679606200 * V_0 = NULL;
	Enumerator_t2568850077  V_1;
	memset(&V_1, 0, sizeof(V_1));
	WordAbstractBehaviour_t3502498754 * V_2 = NULL;
	WordAbstractBehaviourU5BU5D_t824744695* V_3 = NULL;
	int32_t V_4 = 0;
	WordAbstractBehaviour_t3502498754 * V_5 = NULL;
	String_t* V_6 = NULL;
	WordAbstractBehaviour_t3502498754 * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B15_0 = NULL;
	{
		int32_t L_0 = __this->get_mWordPrefabCreationMode_10();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_015e;
		}
	}
	{
		List_1_t679606200 * L_1 = __this->get_mWordBehavioursMarkedForDeletion_4();
		List_1_t679606200 * L_2 = Enumerable_ToList_TisWordAbstractBehaviour_t3502498754_m872951409(NULL /*static, unused*/, L_1, /*hidden argument*/Enumerable_ToList_TisWordAbstractBehaviour_t3502498754_m872951409_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = __this->get_mAutomaticTemplate_8();
		if (!L_3)
		{
			goto IL_008e;
		}
	}
	{
		Dictionary_2_t464862499 * L_4 = __this->get_mWordBehaviours_7();
		NullCheck(L_4);
		bool L_5 = Dictionary_2_ContainsKey_m3484035274(L_4, _stringLiteral3255970859, /*hidden argument*/Dictionary_2_ContainsKey_m3484035274_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_008e;
		}
	}
	{
		Dictionary_2_t464862499 * L_6 = __this->get_mWordBehaviours_7();
		NullCheck(L_6);
		List_1_t679606200 * L_7 = Dictionary_2_get_Item_m540946376(L_6, _stringLiteral3255970859, /*hidden argument*/Dictionary_2_get_Item_m540946376_RuntimeMethod_var);
		NullCheck(L_7);
		Enumerator_t2568850077  L_8 = List_1_GetEnumerator_m1822998082(L_7, /*hidden argument*/List_1_GetEnumerator_m1822998082_RuntimeMethod_var);
		V_1 = L_8;
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0064;
		}

IL_004a:
		{
			WordAbstractBehaviour_t3502498754 * L_9 = Enumerator_get_Current_m1691037174((&V_1), /*hidden argument*/Enumerator_get_Current_m1691037174_RuntimeMethod_var);
			V_2 = L_9;
			List_1_t679606200 * L_10 = V_0;
			WordAbstractBehaviour_t3502498754 * L_11 = V_2;
			NullCheck(L_10);
			List_1_Add_m1844274312(L_10, L_11, /*hidden argument*/List_1_Add_m1844274312_RuntimeMethod_var);
			WordAbstractBehaviour_t3502498754 * L_12 = V_2;
			NullCheck(L_12);
			GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Destroy_m565254235(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		}

IL_0064:
		{
			bool L_14 = Enumerator_MoveNext_m1247233199((&V_1), /*hidden argument*/Enumerator_MoveNext_m1247233199_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_004a;
			}
		}

IL_006d:
		{
			IL2CPP_LEAVE(0x7D, FINALLY_006f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1718767763((&V_1), /*hidden argument*/Enumerator_Dispose_m1718767763_RuntimeMethod_var);
		IL2CPP_END_FINALLY(111)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007d:
	{
		Dictionary_2_t464862499 * L_15 = __this->get_mWordBehaviours_7();
		NullCheck(L_15);
		Dictionary_2_Remove_m718395589(L_15, _stringLiteral3255970859, /*hidden argument*/Dictionary_2_Remove_m718395589_RuntimeMethod_var);
	}

IL_008e:
	{
		RuntimeTypeHandle_t3027515415  L_16 = { reinterpret_cast<intptr_t> (WordAbstractBehaviour_t3502498754_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1417781964* L_18 = Object_FindObjectsOfType_m2295101757(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_3 = ((WordAbstractBehaviourU5BU5D_t824744695*)Castclass((RuntimeObject*)L_18, WordAbstractBehaviourU5BU5D_t824744695_il2cpp_TypeInfo_var));
		V_4 = 0;
		goto IL_011a;
	}

IL_00a8:
	{
		WordAbstractBehaviourU5BU5D_t824744695* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		WordAbstractBehaviour_t3502498754 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		List_1_t679606200 * L_23 = V_0;
		WordAbstractBehaviour_t3502498754 * L_24 = V_5;
		NullCheck(L_23);
		bool L_25 = List_1_Contains_m2349174643(L_23, L_24, /*hidden argument*/List_1_Contains_m2349174643_RuntimeMethod_var);
		if (L_25)
		{
			goto IL_0114;
		}
	}
	{
		WordAbstractBehaviour_t3502498754 * L_26 = V_5;
		NullCheck(L_26);
		bool L_27 = WordAbstractBehaviour_get_IsTemplateMode_m3316615685(L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00cf;
		}
	}
	{
		WordAbstractBehaviour_t3502498754 * L_28 = V_5;
		NullCheck(L_28);
		String_t* L_29 = WordAbstractBehaviour_get_SpecificWord_m4130341814(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		String_t* L_30 = String_ToLowerInvariant_m110751226(L_29, /*hidden argument*/NULL);
		G_B15_0 = L_30;
		goto IL_00d4;
	}

IL_00cf:
	{
		G_B15_0 = _stringLiteral3255970859;
	}

IL_00d4:
	{
		V_6 = G_B15_0;
		Dictionary_2_t464862499 * L_31 = __this->get_mWordBehaviours_7();
		String_t* L_32 = V_6;
		NullCheck(L_31);
		bool L_33 = Dictionary_2_ContainsKey_m3484035274(L_31, L_32, /*hidden argument*/Dictionary_2_ContainsKey_m3484035274_RuntimeMethod_var);
		if (L_33)
		{
			goto IL_0114;
		}
	}
	{
		Dictionary_2_t464862499 * L_34 = __this->get_mWordBehaviours_7();
		String_t* L_35 = V_6;
		List_1_t679606200 * L_36 = (List_1_t679606200 *)il2cpp_codegen_object_new(List_1_t679606200_il2cpp_TypeInfo_var);
		List_1__ctor_m1340911630(L_36, /*hidden argument*/List_1__ctor_m1340911630_RuntimeMethod_var);
		List_1_t679606200 * L_37 = L_36;
		WordAbstractBehaviour_t3502498754 * L_38 = V_5;
		NullCheck(L_37);
		List_1_Add_m1844274312(L_37, L_38, /*hidden argument*/List_1_Add_m1844274312_RuntimeMethod_var);
		NullCheck(L_34);
		Dictionary_2_set_Item_m2715483925(L_34, L_35, L_37, /*hidden argument*/Dictionary_2_set_Item_m2715483925_RuntimeMethod_var);
		String_t* L_39 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_40 = String_op_Equality_m920492651(NULL /*static, unused*/, L_39, _stringLiteral3255970859, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0114;
		}
	}
	{
		__this->set_mAutomaticTemplate_8((bool)0);
	}

IL_0114:
	{
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_011a:
	{
		int32_t L_42 = V_4;
		WordAbstractBehaviourU5BU5D_t824744695* L_43 = V_3;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_43)->max_length)))))))
		{
			goto IL_00a8;
		}
	}
	{
		Dictionary_2_t464862499 * L_44 = __this->get_mWordBehaviours_7();
		NullCheck(L_44);
		bool L_45 = Dictionary_2_ContainsKey_m3484035274(L_44, _stringLiteral3255970859, /*hidden argument*/Dictionary_2_ContainsKey_m3484035274_RuntimeMethod_var);
		if (L_45)
		{
			goto IL_015e;
		}
	}
	{
		WordAbstractBehaviour_t3502498754 * L_46 = WordManagerImpl_CreateWordBehaviour_m2184743325(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_7 = L_46;
		Dictionary_2_t464862499 * L_47 = __this->get_mWordBehaviours_7();
		List_1_t679606200 * L_48 = (List_1_t679606200 *)il2cpp_codegen_object_new(List_1_t679606200_il2cpp_TypeInfo_var);
		List_1__ctor_m1340911630(L_48, /*hidden argument*/List_1__ctor_m1340911630_RuntimeMethod_var);
		List_1_t679606200 * L_49 = L_48;
		WordAbstractBehaviour_t3502498754 * L_50 = V_7;
		NullCheck(L_49);
		List_1_Add_m1844274312(L_49, L_50, /*hidden argument*/List_1_Add_m1844274312_RuntimeMethod_var);
		NullCheck(L_47);
		Dictionary_2_Add_m2842338649(L_47, _stringLiteral3255970859, L_49, /*hidden argument*/Dictionary_2_Add_m2842338649_RuntimeMethod_var);
		__this->set_mAutomaticTemplate_8((bool)1);
	}

IL_015e:
	{
		List_1_t679606200 * L_51 = __this->get_mWordBehavioursMarkedForDeletion_4();
		NullCheck(L_51);
		List_1_Clear_m2017220972(L_51, /*hidden argument*/List_1_Clear_m2017220972_RuntimeMethod_var);
		return;
	}
}
// System.Void Vuforia.WordManagerImpl::RemoveDestroyedTrackables()
extern "C"  void WordManagerImpl_RemoveDestroyedTrackables_m359084982 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_RemoveDestroyedTrackables_m359084982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1033756156  V_0;
	memset(&V_0, 0, sizeof(V_0));
	List_1_t679606200 * V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t1281789340* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	Int32U5BU5D_t385246372* V_6 = NULL;
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t464862499 * L_0 = __this->get_mWordBehaviours_7();
		NullCheck(L_0);
		ValueCollection_t2180906817 * L_1 = Dictionary_2_get_Values_m3684722382(L_0, /*hidden argument*/Dictionary_2_get_Values_m3684722382_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t1033756156  L_2 = ValueCollection_GetEnumerator_m913759295(L_1, /*hidden argument*/ValueCollection_GetEnumerator_m913759295_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0013:
		{
			List_1_t679606200 * L_3 = Enumerator_get_Current_m3610606923((&V_0), /*hidden argument*/Enumerator_get_Current_m3610606923_RuntimeMethod_var);
			V_1 = L_3;
			List_1_t679606200 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = List_1_get_Count_m2304474076(L_4, /*hidden argument*/List_1_get_Count_m2304474076_RuntimeMethod_var);
			V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
			goto IL_0040;
		}

IL_0026:
		{
			List_1_t679606200 * L_6 = V_1;
			int32_t L_7 = V_2;
			NullCheck(L_6);
			WordAbstractBehaviour_t3502498754 * L_8 = List_1_get_Item_m2000450760(L_6, L_7, /*hidden argument*/List_1_get_Item_m2000450760_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_003c;
			}
		}

IL_0035:
		{
			List_1_t679606200 * L_10 = V_1;
			int32_t L_11 = V_2;
			NullCheck(L_10);
			List_1_RemoveAt_m3027634645(L_10, L_11, /*hidden argument*/List_1_RemoveAt_m3027634645_RuntimeMethod_var);
		}

IL_003c:
		{
			int32_t L_12 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		}

IL_0040:
		{
			int32_t L_13 = V_2;
			if ((((int32_t)L_13) >= ((int32_t)0)))
			{
				goto IL_0026;
			}
		}

IL_0044:
		{
			bool L_14 = Enumerator_MoveNext_m3077790933((&V_0), /*hidden argument*/Enumerator_MoveNext_m3077790933_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0013;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3245589270((&V_0), /*hidden argument*/Enumerator_Dispose_m3245589270_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005d:
	{
		Dictionary_2_t464862499 * L_15 = __this->get_mWordBehaviours_7();
		NullCheck(L_15);
		KeyCollection_t654537970 * L_16 = Dictionary_2_get_Keys_m3813149867(L_15, /*hidden argument*/Dictionary_2_get_Keys_m3813149867_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_17 = Enumerable_ToArray_TisString_t_m1789351813(NULL /*static, unused*/, L_16, /*hidden argument*/Enumerable_ToArray_TisString_t_m1789351813_RuntimeMethod_var);
		V_3 = L_17;
		V_4 = 0;
		goto IL_00a1;
	}

IL_0073:
	{
		StringU5BU5D_t1281789340* L_18 = V_3;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		String_t* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_5 = L_21;
		Dictionary_2_t464862499 * L_22 = __this->get_mWordBehaviours_7();
		String_t* L_23 = V_5;
		NullCheck(L_22);
		List_1_t679606200 * L_24 = Dictionary_2_get_Item_m540946376(L_22, L_23, /*hidden argument*/Dictionary_2_get_Item_m540946376_RuntimeMethod_var);
		NullCheck(L_24);
		int32_t L_25 = List_1_get_Count_m2304474076(L_24, /*hidden argument*/List_1_get_Count_m2304474076_RuntimeMethod_var);
		if (L_25)
		{
			goto IL_009b;
		}
	}
	{
		Dictionary_2_t464862499 * L_26 = __this->get_mWordBehaviours_7();
		String_t* L_27 = V_5;
		NullCheck(L_26);
		Dictionary_2_Remove_m718395589(L_26, L_27, /*hidden argument*/Dictionary_2_Remove_m718395589_RuntimeMethod_var);
	}

IL_009b:
	{
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00a1:
	{
		int32_t L_29 = V_4;
		StringU5BU5D_t1281789340* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_0073;
		}
	}
	{
		Dictionary_2_t2391212085 * L_31 = __this->get_mActiveWordBehaviours_3();
		NullCheck(L_31);
		KeyCollection_t2580887556 * L_32 = Dictionary_2_get_Keys_m1582191240(L_31, /*hidden argument*/Dictionary_2_get_Keys_m1582191240_RuntimeMethod_var);
		Int32U5BU5D_t385246372* L_33 = Enumerable_ToArray_TisInt32_t2950945753_m2311522548(NULL /*static, unused*/, L_32, /*hidden argument*/Enumerable_ToArray_TisInt32_t2950945753_m2311522548_RuntimeMethod_var);
		V_6 = L_33;
		V_4 = 0;
		goto IL_00ef;
	}

IL_00bf:
	{
		Int32U5BU5D_t385246372* L_34 = V_6;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_7 = L_37;
		Dictionary_2_t2391212085 * L_38 = __this->get_mActiveWordBehaviours_3();
		int32_t L_39 = V_7;
		NullCheck(L_38);
		WordAbstractBehaviour_t3502498754 * L_40 = Dictionary_2_get_Item_m1262508171(L_38, L_39, /*hidden argument*/Dictionary_2_get_Item_m1262508171_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_41 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_40, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_00e9;
		}
	}
	{
		Dictionary_2_t2391212085 * L_42 = __this->get_mActiveWordBehaviours_3();
		int32_t L_43 = V_7;
		NullCheck(L_42);
		Dictionary_2_Remove_m374102063(L_42, L_43, /*hidden argument*/Dictionary_2_Remove_m374102063_RuntimeMethod_var);
	}

IL_00e9:
	{
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00ef:
	{
		int32_t L_45 = V_4;
		Int32U5BU5D_t385246372* L_46 = V_6;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_46)->max_length)))))))
		{
			goto IL_00bf;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.WordManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C"  void WordManagerImpl_UpdateWords_m3921480073 (WordManagerImpl_t1706254019 * __this, Transform_t3600365921 * ___arCameraTransform0, WordDataU5BU5D_t1962267332* ___newWordData1, WordResultDataU5BU5D_t2504770112* ___wordResults2, const RuntimeMethod* method)
{
	{
		WordDataU5BU5D_t1962267332* L_0 = ___newWordData1;
		WordResultDataU5BU5D_t2504770112* L_1 = ___wordResults2;
		WordManagerImpl_UpdateWords_m45616103(__this, (RuntimeObject*)(RuntimeObject*)L_0, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = ___arCameraTransform0;
		WordResultDataU5BU5D_t2504770112* L_3 = ___wordResults2;
		WordManagerImpl_UpdateWordResultPoses_m202733181(__this, L_2, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WordManagerImpl::SetWordBehavioursToNotFound()
extern "C"  void WordManagerImpl_SetWordBehavioursToNotFound_m3674997050 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_SetWordBehavioursToNotFound_m3674997050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2960105742  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2391212085 * L_0 = __this->get_mActiveWordBehaviours_3();
		NullCheck(L_0);
		ValueCollection_t4107256403 * L_1 = Dictionary_2_get_Values_m2630701907(L_0, /*hidden argument*/Dictionary_2_get_Values_m2630701907_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t2960105742  L_2 = ValueCollection_GetEnumerator_m3782761598(L_1, /*hidden argument*/ValueCollection_GetEnumerator_m3782761598_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0013:
		{
			WordAbstractBehaviour_t3502498754 * L_3 = Enumerator_get_Current_m908514610((&V_0), /*hidden argument*/Enumerator_get_Current_m908514610_RuntimeMethod_var);
			NullCheck(L_3);
			VirtActionInvoker1< int32_t >::Invoke(5 /* System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status) */, L_3, (-1));
		}

IL_0020:
		{
			bool L_4 = Enumerator_MoveNext_m1499977780((&V_0), /*hidden argument*/Enumerator_MoveNext_m1499977780_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0013;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m34336611((&V_0), /*hidden argument*/Enumerator_Dispose_m34336611_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0039:
	{
		return;
	}
}
// System.Void Vuforia.WordManagerImpl::CleanupWordBehaviours()
extern "C"  void WordManagerImpl_CleanupWordBehaviours_m3529255993 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_CleanupWordBehaviours_m3529255993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t817881248 * L_0 = __this->get_mNewWords_1();
		NullCheck(L_0);
		List_1_Clear_m3053871591(L_0, /*hidden argument*/List_1_Clear_m3053871591_RuntimeMethod_var);
		List_1_t2588113360 * L_1 = __this->get_mLostWords_2();
		NullCheck(L_1);
		List_1_Clear_m3489354309(L_1, /*hidden argument*/List_1_Clear_m3489354309_RuntimeMethod_var);
		List_1_t2588113360 * L_2 = __this->get_mWaitingQueue_5();
		NullCheck(L_2);
		List_1_Clear_m3489354309(L_2, /*hidden argument*/List_1_Clear_m3489354309_RuntimeMethod_var);
		Dictionary_2_t2529487133 * L_3 = __this->get_mTrackedWords_0();
		NullCheck(L_3);
		Dictionary_2_Clear_m3931322809(L_3, /*hidden argument*/Dictionary_2_Clear_m3931322809_RuntimeMethod_var);
		Dictionary_2_t2391212085 * L_4 = __this->get_mActiveWordBehaviours_3();
		NullCheck(L_4);
		Dictionary_2_Clear_m311547095(L_4, /*hidden argument*/Dictionary_2_Clear_m311547095_RuntimeMethod_var);
		Dictionary_2_t464862499 * L_5 = __this->get_mWordBehaviours_7();
		NullCheck(L_5);
		Dictionary_2_Clear_m776003790(L_5, /*hidden argument*/Dictionary_2_Clear_m776003790_RuntimeMethod_var);
		return;
	}
}
// System.Void Vuforia.WordManagerImpl::UpdateWords(System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C"  void WordManagerImpl_UpdateWords_m45616103 (WordManagerImpl_t1706254019 * __this, RuntimeObject* ___newWordData0, RuntimeObject* ___wordResults1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_UpdateWords_m45616103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t128053199 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WordData_t2883825721  V_2;
	memset(&V_2, 0, sizeof(V_2));
	WordResultImpl_t709252498 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	WordResultData_t1835118957  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Enumerator_t2017297076  V_6;
	memset(&V_6, 0, sizeof(V_6));
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t817881248 * L_0 = __this->get_mNewWords_1();
		NullCheck(L_0);
		List_1_Clear_m3053871591(L_0, /*hidden argument*/List_1_Clear_m3053871591_RuntimeMethod_var);
		List_1_t2588113360 * L_1 = __this->get_mLostWords_2();
		NullCheck(L_1);
		List_1_Clear_m3489354309(L_1, /*hidden argument*/List_1_Clear_m3489354309_RuntimeMethod_var);
		RuntimeObject* L_2 = ___newWordData0;
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>::GetEnumerator() */, IEnumerable_1_t1863678610_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0079;
		}

IL_001f:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			WordData_t2883825721  L_5 = InterfaceFuncInvoker0< WordData_t2883825721  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.VuforiaManagerImpl/WordData>::get_Current() */, IEnumerator_1_t3316396189_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			Dictionary_2_t2529487133 * L_6 = __this->get_mTrackedWords_0();
			WordData_t2883825721  L_7 = V_2;
			int32_t L_8 = L_7.get_id_1();
			NullCheck(L_6);
			bool L_9 = Dictionary_2_ContainsKey_m452890411(L_6, L_8, /*hidden argument*/Dictionary_2_ContainsKey_m452890411_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0079;
			}
		}

IL_0039:
		{
			WordData_t2883825721  L_10 = V_2;
			int32_t L_11 = L_10.get_id_1();
			WordData_t2883825721  L_12 = V_2;
			intptr_t L_13 = L_12.get_stringValue_0();
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
			String_t* L_14 = Marshal_PtrToStringUni_m175561854(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			WordData_t2883825721  L_15 = V_2;
			Vector2_t2156229523  L_16 = L_15.get_size_2();
			WordImpl_t2494369133 * L_17 = (WordImpl_t2494369133 *)il2cpp_codegen_object_new(WordImpl_t2494369133_il2cpp_TypeInfo_var);
			WordImpl__ctor_m518897599(L_17, L_11, L_14, L_16, /*hidden argument*/NULL);
			WordResultImpl_t709252498 * L_18 = (WordResultImpl_t709252498 *)il2cpp_codegen_object_new(WordResultImpl_t709252498_il2cpp_TypeInfo_var);
			WordResultImpl__ctor_m3731373850(L_18, L_17, /*hidden argument*/NULL);
			V_3 = L_18;
			Dictionary_2_t2529487133 * L_19 = __this->get_mTrackedWords_0();
			WordData_t2883825721  L_20 = V_2;
			int32_t L_21 = L_20.get_id_1();
			WordResultImpl_t709252498 * L_22 = V_3;
			NullCheck(L_19);
			Dictionary_2_Add_m417576055(L_19, L_21, L_22, /*hidden argument*/Dictionary_2_Add_m417576055_RuntimeMethod_var);
			List_1_t817881248 * L_23 = __this->get_mNewWords_1();
			WordResultImpl_t709252498 * L_24 = V_3;
			NullCheck(L_23);
			List_1_Add_m309338820(L_23, L_24, /*hidden argument*/List_1_Add_m309338820_RuntimeMethod_var);
		}

IL_0079:
		{
			RuntimeObject* L_25 = V_1;
			NullCheck(L_25);
			bool L_26 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_001f;
			}
		}

IL_0081:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_27 = V_1;
			if (!L_27)
			{
				goto IL_008c;
			}
		}

IL_0086:
		{
			RuntimeObject* L_28 = V_1;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_28);
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(131)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008d:
	{
		List_1_t128053199 * L_29 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_29, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		V_0 = L_29;
		RuntimeObject* L_30 = ___wordResults1;
		NullCheck(L_30);
		RuntimeObject* L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>::GetEnumerator() */, IEnumerable_1_t814971846_il2cpp_TypeInfo_var, L_30);
		V_4 = L_31;
	}

IL_009b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b3;
		}

IL_009d:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck(L_32);
			WordResultData_t1835118957  L_33 = InterfaceFuncInvoker0< WordResultData_t1835118957  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.VuforiaManagerImpl/WordResultData>::get_Current() */, IEnumerator_1_t2267689425_il2cpp_TypeInfo_var, L_32);
			V_5 = L_33;
			List_1_t128053199 * L_34 = V_0;
			WordResultData_t1835118957  L_35 = V_5;
			int32_t L_36 = L_35.get_id_3();
			NullCheck(L_34);
			List_1_Add_m697420525(L_34, L_36, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		}

IL_00b3:
		{
			RuntimeObject* L_37 = V_4;
			NullCheck(L_37);
			bool L_38 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_37);
			if (L_38)
			{
				goto IL_009d;
			}
		}

IL_00bc:
		{
			IL2CPP_LEAVE(0xCA, FINALLY_00be);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00be;
	}

FINALLY_00be:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_39 = V_4;
			if (!L_39)
			{
				goto IL_00c9;
			}
		}

IL_00c2:
		{
			RuntimeObject* L_40 = V_4;
			NullCheck(L_40);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_40);
		}

IL_00c9:
		{
			IL2CPP_END_FINALLY(190)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(190)
	{
		IL2CPP_JUMP_TBL(0xCA, IL_00ca)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ca:
	{
		Dictionary_2_t2529487133 * L_41 = __this->get_mTrackedWords_0();
		NullCheck(L_41);
		KeyCollection_t2719162604 * L_42 = Dictionary_2_get_Keys_m2166097550(L_41, /*hidden argument*/Dictionary_2_get_Keys_m2166097550_RuntimeMethod_var);
		List_1_t128053199 * L_43 = Enumerable_ToList_TisInt32_t2950945753_m1435865193(NULL /*static, unused*/, L_42, /*hidden argument*/Enumerable_ToList_TisInt32_t2950945753_m1435865193_RuntimeMethod_var);
		NullCheck(L_43);
		Enumerator_t2017297076  L_44 = List_1_GetEnumerator_m731136149(L_43, /*hidden argument*/List_1_GetEnumerator_m731136149_RuntimeMethod_var);
		V_6 = L_44;
	}

IL_00e1:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0121;
		}

IL_00e3:
		{
			int32_t L_45 = Enumerator_get_Current_m4088456620((&V_6), /*hidden argument*/Enumerator_get_Current_m4088456620_RuntimeMethod_var);
			V_7 = L_45;
			List_1_t128053199 * L_46 = V_0;
			int32_t L_47 = V_7;
			NullCheck(L_46);
			bool L_48 = List_1_Contains_m2934014725(L_46, L_47, /*hidden argument*/List_1_Contains_m2934014725_RuntimeMethod_var);
			if (L_48)
			{
				goto IL_0121;
			}
		}

IL_00f6:
		{
			List_1_t2588113360 * L_49 = __this->get_mLostWords_2();
			Dictionary_2_t2529487133 * L_50 = __this->get_mTrackedWords_0();
			int32_t L_51 = V_7;
			NullCheck(L_50);
			WordResult_t3640773802 * L_52 = Dictionary_2_get_Item_m2551113427(L_50, L_51, /*hidden argument*/Dictionary_2_get_Item_m2551113427_RuntimeMethod_var);
			NullCheck(L_52);
			RuntimeObject* L_53 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Word Vuforia.WordResult::get_Word() */, L_52);
			NullCheck(L_49);
			List_1_Add_m3459031900(L_49, L_53, /*hidden argument*/List_1_Add_m3459031900_RuntimeMethod_var);
			Dictionary_2_t2529487133 * L_54 = __this->get_mTrackedWords_0();
			int32_t L_55 = V_7;
			NullCheck(L_54);
			Dictionary_2_Remove_m1088040339(L_54, L_55, /*hidden argument*/Dictionary_2_Remove_m1088040339_RuntimeMethod_var);
		}

IL_0121:
		{
			bool L_56 = Enumerator_MoveNext_m2218650275((&V_6), /*hidden argument*/Enumerator_MoveNext_m2218650275_RuntimeMethod_var);
			if (L_56)
			{
				goto IL_00e3;
			}
		}

IL_012a:
		{
			IL2CPP_LEAVE(0x13A, FINALLY_012c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012c;
	}

FINALLY_012c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m222348240((&V_6), /*hidden argument*/Enumerator_Dispose_m222348240_RuntimeMethod_var);
		IL2CPP_END_FINALLY(300)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(300)
	{
		IL2CPP_JUMP_TBL(0x13A, IL_013a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_013a:
	{
		int32_t L_57 = __this->get_mWordPrefabCreationMode_10();
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_014f;
		}
	}
	{
		WordManagerImpl_UnregisterLostWords_m1779929106(__this, /*hidden argument*/NULL);
		WordManagerImpl_AssociateWordResultsWithBehaviours_m2814807548(__this, /*hidden argument*/NULL);
	}

IL_014f:
	{
		return;
	}
}
// System.Void Vuforia.WordManagerImpl::UpdateWordResultPoses(UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C"  void WordManagerImpl_UpdateWordResultPoses_m202733181 (WordManagerImpl_t1706254019 * __this, Transform_t3600365921 * ___arCameraTransform0, RuntimeObject* ___wordResults1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_UpdateWordResultPoses_m202733181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	VideoModeData_t2066817255  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	WordResultData_t1835118957  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Quaternion_t2301928331  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Quaternion_t2301928331  V_7;
	memset(&V_7, 0, sizeof(V_7));
	OrientedBoundingBox_t2769728497  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		VuforiaARController_t1876945237 * L_0 = __this->get_mVuforiaBehaviour_11();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_1 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mVuforiaBehaviour_11(L_1);
	}

IL_0013:
	{
		VuforiaARController_t1876945237 * L_2 = __this->get_mVuforiaBehaviour_11();
		NullCheck(L_2);
		Rect_t2360479859  L_3 = VuforiaARController_GetVideoBackgroundRectInViewPort_m1517317621(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		VuforiaARController_t1876945237 * L_4 = __this->get_mVuforiaBehaviour_11();
		NullCheck(L_4);
		int32_t L_5 = VuforiaARController_get_VideoBackGroundMirrored_m2793229335(L_4, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_6 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		VideoModeData_t2066817255  L_7 = VirtFuncInvoker0< VideoModeData_t2066817255  >::Invoke(9 /* Vuforia.CameraDevice/VideoModeData Vuforia.CameraDevice::GetVideoMode() */, L_6);
		V_2 = L_7;
		RuntimeObject* L_8 = ___wordResults1;
		NullCheck(L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>::GetEnumerator() */, IEnumerable_1_t814971846_il2cpp_TypeInfo_var, L_8);
		V_3 = L_9;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00fa;
		}

IL_0045:
		{
			RuntimeObject* L_10 = V_3;
			NullCheck(L_10);
			WordResultData_t1835118957  L_11 = InterfaceFuncInvoker0< WordResultData_t1835118957  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.VuforiaManagerImpl/WordResultData>::get_Current() */, IEnumerator_1_t2267689425_il2cpp_TypeInfo_var, L_10);
			V_4 = L_11;
			Dictionary_2_t2529487133 * L_12 = __this->get_mTrackedWords_0();
			WordResultData_t1835118957  L_13 = V_4;
			int32_t L_14 = L_13.get_id_3();
			NullCheck(L_12);
			WordResult_t3640773802 * L_15 = Dictionary_2_get_Item_m2551113427(L_12, L_14, /*hidden argument*/Dictionary_2_get_Item_m2551113427_RuntimeMethod_var);
			Transform_t3600365921 * L_16 = ___arCameraTransform0;
			WordResultData_t1835118957  L_17 = V_4;
			PoseData_t3114383412  L_18 = L_17.get_pose_0();
			Vector3_t3722313464  L_19 = L_18.get_position_0();
			NullCheck(L_16);
			Vector3_t3722313464  L_20 = Transform_TransformPoint_m226827784(L_16, L_19, /*hidden argument*/NULL);
			V_5 = L_20;
			WordResultData_t1835118957  L_21 = V_4;
			PoseData_t3114383412  L_22 = L_21.get_pose_0();
			Quaternion_t2301928331  L_23 = L_22.get_orientation_1();
			V_6 = L_23;
			Transform_t3600365921 * L_24 = ___arCameraTransform0;
			NullCheck(L_24);
			Quaternion_t2301928331  L_25 = Transform_get_rotation_m3502953881(L_24, /*hidden argument*/NULL);
			Quaternion_t2301928331  L_26 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
			Quaternion_t2301928331  L_27 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_28 = Vector3_get_left_m2428419009(NULL /*static, unused*/, /*hidden argument*/NULL);
			Quaternion_t2301928331  L_29 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, (270.0f), L_28, /*hidden argument*/NULL);
			Quaternion_t2301928331  L_30 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_27, L_29, /*hidden argument*/NULL);
			V_7 = L_30;
			WordResultImpl_t709252498 * L_31 = ((WordResultImpl_t709252498 *)CastclassClass((RuntimeObject*)L_15, WordResultImpl_t709252498_il2cpp_TypeInfo_var));
			Vector3_t3722313464  L_32 = V_5;
			Quaternion_t2301928331  L_33 = V_7;
			NullCheck(L_31);
			WordResultImpl_SetPose_m1787749657(L_31, L_32, L_33, /*hidden argument*/NULL);
			WordResultImpl_t709252498 * L_34 = L_31;
			int32_t L_35 = WordResultData_get_status_m1532178015((&V_4), /*hidden argument*/NULL);
			NullCheck(L_34);
			WordResultImpl_SetStatus_m1510737358(L_34, L_35, /*hidden argument*/NULL);
			WordResultData_t1835118957  L_36 = V_4;
			Obb2D_t3709259836  L_37 = L_36.get_orientedBoundingBox_4();
			Vector2_t2156229523  L_38 = L_37.get_center_0();
			WordResultData_t1835118957  L_39 = V_4;
			Obb2D_t3709259836  L_40 = L_39.get_orientedBoundingBox_4();
			Vector2_t2156229523  L_41 = L_40.get_halfExtents_1();
			WordResultData_t1835118957  L_42 = V_4;
			Obb2D_t3709259836  L_43 = L_42.get_orientedBoundingBox_4();
			float L_44 = L_43.get_rotation_2();
			OrientedBoundingBox__ctor_m1736506094((&V_8), L_38, L_41, L_44, /*hidden argument*/NULL);
			OrientedBoundingBox_t2769728497  L_45 = V_8;
			Rect_t2360479859  L_46 = V_0;
			bool L_47 = V_1;
			VideoModeData_t2066817255  L_48 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
			OrientedBoundingBox_t2769728497  L_49 = VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m626826678(NULL /*static, unused*/, L_45, L_46, L_47, L_48, /*hidden argument*/NULL);
			NullCheck(L_34);
			WordResultImpl_SetObb_m3870243631(L_34, L_49, /*hidden argument*/NULL);
		}

IL_00fa:
		{
			RuntimeObject* L_50 = V_3;
			NullCheck(L_50);
			bool L_51 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_50);
			if (L_51)
			{
				goto IL_0045;
			}
		}

IL_0105:
		{
			IL2CPP_LEAVE(0x111, FINALLY_0107);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0107;
	}

FINALLY_0107:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_52 = V_3;
			if (!L_52)
			{
				goto IL_0110;
			}
		}

IL_010a:
		{
			RuntimeObject* L_53 = V_3;
			NullCheck(L_53);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_53);
		}

IL_0110:
		{
			IL2CPP_END_FINALLY(263)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(263)
	{
		IL2CPP_JUMP_TBL(0x111, IL_0111)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0111:
	{
		int32_t L_54 = __this->get_mWordPrefabCreationMode_10();
		if ((!(((uint32_t)L_54) == ((uint32_t)1))))
		{
			goto IL_0120;
		}
	}
	{
		WordManagerImpl_UpdateWordBehaviourPoses_m1959006798(__this, /*hidden argument*/NULL);
	}

IL_0120:
	{
		return;
	}
}
// System.Void Vuforia.WordManagerImpl::AssociateWordResultsWithBehaviours()
extern "C"  void WordManagerImpl_AssociateWordResultsWithBehaviours_m2814807548 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_AssociateWordResultsWithBehaviours_m2814807548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t182389941  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	WordResult_t3640773802 * V_2 = NULL;
	Enumerator_t2707125125  V_3;
	memset(&V_3, 0, sizeof(V_3));
	WordResult_t3640773802 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2588113360 * L_0 = __this->get_mWaitingQueue_5();
		List_1_t2588113360 * L_1 = (List_1_t2588113360 *)il2cpp_codegen_object_new(List_1_t2588113360_il2cpp_TypeInfo_var);
		List_1__ctor_m3158419898(L_1, L_0, /*hidden argument*/List_1__ctor_m3158419898_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t182389941  L_2 = List_1_GetEnumerator_m2302738403(L_1, /*hidden argument*/List_1_GetEnumerator_m2302738403_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006b;
		}

IL_0013:
		{
			RuntimeObject* L_3 = Enumerator_get_Current_m2736178487((&V_0), /*hidden argument*/Enumerator_get_Current_m2736178487_RuntimeMethod_var);
			V_1 = L_3;
			Dictionary_2_t2529487133 * L_4 = __this->get_mTrackedWords_0();
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			int32_t L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_5);
			NullCheck(L_4);
			bool L_7 = Dictionary_2_ContainsKey_m452890411(L_4, L_6, /*hidden argument*/Dictionary_2_ContainsKey_m452890411_RuntimeMethod_var);
			if (!L_7)
			{
				goto IL_005e;
			}
		}

IL_002e:
		{
			Dictionary_2_t2529487133 * L_8 = __this->get_mTrackedWords_0();
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_9);
			NullCheck(L_8);
			WordResult_t3640773802 * L_11 = Dictionary_2_get_Item_m2551113427(L_8, L_10, /*hidden argument*/Dictionary_2_get_Item_m2551113427_RuntimeMethod_var);
			V_2 = L_11;
			WordResult_t3640773802 * L_12 = V_2;
			WordAbstractBehaviour_t3502498754 * L_13 = WordManagerImpl_AssociateWordBehaviour_m533403448(__this, L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_14 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_13, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_006b;
			}
		}

IL_004f:
		{
			List_1_t2588113360 * L_15 = __this->get_mWaitingQueue_5();
			RuntimeObject* L_16 = V_1;
			NullCheck(L_15);
			List_1_Remove_m1056585745(L_15, L_16, /*hidden argument*/List_1_Remove_m1056585745_RuntimeMethod_var);
			goto IL_006b;
		}

IL_005e:
		{
			List_1_t2588113360 * L_17 = __this->get_mWaitingQueue_5();
			RuntimeObject* L_18 = V_1;
			NullCheck(L_17);
			List_1_Remove_m1056585745(L_17, L_18, /*hidden argument*/List_1_Remove_m1056585745_RuntimeMethod_var);
		}

IL_006b:
		{
			bool L_19 = Enumerator_MoveNext_m2288170636((&V_0), /*hidden argument*/Enumerator_MoveNext_m2288170636_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0013;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x84, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3471433355((&V_0), /*hidden argument*/Enumerator_Dispose_m3471433355_RuntimeMethod_var);
		IL2CPP_END_FINALLY(118)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_JUMP_TBL(0x84, IL_0084)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0084:
	{
		List_1_t817881248 * L_20 = __this->get_mNewWords_1();
		NullCheck(L_20);
		Enumerator_t2707125125  L_21 = List_1_GetEnumerator_m2482267928(L_20, /*hidden argument*/List_1_GetEnumerator_m2482267928_RuntimeMethod_var);
		V_3 = L_21;
	}

IL_0090:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bd;
		}

IL_0092:
		{
			WordResult_t3640773802 * L_22 = Enumerator_get_Current_m4042749952((&V_3), /*hidden argument*/Enumerator_get_Current_m4042749952_RuntimeMethod_var);
			V_4 = L_22;
			WordResult_t3640773802 * L_23 = V_4;
			WordAbstractBehaviour_t3502498754 * L_24 = WordManagerImpl_AssociateWordBehaviour_m533403448(__this, L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_25 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_24, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_00bd;
			}
		}

IL_00ab:
		{
			List_1_t2588113360 * L_26 = __this->get_mWaitingQueue_5();
			WordResult_t3640773802 * L_27 = V_4;
			NullCheck(L_27);
			RuntimeObject* L_28 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Word Vuforia.WordResult::get_Word() */, L_27);
			NullCheck(L_26);
			List_1_Add_m3459031900(L_26, L_28, /*hidden argument*/List_1_Add_m3459031900_RuntimeMethod_var);
		}

IL_00bd:
		{
			bool L_29 = Enumerator_MoveNext_m2572193847((&V_3), /*hidden argument*/Enumerator_MoveNext_m2572193847_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_0092;
			}
		}

IL_00c6:
		{
			IL2CPP_LEAVE(0xD6, FINALLY_00c8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c8;
	}

FINALLY_00c8:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1326660095((&V_3), /*hidden argument*/Enumerator_Dispose_m1326660095_RuntimeMethod_var);
		IL2CPP_END_FINALLY(200)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(200)
	{
		IL2CPP_JUMP_TBL(0xD6, IL_00d6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d6:
	{
		return;
	}
}
// System.Void Vuforia.WordManagerImpl::UnregisterLostWords()
extern "C"  void WordManagerImpl_UnregisterLostWords_m1779929106 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_UnregisterLostWords_m1779929106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t182389941  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2588113360 * L_0 = __this->get_mLostWords_2();
		NullCheck(L_0);
		Enumerator_t182389941  L_1 = List_1_GetEnumerator_m2302738403(L_0, /*hidden argument*/List_1_GetEnumerator_m2302738403_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0058;
		}

IL_000e:
		{
			RuntimeObject* L_2 = Enumerator_get_Current_m2736178487((&V_0), /*hidden argument*/Enumerator_get_Current_m2736178487_RuntimeMethod_var);
			V_1 = L_2;
			Dictionary_2_t2391212085 * L_3 = __this->get_mActiveWordBehaviours_3();
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_4);
			NullCheck(L_3);
			bool L_6 = Dictionary_2_ContainsKey_m2817422666(L_3, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m2817422666_RuntimeMethod_var);
			if (!L_6)
			{
				goto IL_0058;
			}
		}

IL_0029:
		{
			Dictionary_2_t2391212085 * L_7 = __this->get_mActiveWordBehaviours_3();
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			int32_t L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_8);
			NullCheck(L_7);
			WordAbstractBehaviour_t3502498754 * L_10 = Dictionary_2_get_Item_m1262508171(L_7, L_9, /*hidden argument*/Dictionary_2_get_Item_m1262508171_RuntimeMethod_var);
			WordAbstractBehaviour_t3502498754 * L_11 = L_10;
			NullCheck(L_11);
			VirtActionInvoker1< int32_t >::Invoke(5 /* System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status) */, L_11, (-1));
			NullCheck(L_11);
			TrackableBehaviour_UnregisterTrackable_m1272061837(L_11, /*hidden argument*/NULL);
			Dictionary_2_t2391212085 * L_12 = __this->get_mActiveWordBehaviours_3();
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			int32_t L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_13);
			NullCheck(L_12);
			Dictionary_2_Remove_m374102063(L_12, L_14, /*hidden argument*/Dictionary_2_Remove_m374102063_RuntimeMethod_var);
		}

IL_0058:
		{
			bool L_15 = Enumerator_MoveNext_m2288170636((&V_0), /*hidden argument*/Enumerator_MoveNext_m2288170636_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_000e;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x71, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3471433355((&V_0), /*hidden argument*/Enumerator_Dispose_m3471433355_RuntimeMethod_var);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x71, IL_0071)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0071:
	{
		return;
	}
}
// System.Void Vuforia.WordManagerImpl::UpdateWordBehaviourPoses()
extern "C"  void WordManagerImpl_UpdateWordBehaviourPoses_m1959006798 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_UpdateWordBehaviourPoses_m1959006798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t50427564  V_0;
	memset(&V_0, 0, sizeof(V_0));
	KeyValuePair_2_t493916956  V_1;
	memset(&V_1, 0, sizeof(V_1));
	WordResult_t3640773802 * V_2 = NULL;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Quaternion_t2301928331  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2_t2156229523  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2391212085 * L_0 = __this->get_mActiveWordBehaviours_3();
		NullCheck(L_0);
		Enumerator_t50427564  L_1 = Dictionary_2_GetEnumerator_m3523622513(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3523622513_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00db;
		}

IL_0011:
		{
			KeyValuePair_2_t493916956  L_2 = Enumerator_get_Current_m2971210107((&V_0), /*hidden argument*/Enumerator_get_Current_m2971210107_RuntimeMethod_var);
			V_1 = L_2;
			Dictionary_2_t2529487133 * L_3 = __this->get_mTrackedWords_0();
			int32_t L_4 = KeyValuePair_2_get_Key_m2231391363((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m2231391363_RuntimeMethod_var);
			NullCheck(L_3);
			bool L_5 = Dictionary_2_ContainsKey_m452890411(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_m452890411_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_00db;
			}
		}

IL_0030:
		{
			Dictionary_2_t2529487133 * L_6 = __this->get_mTrackedWords_0();
			int32_t L_7 = KeyValuePair_2_get_Key_m2231391363((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m2231391363_RuntimeMethod_var);
			NullCheck(L_6);
			WordResult_t3640773802 * L_8 = Dictionary_2_get_Item_m2551113427(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_m2551113427_RuntimeMethod_var);
			V_2 = L_8;
			WordResult_t3640773802 * L_9 = V_2;
			NullCheck(L_9);
			Vector3_t3722313464  L_10 = VirtFuncInvoker0< Vector3_t3722313464  >::Invoke(6 /* UnityEngine.Vector3 Vuforia.WordResult::get_Position() */, L_9);
			V_3 = L_10;
			WordResult_t3640773802 * L_11 = V_2;
			NullCheck(L_11);
			Quaternion_t2301928331  L_12 = VirtFuncInvoker0< Quaternion_t2301928331  >::Invoke(7 /* UnityEngine.Quaternion Vuforia.WordResult::get_Orientation() */, L_11);
			V_4 = L_12;
			WordResult_t3640773802 * L_13 = V_2;
			NullCheck(L_13);
			RuntimeObject* L_14 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Word Vuforia.WordResult::get_Word() */, L_13);
			NullCheck(L_14);
			Vector2_t2156229523  L_15 = InterfaceFuncInvoker0< Vector2_t2156229523  >::Invoke(1 /* UnityEngine.Vector2 Vuforia.Word::get_Size() */, Word_t1116038618_il2cpp_TypeInfo_var, L_14);
			V_5 = L_15;
			WordAbstractBehaviour_t3502498754 * L_16 = KeyValuePair_2_get_Value_m1287558029((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1287558029_RuntimeMethod_var);
			NullCheck(L_16);
			Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(L_16, /*hidden argument*/NULL);
			Quaternion_t2301928331  L_18 = V_4;
			NullCheck(L_17);
			Transform_set_rotation_m3524318132(L_17, L_18, /*hidden argument*/NULL);
			WordAbstractBehaviour_t3502498754 * L_19 = KeyValuePair_2_get_Value_m1287558029((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1287558029_RuntimeMethod_var);
			NullCheck(L_19);
			Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			Quaternion_t2301928331  L_21 = Transform_get_rotation_m3502953881(L_20, /*hidden argument*/NULL);
			Vector2_t2156229523  L_22 = V_5;
			float L_23 = L_22.get_x_0();
			Vector2_t2156229523  L_24 = V_5;
			float L_25 = L_24.get_y_1();
			Vector3_t3722313464  L_26;
			memset(&L_26, 0, sizeof(L_26));
			Vector3__ctor_m3353183577((&L_26), ((float)il2cpp_codegen_multiply((float)((-L_23)), (float)(0.5f))), (0.0f), ((float)il2cpp_codegen_multiply((float)((-L_25)), (float)(0.5f))), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_27 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_21, L_26, /*hidden argument*/NULL);
			V_6 = L_27;
			WordAbstractBehaviour_t3502498754 * L_28 = KeyValuePair_2_get_Value_m1287558029((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1287558029_RuntimeMethod_var);
			NullCheck(L_28);
			Transform_t3600365921 * L_29 = Component_get_transform_m3162698980(L_28, /*hidden argument*/NULL);
			Vector3_t3722313464  L_30 = V_3;
			Vector3_t3722313464  L_31 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_32 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
			NullCheck(L_29);
			Transform_set_position_m3387557959(L_29, L_32, /*hidden argument*/NULL);
			WordAbstractBehaviour_t3502498754 * L_33 = KeyValuePair_2_get_Value_m1287558029((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1287558029_RuntimeMethod_var);
			WordResult_t3640773802 * L_34 = V_2;
			NullCheck(L_34);
			int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(8 /* Vuforia.TrackableBehaviour/Status Vuforia.WordResult::get_CurrentStatus() */, L_34);
			NullCheck(L_33);
			VirtActionInvoker1< int32_t >::Invoke(5 /* System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status) */, L_33, L_35);
		}

IL_00db:
		{
			bool L_36 = Enumerator_MoveNext_m2155600675((&V_0), /*hidden argument*/Enumerator_MoveNext_m2155600675_RuntimeMethod_var);
			if (L_36)
			{
				goto IL_0011;
			}
		}

IL_00e7:
		{
			IL2CPP_LEAVE(0xF7, FINALLY_00e9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e9;
	}

FINALLY_00e9:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2180775004((&V_0), /*hidden argument*/Enumerator_Dispose_m2180775004_RuntimeMethod_var);
		IL2CPP_END_FINALLY(233)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(233)
	{
		IL2CPP_JUMP_TBL(0xF7, IL_00f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f7:
	{
		return;
	}
}
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult)
extern "C"  WordAbstractBehaviour_t3502498754 * WordManagerImpl_AssociateWordBehaviour_m533403448 (WordManagerImpl_t1706254019 * __this, WordResult_t3640773802 * ___wordResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_AssociateWordBehaviour_m533403448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	List_1_t679606200 * V_1 = NULL;
	Enumerator_t2568850077  V_2;
	memset(&V_2, 0, sizeof(V_2));
	WordAbstractBehaviour_t3502498754 * V_3 = NULL;
	WordAbstractBehaviour_t3502498754 * V_4 = NULL;
	WordAbstractBehaviour_t3502498754 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		WordResult_t3640773802 * L_0 = ___wordResult0;
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Word Vuforia.WordResult::get_Word() */, L_0);
		NullCheck(L_1);
		String_t* L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Vuforia.Word::get_StringValue() */, Word_t1116038618_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		String_t* L_3 = String_ToLowerInvariant_m110751226(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Dictionary_2_t464862499 * L_4 = __this->get_mWordBehaviours_7();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = Dictionary_2_ContainsKey_m3484035274(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m3484035274_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		Dictionary_2_t464862499 * L_7 = __this->get_mWordBehaviours_7();
		String_t* L_8 = V_0;
		NullCheck(L_7);
		List_1_t679606200 * L_9 = Dictionary_2_get_Item_m540946376(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_m540946376_RuntimeMethod_var);
		V_1 = L_9;
		goto IL_0065;
	}

IL_002e:
	{
		Dictionary_2_t464862499 * L_10 = __this->get_mWordBehaviours_7();
		NullCheck(L_10);
		bool L_11 = Dictionary_2_ContainsKey_m3484035274(L_10, _stringLiteral3255970859, /*hidden argument*/Dictionary_2_ContainsKey_m3484035274_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		Dictionary_2_t464862499 * L_12 = __this->get_mWordBehaviours_7();
		NullCheck(L_12);
		List_1_t679606200 * L_13 = Dictionary_2_get_Item_m540946376(L_12, _stringLiteral3255970859, /*hidden argument*/Dictionary_2_get_Item_m540946376_RuntimeMethod_var);
		V_1 = L_13;
		goto IL_0065;
	}

IL_0053:
	{
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral508940442, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		return (WordAbstractBehaviour_t3502498754 *)NULL;
	}

IL_0065:
	{
		List_1_t679606200 * L_16 = V_1;
		NullCheck(L_16);
		Enumerator_t2568850077  L_17 = List_1_GetEnumerator_m1822998082(L_16, /*hidden argument*/List_1_GetEnumerator_m1822998082_RuntimeMethod_var);
		V_2 = L_17;
	}

IL_006c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008a;
		}

IL_006e:
		{
			WordAbstractBehaviour_t3502498754 * L_18 = Enumerator_get_Current_m1691037174((&V_2), /*hidden argument*/Enumerator_get_Current_m1691037174_RuntimeMethod_var);
			V_3 = L_18;
			WordAbstractBehaviour_t3502498754 * L_19 = V_3;
			NullCheck(L_19);
			RuntimeObject* L_20 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable() */, L_19);
			if (L_20)
			{
				goto IL_008a;
			}
		}

IL_007e:
		{
			WordResult_t3640773802 * L_21 = ___wordResult0;
			WordAbstractBehaviour_t3502498754 * L_22 = V_3;
			WordAbstractBehaviour_t3502498754 * L_23 = WordManagerImpl_AssociateWordBehaviour_m1328890788(__this, L_21, L_22, /*hidden argument*/NULL);
			V_4 = L_23;
			IL2CPP_LEAVE(0xD2, FINALLY_0095);
		}

IL_008a:
		{
			bool L_24 = Enumerator_MoveNext_m1247233199((&V_2), /*hidden argument*/Enumerator_MoveNext_m1247233199_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_006e;
			}
		}

IL_0093:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_0095);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0095;
	}

FINALLY_0095:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1718767763((&V_2), /*hidden argument*/Enumerator_Dispose_m1718767763_RuntimeMethod_var);
		IL2CPP_END_FINALLY(149)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(149)
	{
		IL2CPP_JUMP_TBL(0xD2, IL_00d2)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a3:
	{
		List_1_t679606200 * L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = List_1_get_Count_m2304474076(L_25, /*hidden argument*/List_1_get_Count_m2304474076_RuntimeMethod_var);
		int32_t L_27 = __this->get_mMaxInstances_9();
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_00d0;
		}
	}
	{
		List_1_t679606200 * L_28 = V_1;
		WordAbstractBehaviour_t3502498754 * L_29 = Enumerable_First_TisWordAbstractBehaviour_t3502498754_m2180848752(NULL /*static, unused*/, L_28, /*hidden argument*/Enumerable_First_TisWordAbstractBehaviour_t3502498754_m2180848752_RuntimeMethod_var);
		WordAbstractBehaviour_t3502498754 * L_30 = WordManagerImpl_InstantiateWordBehaviour_m755952090(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		V_5 = L_30;
		List_1_t679606200 * L_31 = V_1;
		WordAbstractBehaviour_t3502498754 * L_32 = V_5;
		NullCheck(L_31);
		List_1_Add_m1844274312(L_31, L_32, /*hidden argument*/List_1_Add_m1844274312_RuntimeMethod_var);
		WordResult_t3640773802 * L_33 = ___wordResult0;
		WordAbstractBehaviour_t3502498754 * L_34 = V_5;
		WordAbstractBehaviour_t3502498754 * L_35 = WordManagerImpl_AssociateWordBehaviour_m1328890788(__this, L_33, L_34, /*hidden argument*/NULL);
		return L_35;
	}

IL_00d0:
	{
		return (WordAbstractBehaviour_t3502498754 *)NULL;
	}

IL_00d2:
	{
		WordAbstractBehaviour_t3502498754 * L_36 = V_4;
		return L_36;
	}
}
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult,Vuforia.WordAbstractBehaviour)
extern "C"  WordAbstractBehaviour_t3502498754 * WordManagerImpl_AssociateWordBehaviour_m1328890788 (WordManagerImpl_t1706254019 * __this, WordResult_t3640773802 * ___wordResult0, WordAbstractBehaviour_t3502498754 * ___wordBehaviourTemplate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_AssociateWordBehaviour_m1328890788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	WordAbstractBehaviour_t3502498754 * V_1 = NULL;
	{
		Dictionary_2_t2391212085 * L_0 = __this->get_mActiveWordBehaviours_3();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m931247448(L_0, /*hidden argument*/Dictionary_2_get_Count_m931247448_RuntimeMethod_var);
		int32_t L_2 = __this->get_mMaxInstances_9();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}
	{
		return (WordAbstractBehaviour_t3502498754 *)NULL;
	}

IL_0015:
	{
		WordResult_t3640773802 * L_3 = ___wordResult0;
		NullCheck(L_3);
		RuntimeObject* L_4 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Word Vuforia.WordResult::get_Word() */, L_3);
		V_0 = L_4;
		WordAbstractBehaviour_t3502498754 * L_5 = ___wordBehaviourTemplate1;
		V_1 = L_5;
		WordAbstractBehaviour_t3502498754 * L_6 = V_1;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_6);
		WordAbstractBehaviour_InitializeWord_m3005938285(L_6, L_7, /*hidden argument*/NULL);
		Dictionary_2_t2391212085 * L_8 = __this->get_mActiveWordBehaviours_3();
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_9);
		WordAbstractBehaviour_t3502498754 * L_11 = V_1;
		NullCheck(L_8);
		Dictionary_2_Add_m2441072686(L_8, L_10, L_11, /*hidden argument*/Dictionary_2_Add_m2441072686_RuntimeMethod_var);
		WordAbstractBehaviour_t3502498754 * L_12 = V_1;
		return L_12;
	}
}
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::InstantiateWordBehaviour(Vuforia.WordAbstractBehaviour)
extern "C"  WordAbstractBehaviour_t3502498754 * WordManagerImpl_InstantiateWordBehaviour_m755952090 (RuntimeObject * __this /* static, unused */, WordAbstractBehaviour_t3502498754 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_InstantiateWordBehaviour_m755952090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WordAbstractBehaviour_t3502498754 * L_0 = ___input0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_2 = Object_Instantiate_TisGameObject_t1113636619_m3342487772(NULL /*static, unused*/, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3342487772_RuntimeMethod_var);
		NullCheck(L_2);
		WordAbstractBehaviour_t3502498754 * L_3 = GameObject_GetComponent_TisWordAbstractBehaviour_t3502498754_m3936702387(L_2, /*hidden argument*/GameObject_GetComponent_TisWordAbstractBehaviour_t3502498754_m3936702387_RuntimeMethod_var);
		return L_3;
	}
}
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::CreateWordBehaviour()
extern "C"  WordAbstractBehaviour_t3502498754 * WordManagerImpl_CreateWordBehaviour_m2184743325 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl_CreateWordBehaviour_m2184743325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral1861372873, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = BehaviourComponentFactory_get_Instance_m2693467477(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = V_0;
		NullCheck(L_1);
		WordAbstractBehaviour_t3502498754 * L_3 = InterfaceFuncInvoker1< WordAbstractBehaviour_t3502498754 *, GameObject_t1113636619 * >::Invoke(6 /* Vuforia.WordAbstractBehaviour Vuforia.IBehaviourComponentFactory::AddWordBehaviour(UnityEngine.GameObject) */, IBehaviourComponentFactory_t960979374_il2cpp_TypeInfo_var, L_1, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral277781720, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Vuforia.WordManagerImpl::.ctor()
extern "C"  void WordManagerImpl__ctor_m1897184631 (WordManagerImpl_t1706254019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManagerImpl__ctor_m1897184631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2529487133 * L_0 = (Dictionary_2_t2529487133 *)il2cpp_codegen_object_new(Dictionary_2_t2529487133_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2165170305(L_0, /*hidden argument*/Dictionary_2__ctor_m2165170305_RuntimeMethod_var);
		__this->set_mTrackedWords_0(L_0);
		List_1_t817881248 * L_1 = (List_1_t817881248 *)il2cpp_codegen_object_new(List_1_t817881248_il2cpp_TypeInfo_var);
		List_1__ctor_m3369957770(L_1, /*hidden argument*/List_1__ctor_m3369957770_RuntimeMethod_var);
		__this->set_mNewWords_1(L_1);
		List_1_t2588113360 * L_2 = (List_1_t2588113360 *)il2cpp_codegen_object_new(List_1_t2588113360_il2cpp_TypeInfo_var);
		List_1__ctor_m3294312876(L_2, /*hidden argument*/List_1__ctor_m3294312876_RuntimeMethod_var);
		__this->set_mLostWords_2(L_2);
		Dictionary_2_t2391212085 * L_3 = (Dictionary_2_t2391212085 *)il2cpp_codegen_object_new(Dictionary_2_t2391212085_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m888218496(L_3, /*hidden argument*/Dictionary_2__ctor_m888218496_RuntimeMethod_var);
		__this->set_mActiveWordBehaviours_3(L_3);
		List_1_t679606200 * L_4 = (List_1_t679606200 *)il2cpp_codegen_object_new(List_1_t679606200_il2cpp_TypeInfo_var);
		List_1__ctor_m1340911630(L_4, /*hidden argument*/List_1__ctor_m1340911630_RuntimeMethod_var);
		__this->set_mWordBehavioursMarkedForDeletion_4(L_4);
		List_1_t2588113360 * L_5 = (List_1_t2588113360 *)il2cpp_codegen_object_new(List_1_t2588113360_il2cpp_TypeInfo_var);
		List_1__ctor_m3294312876(L_5, /*hidden argument*/List_1__ctor_m3294312876_RuntimeMethod_var);
		__this->set_mWaitingQueue_5(L_5);
		Dictionary_2_t464862499 * L_6 = (Dictionary_2_t464862499 *)il2cpp_codegen_object_new(Dictionary_2_t464862499_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2015578239(L_6, /*hidden argument*/Dictionary_2__ctor_m2015578239_RuntimeMethod_var);
		__this->set_mWordBehaviours_7(L_6);
		__this->set_mMaxInstances_9(1);
		WordManager__ctor_m3858017893(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.WordResult::.ctor()
extern "C"  void WordResult__ctor_m1058569109 (WordResult_t3640773802 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.WordResultImpl::.ctor(Vuforia.Word)
extern "C"  void WordResultImpl__ctor_m3731373850 (WordResultImpl_t709252498 * __this, RuntimeObject* ___word0, const RuntimeMethod* method)
{
	{
		WordResult__ctor_m1058569109(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___word0;
		__this->set_mWord_3(L_0);
		return;
	}
}
// Vuforia.Word Vuforia.WordResultImpl::get_Word()
extern "C"  RuntimeObject* WordResultImpl_get_Word_m1911128312 (WordResultImpl_t709252498 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_mWord_3();
		return L_0;
	}
}
// UnityEngine.Vector3 Vuforia.WordResultImpl::get_Position()
extern "C"  Vector3_t3722313464  WordResultImpl_get_Position_m4087395152 (WordResultImpl_t709252498 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = __this->get_mPosition_1();
		return L_0;
	}
}
// UnityEngine.Quaternion Vuforia.WordResultImpl::get_Orientation()
extern "C"  Quaternion_t2301928331  WordResultImpl_get_Orientation_m2248909624 (WordResultImpl_t709252498 * __this, const RuntimeMethod* method)
{
	{
		Quaternion_t2301928331  L_0 = __this->get_mOrientation_2();
		return L_0;
	}
}
// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::get_Obb()
extern "C"  OrientedBoundingBox_t2769728497  WordResultImpl_get_Obb_m2773296960 (WordResultImpl_t709252498 * __this, const RuntimeMethod* method)
{
	{
		OrientedBoundingBox_t2769728497  L_0 = __this->get_mObb_0();
		return L_0;
	}
}
// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::get_CurrentStatus()
extern "C"  int32_t WordResultImpl_get_CurrentStatus_m3548536234 (WordResultImpl_t709252498 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mStatus_4();
		return L_0;
	}
}
// System.Void Vuforia.WordResultImpl::SetPose(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void WordResultImpl_SetPose_m1787749657 (WordResultImpl_t709252498 * __this, Vector3_t3722313464  ___position0, Quaternion_t2301928331  ___orientation1, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___position0;
		__this->set_mPosition_1(L_0);
		Quaternion_t2301928331  L_1 = ___orientation1;
		__this->set_mOrientation_2(L_1);
		return;
	}
}
// System.Void Vuforia.WordResultImpl::SetObb(Vuforia.OrientedBoundingBox)
extern "C"  void WordResultImpl_SetObb_m3870243631 (WordResultImpl_t709252498 * __this, OrientedBoundingBox_t2769728497  ___obb0, const RuntimeMethod* method)
{
	{
		OrientedBoundingBox_t2769728497  L_0 = ___obb0;
		__this->set_mObb_0(L_0);
		return;
	}
}
// System.Void Vuforia.WordResultImpl::SetStatus(Vuforia.TrackableBehaviour/Status)
extern "C"  void WordResultImpl_SetStatus_m1510737358 (WordResultImpl_t709252498 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___status0;
		__this->set_mStatus_4(L_0);
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
