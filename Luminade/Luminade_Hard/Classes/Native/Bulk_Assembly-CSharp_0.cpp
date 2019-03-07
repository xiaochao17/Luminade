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

// BatteryUI
struct BatteryUI_t2191842428;
// CameraMask
struct CameraMask_t3224426225;
// Candy
struct Candy_t646231226;
// ColorChange
struct ColorChange_t3035311908;
// Enemy
struct Enemy_t1765729589;
// EnemyAI
struct EnemyAI_t2881305472;
// EnemyAI/<UpdatePath>c__Iterator0
struct U3CUpdatePathU3Ec__Iterator0_t3931466951;
// FixedJoystick
struct FixedJoystick_t2618381211;
// FloatingJoystick
struct FloatingJoystick_t3402721920;
// FollowPlayer
struct FollowPlayer_t2788059413;
// GameManager
struct GameManager_t1536523654;
// Joystick
struct Joystick_t9498292;
// Key
struct Key_t3605096396;
// Pathfinding.GraphNode
struct GraphNode_t702460096;
// Pathfinding.ITraversalProvider
struct ITraversalProvider_t358213549;
// Pathfinding.NNConstraint
struct NNConstraint_t2463185130;
// Pathfinding.OnPathDelegate
struct OnPathDelegate_t1613993614;
// Pathfinding.Path
struct Path_t276937969;
// Pathfinding.PathHandler
struct PathHandler_t1689654109;
// Pathfinding.PathNode
struct PathNode_t443572063;
// Pathfinding.Seeker
struct Seeker_t2437677217;
// Pathfinding.StartEndModifier
struct StartEndModifier_t1526148034;
// PaueGame
struct PaueGame_t649595565;
// Player2DExample
struct Player2DExample_t3660207970;
// Player3DExample
struct Player3DExample_t3538731783;
// PlayerController
struct PlayerController_t2064355688;
// RoadmapWalking
struct RoadmapWalking_t2643330104;
// RoadmapWalking/<ChangeScene>c__Iterator0
struct U3CChangeSceneU3Ec__Iterator0_t1991369956;
// SceneManagement
struct SceneManagement_t3330828178;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t819399007;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t2174534838;
// System.Collections.Generic.List`1<Pathfinding.IPathModifier>
struct List_1_t3513960069;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t4142344393;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t1568156503;
// System.Collections.Hashtable/HashValues
struct HashValues_t618387445;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t2994659099;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Comparison`1<Pathfinding.IPathModifier>
struct Comparison_1_t1816816506;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Collision2D
struct Collision2D_t2842956331;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t96683501;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t57175488;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.UI.Slider
struct Slider_t3903728902;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t3180273144;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// VariableJoystick
struct VariableJoystick_t2643911586;

extern RuntimeClass* CameraMask_t3224426225_il2cpp_TypeInfo_var;
extern RuntimeClass* Camera_t4157153871_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* EaseType_t2573404410_il2cpp_TypeInfo_var;
extern RuntimeClass* GameManager_t1536523654_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* OnPathDelegate_t1613993614_il2cpp_TypeInfo_var;
extern RuntimeClass* PlayerController_t2064355688_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* RectTransformUtility_t1743242446_il2cpp_TypeInfo_var;
extern RuntimeClass* RoadmapWalking_t2643330104_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CChangeSceneU3Ec__Iterator0_t1991369956_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CUpdatePathU3Ec__Iterator0_t3931466951_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern RuntimeClass* iTween_t770867771_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1021063790;
extern String_t* _stringLiteral1222789680;
extern String_t* _stringLiteral1234020770;
extern String_t* _stringLiteral1234086306;
extern String_t* _stringLiteral1234151842;
extern String_t* _stringLiteral1234282914;
extern String_t* _stringLiteral1555075383;
extern String_t* _stringLiteral1603239357;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral199858606;
extern String_t* _stringLiteral2223961601;
extern String_t* _stringLiteral2261822918;
extern String_t* _stringLiteral235949219;
extern String_t* _stringLiteral2600272002;
extern String_t* _stringLiteral2710373835;
extern String_t* _stringLiteral2984908384;
extern String_t* _stringLiteral346940778;
extern String_t* _stringLiteral3556801464;
extern String_t* _stringLiteral3556802456;
extern String_t* _stringLiteral3584844674;
extern String_t* _stringLiteral3936374128;
extern String_t* _stringLiteral4073034045;
extern String_t* _stringLiteral4119301762;
extern String_t* _stringLiteral4254451314;
extern String_t* _stringLiteral760905195;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m4094283362_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisEnemyAI_t2881305472_m3684458930_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisPolygonCollider2D_t57175488_m709164463_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m2191066352_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSeeker_t2437677217_m2860570514_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var;
extern const RuntimeMethod* EnemyAI_OnPathComplete_m3986181712_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisCameraMask_t3224426225_m3965255740_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisEnemyAI_t2881305472_m2115804801_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1930838076_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3603744195_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisJoystick_t9498292_m678039943_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m694024665_RuntimeMethod_var;
extern const RuntimeMethod* U3CChangeSceneU3Ec__Iterator0_Reset_m2573677861_RuntimeMethod_var;
extern const RuntimeMethod* U3CUpdatePathU3Ec__Iterator0_Reset_m2318622975_RuntimeMethod_var;
extern const uint32_t BatteryUI_Update_m3705257035_MetadataUsageId;
extern const uint32_t CameraMask_Update_m364181266_MetadataUsageId;
extern const uint32_t Candy_MoveToExample_m230266482_MetadataUsageId;
extern const uint32_t Candy_OnCollisionEnter2D_m272735126_MetadataUsageId;
extern const uint32_t Candy_Start_m4073992040_MetadataUsageId;
extern const uint32_t Candy_Update_m2348536843_MetadataUsageId;
extern const uint32_t ColorChange_Update_m3944220757_MetadataUsageId;
extern const uint32_t EnemyAI_FixedUpdate_m699871149_MetadataUsageId;
extern const uint32_t EnemyAI_Start_m648402889_MetadataUsageId;
extern const uint32_t EnemyAI_UpdatePath_m561177725_MetadataUsageId;
extern const uint32_t Enemy_FixedUpdate_m2632478061_MetadataUsageId;
extern const uint32_t Enemy_Update_m3583063749_MetadataUsageId;
extern const uint32_t FixedJoystick_OnDrag_m1042755941_MetadataUsageId;
extern const uint32_t FixedJoystick_OnPointerUp_m763078753_MetadataUsageId;
extern const uint32_t FixedJoystick_Start_m649713002_MetadataUsageId;
extern const uint32_t FixedJoystick__ctor_m3165509026_MetadataUsageId;
extern const uint32_t FloatingJoystick_OnDrag_m1849813291_MetadataUsageId;
extern const uint32_t FloatingJoystick_OnPointerDown_m3753834403_MetadataUsageId;
extern const uint32_t FloatingJoystick_OnPointerUp_m2581807680_MetadataUsageId;
extern const uint32_t FloatingJoystick__ctor_m612783692_MetadataUsageId;
extern const uint32_t FollowPlayer_Start_m1219397192_MetadataUsageId;
extern const uint32_t FollowPlayer_Update_m1580389478_MetadataUsageId;
extern const uint32_t GameManager_ChangeTheLevel_m2882631212_MetadataUsageId;
extern const uint32_t GameManager_Update_m1981238775_MetadataUsageId;
extern const uint32_t Joystick__ctor_m1272315817_MetadataUsageId;
extern const uint32_t Key_OnCollisionEnter2D_m1321304902_MetadataUsageId;
extern const uint32_t PaueGame_PauseTheGame_m1347944285_MetadataUsageId;
extern const uint32_t PaueGame_ResumeTheGame_m2858720861_MetadataUsageId;
extern const uint32_t Player2DExample_Update_m1065258874_MetadataUsageId;
extern const uint32_t Player3DExample_Update_m584191189_MetadataUsageId;
extern const uint32_t PlayerController_Awake_m4099664953_MetadataUsageId;
extern const uint32_t PlayerController_OnCollisionEnter2D_m909387068_MetadataUsageId;
extern const uint32_t PlayerController_Update_m848427540_MetadataUsageId;
extern const uint32_t RoadmapWalking_Awake_m526251279_MetadataUsageId;
extern const uint32_t RoadmapWalking_ChangeScene_m1971005180_MetadataUsageId;
extern const uint32_t RoadmapWalking_Level1_m3164221451_MetadataUsageId;
extern const uint32_t RoadmapWalking_Level2_m3164155915_MetadataUsageId;
extern const uint32_t RoadmapWalking_Level3_m3164090379_MetadataUsageId;
extern const uint32_t RoadmapWalking_Level4_m3164024843_MetadataUsageId;
extern const uint32_t RoadmapWalking_Level5_m3163959307_MetadataUsageId;
extern const uint32_t RoadmapWalking_WalkingBetweenTwoPoints_m364080705_MetadataUsageId;
extern const uint32_t SceneManagement_GoToLevel2_m3387332928_MetadataUsageId;
extern const uint32_t SceneManagement_GoToLevel4_m2580763874_MetadataUsageId;
extern const uint32_t SceneManagement_GoToLevel5_m1014679933_MetadataUsageId;
extern const uint32_t SceneManagement_GoToLevel6_m1417964460_MetadataUsageId;
extern const uint32_t SceneManagement_GoToRoadMap_m3954923101_MetadataUsageId;
extern const uint32_t SceneManagement_LoadCreditsScene_m2537599392_MetadataUsageId;
extern const uint32_t SceneManagement_LoadMainScene_m551182123_MetadataUsageId;
extern const uint32_t SceneManagement_LoadMenuScene_m2598075104_MetadataUsageId;
extern const uint32_t U3CChangeSceneU3Ec__Iterator0_MoveNext_m3682599430_MetadataUsageId;
extern const uint32_t U3CChangeSceneU3Ec__Iterator0_Reset_m2573677861_MetadataUsageId;
extern const uint32_t U3CUpdatePathU3Ec__Iterator0_MoveNext_m105671661_MetadataUsageId;
extern const uint32_t U3CUpdatePathU3Ec__Iterator0_Reset_m2318622975_MetadataUsageId;
extern const uint32_t VariableJoystick_OnDrag_m3080315221_MetadataUsageId;
extern const uint32_t VariableJoystick_OnFixed_m4141959043_MetadataUsageId;
extern const uint32_t VariableJoystick_OnFloat_m165815926_MetadataUsageId;
extern const uint32_t VariableJoystick_OnPointerDown_m4235218688_MetadataUsageId;
extern const uint32_t VariableJoystick_OnPointerUp_m3792644295_MetadataUsageId;
extern const uint32_t VariableJoystick__ctor_m1597116632_MetadataUsageId;
struct ContactPoint2D_t3390240644 ;

struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745549_H
#define U3CMODULEU3E_T692745549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745549 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745549_H
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
#ifndef U3CUPDATEPATHU3EC__ITERATOR0_T3931466951_H
#define U3CUPDATEPATHU3EC__ITERATOR0_T3931466951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyAI/<UpdatePath>c__Iterator0
struct  U3CUpdatePathU3Ec__Iterator0_t3931466951  : public RuntimeObject
{
public:
	// EnemyAI EnemyAI/<UpdatePath>c__Iterator0::$this
	EnemyAI_t2881305472 * ___U24this_0;
	// System.Object EnemyAI/<UpdatePath>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean EnemyAI/<UpdatePath>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 EnemyAI/<UpdatePath>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CUpdatePathU3Ec__Iterator0_t3931466951, ___U24this_0)); }
	inline EnemyAI_t2881305472 * get_U24this_0() const { return ___U24this_0; }
	inline EnemyAI_t2881305472 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(EnemyAI_t2881305472 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CUpdatePathU3Ec__Iterator0_t3931466951, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CUpdatePathU3Ec__Iterator0_t3931466951, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CUpdatePathU3Ec__Iterator0_t3931466951, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUPDATEPATHU3EC__ITERATOR0_T3931466951_H
#ifndef U3CCHANGESCENEU3EC__ITERATOR0_T1991369956_H
#define U3CCHANGESCENEU3EC__ITERATOR0_T1991369956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoadmapWalking/<ChangeScene>c__Iterator0
struct  U3CChangeSceneU3Ec__Iterator0_t1991369956  : public RuntimeObject
{
public:
	// System.String RoadmapWalking/<ChangeScene>c__Iterator0::sceneName
	String_t* ___sceneName_0;
	// System.Object RoadmapWalking/<ChangeScene>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean RoadmapWalking/<ChangeScene>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 RoadmapWalking/<ChangeScene>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_sceneName_0() { return static_cast<int32_t>(offsetof(U3CChangeSceneU3Ec__Iterator0_t1991369956, ___sceneName_0)); }
	inline String_t* get_sceneName_0() const { return ___sceneName_0; }
	inline String_t** get_address_of_sceneName_0() { return &___sceneName_0; }
	inline void set_sceneName_0(String_t* value)
	{
		___sceneName_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneName_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CChangeSceneU3Ec__Iterator0_t1991369956, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CChangeSceneU3Ec__Iterator0_t1991369956, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CChangeSceneU3Ec__Iterator0_t1991369956, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCHANGESCENEU3EC__ITERATOR0_T1991369956_H
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
#ifndef LIST_1_T899420910_H
#define LIST_1_T899420910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t899420910  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t1718750761* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____items_1)); }
	inline Vector3U5BU5D_t1718750761* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t1718750761* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t899420910_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector3U5BU5D_t1718750761* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t899420910_StaticFields, ___EmptyArray_4)); }
	inline Vector3U5BU5D_t1718750761* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector3U5BU5D_t1718750761** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector3U5BU5D_t1718750761* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T899420910_H
#ifndef HASHTABLE_T1853889766_H
#define HASHTABLE_T1853889766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1853889766  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t2994659099* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t385246372* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t1568156503 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t618387445 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	RuntimeObject* ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	RuntimeObject* ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t950877179 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	RuntimeObject* ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___table_4)); }
	inline SlotU5BU5D_t2994659099* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t2994659099** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t2994659099* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashes_5)); }
	inline Int32U5BU5D_t385246372* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t385246372** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t385246372* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_5), value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashKeys_7)); }
	inline HashKeys_t1568156503 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_t1568156503 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_t1568156503 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___hashKeys_7), value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashValues_8)); }
	inline HashValues_t618387445 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_t618387445 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_t618387445 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier((&___hashValues_8), value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hcpRef_9)); }
	inline RuntimeObject* get_hcpRef_9() const { return ___hcpRef_9; }
	inline RuntimeObject** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(RuntimeObject* value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier((&___hcpRef_9), value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___comparerRef_10)); }
	inline RuntimeObject* get_comparerRef_10() const { return ___comparerRef_10; }
	inline RuntimeObject** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(RuntimeObject* value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier((&___comparerRef_10), value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___serializationInfo_11)); }
	inline SerializationInfo_t950877179 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t950877179 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t950877179 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_11), value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___equalityComparer_12)); }
	inline RuntimeObject* get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline RuntimeObject** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(RuntimeObject* value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___equalityComparer_12), value);
	}
};

struct Hashtable_t1853889766_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t385246372* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t385246372* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t385246372** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t385246372* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier((&___primeTbl_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1853889766_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
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
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
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
#ifndef GRAPHMASK_T1969735572_H
#define GRAPHMASK_T1969735572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphMask
struct  GraphMask_t1969735572 
{
public:
	// System.Int32 Pathfinding.GraphMask::value
	int32_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(GraphMask_t1969735572, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHMASK_T1969735572_H
#ifndef INT3_T3557801210_H
#define INT3_T3557801210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Int3
struct  Int3_t3557801210 
{
public:
	// System.Int32 Pathfinding.Int3::x
	int32_t ___x_0;
	// System.Int32 Pathfinding.Int3::y
	int32_t ___y_1;
	// System.Int32 Pathfinding.Int3::z
	int32_t ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Int3_t3557801210, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Int3_t3557801210, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Int3_t3557801210, ___z_2)); }
	inline int32_t get_z_2() const { return ___z_2; }
	inline int32_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(int32_t value)
	{
		___z_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT3_T3557801210_H
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
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
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
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t2562230146__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
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
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
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
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef ENEMYBEHAVIOR_T2437768429_H
#define ENEMYBEHAVIOR_T2437768429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy/EnemyBehavior
struct  EnemyBehavior_t2437768429 
{
public:
	// System.Int32 Enemy/EnemyBehavior::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EnemyBehavior_t2437768429, ___value___1)); }
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
#endif // ENEMYBEHAVIOR_T2437768429_H
#ifndef LEVELMANAGER_T2562551086_H
#define LEVELMANAGER_T2562551086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager/LevelManager
struct  LevelManager_t2562551086 
{
public:
	// System.Int32 GameManager/LevelManager::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LevelManager_t2562551086, ___value___1)); }
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
#endif // LEVELMANAGER_T2562551086_H
#ifndef JOYSTICKMODE_T3732604888_H
#define JOYSTICKMODE_T3732604888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JoystickMode
struct  JoystickMode_t3732604888 
{
public:
	// System.Int32 JoystickMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JoystickMode_t3732604888, ___value___1)); }
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
#endif // JOYSTICKMODE_T3732604888_H
#ifndef HEURISTIC_T2569430893_H
#define HEURISTIC_T2569430893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Heuristic
struct  Heuristic_t2569430893 
{
public:
	// System.Int32 Pathfinding.Heuristic::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Heuristic_t2569430893, ___value___1)); }
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
#endif // HEURISTIC_T2569430893_H
#ifndef PATHCOMPLETESTATE_T1472117951_H
#define PATHCOMPLETESTATE_T1472117951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.PathCompleteState
struct  PathCompleteState_t1472117951 
{
public:
	// System.Int32 Pathfinding.PathCompleteState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PathCompleteState_t1472117951, ___value___1)); }
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
#endif // PATHCOMPLETESTATE_T1472117951_H
#ifndef PATHSTATE_T3778896703_H
#define PATHSTATE_T3778896703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.PathState
struct  PathState_t3778896703 
{
public:
	// System.Int32 Pathfinding.PathState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PathState_t3778896703, ___value___1)); }
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
#endif // PATHSTATE_T3778896703_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef CONTACTPOINT2D_T3390240644_H
#define CONTACTPOINT2D_T3390240644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint2D
struct  ContactPoint2D_t3390240644 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t2156229523  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t2156229523  ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Point_0)); }
	inline Vector2_t2156229523  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_t2156229523 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_t2156229523  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Normal_1)); }
	inline Vector2_t2156229523  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_t2156229523  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_RelativeVelocity_2)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_2() const { return ___m_RelativeVelocity_2; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_2() { return &___m_RelativeVelocity_2; }
	inline void set_m_RelativeVelocity_2(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_Separation_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Separation_3)); }
	inline float get_m_Separation_3() const { return ___m_Separation_3; }
	inline float* get_address_of_m_Separation_3() { return &___m_Separation_3; }
	inline void set_m_Separation_3(float value)
	{
		___m_Separation_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalImpulse_4() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_NormalImpulse_4)); }
	inline float get_m_NormalImpulse_4() const { return ___m_NormalImpulse_4; }
	inline float* get_address_of_m_NormalImpulse_4() { return &___m_NormalImpulse_4; }
	inline void set_m_NormalImpulse_4(float value)
	{
		___m_NormalImpulse_4 = value;
	}

	inline static int32_t get_offset_of_m_TangentImpulse_5() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_TangentImpulse_5)); }
	inline float get_m_TangentImpulse_5() const { return ___m_TangentImpulse_5; }
	inline float* get_address_of_m_TangentImpulse_5() { return &___m_TangentImpulse_5; }
	inline void set_m_TangentImpulse_5(float value)
	{
		___m_TangentImpulse_5 = value;
	}

	inline static int32_t get_offset_of_m_Collider_6() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Collider_6)); }
	inline int32_t get_m_Collider_6() const { return ___m_Collider_6; }
	inline int32_t* get_address_of_m_Collider_6() { return &___m_Collider_6; }
	inline void set_m_Collider_6(int32_t value)
	{
		___m_Collider_6 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_7() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherCollider_7)); }
	inline int32_t get_m_OtherCollider_7() const { return ___m_OtherCollider_7; }
	inline int32_t* get_address_of_m_OtherCollider_7() { return &___m_OtherCollider_7; }
	inline void set_m_OtherCollider_7(int32_t value)
	{
		___m_OtherCollider_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Rigidbody_8)); }
	inline int32_t get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline int32_t* get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(int32_t value)
	{
		___m_Rigidbody_8 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_9() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherRigidbody_9)); }
	inline int32_t get_m_OtherRigidbody_9() const { return ___m_OtherRigidbody_9; }
	inline int32_t* get_address_of_m_OtherRigidbody_9() { return &___m_OtherRigidbody_9; }
	inline void set_m_OtherRigidbody_9(int32_t value)
	{
		___m_OtherRigidbody_9 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_10() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Enabled_10)); }
	inline int32_t get_m_Enabled_10() const { return ___m_Enabled_10; }
	inline int32_t* get_address_of_m_Enabled_10() { return &___m_Enabled_10; }
	inline void set_m_Enabled_10(int32_t value)
	{
		___m_Enabled_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT2D_T3390240644_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___1)); }
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
#endif // INPUTBUTTON_T3704011348_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef FORCEMODE2D_T255358695_H
#define FORCEMODE2D_T255358695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode2D
struct  ForceMode2D_t255358695 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode2D_t255358695, ___value___1)); }
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
#endif // FORCEMODE2D_T255358695_H
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
#ifndef SPACE_T654135784_H
#define SPACE_T654135784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t654135784 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t654135784, ___value___1)); }
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
#endif // SPACE_T654135784_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
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
#endif // FILLMETHOD_T1167457570_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
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
#endif // TYPE_T1152881528_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
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
#endif // MODE_T1066900953_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
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
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
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
#endif // TRANSITION_T1769908631_H
#ifndef DIRECTION_T337909235_H
#define DIRECTION_T337909235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider/Direction
struct  Direction_t337909235 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Direction_t337909235, ___value___1)); }
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
#endif // DIRECTION_T337909235_H
#ifndef EASETYPE_T2573404410_H
#define EASETYPE_T2573404410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/EaseType
struct  EaseType_t2573404410 
{
public:
	// System.Int32 iTween/EaseType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EaseType_t2573404410, ___value___1)); }
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
#endif // EASETYPE_T2573404410_H
#ifndef PATH_T276937969_H
#define PATH_T276937969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Path
struct  Path_t276937969  : public RuntimeObject
{
public:
	// System.Boolean Pathfinding.Path::<Pathfinding.IPathInternals.Pooled>k__BackingField
	bool ___U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_0;
	// Pathfinding.PathHandler Pathfinding.Path::pathHandler
	PathHandler_t1689654109 * ___pathHandler_1;
	// Pathfinding.OnPathDelegate Pathfinding.Path::callback
	OnPathDelegate_t1613993614 * ___callback_2;
	// Pathfinding.OnPathDelegate Pathfinding.Path::immediateCallback
	OnPathDelegate_t1613993614 * ___immediateCallback_3;
	// Pathfinding.PathState Pathfinding.Path::<PipelineState>k__BackingField
	int32_t ___U3CPipelineStateU3Ek__BackingField_4;
	// System.Object Pathfinding.Path::stateLock
	RuntimeObject * ___stateLock_5;
	// Pathfinding.ITraversalProvider Pathfinding.Path::traversalProvider
	RuntimeObject* ___traversalProvider_6;
	// Pathfinding.PathCompleteState Pathfinding.Path::completeState
	int32_t ___completeState_7;
	// System.String Pathfinding.Path::<errorLog>k__BackingField
	String_t* ___U3CerrorLogU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.Path::path
	List_1_t2174534838 * ___path_9;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.Path::vectorPath
	List_1_t899420910 * ___vectorPath_10;
	// Pathfinding.PathNode Pathfinding.Path::currentR
	PathNode_t443572063 * ___currentR_11;
	// System.Single Pathfinding.Path::duration
	float ___duration_12;
	// System.Int32 Pathfinding.Path::searchedNodes
	int32_t ___searchedNodes_13;
	// System.Boolean Pathfinding.Path::hasBeenReset
	bool ___hasBeenReset_14;
	// Pathfinding.NNConstraint Pathfinding.Path::nnConstraint
	NNConstraint_t2463185130 * ___nnConstraint_15;
	// Pathfinding.Path Pathfinding.Path::next
	Path_t276937969 * ___next_16;
	// Pathfinding.Heuristic Pathfinding.Path::heuristic
	int32_t ___heuristic_17;
	// System.Single Pathfinding.Path::heuristicScale
	float ___heuristicScale_18;
	// System.UInt16 Pathfinding.Path::<pathID>k__BackingField
	uint16_t ___U3CpathIDU3Ek__BackingField_19;
	// Pathfinding.GraphNode Pathfinding.Path::hTargetNode
	GraphNode_t702460096 * ___hTargetNode_20;
	// Pathfinding.Int3 Pathfinding.Path::hTarget
	Int3_t3557801210  ___hTarget_21;
	// System.Int32 Pathfinding.Path::enabledTags
	int32_t ___enabledTags_22;
	// System.Int32[] Pathfinding.Path::internalTagPenalties
	Int32U5BU5D_t385246372* ___internalTagPenalties_24;
	// System.Int32[] Pathfinding.Path::manualTagPenalties
	Int32U5BU5D_t385246372* ___manualTagPenalties_25;
	// System.Collections.Generic.List`1<System.Object> Pathfinding.Path::claimed
	List_1_t257213610 * ___claimed_26;
	// System.Boolean Pathfinding.Path::releasedNotSilent
	bool ___releasedNotSilent_27;

public:
	inline static int32_t get_offset_of_U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Path_t276937969, ___U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_0)); }
	inline bool get_U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_0() const { return ___U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_0() { return &___U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_0; }
	inline void set_U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_0(bool value)
	{
		___U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_pathHandler_1() { return static_cast<int32_t>(offsetof(Path_t276937969, ___pathHandler_1)); }
	inline PathHandler_t1689654109 * get_pathHandler_1() const { return ___pathHandler_1; }
	inline PathHandler_t1689654109 ** get_address_of_pathHandler_1() { return &___pathHandler_1; }
	inline void set_pathHandler_1(PathHandler_t1689654109 * value)
	{
		___pathHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___pathHandler_1), value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Path_t276937969, ___callback_2)); }
	inline OnPathDelegate_t1613993614 * get_callback_2() const { return ___callback_2; }
	inline OnPathDelegate_t1613993614 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(OnPathDelegate_t1613993614 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((&___callback_2), value);
	}

	inline static int32_t get_offset_of_immediateCallback_3() { return static_cast<int32_t>(offsetof(Path_t276937969, ___immediateCallback_3)); }
	inline OnPathDelegate_t1613993614 * get_immediateCallback_3() const { return ___immediateCallback_3; }
	inline OnPathDelegate_t1613993614 ** get_address_of_immediateCallback_3() { return &___immediateCallback_3; }
	inline void set_immediateCallback_3(OnPathDelegate_t1613993614 * value)
	{
		___immediateCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___immediateCallback_3), value);
	}

	inline static int32_t get_offset_of_U3CPipelineStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Path_t276937969, ___U3CPipelineStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CPipelineStateU3Ek__BackingField_4() const { return ___U3CPipelineStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CPipelineStateU3Ek__BackingField_4() { return &___U3CPipelineStateU3Ek__BackingField_4; }
	inline void set_U3CPipelineStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CPipelineStateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_stateLock_5() { return static_cast<int32_t>(offsetof(Path_t276937969, ___stateLock_5)); }
	inline RuntimeObject * get_stateLock_5() const { return ___stateLock_5; }
	inline RuntimeObject ** get_address_of_stateLock_5() { return &___stateLock_5; }
	inline void set_stateLock_5(RuntimeObject * value)
	{
		___stateLock_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateLock_5), value);
	}

	inline static int32_t get_offset_of_traversalProvider_6() { return static_cast<int32_t>(offsetof(Path_t276937969, ___traversalProvider_6)); }
	inline RuntimeObject* get_traversalProvider_6() const { return ___traversalProvider_6; }
	inline RuntimeObject** get_address_of_traversalProvider_6() { return &___traversalProvider_6; }
	inline void set_traversalProvider_6(RuntimeObject* value)
	{
		___traversalProvider_6 = value;
		Il2CppCodeGenWriteBarrier((&___traversalProvider_6), value);
	}

	inline static int32_t get_offset_of_completeState_7() { return static_cast<int32_t>(offsetof(Path_t276937969, ___completeState_7)); }
	inline int32_t get_completeState_7() const { return ___completeState_7; }
	inline int32_t* get_address_of_completeState_7() { return &___completeState_7; }
	inline void set_completeState_7(int32_t value)
	{
		___completeState_7 = value;
	}

	inline static int32_t get_offset_of_U3CerrorLogU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Path_t276937969, ___U3CerrorLogU3Ek__BackingField_8)); }
	inline String_t* get_U3CerrorLogU3Ek__BackingField_8() const { return ___U3CerrorLogU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CerrorLogU3Ek__BackingField_8() { return &___U3CerrorLogU3Ek__BackingField_8; }
	inline void set_U3CerrorLogU3Ek__BackingField_8(String_t* value)
	{
		___U3CerrorLogU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CerrorLogU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_path_9() { return static_cast<int32_t>(offsetof(Path_t276937969, ___path_9)); }
	inline List_1_t2174534838 * get_path_9() const { return ___path_9; }
	inline List_1_t2174534838 ** get_address_of_path_9() { return &___path_9; }
	inline void set_path_9(List_1_t2174534838 * value)
	{
		___path_9 = value;
		Il2CppCodeGenWriteBarrier((&___path_9), value);
	}

	inline static int32_t get_offset_of_vectorPath_10() { return static_cast<int32_t>(offsetof(Path_t276937969, ___vectorPath_10)); }
	inline List_1_t899420910 * get_vectorPath_10() const { return ___vectorPath_10; }
	inline List_1_t899420910 ** get_address_of_vectorPath_10() { return &___vectorPath_10; }
	inline void set_vectorPath_10(List_1_t899420910 * value)
	{
		___vectorPath_10 = value;
		Il2CppCodeGenWriteBarrier((&___vectorPath_10), value);
	}

	inline static int32_t get_offset_of_currentR_11() { return static_cast<int32_t>(offsetof(Path_t276937969, ___currentR_11)); }
	inline PathNode_t443572063 * get_currentR_11() const { return ___currentR_11; }
	inline PathNode_t443572063 ** get_address_of_currentR_11() { return &___currentR_11; }
	inline void set_currentR_11(PathNode_t443572063 * value)
	{
		___currentR_11 = value;
		Il2CppCodeGenWriteBarrier((&___currentR_11), value);
	}

	inline static int32_t get_offset_of_duration_12() { return static_cast<int32_t>(offsetof(Path_t276937969, ___duration_12)); }
	inline float get_duration_12() const { return ___duration_12; }
	inline float* get_address_of_duration_12() { return &___duration_12; }
	inline void set_duration_12(float value)
	{
		___duration_12 = value;
	}

	inline static int32_t get_offset_of_searchedNodes_13() { return static_cast<int32_t>(offsetof(Path_t276937969, ___searchedNodes_13)); }
	inline int32_t get_searchedNodes_13() const { return ___searchedNodes_13; }
	inline int32_t* get_address_of_searchedNodes_13() { return &___searchedNodes_13; }
	inline void set_searchedNodes_13(int32_t value)
	{
		___searchedNodes_13 = value;
	}

	inline static int32_t get_offset_of_hasBeenReset_14() { return static_cast<int32_t>(offsetof(Path_t276937969, ___hasBeenReset_14)); }
	inline bool get_hasBeenReset_14() const { return ___hasBeenReset_14; }
	inline bool* get_address_of_hasBeenReset_14() { return &___hasBeenReset_14; }
	inline void set_hasBeenReset_14(bool value)
	{
		___hasBeenReset_14 = value;
	}

	inline static int32_t get_offset_of_nnConstraint_15() { return static_cast<int32_t>(offsetof(Path_t276937969, ___nnConstraint_15)); }
	inline NNConstraint_t2463185130 * get_nnConstraint_15() const { return ___nnConstraint_15; }
	inline NNConstraint_t2463185130 ** get_address_of_nnConstraint_15() { return &___nnConstraint_15; }
	inline void set_nnConstraint_15(NNConstraint_t2463185130 * value)
	{
		___nnConstraint_15 = value;
		Il2CppCodeGenWriteBarrier((&___nnConstraint_15), value);
	}

	inline static int32_t get_offset_of_next_16() { return static_cast<int32_t>(offsetof(Path_t276937969, ___next_16)); }
	inline Path_t276937969 * get_next_16() const { return ___next_16; }
	inline Path_t276937969 ** get_address_of_next_16() { return &___next_16; }
	inline void set_next_16(Path_t276937969 * value)
	{
		___next_16 = value;
		Il2CppCodeGenWriteBarrier((&___next_16), value);
	}

	inline static int32_t get_offset_of_heuristic_17() { return static_cast<int32_t>(offsetof(Path_t276937969, ___heuristic_17)); }
	inline int32_t get_heuristic_17() const { return ___heuristic_17; }
	inline int32_t* get_address_of_heuristic_17() { return &___heuristic_17; }
	inline void set_heuristic_17(int32_t value)
	{
		___heuristic_17 = value;
	}

	inline static int32_t get_offset_of_heuristicScale_18() { return static_cast<int32_t>(offsetof(Path_t276937969, ___heuristicScale_18)); }
	inline float get_heuristicScale_18() const { return ___heuristicScale_18; }
	inline float* get_address_of_heuristicScale_18() { return &___heuristicScale_18; }
	inline void set_heuristicScale_18(float value)
	{
		___heuristicScale_18 = value;
	}

	inline static int32_t get_offset_of_U3CpathIDU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Path_t276937969, ___U3CpathIDU3Ek__BackingField_19)); }
	inline uint16_t get_U3CpathIDU3Ek__BackingField_19() const { return ___U3CpathIDU3Ek__BackingField_19; }
	inline uint16_t* get_address_of_U3CpathIDU3Ek__BackingField_19() { return &___U3CpathIDU3Ek__BackingField_19; }
	inline void set_U3CpathIDU3Ek__BackingField_19(uint16_t value)
	{
		___U3CpathIDU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_hTargetNode_20() { return static_cast<int32_t>(offsetof(Path_t276937969, ___hTargetNode_20)); }
	inline GraphNode_t702460096 * get_hTargetNode_20() const { return ___hTargetNode_20; }
	inline GraphNode_t702460096 ** get_address_of_hTargetNode_20() { return &___hTargetNode_20; }
	inline void set_hTargetNode_20(GraphNode_t702460096 * value)
	{
		___hTargetNode_20 = value;
		Il2CppCodeGenWriteBarrier((&___hTargetNode_20), value);
	}

	inline static int32_t get_offset_of_hTarget_21() { return static_cast<int32_t>(offsetof(Path_t276937969, ___hTarget_21)); }
	inline Int3_t3557801210  get_hTarget_21() const { return ___hTarget_21; }
	inline Int3_t3557801210 * get_address_of_hTarget_21() { return &___hTarget_21; }
	inline void set_hTarget_21(Int3_t3557801210  value)
	{
		___hTarget_21 = value;
	}

	inline static int32_t get_offset_of_enabledTags_22() { return static_cast<int32_t>(offsetof(Path_t276937969, ___enabledTags_22)); }
	inline int32_t get_enabledTags_22() const { return ___enabledTags_22; }
	inline int32_t* get_address_of_enabledTags_22() { return &___enabledTags_22; }
	inline void set_enabledTags_22(int32_t value)
	{
		___enabledTags_22 = value;
	}

	inline static int32_t get_offset_of_internalTagPenalties_24() { return static_cast<int32_t>(offsetof(Path_t276937969, ___internalTagPenalties_24)); }
	inline Int32U5BU5D_t385246372* get_internalTagPenalties_24() const { return ___internalTagPenalties_24; }
	inline Int32U5BU5D_t385246372** get_address_of_internalTagPenalties_24() { return &___internalTagPenalties_24; }
	inline void set_internalTagPenalties_24(Int32U5BU5D_t385246372* value)
	{
		___internalTagPenalties_24 = value;
		Il2CppCodeGenWriteBarrier((&___internalTagPenalties_24), value);
	}

	inline static int32_t get_offset_of_manualTagPenalties_25() { return static_cast<int32_t>(offsetof(Path_t276937969, ___manualTagPenalties_25)); }
	inline Int32U5BU5D_t385246372* get_manualTagPenalties_25() const { return ___manualTagPenalties_25; }
	inline Int32U5BU5D_t385246372** get_address_of_manualTagPenalties_25() { return &___manualTagPenalties_25; }
	inline void set_manualTagPenalties_25(Int32U5BU5D_t385246372* value)
	{
		___manualTagPenalties_25 = value;
		Il2CppCodeGenWriteBarrier((&___manualTagPenalties_25), value);
	}

	inline static int32_t get_offset_of_claimed_26() { return static_cast<int32_t>(offsetof(Path_t276937969, ___claimed_26)); }
	inline List_1_t257213610 * get_claimed_26() const { return ___claimed_26; }
	inline List_1_t257213610 ** get_address_of_claimed_26() { return &___claimed_26; }
	inline void set_claimed_26(List_1_t257213610 * value)
	{
		___claimed_26 = value;
		Il2CppCodeGenWriteBarrier((&___claimed_26), value);
	}

	inline static int32_t get_offset_of_releasedNotSilent_27() { return static_cast<int32_t>(offsetof(Path_t276937969, ___releasedNotSilent_27)); }
	inline bool get_releasedNotSilent_27() const { return ___releasedNotSilent_27; }
	inline bool* get_address_of_releasedNotSilent_27() { return &___releasedNotSilent_27; }
	inline void set_releasedNotSilent_27(bool value)
	{
		___releasedNotSilent_27 = value;
	}
};

struct Path_t276937969_StaticFields
{
public:
	// System.Int32[] Pathfinding.Path::ZeroTagPenalties
	Int32U5BU5D_t385246372* ___ZeroTagPenalties_23;

public:
	inline static int32_t get_offset_of_ZeroTagPenalties_23() { return static_cast<int32_t>(offsetof(Path_t276937969_StaticFields, ___ZeroTagPenalties_23)); }
	inline Int32U5BU5D_t385246372* get_ZeroTagPenalties_23() const { return ___ZeroTagPenalties_23; }
	inline Int32U5BU5D_t385246372** get_address_of_ZeroTagPenalties_23() { return &___ZeroTagPenalties_23; }
	inline void set_ZeroTagPenalties_23(Int32U5BU5D_t385246372* value)
	{
		___ZeroTagPenalties_23 = value;
		Il2CppCodeGenWriteBarrier((&___ZeroTagPenalties_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATH_T276937969_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_4), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef CACHEDCONTACTPOINTS2D_T2523437281_H
#define CACHEDCONTACTPOINTS2D_T2523437281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CachedContactPoints2D
struct  CachedContactPoints2D_t2523437281 
{
public:
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact0
	ContactPoint2D_t3390240644  ___m_Contact0_0;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact1
	ContactPoint2D_t3390240644  ___m_Contact1_1;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact2
	ContactPoint2D_t3390240644  ___m_Contact2_2;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact3
	ContactPoint2D_t3390240644  ___m_Contact3_3;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact4
	ContactPoint2D_t3390240644  ___m_Contact4_4;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact5
	ContactPoint2D_t3390240644  ___m_Contact5_5;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact6
	ContactPoint2D_t3390240644  ___m_Contact6_6;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact7
	ContactPoint2D_t3390240644  ___m_Contact7_7;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact8
	ContactPoint2D_t3390240644  ___m_Contact8_8;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact9
	ContactPoint2D_t3390240644  ___m_Contact9_9;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact10
	ContactPoint2D_t3390240644  ___m_Contact10_10;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact11
	ContactPoint2D_t3390240644  ___m_Contact11_11;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact12
	ContactPoint2D_t3390240644  ___m_Contact12_12;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact13
	ContactPoint2D_t3390240644  ___m_Contact13_13;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact14
	ContactPoint2D_t3390240644  ___m_Contact14_14;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact15
	ContactPoint2D_t3390240644  ___m_Contact15_15;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact16
	ContactPoint2D_t3390240644  ___m_Contact16_16;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact17
	ContactPoint2D_t3390240644  ___m_Contact17_17;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact18
	ContactPoint2D_t3390240644  ___m_Contact18_18;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact19
	ContactPoint2D_t3390240644  ___m_Contact19_19;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact20
	ContactPoint2D_t3390240644  ___m_Contact20_20;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact21
	ContactPoint2D_t3390240644  ___m_Contact21_21;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact22
	ContactPoint2D_t3390240644  ___m_Contact22_22;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact23
	ContactPoint2D_t3390240644  ___m_Contact23_23;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact24
	ContactPoint2D_t3390240644  ___m_Contact24_24;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact25
	ContactPoint2D_t3390240644  ___m_Contact25_25;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact26
	ContactPoint2D_t3390240644  ___m_Contact26_26;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact27
	ContactPoint2D_t3390240644  ___m_Contact27_27;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact28
	ContactPoint2D_t3390240644  ___m_Contact28_28;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact29
	ContactPoint2D_t3390240644  ___m_Contact29_29;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact30
	ContactPoint2D_t3390240644  ___m_Contact30_30;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact31
	ContactPoint2D_t3390240644  ___m_Contact31_31;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact32
	ContactPoint2D_t3390240644  ___m_Contact32_32;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact33
	ContactPoint2D_t3390240644  ___m_Contact33_33;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact34
	ContactPoint2D_t3390240644  ___m_Contact34_34;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact35
	ContactPoint2D_t3390240644  ___m_Contact35_35;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact36
	ContactPoint2D_t3390240644  ___m_Contact36_36;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact37
	ContactPoint2D_t3390240644  ___m_Contact37_37;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact38
	ContactPoint2D_t3390240644  ___m_Contact38_38;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact39
	ContactPoint2D_t3390240644  ___m_Contact39_39;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact40
	ContactPoint2D_t3390240644  ___m_Contact40_40;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact41
	ContactPoint2D_t3390240644  ___m_Contact41_41;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact42
	ContactPoint2D_t3390240644  ___m_Contact42_42;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact43
	ContactPoint2D_t3390240644  ___m_Contact43_43;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact44
	ContactPoint2D_t3390240644  ___m_Contact44_44;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact45
	ContactPoint2D_t3390240644  ___m_Contact45_45;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact46
	ContactPoint2D_t3390240644  ___m_Contact46_46;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact47
	ContactPoint2D_t3390240644  ___m_Contact47_47;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact48
	ContactPoint2D_t3390240644  ___m_Contact48_48;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact49
	ContactPoint2D_t3390240644  ___m_Contact49_49;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact50
	ContactPoint2D_t3390240644  ___m_Contact50_50;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact51
	ContactPoint2D_t3390240644  ___m_Contact51_51;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact52
	ContactPoint2D_t3390240644  ___m_Contact52_52;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact53
	ContactPoint2D_t3390240644  ___m_Contact53_53;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact54
	ContactPoint2D_t3390240644  ___m_Contact54_54;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact55
	ContactPoint2D_t3390240644  ___m_Contact55_55;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact56
	ContactPoint2D_t3390240644  ___m_Contact56_56;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact57
	ContactPoint2D_t3390240644  ___m_Contact57_57;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact58
	ContactPoint2D_t3390240644  ___m_Contact58_58;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact59
	ContactPoint2D_t3390240644  ___m_Contact59_59;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact60
	ContactPoint2D_t3390240644  ___m_Contact60_60;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact61
	ContactPoint2D_t3390240644  ___m_Contact61_61;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact62
	ContactPoint2D_t3390240644  ___m_Contact62_62;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact63
	ContactPoint2D_t3390240644  ___m_Contact63_63;

public:
	inline static int32_t get_offset_of_m_Contact0_0() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact0_0)); }
	inline ContactPoint2D_t3390240644  get_m_Contact0_0() const { return ___m_Contact0_0; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact0_0() { return &___m_Contact0_0; }
	inline void set_m_Contact0_0(ContactPoint2D_t3390240644  value)
	{
		___m_Contact0_0 = value;
	}

	inline static int32_t get_offset_of_m_Contact1_1() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact1_1)); }
	inline ContactPoint2D_t3390240644  get_m_Contact1_1() const { return ___m_Contact1_1; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact1_1() { return &___m_Contact1_1; }
	inline void set_m_Contact1_1(ContactPoint2D_t3390240644  value)
	{
		___m_Contact1_1 = value;
	}

	inline static int32_t get_offset_of_m_Contact2_2() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact2_2)); }
	inline ContactPoint2D_t3390240644  get_m_Contact2_2() const { return ___m_Contact2_2; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact2_2() { return &___m_Contact2_2; }
	inline void set_m_Contact2_2(ContactPoint2D_t3390240644  value)
	{
		___m_Contact2_2 = value;
	}

	inline static int32_t get_offset_of_m_Contact3_3() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact3_3)); }
	inline ContactPoint2D_t3390240644  get_m_Contact3_3() const { return ___m_Contact3_3; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact3_3() { return &___m_Contact3_3; }
	inline void set_m_Contact3_3(ContactPoint2D_t3390240644  value)
	{
		___m_Contact3_3 = value;
	}

	inline static int32_t get_offset_of_m_Contact4_4() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact4_4)); }
	inline ContactPoint2D_t3390240644  get_m_Contact4_4() const { return ___m_Contact4_4; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact4_4() { return &___m_Contact4_4; }
	inline void set_m_Contact4_4(ContactPoint2D_t3390240644  value)
	{
		___m_Contact4_4 = value;
	}

	inline static int32_t get_offset_of_m_Contact5_5() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact5_5)); }
	inline ContactPoint2D_t3390240644  get_m_Contact5_5() const { return ___m_Contact5_5; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact5_5() { return &___m_Contact5_5; }
	inline void set_m_Contact5_5(ContactPoint2D_t3390240644  value)
	{
		___m_Contact5_5 = value;
	}

	inline static int32_t get_offset_of_m_Contact6_6() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact6_6)); }
	inline ContactPoint2D_t3390240644  get_m_Contact6_6() const { return ___m_Contact6_6; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact6_6() { return &___m_Contact6_6; }
	inline void set_m_Contact6_6(ContactPoint2D_t3390240644  value)
	{
		___m_Contact6_6 = value;
	}

	inline static int32_t get_offset_of_m_Contact7_7() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact7_7)); }
	inline ContactPoint2D_t3390240644  get_m_Contact7_7() const { return ___m_Contact7_7; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact7_7() { return &___m_Contact7_7; }
	inline void set_m_Contact7_7(ContactPoint2D_t3390240644  value)
	{
		___m_Contact7_7 = value;
	}

	inline static int32_t get_offset_of_m_Contact8_8() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact8_8)); }
	inline ContactPoint2D_t3390240644  get_m_Contact8_8() const { return ___m_Contact8_8; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact8_8() { return &___m_Contact8_8; }
	inline void set_m_Contact8_8(ContactPoint2D_t3390240644  value)
	{
		___m_Contact8_8 = value;
	}

	inline static int32_t get_offset_of_m_Contact9_9() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact9_9)); }
	inline ContactPoint2D_t3390240644  get_m_Contact9_9() const { return ___m_Contact9_9; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact9_9() { return &___m_Contact9_9; }
	inline void set_m_Contact9_9(ContactPoint2D_t3390240644  value)
	{
		___m_Contact9_9 = value;
	}

	inline static int32_t get_offset_of_m_Contact10_10() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact10_10)); }
	inline ContactPoint2D_t3390240644  get_m_Contact10_10() const { return ___m_Contact10_10; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact10_10() { return &___m_Contact10_10; }
	inline void set_m_Contact10_10(ContactPoint2D_t3390240644  value)
	{
		___m_Contact10_10 = value;
	}

	inline static int32_t get_offset_of_m_Contact11_11() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact11_11)); }
	inline ContactPoint2D_t3390240644  get_m_Contact11_11() const { return ___m_Contact11_11; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact11_11() { return &___m_Contact11_11; }
	inline void set_m_Contact11_11(ContactPoint2D_t3390240644  value)
	{
		___m_Contact11_11 = value;
	}

	inline static int32_t get_offset_of_m_Contact12_12() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact12_12)); }
	inline ContactPoint2D_t3390240644  get_m_Contact12_12() const { return ___m_Contact12_12; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact12_12() { return &___m_Contact12_12; }
	inline void set_m_Contact12_12(ContactPoint2D_t3390240644  value)
	{
		___m_Contact12_12 = value;
	}

	inline static int32_t get_offset_of_m_Contact13_13() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact13_13)); }
	inline ContactPoint2D_t3390240644  get_m_Contact13_13() const { return ___m_Contact13_13; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact13_13() { return &___m_Contact13_13; }
	inline void set_m_Contact13_13(ContactPoint2D_t3390240644  value)
	{
		___m_Contact13_13 = value;
	}

	inline static int32_t get_offset_of_m_Contact14_14() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact14_14)); }
	inline ContactPoint2D_t3390240644  get_m_Contact14_14() const { return ___m_Contact14_14; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact14_14() { return &___m_Contact14_14; }
	inline void set_m_Contact14_14(ContactPoint2D_t3390240644  value)
	{
		___m_Contact14_14 = value;
	}

	inline static int32_t get_offset_of_m_Contact15_15() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact15_15)); }
	inline ContactPoint2D_t3390240644  get_m_Contact15_15() const { return ___m_Contact15_15; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact15_15() { return &___m_Contact15_15; }
	inline void set_m_Contact15_15(ContactPoint2D_t3390240644  value)
	{
		___m_Contact15_15 = value;
	}

	inline static int32_t get_offset_of_m_Contact16_16() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact16_16)); }
	inline ContactPoint2D_t3390240644  get_m_Contact16_16() const { return ___m_Contact16_16; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact16_16() { return &___m_Contact16_16; }
	inline void set_m_Contact16_16(ContactPoint2D_t3390240644  value)
	{
		___m_Contact16_16 = value;
	}

	inline static int32_t get_offset_of_m_Contact17_17() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact17_17)); }
	inline ContactPoint2D_t3390240644  get_m_Contact17_17() const { return ___m_Contact17_17; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact17_17() { return &___m_Contact17_17; }
	inline void set_m_Contact17_17(ContactPoint2D_t3390240644  value)
	{
		___m_Contact17_17 = value;
	}

	inline static int32_t get_offset_of_m_Contact18_18() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact18_18)); }
	inline ContactPoint2D_t3390240644  get_m_Contact18_18() const { return ___m_Contact18_18; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact18_18() { return &___m_Contact18_18; }
	inline void set_m_Contact18_18(ContactPoint2D_t3390240644  value)
	{
		___m_Contact18_18 = value;
	}

	inline static int32_t get_offset_of_m_Contact19_19() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact19_19)); }
	inline ContactPoint2D_t3390240644  get_m_Contact19_19() const { return ___m_Contact19_19; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact19_19() { return &___m_Contact19_19; }
	inline void set_m_Contact19_19(ContactPoint2D_t3390240644  value)
	{
		___m_Contact19_19 = value;
	}

	inline static int32_t get_offset_of_m_Contact20_20() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact20_20)); }
	inline ContactPoint2D_t3390240644  get_m_Contact20_20() const { return ___m_Contact20_20; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact20_20() { return &___m_Contact20_20; }
	inline void set_m_Contact20_20(ContactPoint2D_t3390240644  value)
	{
		___m_Contact20_20 = value;
	}

	inline static int32_t get_offset_of_m_Contact21_21() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact21_21)); }
	inline ContactPoint2D_t3390240644  get_m_Contact21_21() const { return ___m_Contact21_21; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact21_21() { return &___m_Contact21_21; }
	inline void set_m_Contact21_21(ContactPoint2D_t3390240644  value)
	{
		___m_Contact21_21 = value;
	}

	inline static int32_t get_offset_of_m_Contact22_22() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact22_22)); }
	inline ContactPoint2D_t3390240644  get_m_Contact22_22() const { return ___m_Contact22_22; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact22_22() { return &___m_Contact22_22; }
	inline void set_m_Contact22_22(ContactPoint2D_t3390240644  value)
	{
		___m_Contact22_22 = value;
	}

	inline static int32_t get_offset_of_m_Contact23_23() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact23_23)); }
	inline ContactPoint2D_t3390240644  get_m_Contact23_23() const { return ___m_Contact23_23; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact23_23() { return &___m_Contact23_23; }
	inline void set_m_Contact23_23(ContactPoint2D_t3390240644  value)
	{
		___m_Contact23_23 = value;
	}

	inline static int32_t get_offset_of_m_Contact24_24() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact24_24)); }
	inline ContactPoint2D_t3390240644  get_m_Contact24_24() const { return ___m_Contact24_24; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact24_24() { return &___m_Contact24_24; }
	inline void set_m_Contact24_24(ContactPoint2D_t3390240644  value)
	{
		___m_Contact24_24 = value;
	}

	inline static int32_t get_offset_of_m_Contact25_25() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact25_25)); }
	inline ContactPoint2D_t3390240644  get_m_Contact25_25() const { return ___m_Contact25_25; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact25_25() { return &___m_Contact25_25; }
	inline void set_m_Contact25_25(ContactPoint2D_t3390240644  value)
	{
		___m_Contact25_25 = value;
	}

	inline static int32_t get_offset_of_m_Contact26_26() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact26_26)); }
	inline ContactPoint2D_t3390240644  get_m_Contact26_26() const { return ___m_Contact26_26; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact26_26() { return &___m_Contact26_26; }
	inline void set_m_Contact26_26(ContactPoint2D_t3390240644  value)
	{
		___m_Contact26_26 = value;
	}

	inline static int32_t get_offset_of_m_Contact27_27() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact27_27)); }
	inline ContactPoint2D_t3390240644  get_m_Contact27_27() const { return ___m_Contact27_27; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact27_27() { return &___m_Contact27_27; }
	inline void set_m_Contact27_27(ContactPoint2D_t3390240644  value)
	{
		___m_Contact27_27 = value;
	}

	inline static int32_t get_offset_of_m_Contact28_28() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact28_28)); }
	inline ContactPoint2D_t3390240644  get_m_Contact28_28() const { return ___m_Contact28_28; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact28_28() { return &___m_Contact28_28; }
	inline void set_m_Contact28_28(ContactPoint2D_t3390240644  value)
	{
		___m_Contact28_28 = value;
	}

	inline static int32_t get_offset_of_m_Contact29_29() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact29_29)); }
	inline ContactPoint2D_t3390240644  get_m_Contact29_29() const { return ___m_Contact29_29; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact29_29() { return &___m_Contact29_29; }
	inline void set_m_Contact29_29(ContactPoint2D_t3390240644  value)
	{
		___m_Contact29_29 = value;
	}

	inline static int32_t get_offset_of_m_Contact30_30() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact30_30)); }
	inline ContactPoint2D_t3390240644  get_m_Contact30_30() const { return ___m_Contact30_30; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact30_30() { return &___m_Contact30_30; }
	inline void set_m_Contact30_30(ContactPoint2D_t3390240644  value)
	{
		___m_Contact30_30 = value;
	}

	inline static int32_t get_offset_of_m_Contact31_31() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact31_31)); }
	inline ContactPoint2D_t3390240644  get_m_Contact31_31() const { return ___m_Contact31_31; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact31_31() { return &___m_Contact31_31; }
	inline void set_m_Contact31_31(ContactPoint2D_t3390240644  value)
	{
		___m_Contact31_31 = value;
	}

	inline static int32_t get_offset_of_m_Contact32_32() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact32_32)); }
	inline ContactPoint2D_t3390240644  get_m_Contact32_32() const { return ___m_Contact32_32; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact32_32() { return &___m_Contact32_32; }
	inline void set_m_Contact32_32(ContactPoint2D_t3390240644  value)
	{
		___m_Contact32_32 = value;
	}

	inline static int32_t get_offset_of_m_Contact33_33() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact33_33)); }
	inline ContactPoint2D_t3390240644  get_m_Contact33_33() const { return ___m_Contact33_33; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact33_33() { return &___m_Contact33_33; }
	inline void set_m_Contact33_33(ContactPoint2D_t3390240644  value)
	{
		___m_Contact33_33 = value;
	}

	inline static int32_t get_offset_of_m_Contact34_34() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact34_34)); }
	inline ContactPoint2D_t3390240644  get_m_Contact34_34() const { return ___m_Contact34_34; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact34_34() { return &___m_Contact34_34; }
	inline void set_m_Contact34_34(ContactPoint2D_t3390240644  value)
	{
		___m_Contact34_34 = value;
	}

	inline static int32_t get_offset_of_m_Contact35_35() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact35_35)); }
	inline ContactPoint2D_t3390240644  get_m_Contact35_35() const { return ___m_Contact35_35; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact35_35() { return &___m_Contact35_35; }
	inline void set_m_Contact35_35(ContactPoint2D_t3390240644  value)
	{
		___m_Contact35_35 = value;
	}

	inline static int32_t get_offset_of_m_Contact36_36() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact36_36)); }
	inline ContactPoint2D_t3390240644  get_m_Contact36_36() const { return ___m_Contact36_36; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact36_36() { return &___m_Contact36_36; }
	inline void set_m_Contact36_36(ContactPoint2D_t3390240644  value)
	{
		___m_Contact36_36 = value;
	}

	inline static int32_t get_offset_of_m_Contact37_37() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact37_37)); }
	inline ContactPoint2D_t3390240644  get_m_Contact37_37() const { return ___m_Contact37_37; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact37_37() { return &___m_Contact37_37; }
	inline void set_m_Contact37_37(ContactPoint2D_t3390240644  value)
	{
		___m_Contact37_37 = value;
	}

	inline static int32_t get_offset_of_m_Contact38_38() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact38_38)); }
	inline ContactPoint2D_t3390240644  get_m_Contact38_38() const { return ___m_Contact38_38; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact38_38() { return &___m_Contact38_38; }
	inline void set_m_Contact38_38(ContactPoint2D_t3390240644  value)
	{
		___m_Contact38_38 = value;
	}

	inline static int32_t get_offset_of_m_Contact39_39() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact39_39)); }
	inline ContactPoint2D_t3390240644  get_m_Contact39_39() const { return ___m_Contact39_39; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact39_39() { return &___m_Contact39_39; }
	inline void set_m_Contact39_39(ContactPoint2D_t3390240644  value)
	{
		___m_Contact39_39 = value;
	}

	inline static int32_t get_offset_of_m_Contact40_40() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact40_40)); }
	inline ContactPoint2D_t3390240644  get_m_Contact40_40() const { return ___m_Contact40_40; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact40_40() { return &___m_Contact40_40; }
	inline void set_m_Contact40_40(ContactPoint2D_t3390240644  value)
	{
		___m_Contact40_40 = value;
	}

	inline static int32_t get_offset_of_m_Contact41_41() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact41_41)); }
	inline ContactPoint2D_t3390240644  get_m_Contact41_41() const { return ___m_Contact41_41; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact41_41() { return &___m_Contact41_41; }
	inline void set_m_Contact41_41(ContactPoint2D_t3390240644  value)
	{
		___m_Contact41_41 = value;
	}

	inline static int32_t get_offset_of_m_Contact42_42() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact42_42)); }
	inline ContactPoint2D_t3390240644  get_m_Contact42_42() const { return ___m_Contact42_42; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact42_42() { return &___m_Contact42_42; }
	inline void set_m_Contact42_42(ContactPoint2D_t3390240644  value)
	{
		___m_Contact42_42 = value;
	}

	inline static int32_t get_offset_of_m_Contact43_43() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact43_43)); }
	inline ContactPoint2D_t3390240644  get_m_Contact43_43() const { return ___m_Contact43_43; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact43_43() { return &___m_Contact43_43; }
	inline void set_m_Contact43_43(ContactPoint2D_t3390240644  value)
	{
		___m_Contact43_43 = value;
	}

	inline static int32_t get_offset_of_m_Contact44_44() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact44_44)); }
	inline ContactPoint2D_t3390240644  get_m_Contact44_44() const { return ___m_Contact44_44; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact44_44() { return &___m_Contact44_44; }
	inline void set_m_Contact44_44(ContactPoint2D_t3390240644  value)
	{
		___m_Contact44_44 = value;
	}

	inline static int32_t get_offset_of_m_Contact45_45() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact45_45)); }
	inline ContactPoint2D_t3390240644  get_m_Contact45_45() const { return ___m_Contact45_45; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact45_45() { return &___m_Contact45_45; }
	inline void set_m_Contact45_45(ContactPoint2D_t3390240644  value)
	{
		___m_Contact45_45 = value;
	}

	inline static int32_t get_offset_of_m_Contact46_46() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact46_46)); }
	inline ContactPoint2D_t3390240644  get_m_Contact46_46() const { return ___m_Contact46_46; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact46_46() { return &___m_Contact46_46; }
	inline void set_m_Contact46_46(ContactPoint2D_t3390240644  value)
	{
		___m_Contact46_46 = value;
	}

	inline static int32_t get_offset_of_m_Contact47_47() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact47_47)); }
	inline ContactPoint2D_t3390240644  get_m_Contact47_47() const { return ___m_Contact47_47; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact47_47() { return &___m_Contact47_47; }
	inline void set_m_Contact47_47(ContactPoint2D_t3390240644  value)
	{
		___m_Contact47_47 = value;
	}

	inline static int32_t get_offset_of_m_Contact48_48() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact48_48)); }
	inline ContactPoint2D_t3390240644  get_m_Contact48_48() const { return ___m_Contact48_48; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact48_48() { return &___m_Contact48_48; }
	inline void set_m_Contact48_48(ContactPoint2D_t3390240644  value)
	{
		___m_Contact48_48 = value;
	}

	inline static int32_t get_offset_of_m_Contact49_49() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact49_49)); }
	inline ContactPoint2D_t3390240644  get_m_Contact49_49() const { return ___m_Contact49_49; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact49_49() { return &___m_Contact49_49; }
	inline void set_m_Contact49_49(ContactPoint2D_t3390240644  value)
	{
		___m_Contact49_49 = value;
	}

	inline static int32_t get_offset_of_m_Contact50_50() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact50_50)); }
	inline ContactPoint2D_t3390240644  get_m_Contact50_50() const { return ___m_Contact50_50; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact50_50() { return &___m_Contact50_50; }
	inline void set_m_Contact50_50(ContactPoint2D_t3390240644  value)
	{
		___m_Contact50_50 = value;
	}

	inline static int32_t get_offset_of_m_Contact51_51() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact51_51)); }
	inline ContactPoint2D_t3390240644  get_m_Contact51_51() const { return ___m_Contact51_51; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact51_51() { return &___m_Contact51_51; }
	inline void set_m_Contact51_51(ContactPoint2D_t3390240644  value)
	{
		___m_Contact51_51 = value;
	}

	inline static int32_t get_offset_of_m_Contact52_52() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact52_52)); }
	inline ContactPoint2D_t3390240644  get_m_Contact52_52() const { return ___m_Contact52_52; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact52_52() { return &___m_Contact52_52; }
	inline void set_m_Contact52_52(ContactPoint2D_t3390240644  value)
	{
		___m_Contact52_52 = value;
	}

	inline static int32_t get_offset_of_m_Contact53_53() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact53_53)); }
	inline ContactPoint2D_t3390240644  get_m_Contact53_53() const { return ___m_Contact53_53; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact53_53() { return &___m_Contact53_53; }
	inline void set_m_Contact53_53(ContactPoint2D_t3390240644  value)
	{
		___m_Contact53_53 = value;
	}

	inline static int32_t get_offset_of_m_Contact54_54() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact54_54)); }
	inline ContactPoint2D_t3390240644  get_m_Contact54_54() const { return ___m_Contact54_54; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact54_54() { return &___m_Contact54_54; }
	inline void set_m_Contact54_54(ContactPoint2D_t3390240644  value)
	{
		___m_Contact54_54 = value;
	}

	inline static int32_t get_offset_of_m_Contact55_55() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact55_55)); }
	inline ContactPoint2D_t3390240644  get_m_Contact55_55() const { return ___m_Contact55_55; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact55_55() { return &___m_Contact55_55; }
	inline void set_m_Contact55_55(ContactPoint2D_t3390240644  value)
	{
		___m_Contact55_55 = value;
	}

	inline static int32_t get_offset_of_m_Contact56_56() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact56_56)); }
	inline ContactPoint2D_t3390240644  get_m_Contact56_56() const { return ___m_Contact56_56; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact56_56() { return &___m_Contact56_56; }
	inline void set_m_Contact56_56(ContactPoint2D_t3390240644  value)
	{
		___m_Contact56_56 = value;
	}

	inline static int32_t get_offset_of_m_Contact57_57() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact57_57)); }
	inline ContactPoint2D_t3390240644  get_m_Contact57_57() const { return ___m_Contact57_57; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact57_57() { return &___m_Contact57_57; }
	inline void set_m_Contact57_57(ContactPoint2D_t3390240644  value)
	{
		___m_Contact57_57 = value;
	}

	inline static int32_t get_offset_of_m_Contact58_58() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact58_58)); }
	inline ContactPoint2D_t3390240644  get_m_Contact58_58() const { return ___m_Contact58_58; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact58_58() { return &___m_Contact58_58; }
	inline void set_m_Contact58_58(ContactPoint2D_t3390240644  value)
	{
		___m_Contact58_58 = value;
	}

	inline static int32_t get_offset_of_m_Contact59_59() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact59_59)); }
	inline ContactPoint2D_t3390240644  get_m_Contact59_59() const { return ___m_Contact59_59; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact59_59() { return &___m_Contact59_59; }
	inline void set_m_Contact59_59(ContactPoint2D_t3390240644  value)
	{
		___m_Contact59_59 = value;
	}

	inline static int32_t get_offset_of_m_Contact60_60() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact60_60)); }
	inline ContactPoint2D_t3390240644  get_m_Contact60_60() const { return ___m_Contact60_60; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact60_60() { return &___m_Contact60_60; }
	inline void set_m_Contact60_60(ContactPoint2D_t3390240644  value)
	{
		___m_Contact60_60 = value;
	}

	inline static int32_t get_offset_of_m_Contact61_61() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact61_61)); }
	inline ContactPoint2D_t3390240644  get_m_Contact61_61() const { return ___m_Contact61_61; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact61_61() { return &___m_Contact61_61; }
	inline void set_m_Contact61_61(ContactPoint2D_t3390240644  value)
	{
		___m_Contact61_61 = value;
	}

	inline static int32_t get_offset_of_m_Contact62_62() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact62_62)); }
	inline ContactPoint2D_t3390240644  get_m_Contact62_62() const { return ___m_Contact62_62; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact62_62() { return &___m_Contact62_62; }
	inline void set_m_Contact62_62(ContactPoint2D_t3390240644  value)
	{
		___m_Contact62_62 = value;
	}

	inline static int32_t get_offset_of_m_Contact63_63() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact63_63)); }
	inline ContactPoint2D_t3390240644  get_m_Contact63_63() const { return ___m_Contact63_63; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact63_63() { return &___m_Contact63_63; }
	inline void set_m_Contact63_63(ContactPoint2D_t3390240644  value)
	{
		___m_Contact63_63 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDCONTACTPOINTS2D_T2523437281_H
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
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
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
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef ONPATHDELEGATE_T1613993614_H
#define ONPATHDELEGATE_T1613993614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.OnPathDelegate
struct  OnPathDelegate_t1613993614  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPATHDELEGATE_T1613993614_H
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
#ifndef COLLISION2D_T2842956331_H
#define COLLISION2D_T2842956331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t2842956331  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.CachedContactPoints2D UnityEngine.Collision2D::m_CachedContactPoints
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContactArray
	ContactPoint2DU5BU5D_t96683501* ___m_LegacyContactArray_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_RelativeVelocity_4)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_CachedContactPoints_7() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_CachedContactPoints_7)); }
	inline CachedContactPoints2D_t2523437281  get_m_CachedContactPoints_7() const { return ___m_CachedContactPoints_7; }
	inline CachedContactPoints2D_t2523437281 * get_address_of_m_CachedContactPoints_7() { return &___m_CachedContactPoints_7; }
	inline void set_m_CachedContactPoints_7(CachedContactPoints2D_t2523437281  value)
	{
		___m_CachedContactPoints_7 = value;
	}

	inline static int32_t get_offset_of_m_LegacyContactArray_8() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_LegacyContactArray_8)); }
	inline ContactPoint2DU5BU5D_t96683501* get_m_LegacyContactArray_8() const { return ___m_LegacyContactArray_8; }
	inline ContactPoint2DU5BU5D_t96683501** get_address_of_m_LegacyContactArray_8() { return &___m_LegacyContactArray_8; }
	inline void set_m_LegacyContactArray_8(ContactPoint2DU5BU5D_t96683501* value)
	{
		___m_LegacyContactArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_LegacyContactArray_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	ContactPoint2D_t3390240644 * ___m_LegacyContactArray_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	ContactPoint2D_t3390240644 * ___m_LegacyContactArray_8;
};
#endif // COLLISION2D_T2842956331_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
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
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
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
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
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
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef BATTERYUI_T2191842428_H
#define BATTERYUI_T2191842428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BatteryUI
struct  BatteryUI_t2191842428  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 BatteryUI::count
	int32_t ___count_4;

public:
	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(BatteryUI_t2191842428, ___count_4)); }
	inline int32_t get_count_4() const { return ___count_4; }
	inline int32_t* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(int32_t value)
	{
		___count_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATTERYUI_T2191842428_H
#ifndef CAMERAMASK_T3224426225_H
#define CAMERAMASK_T3224426225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraMask
struct  CameraMask_t3224426225  : public MonoBehaviour_t3962482529
{
public:
	// System.Single CameraMask::timer
	float ___timer_4;
	// System.Single CameraMask::scalingCoefficient
	float ___scalingCoefficient_7;
	// System.Single CameraMask::minScale
	float ___minScale_8;

public:
	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(CameraMask_t3224426225, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}

	inline static int32_t get_offset_of_scalingCoefficient_7() { return static_cast<int32_t>(offsetof(CameraMask_t3224426225, ___scalingCoefficient_7)); }
	inline float get_scalingCoefficient_7() const { return ___scalingCoefficient_7; }
	inline float* get_address_of_scalingCoefficient_7() { return &___scalingCoefficient_7; }
	inline void set_scalingCoefficient_7(float value)
	{
		___scalingCoefficient_7 = value;
	}

	inline static int32_t get_offset_of_minScale_8() { return static_cast<int32_t>(offsetof(CameraMask_t3224426225, ___minScale_8)); }
	inline float get_minScale_8() const { return ___minScale_8; }
	inline float* get_address_of_minScale_8() { return &___minScale_8; }
	inline void set_minScale_8(float value)
	{
		___minScale_8 = value;
	}
};

struct CameraMask_t3224426225_StaticFields
{
public:
	// System.Boolean CameraMask::getSpecialItem
	bool ___getSpecialItem_5;
	// System.Boolean CameraMask::gameover
	bool ___gameover_6;

public:
	inline static int32_t get_offset_of_getSpecialItem_5() { return static_cast<int32_t>(offsetof(CameraMask_t3224426225_StaticFields, ___getSpecialItem_5)); }
	inline bool get_getSpecialItem_5() const { return ___getSpecialItem_5; }
	inline bool* get_address_of_getSpecialItem_5() { return &___getSpecialItem_5; }
	inline void set_getSpecialItem_5(bool value)
	{
		___getSpecialItem_5 = value;
	}

	inline static int32_t get_offset_of_gameover_6() { return static_cast<int32_t>(offsetof(CameraMask_t3224426225_StaticFields, ___gameover_6)); }
	inline bool get_gameover_6() const { return ___gameover_6; }
	inline bool* get_address_of_gameover_6() { return &___gameover_6; }
	inline void set_gameover_6(bool value)
	{
		___gameover_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAMASK_T3224426225_H
#ifndef CANDY_T646231226_H
#define CANDY_T646231226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Candy
struct  Candy_t646231226  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform Candy::cameraposition
	Transform_t3600365921 * ___cameraposition_4;
	// System.Single Candy::speed
	float ___speed_5;
	// UnityEngine.Color Candy::newColor
	Color_t2555686324  ___newColor_6;
	// System.Boolean Candy::catchif
	bool ___catchif_7;

public:
	inline static int32_t get_offset_of_cameraposition_4() { return static_cast<int32_t>(offsetof(Candy_t646231226, ___cameraposition_4)); }
	inline Transform_t3600365921 * get_cameraposition_4() const { return ___cameraposition_4; }
	inline Transform_t3600365921 ** get_address_of_cameraposition_4() { return &___cameraposition_4; }
	inline void set_cameraposition_4(Transform_t3600365921 * value)
	{
		___cameraposition_4 = value;
		Il2CppCodeGenWriteBarrier((&___cameraposition_4), value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(Candy_t646231226, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_newColor_6() { return static_cast<int32_t>(offsetof(Candy_t646231226, ___newColor_6)); }
	inline Color_t2555686324  get_newColor_6() const { return ___newColor_6; }
	inline Color_t2555686324 * get_address_of_newColor_6() { return &___newColor_6; }
	inline void set_newColor_6(Color_t2555686324  value)
	{
		___newColor_6 = value;
	}

	inline static int32_t get_offset_of_catchif_7() { return static_cast<int32_t>(offsetof(Candy_t646231226, ___catchif_7)); }
	inline bool get_catchif_7() const { return ___catchif_7; }
	inline bool* get_address_of_catchif_7() { return &___catchif_7; }
	inline void set_catchif_7(bool value)
	{
		___catchif_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANDY_T646231226_H
#ifndef COLORCHANGE_T3035311908_H
#define COLORCHANGE_T3035311908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorChange
struct  ColorChange_t3035311908  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORCHANGE_T3035311908_H
#ifndef ENEMY_T1765729589_H
#define ENEMY_T1765729589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t1765729589  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Enemy::player
	GameObject_t1113636619 * ___player_4;
	// System.Single Enemy::watchDistance
	float ___watchDistance_5;
	// System.Single Enemy::upleft
	float ___upleft_6;
	// System.Single Enemy::upright
	float ___upright_7;
	// System.Single Enemy::downleft
	float ___downleft_8;
	// System.Single Enemy::downright
	float ___downright_9;
	// Enemy/EnemyBehavior Enemy::currentBehavior
	int32_t ___currentBehavior_10;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___player_4)); }
	inline GameObject_t1113636619 * get_player_4() const { return ___player_4; }
	inline GameObject_t1113636619 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1113636619 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((&___player_4), value);
	}

	inline static int32_t get_offset_of_watchDistance_5() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___watchDistance_5)); }
	inline float get_watchDistance_5() const { return ___watchDistance_5; }
	inline float* get_address_of_watchDistance_5() { return &___watchDistance_5; }
	inline void set_watchDistance_5(float value)
	{
		___watchDistance_5 = value;
	}

	inline static int32_t get_offset_of_upleft_6() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___upleft_6)); }
	inline float get_upleft_6() const { return ___upleft_6; }
	inline float* get_address_of_upleft_6() { return &___upleft_6; }
	inline void set_upleft_6(float value)
	{
		___upleft_6 = value;
	}

	inline static int32_t get_offset_of_upright_7() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___upright_7)); }
	inline float get_upright_7() const { return ___upright_7; }
	inline float* get_address_of_upright_7() { return &___upright_7; }
	inline void set_upright_7(float value)
	{
		___upright_7 = value;
	}

	inline static int32_t get_offset_of_downleft_8() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___downleft_8)); }
	inline float get_downleft_8() const { return ___downleft_8; }
	inline float* get_address_of_downleft_8() { return &___downleft_8; }
	inline void set_downleft_8(float value)
	{
		___downleft_8 = value;
	}

	inline static int32_t get_offset_of_downright_9() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___downright_9)); }
	inline float get_downright_9() const { return ___downright_9; }
	inline float* get_address_of_downright_9() { return &___downright_9; }
	inline void set_downright_9(float value)
	{
		___downright_9 = value;
	}

	inline static int32_t get_offset_of_currentBehavior_10() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___currentBehavior_10)); }
	inline int32_t get_currentBehavior_10() const { return ___currentBehavior_10; }
	inline int32_t* get_address_of_currentBehavior_10() { return &___currentBehavior_10; }
	inline void set_currentBehavior_10(int32_t value)
	{
		___currentBehavior_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMY_T1765729589_H
#ifndef ENEMYAI_T2881305472_H
#define ENEMYAI_T2881305472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyAI
struct  EnemyAI_t2881305472  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform EnemyAI::target
	Transform_t3600365921 * ___target_4;
	// System.Single EnemyAI::updateRate
	float ___updateRate_5;
	// Pathfinding.Seeker EnemyAI::seeker
	Seeker_t2437677217 * ___seeker_6;
	// UnityEngine.Rigidbody2D EnemyAI::rb
	Rigidbody2D_t939494601 * ___rb_7;
	// Pathfinding.Path EnemyAI::path
	Path_t276937969 * ___path_8;
	// System.Single EnemyAI::speed
	float ___speed_9;
	// UnityEngine.ForceMode2D EnemyAI::fMode
	int32_t ___fMode_10;
	// System.Boolean EnemyAI::pathIsEnded
	bool ___pathIsEnded_11;
	// System.Single EnemyAI::nextWayPointDistance
	float ___nextWayPointDistance_12;
	// System.Int32 EnemyAI::currentWaypoint
	int32_t ___currentWaypoint_13;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(EnemyAI_t2881305472, ___target_4)); }
	inline Transform_t3600365921 * get_target_4() const { return ___target_4; }
	inline Transform_t3600365921 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_t3600365921 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((&___target_4), value);
	}

	inline static int32_t get_offset_of_updateRate_5() { return static_cast<int32_t>(offsetof(EnemyAI_t2881305472, ___updateRate_5)); }
	inline float get_updateRate_5() const { return ___updateRate_5; }
	inline float* get_address_of_updateRate_5() { return &___updateRate_5; }
	inline void set_updateRate_5(float value)
	{
		___updateRate_5 = value;
	}

	inline static int32_t get_offset_of_seeker_6() { return static_cast<int32_t>(offsetof(EnemyAI_t2881305472, ___seeker_6)); }
	inline Seeker_t2437677217 * get_seeker_6() const { return ___seeker_6; }
	inline Seeker_t2437677217 ** get_address_of_seeker_6() { return &___seeker_6; }
	inline void set_seeker_6(Seeker_t2437677217 * value)
	{
		___seeker_6 = value;
		Il2CppCodeGenWriteBarrier((&___seeker_6), value);
	}

	inline static int32_t get_offset_of_rb_7() { return static_cast<int32_t>(offsetof(EnemyAI_t2881305472, ___rb_7)); }
	inline Rigidbody2D_t939494601 * get_rb_7() const { return ___rb_7; }
	inline Rigidbody2D_t939494601 ** get_address_of_rb_7() { return &___rb_7; }
	inline void set_rb_7(Rigidbody2D_t939494601 * value)
	{
		___rb_7 = value;
		Il2CppCodeGenWriteBarrier((&___rb_7), value);
	}

	inline static int32_t get_offset_of_path_8() { return static_cast<int32_t>(offsetof(EnemyAI_t2881305472, ___path_8)); }
	inline Path_t276937969 * get_path_8() const { return ___path_8; }
	inline Path_t276937969 ** get_address_of_path_8() { return &___path_8; }
	inline void set_path_8(Path_t276937969 * value)
	{
		___path_8 = value;
		Il2CppCodeGenWriteBarrier((&___path_8), value);
	}

	inline static int32_t get_offset_of_speed_9() { return static_cast<int32_t>(offsetof(EnemyAI_t2881305472, ___speed_9)); }
	inline float get_speed_9() const { return ___speed_9; }
	inline float* get_address_of_speed_9() { return &___speed_9; }
	inline void set_speed_9(float value)
	{
		___speed_9 = value;
	}

	inline static int32_t get_offset_of_fMode_10() { return static_cast<int32_t>(offsetof(EnemyAI_t2881305472, ___fMode_10)); }
	inline int32_t get_fMode_10() const { return ___fMode_10; }
	inline int32_t* get_address_of_fMode_10() { return &___fMode_10; }
	inline void set_fMode_10(int32_t value)
	{
		___fMode_10 = value;
	}

	inline static int32_t get_offset_of_pathIsEnded_11() { return static_cast<int32_t>(offsetof(EnemyAI_t2881305472, ___pathIsEnded_11)); }
	inline bool get_pathIsEnded_11() const { return ___pathIsEnded_11; }
	inline bool* get_address_of_pathIsEnded_11() { return &___pathIsEnded_11; }
	inline void set_pathIsEnded_11(bool value)
	{
		___pathIsEnded_11 = value;
	}

	inline static int32_t get_offset_of_nextWayPointDistance_12() { return static_cast<int32_t>(offsetof(EnemyAI_t2881305472, ___nextWayPointDistance_12)); }
	inline float get_nextWayPointDistance_12() const { return ___nextWayPointDistance_12; }
	inline float* get_address_of_nextWayPointDistance_12() { return &___nextWayPointDistance_12; }
	inline void set_nextWayPointDistance_12(float value)
	{
		___nextWayPointDistance_12 = value;
	}

	inline static int32_t get_offset_of_currentWaypoint_13() { return static_cast<int32_t>(offsetof(EnemyAI_t2881305472, ___currentWaypoint_13)); }
	inline int32_t get_currentWaypoint_13() const { return ___currentWaypoint_13; }
	inline int32_t* get_address_of_currentWaypoint_13() { return &___currentWaypoint_13; }
	inline void set_currentWaypoint_13(int32_t value)
	{
		___currentWaypoint_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYAI_T2881305472_H
#ifndef FOLLOWPLAYER_T2788059413_H
#define FOLLOWPLAYER_T2788059413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FollowPlayer
struct  FollowPlayer_t2788059413  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject FollowPlayer::player
	GameObject_t1113636619 * ___player_4;
	// UnityEngine.Vector3 FollowPlayer::offset
	Vector3_t3722313464  ___offset_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(FollowPlayer_t2788059413, ___player_4)); }
	inline GameObject_t1113636619 * get_player_4() const { return ___player_4; }
	inline GameObject_t1113636619 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1113636619 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((&___player_4), value);
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(FollowPlayer_t2788059413, ___offset_5)); }
	inline Vector3_t3722313464  get_offset_5() const { return ___offset_5; }
	inline Vector3_t3722313464 * get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(Vector3_t3722313464  value)
	{
		___offset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWPLAYER_T2788059413_H
#ifndef GAMEMANAGER_T1536523654_H
#define GAMEMANAGER_T1536523654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t1536523654  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct GameManager_t1536523654_StaticFields
{
public:
	// System.Boolean GameManager::level1Done
	bool ___level1Done_4;
	// System.Boolean GameManager::level2Done
	bool ___level2Done_5;
	// System.Boolean GameManager::level3Done
	bool ___level3Done_6;
	// System.Boolean GameManager::level4Done
	bool ___level4Done_7;
	// System.Boolean GameManager::level5Done
	bool ___level5Done_8;
	// GameManager/LevelManager GameManager::currentLevel
	int32_t ___currentLevel_9;

public:
	inline static int32_t get_offset_of_level1Done_4() { return static_cast<int32_t>(offsetof(GameManager_t1536523654_StaticFields, ___level1Done_4)); }
	inline bool get_level1Done_4() const { return ___level1Done_4; }
	inline bool* get_address_of_level1Done_4() { return &___level1Done_4; }
	inline void set_level1Done_4(bool value)
	{
		___level1Done_4 = value;
	}

	inline static int32_t get_offset_of_level2Done_5() { return static_cast<int32_t>(offsetof(GameManager_t1536523654_StaticFields, ___level2Done_5)); }
	inline bool get_level2Done_5() const { return ___level2Done_5; }
	inline bool* get_address_of_level2Done_5() { return &___level2Done_5; }
	inline void set_level2Done_5(bool value)
	{
		___level2Done_5 = value;
	}

	inline static int32_t get_offset_of_level3Done_6() { return static_cast<int32_t>(offsetof(GameManager_t1536523654_StaticFields, ___level3Done_6)); }
	inline bool get_level3Done_6() const { return ___level3Done_6; }
	inline bool* get_address_of_level3Done_6() { return &___level3Done_6; }
	inline void set_level3Done_6(bool value)
	{
		___level3Done_6 = value;
	}

	inline static int32_t get_offset_of_level4Done_7() { return static_cast<int32_t>(offsetof(GameManager_t1536523654_StaticFields, ___level4Done_7)); }
	inline bool get_level4Done_7() const { return ___level4Done_7; }
	inline bool* get_address_of_level4Done_7() { return &___level4Done_7; }
	inline void set_level4Done_7(bool value)
	{
		___level4Done_7 = value;
	}

	inline static int32_t get_offset_of_level5Done_8() { return static_cast<int32_t>(offsetof(GameManager_t1536523654_StaticFields, ___level5Done_8)); }
	inline bool get_level5Done_8() const { return ___level5Done_8; }
	inline bool* get_address_of_level5Done_8() { return &___level5Done_8; }
	inline void set_level5Done_8(bool value)
	{
		___level5Done_8 = value;
	}

	inline static int32_t get_offset_of_currentLevel_9() { return static_cast<int32_t>(offsetof(GameManager_t1536523654_StaticFields, ___currentLevel_9)); }
	inline int32_t get_currentLevel_9() const { return ___currentLevel_9; }
	inline int32_t* get_address_of_currentLevel_9() { return &___currentLevel_9; }
	inline void set_currentLevel_9(int32_t value)
	{
		___currentLevel_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEMANAGER_T1536523654_H
#ifndef JOYSTICK_T9498292_H
#define JOYSTICK_T9498292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Joystick
struct  Joystick_t9498292  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Joystick::handleLimit
	float ___handleLimit_4;
	// JoystickMode Joystick::joystickMode
	int32_t ___joystickMode_5;
	// UnityEngine.Vector2 Joystick::inputVector
	Vector2_t2156229523  ___inputVector_6;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t3704657025 * ___background_7;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t3704657025 * ___handle_8;

public:
	inline static int32_t get_offset_of_handleLimit_4() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___handleLimit_4)); }
	inline float get_handleLimit_4() const { return ___handleLimit_4; }
	inline float* get_address_of_handleLimit_4() { return &___handleLimit_4; }
	inline void set_handleLimit_4(float value)
	{
		___handleLimit_4 = value;
	}

	inline static int32_t get_offset_of_joystickMode_5() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___joystickMode_5)); }
	inline int32_t get_joystickMode_5() const { return ___joystickMode_5; }
	inline int32_t* get_address_of_joystickMode_5() { return &___joystickMode_5; }
	inline void set_joystickMode_5(int32_t value)
	{
		___joystickMode_5 = value;
	}

	inline static int32_t get_offset_of_inputVector_6() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___inputVector_6)); }
	inline Vector2_t2156229523  get_inputVector_6() const { return ___inputVector_6; }
	inline Vector2_t2156229523 * get_address_of_inputVector_6() { return &___inputVector_6; }
	inline void set_inputVector_6(Vector2_t2156229523  value)
	{
		___inputVector_6 = value;
	}

	inline static int32_t get_offset_of_background_7() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___background_7)); }
	inline RectTransform_t3704657025 * get_background_7() const { return ___background_7; }
	inline RectTransform_t3704657025 ** get_address_of_background_7() { return &___background_7; }
	inline void set_background_7(RectTransform_t3704657025 * value)
	{
		___background_7 = value;
		Il2CppCodeGenWriteBarrier((&___background_7), value);
	}

	inline static int32_t get_offset_of_handle_8() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___handle_8)); }
	inline RectTransform_t3704657025 * get_handle_8() const { return ___handle_8; }
	inline RectTransform_t3704657025 ** get_address_of_handle_8() { return &___handle_8; }
	inline void set_handle_8(RectTransform_t3704657025 * value)
	{
		___handle_8 = value;
		Il2CppCodeGenWriteBarrier((&___handle_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOYSTICK_T9498292_H
#ifndef KEY_T3605096396_H
#define KEY_T3605096396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Key
struct  Key_t3605096396  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEY_T3605096396_H
#ifndef VERSIONEDMONOBEHAVIOUR_T2091980155_H
#define VERSIONEDMONOBEHAVIOUR_T2091980155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.VersionedMonoBehaviour
struct  VersionedMonoBehaviour_t2091980155  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 Pathfinding.VersionedMonoBehaviour::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(VersionedMonoBehaviour_t2091980155, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSIONEDMONOBEHAVIOUR_T2091980155_H
#ifndef PAUEGAME_T649595565_H
#define PAUEGAME_T649595565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PaueGame
struct  PaueGame_t649595565  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject PaueGame::player
	GameObject_t1113636619 * ___player_4;
	// UnityEngine.GameObject PaueGame::cameraMask
	GameObject_t1113636619 * ___cameraMask_5;
	// UnityEngine.GameObject PaueGame::enemy1
	GameObject_t1113636619 * ___enemy1_6;
	// UnityEngine.GameObject PaueGame::enemy2
	GameObject_t1113636619 * ___enemy2_7;
	// UnityEngine.GameObject PaueGame::enemy3
	GameObject_t1113636619 * ___enemy3_8;
	// UnityEngine.GameObject PaueGame::pauseScreen
	GameObject_t1113636619 * ___pauseScreen_9;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(PaueGame_t649595565, ___player_4)); }
	inline GameObject_t1113636619 * get_player_4() const { return ___player_4; }
	inline GameObject_t1113636619 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1113636619 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((&___player_4), value);
	}

	inline static int32_t get_offset_of_cameraMask_5() { return static_cast<int32_t>(offsetof(PaueGame_t649595565, ___cameraMask_5)); }
	inline GameObject_t1113636619 * get_cameraMask_5() const { return ___cameraMask_5; }
	inline GameObject_t1113636619 ** get_address_of_cameraMask_5() { return &___cameraMask_5; }
	inline void set_cameraMask_5(GameObject_t1113636619 * value)
	{
		___cameraMask_5 = value;
		Il2CppCodeGenWriteBarrier((&___cameraMask_5), value);
	}

	inline static int32_t get_offset_of_enemy1_6() { return static_cast<int32_t>(offsetof(PaueGame_t649595565, ___enemy1_6)); }
	inline GameObject_t1113636619 * get_enemy1_6() const { return ___enemy1_6; }
	inline GameObject_t1113636619 ** get_address_of_enemy1_6() { return &___enemy1_6; }
	inline void set_enemy1_6(GameObject_t1113636619 * value)
	{
		___enemy1_6 = value;
		Il2CppCodeGenWriteBarrier((&___enemy1_6), value);
	}

	inline static int32_t get_offset_of_enemy2_7() { return static_cast<int32_t>(offsetof(PaueGame_t649595565, ___enemy2_7)); }
	inline GameObject_t1113636619 * get_enemy2_7() const { return ___enemy2_7; }
	inline GameObject_t1113636619 ** get_address_of_enemy2_7() { return &___enemy2_7; }
	inline void set_enemy2_7(GameObject_t1113636619 * value)
	{
		___enemy2_7 = value;
		Il2CppCodeGenWriteBarrier((&___enemy2_7), value);
	}

	inline static int32_t get_offset_of_enemy3_8() { return static_cast<int32_t>(offsetof(PaueGame_t649595565, ___enemy3_8)); }
	inline GameObject_t1113636619 * get_enemy3_8() const { return ___enemy3_8; }
	inline GameObject_t1113636619 ** get_address_of_enemy3_8() { return &___enemy3_8; }
	inline void set_enemy3_8(GameObject_t1113636619 * value)
	{
		___enemy3_8 = value;
		Il2CppCodeGenWriteBarrier((&___enemy3_8), value);
	}

	inline static int32_t get_offset_of_pauseScreen_9() { return static_cast<int32_t>(offsetof(PaueGame_t649595565, ___pauseScreen_9)); }
	inline GameObject_t1113636619 * get_pauseScreen_9() const { return ___pauseScreen_9; }
	inline GameObject_t1113636619 ** get_address_of_pauseScreen_9() { return &___pauseScreen_9; }
	inline void set_pauseScreen_9(GameObject_t1113636619 * value)
	{
		___pauseScreen_9 = value;
		Il2CppCodeGenWriteBarrier((&___pauseScreen_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAUEGAME_T649595565_H
#ifndef PLAYER2DEXAMPLE_T3660207970_H
#define PLAYER2DEXAMPLE_T3660207970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player2DExample
struct  Player2DExample_t3660207970  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Player2DExample::moveSpeed
	float ___moveSpeed_4;
	// Joystick Player2DExample::joystick
	Joystick_t9498292 * ___joystick_5;

public:
	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(Player2DExample_t3660207970, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_joystick_5() { return static_cast<int32_t>(offsetof(Player2DExample_t3660207970, ___joystick_5)); }
	inline Joystick_t9498292 * get_joystick_5() const { return ___joystick_5; }
	inline Joystick_t9498292 ** get_address_of_joystick_5() { return &___joystick_5; }
	inline void set_joystick_5(Joystick_t9498292 * value)
	{
		___joystick_5 = value;
		Il2CppCodeGenWriteBarrier((&___joystick_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER2DEXAMPLE_T3660207970_H
#ifndef PLAYER3DEXAMPLE_T3538731783_H
#define PLAYER3DEXAMPLE_T3538731783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player3DExample
struct  Player3DExample_t3538731783  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Player3DExample::moveSpeed
	float ___moveSpeed_4;
	// Joystick Player3DExample::joystick
	Joystick_t9498292 * ___joystick_5;

public:
	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(Player3DExample_t3538731783, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_joystick_5() { return static_cast<int32_t>(offsetof(Player3DExample_t3538731783, ___joystick_5)); }
	inline Joystick_t9498292 * get_joystick_5() const { return ___joystick_5; }
	inline Joystick_t9498292 ** get_address_of_joystick_5() { return &___joystick_5; }
	inline void set_joystick_5(Joystick_t9498292 * value)
	{
		___joystick_5 = value;
		Il2CppCodeGenWriteBarrier((&___joystick_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER3DEXAMPLE_T3538731783_H
#ifndef PLAYERCONTROLLER_T2064355688_H
#define PLAYERCONTROLLER_T2064355688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2064355688  : public MonoBehaviour_t3962482529
{
public:
	// System.Single PlayerController::speed
	float ___speed_4;
	// UnityEngine.GameObject PlayerController::keyPrefab
	GameObject_t1113636619 * ___keyPrefab_5;
	// UnityEngine.AudioClip PlayerController::levelCompleteSound
	AudioClip_t3680889665 * ___levelCompleteSound_6;
	// UnityEngine.AudioClip PlayerController::getKeySound
	AudioClip_t3680889665 * ___getKeySound_7;
	// UnityEngine.Vector3 PlayerController::keyPosition
	Vector3_t3722313464  ___keyPosition_8;
	// Joystick PlayerController::joystick
	Joystick_t9498292 * ___joystick_9;
	// UnityEngine.Rigidbody2D PlayerController::rb2D
	Rigidbody2D_t939494601 * ___rb2D_10;
	// UnityEngine.Animator PlayerController::animator
	Animator_t434523843 * ___animator_11;
	// UnityEngine.SpriteRenderer PlayerController::spriteRenderer
	SpriteRenderer_t3235626157 * ___spriteRenderer_12;
	// System.Boolean PlayerController::facingLeft
	bool ___facingLeft_13;
	// System.Boolean PlayerController::facingUp
	bool ___facingUp_14;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_keyPrefab_5() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___keyPrefab_5)); }
	inline GameObject_t1113636619 * get_keyPrefab_5() const { return ___keyPrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_keyPrefab_5() { return &___keyPrefab_5; }
	inline void set_keyPrefab_5(GameObject_t1113636619 * value)
	{
		___keyPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___keyPrefab_5), value);
	}

	inline static int32_t get_offset_of_levelCompleteSound_6() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___levelCompleteSound_6)); }
	inline AudioClip_t3680889665 * get_levelCompleteSound_6() const { return ___levelCompleteSound_6; }
	inline AudioClip_t3680889665 ** get_address_of_levelCompleteSound_6() { return &___levelCompleteSound_6; }
	inline void set_levelCompleteSound_6(AudioClip_t3680889665 * value)
	{
		___levelCompleteSound_6 = value;
		Il2CppCodeGenWriteBarrier((&___levelCompleteSound_6), value);
	}

	inline static int32_t get_offset_of_getKeySound_7() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___getKeySound_7)); }
	inline AudioClip_t3680889665 * get_getKeySound_7() const { return ___getKeySound_7; }
	inline AudioClip_t3680889665 ** get_address_of_getKeySound_7() { return &___getKeySound_7; }
	inline void set_getKeySound_7(AudioClip_t3680889665 * value)
	{
		___getKeySound_7 = value;
		Il2CppCodeGenWriteBarrier((&___getKeySound_7), value);
	}

	inline static int32_t get_offset_of_keyPosition_8() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___keyPosition_8)); }
	inline Vector3_t3722313464  get_keyPosition_8() const { return ___keyPosition_8; }
	inline Vector3_t3722313464 * get_address_of_keyPosition_8() { return &___keyPosition_8; }
	inline void set_keyPosition_8(Vector3_t3722313464  value)
	{
		___keyPosition_8 = value;
	}

	inline static int32_t get_offset_of_joystick_9() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___joystick_9)); }
	inline Joystick_t9498292 * get_joystick_9() const { return ___joystick_9; }
	inline Joystick_t9498292 ** get_address_of_joystick_9() { return &___joystick_9; }
	inline void set_joystick_9(Joystick_t9498292 * value)
	{
		___joystick_9 = value;
		Il2CppCodeGenWriteBarrier((&___joystick_9), value);
	}

	inline static int32_t get_offset_of_rb2D_10() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___rb2D_10)); }
	inline Rigidbody2D_t939494601 * get_rb2D_10() const { return ___rb2D_10; }
	inline Rigidbody2D_t939494601 ** get_address_of_rb2D_10() { return &___rb2D_10; }
	inline void set_rb2D_10(Rigidbody2D_t939494601 * value)
	{
		___rb2D_10 = value;
		Il2CppCodeGenWriteBarrier((&___rb2D_10), value);
	}

	inline static int32_t get_offset_of_animator_11() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___animator_11)); }
	inline Animator_t434523843 * get_animator_11() const { return ___animator_11; }
	inline Animator_t434523843 ** get_address_of_animator_11() { return &___animator_11; }
	inline void set_animator_11(Animator_t434523843 * value)
	{
		___animator_11 = value;
		Il2CppCodeGenWriteBarrier((&___animator_11), value);
	}

	inline static int32_t get_offset_of_spriteRenderer_12() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___spriteRenderer_12)); }
	inline SpriteRenderer_t3235626157 * get_spriteRenderer_12() const { return ___spriteRenderer_12; }
	inline SpriteRenderer_t3235626157 ** get_address_of_spriteRenderer_12() { return &___spriteRenderer_12; }
	inline void set_spriteRenderer_12(SpriteRenderer_t3235626157 * value)
	{
		___spriteRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((&___spriteRenderer_12), value);
	}

	inline static int32_t get_offset_of_facingLeft_13() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___facingLeft_13)); }
	inline bool get_facingLeft_13() const { return ___facingLeft_13; }
	inline bool* get_address_of_facingLeft_13() { return &___facingLeft_13; }
	inline void set_facingLeft_13(bool value)
	{
		___facingLeft_13 = value;
	}

	inline static int32_t get_offset_of_facingUp_14() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___facingUp_14)); }
	inline bool get_facingUp_14() const { return ___facingUp_14; }
	inline bool* get_address_of_facingUp_14() { return &___facingUp_14; }
	inline void set_facingUp_14(bool value)
	{
		___facingUp_14 = value;
	}
};

struct PlayerController_t2064355688_StaticFields
{
public:
	// System.Int32 PlayerController::candyCount
	int32_t ___candyCount_15;
	// System.Boolean PlayerController::getKey
	bool ___getKey_16;
	// System.Boolean PlayerController::touchTheDoor
	bool ___touchTheDoor_17;
	// System.Boolean PlayerController::touchEnemy
	bool ___touchEnemy_18;

public:
	inline static int32_t get_offset_of_candyCount_15() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___candyCount_15)); }
	inline int32_t get_candyCount_15() const { return ___candyCount_15; }
	inline int32_t* get_address_of_candyCount_15() { return &___candyCount_15; }
	inline void set_candyCount_15(int32_t value)
	{
		___candyCount_15 = value;
	}

	inline static int32_t get_offset_of_getKey_16() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___getKey_16)); }
	inline bool get_getKey_16() const { return ___getKey_16; }
	inline bool* get_address_of_getKey_16() { return &___getKey_16; }
	inline void set_getKey_16(bool value)
	{
		___getKey_16 = value;
	}

	inline static int32_t get_offset_of_touchTheDoor_17() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___touchTheDoor_17)); }
	inline bool get_touchTheDoor_17() const { return ___touchTheDoor_17; }
	inline bool* get_address_of_touchTheDoor_17() { return &___touchTheDoor_17; }
	inline void set_touchTheDoor_17(bool value)
	{
		___touchTheDoor_17 = value;
	}

	inline static int32_t get_offset_of_touchEnemy_18() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___touchEnemy_18)); }
	inline bool get_touchEnemy_18() const { return ___touchEnemy_18; }
	inline bool* get_address_of_touchEnemy_18() { return &___touchEnemy_18; }
	inline void set_touchEnemy_18(bool value)
	{
		___touchEnemy_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T2064355688_H
#ifndef ROADMAPWALKING_T2643330104_H
#define ROADMAPWALKING_T2643330104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoadmapWalking
struct  RoadmapWalking_t2643330104  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody2D RoadmapWalking::rb2d
	Rigidbody2D_t939494601 * ___rb2d_4;
	// UnityEngine.Coroutine RoadmapWalking::change
	Coroutine_t3829159415 * ___change_5;
	// UnityEngine.GameObject RoadmapWalking::firstDoor
	GameObject_t1113636619 * ___firstDoor_6;
	// UnityEngine.GameObject RoadmapWalking::secondDoor
	GameObject_t1113636619 * ___secondDoor_7;
	// UnityEngine.GameObject RoadmapWalking::thirdDoor
	GameObject_t1113636619 * ___thirdDoor_8;
	// UnityEngine.GameObject RoadmapWalking::fourthDoor
	GameObject_t1113636619 * ___fourthDoor_9;
	// UnityEngine.GameObject RoadmapWalking::fifthDoor
	GameObject_t1113636619 * ___fifthDoor_10;
	// UnityEngine.GameObject RoadmapWalking::level1Button
	GameObject_t1113636619 * ___level1Button_11;
	// UnityEngine.GameObject RoadmapWalking::level2Button
	GameObject_t1113636619 * ___level2Button_12;
	// UnityEngine.GameObject RoadmapWalking::level3Button
	GameObject_t1113636619 * ___level3Button_13;
	// UnityEngine.GameObject RoadmapWalking::level4Button
	GameObject_t1113636619 * ___level4Button_14;
	// UnityEngine.GameObject RoadmapWalking::level5Button
	GameObject_t1113636619 * ___level5Button_15;

public:
	inline static int32_t get_offset_of_rb2d_4() { return static_cast<int32_t>(offsetof(RoadmapWalking_t2643330104, ___rb2d_4)); }
	inline Rigidbody2D_t939494601 * get_rb2d_4() const { return ___rb2d_4; }
	inline Rigidbody2D_t939494601 ** get_address_of_rb2d_4() { return &___rb2d_4; }
	inline void set_rb2d_4(Rigidbody2D_t939494601 * value)
	{
		___rb2d_4 = value;
		Il2CppCodeGenWriteBarrier((&___rb2d_4), value);
	}

	inline static int32_t get_offset_of_change_5() { return static_cast<int32_t>(offsetof(RoadmapWalking_t2643330104, ___change_5)); }
	inline Coroutine_t3829159415 * get_change_5() const { return ___change_5; }
	inline Coroutine_t3829159415 ** get_address_of_change_5() { return &___change_5; }
	inline void set_change_5(Coroutine_t3829159415 * value)
	{
		___change_5 = value;
		Il2CppCodeGenWriteBarrier((&___change_5), value);
	}

	inline static int32_t get_offset_of_firstDoor_6() { return static_cast<int32_t>(offsetof(RoadmapWalking_t2643330104, ___firstDoor_6)); }
	inline GameObject_t1113636619 * get_firstDoor_6() const { return ___firstDoor_6; }
	inline GameObject_t1113636619 ** get_address_of_firstDoor_6() { return &___firstDoor_6; }
	inline void set_firstDoor_6(GameObject_t1113636619 * value)
	{
		___firstDoor_6 = value;
		Il2CppCodeGenWriteBarrier((&___firstDoor_6), value);
	}

	inline static int32_t get_offset_of_secondDoor_7() { return static_cast<int32_t>(offsetof(RoadmapWalking_t2643330104, ___secondDoor_7)); }
	inline GameObject_t1113636619 * get_secondDoor_7() const { return ___secondDoor_7; }
	inline GameObject_t1113636619 ** get_address_of_secondDoor_7() { return &___secondDoor_7; }
	inline void set_secondDoor_7(GameObject_t1113636619 * value)
	{
		___secondDoor_7 = value;
		Il2CppCodeGenWriteBarrier((&___secondDoor_7), value);
	}

	inline static int32_t get_offset_of_thirdDoor_8() { return static_cast<int32_t>(offsetof(RoadmapWalking_t2643330104, ___thirdDoor_8)); }
	inline GameObject_t1113636619 * get_thirdDoor_8() const { return ___thirdDoor_8; }
	inline GameObject_t1113636619 ** get_address_of_thirdDoor_8() { return &___thirdDoor_8; }
	inline void set_thirdDoor_8(GameObject_t1113636619 * value)
	{
		___thirdDoor_8 = value;
		Il2CppCodeGenWriteBarrier((&___thirdDoor_8), value);
	}

	inline static int32_t get_offset_of_fourthDoor_9() { return static_cast<int32_t>(offsetof(RoadmapWalking_t2643330104, ___fourthDoor_9)); }
	inline GameObject_t1113636619 * get_fourthDoor_9() const { return ___fourthDoor_9; }
	inline GameObject_t1113636619 ** get_address_of_fourthDoor_9() { return &___fourthDoor_9; }
	inline void set_fourthDoor_9(GameObject_t1113636619 * value)
	{
		___fourthDoor_9 = value;
		Il2CppCodeGenWriteBarrier((&___fourthDoor_9), value);
	}

	inline static int32_t get_offset_of_fifthDoor_10() { return static_cast<int32_t>(offsetof(RoadmapWalking_t2643330104, ___fifthDoor_10)); }
	inline GameObject_t1113636619 * get_fifthDoor_10() const { return ___fifthDoor_10; }
	inline GameObject_t1113636619 ** get_address_of_fifthDoor_10() { return &___fifthDoor_10; }
	inline void set_fifthDoor_10(GameObject_t1113636619 * value)
	{
		___fifthDoor_10 = value;
		Il2CppCodeGenWriteBarrier((&___fifthDoor_10), value);
	}

	inline static int32_t get_offset_of_level1Button_11() { return static_cast<int32_t>(offsetof(RoadmapWalking_t2643330104, ___level1Button_11)); }
	inline GameObject_t1113636619 * get_level1Button_11() const { return ___level1Button_11; }
	inline GameObject_t1113636619 ** get_address_of_level1Button_11() { return &___level1Button_11; }
	inline void set_level1Button_11(GameObject_t1113636619 * value)
	{
		___level1Button_11 = value;
		Il2CppCodeGenWriteBarrier((&___level1Button_11), value);
	}

	inline static int32_t get_offset_of_level2Button_12() { return static_cast<int32_t>(offsetof(RoadmapWalking_t2643330104, ___level2Button_12)); }
	inline GameObject_t1113636619 * get_level2Button_12() const { return ___level2Button_12; }
	inline GameObject_t1113636619 ** get_address_of_level2Button_12() { return &___level2Button_12; }
	inline void set_level2Button_12(GameObject_t1113636619 * value)
	{
		___level2Button_12 = value;
		Il2CppCodeGenWriteBarrier((&___level2Button_12), value);
	}

	inline static int32_t get_offset_of_level3Button_13() { return static_cast<int32_t>(offsetof(RoadmapWalking_t2643330104, ___level3Button_13)); }
	inline GameObject_t1113636619 * get_level3Button_13() const { return ___level3Button_13; }
	inline GameObject_t1113636619 ** get_address_of_level3Button_13() { return &___level3Button_13; }
	inline void set_level3Button_13(GameObject_t1113636619 * value)
	{
		___level3Button_13 = value;
		Il2CppCodeGenWriteBarrier((&___level3Button_13), value);
	}

	inline static int32_t get_offset_of_level4Button_14() { return static_cast<int32_t>(offsetof(RoadmapWalking_t2643330104, ___level4Button_14)); }
	inline GameObject_t1113636619 * get_level4Button_14() const { return ___level4Button_14; }
	inline GameObject_t1113636619 ** get_address_of_level4Button_14() { return &___level4Button_14; }
	inline void set_level4Button_14(GameObject_t1113636619 * value)
	{
		___level4Button_14 = value;
		Il2CppCodeGenWriteBarrier((&___level4Button_14), value);
	}

	inline static int32_t get_offset_of_level5Button_15() { return static_cast<int32_t>(offsetof(RoadmapWalking_t2643330104, ___level5Button_15)); }
	inline GameObject_t1113636619 * get_level5Button_15() const { return ___level5Button_15; }
	inline GameObject_t1113636619 ** get_address_of_level5Button_15() { return &___level5Button_15; }
	inline void set_level5Button_15(GameObject_t1113636619 * value)
	{
		___level5Button_15 = value;
		Il2CppCodeGenWriteBarrier((&___level5Button_15), value);
	}
};

struct RoadmapWalking_t2643330104_StaticFields
{
public:
	// UnityEngine.Vector3 RoadmapWalking::roadmapPosition
	Vector3_t3722313464  ___roadmapPosition_16;

public:
	inline static int32_t get_offset_of_roadmapPosition_16() { return static_cast<int32_t>(offsetof(RoadmapWalking_t2643330104_StaticFields, ___roadmapPosition_16)); }
	inline Vector3_t3722313464  get_roadmapPosition_16() const { return ___roadmapPosition_16; }
	inline Vector3_t3722313464 * get_address_of_roadmapPosition_16() { return &___roadmapPosition_16; }
	inline void set_roadmapPosition_16(Vector3_t3722313464  value)
	{
		___roadmapPosition_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROADMAPWALKING_T2643330104_H
#ifndef SCENEMANAGEMENT_T3330828178_H
#define SCENEMANAGEMENT_T3330828178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneManagement
struct  SceneManagement_t3330828178  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGEMENT_T3330828178_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_4;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_5;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_4)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_5() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_5)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_5() const { return ___ambisonicExtension_5; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_5() { return &___ambisonicExtension_5; }
	inline void set_ambisonicExtension_5(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_5 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef POLYGONCOLLIDER2D_T57175488_H
#define POLYGONCOLLIDER2D_T57175488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PolygonCollider2D
struct  PolygonCollider2D_t57175488  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLYGONCOLLIDER2D_T57175488_H
#ifndef FIXEDJOYSTICK_T2618381211_H
#define FIXEDJOYSTICK_T2618381211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FixedJoystick
struct  FixedJoystick_t2618381211  : public Joystick_t9498292
{
public:
	// UnityEngine.Vector2 FixedJoystick::joystickPosition
	Vector2_t2156229523  ___joystickPosition_9;
	// UnityEngine.Camera FixedJoystick::cam
	Camera_t4157153871 * ___cam_10;

public:
	inline static int32_t get_offset_of_joystickPosition_9() { return static_cast<int32_t>(offsetof(FixedJoystick_t2618381211, ___joystickPosition_9)); }
	inline Vector2_t2156229523  get_joystickPosition_9() const { return ___joystickPosition_9; }
	inline Vector2_t2156229523 * get_address_of_joystickPosition_9() { return &___joystickPosition_9; }
	inline void set_joystickPosition_9(Vector2_t2156229523  value)
	{
		___joystickPosition_9 = value;
	}

	inline static int32_t get_offset_of_cam_10() { return static_cast<int32_t>(offsetof(FixedJoystick_t2618381211, ___cam_10)); }
	inline Camera_t4157153871 * get_cam_10() const { return ___cam_10; }
	inline Camera_t4157153871 ** get_address_of_cam_10() { return &___cam_10; }
	inline void set_cam_10(Camera_t4157153871 * value)
	{
		___cam_10 = value;
		Il2CppCodeGenWriteBarrier((&___cam_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDJOYSTICK_T2618381211_H
#ifndef FLOATINGJOYSTICK_T3402721920_H
#define FLOATINGJOYSTICK_T3402721920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FloatingJoystick
struct  FloatingJoystick_t3402721920  : public Joystick_t9498292
{
public:
	// UnityEngine.Vector2 FloatingJoystick::joystickCenter
	Vector2_t2156229523  ___joystickCenter_9;

public:
	inline static int32_t get_offset_of_joystickCenter_9() { return static_cast<int32_t>(offsetof(FloatingJoystick_t3402721920, ___joystickCenter_9)); }
	inline Vector2_t2156229523  get_joystickCenter_9() const { return ___joystickCenter_9; }
	inline Vector2_t2156229523 * get_address_of_joystickCenter_9() { return &___joystickCenter_9; }
	inline void set_joystickCenter_9(Vector2_t2156229523  value)
	{
		___joystickCenter_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLOATINGJOYSTICK_T3402721920_H
#ifndef SEEKER_T2437677217_H
#define SEEKER_T2437677217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Seeker
struct  Seeker_t2437677217  : public VersionedMonoBehaviour_t2091980155
{
public:
	// System.Boolean Pathfinding.Seeker::drawGizmos
	bool ___drawGizmos_5;
	// System.Boolean Pathfinding.Seeker::detailedGizmos
	bool ___detailedGizmos_6;
	// Pathfinding.StartEndModifier Pathfinding.Seeker::startEndModifier
	StartEndModifier_t1526148034 * ___startEndModifier_7;
	// System.Int32 Pathfinding.Seeker::traversableTags
	int32_t ___traversableTags_8;
	// System.Int32[] Pathfinding.Seeker::tagPenalties
	Int32U5BU5D_t385246372* ___tagPenalties_9;
	// Pathfinding.GraphMask Pathfinding.Seeker::graphMask
	GraphMask_t1969735572  ___graphMask_10;
	// System.Int32 Pathfinding.Seeker::graphMaskCompatibility
	int32_t ___graphMaskCompatibility_11;
	// Pathfinding.OnPathDelegate Pathfinding.Seeker::pathCallback
	OnPathDelegate_t1613993614 * ___pathCallback_12;
	// Pathfinding.OnPathDelegate Pathfinding.Seeker::preProcessPath
	OnPathDelegate_t1613993614 * ___preProcessPath_13;
	// Pathfinding.OnPathDelegate Pathfinding.Seeker::postProcessPath
	OnPathDelegate_t1613993614 * ___postProcessPath_14;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.Seeker::lastCompletedVectorPath
	List_1_t899420910 * ___lastCompletedVectorPath_15;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.Seeker::lastCompletedNodePath
	List_1_t2174534838 * ___lastCompletedNodePath_16;
	// Pathfinding.Path Pathfinding.Seeker::path
	Path_t276937969 * ___path_17;
	// Pathfinding.Path Pathfinding.Seeker::prevPath
	Path_t276937969 * ___prevPath_18;
	// Pathfinding.OnPathDelegate Pathfinding.Seeker::onPathDelegate
	OnPathDelegate_t1613993614 * ___onPathDelegate_19;
	// Pathfinding.OnPathDelegate Pathfinding.Seeker::tmpPathCallback
	OnPathDelegate_t1613993614 * ___tmpPathCallback_20;
	// System.UInt32 Pathfinding.Seeker::lastPathID
	uint32_t ___lastPathID_21;
	// System.Collections.Generic.List`1<Pathfinding.IPathModifier> Pathfinding.Seeker::modifiers
	List_1_t3513960069 * ___modifiers_22;

public:
	inline static int32_t get_offset_of_drawGizmos_5() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___drawGizmos_5)); }
	inline bool get_drawGizmos_5() const { return ___drawGizmos_5; }
	inline bool* get_address_of_drawGizmos_5() { return &___drawGizmos_5; }
	inline void set_drawGizmos_5(bool value)
	{
		___drawGizmos_5 = value;
	}

	inline static int32_t get_offset_of_detailedGizmos_6() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___detailedGizmos_6)); }
	inline bool get_detailedGizmos_6() const { return ___detailedGizmos_6; }
	inline bool* get_address_of_detailedGizmos_6() { return &___detailedGizmos_6; }
	inline void set_detailedGizmos_6(bool value)
	{
		___detailedGizmos_6 = value;
	}

	inline static int32_t get_offset_of_startEndModifier_7() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___startEndModifier_7)); }
	inline StartEndModifier_t1526148034 * get_startEndModifier_7() const { return ___startEndModifier_7; }
	inline StartEndModifier_t1526148034 ** get_address_of_startEndModifier_7() { return &___startEndModifier_7; }
	inline void set_startEndModifier_7(StartEndModifier_t1526148034 * value)
	{
		___startEndModifier_7 = value;
		Il2CppCodeGenWriteBarrier((&___startEndModifier_7), value);
	}

	inline static int32_t get_offset_of_traversableTags_8() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___traversableTags_8)); }
	inline int32_t get_traversableTags_8() const { return ___traversableTags_8; }
	inline int32_t* get_address_of_traversableTags_8() { return &___traversableTags_8; }
	inline void set_traversableTags_8(int32_t value)
	{
		___traversableTags_8 = value;
	}

	inline static int32_t get_offset_of_tagPenalties_9() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___tagPenalties_9)); }
	inline Int32U5BU5D_t385246372* get_tagPenalties_9() const { return ___tagPenalties_9; }
	inline Int32U5BU5D_t385246372** get_address_of_tagPenalties_9() { return &___tagPenalties_9; }
	inline void set_tagPenalties_9(Int32U5BU5D_t385246372* value)
	{
		___tagPenalties_9 = value;
		Il2CppCodeGenWriteBarrier((&___tagPenalties_9), value);
	}

	inline static int32_t get_offset_of_graphMask_10() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___graphMask_10)); }
	inline GraphMask_t1969735572  get_graphMask_10() const { return ___graphMask_10; }
	inline GraphMask_t1969735572 * get_address_of_graphMask_10() { return &___graphMask_10; }
	inline void set_graphMask_10(GraphMask_t1969735572  value)
	{
		___graphMask_10 = value;
	}

	inline static int32_t get_offset_of_graphMaskCompatibility_11() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___graphMaskCompatibility_11)); }
	inline int32_t get_graphMaskCompatibility_11() const { return ___graphMaskCompatibility_11; }
	inline int32_t* get_address_of_graphMaskCompatibility_11() { return &___graphMaskCompatibility_11; }
	inline void set_graphMaskCompatibility_11(int32_t value)
	{
		___graphMaskCompatibility_11 = value;
	}

	inline static int32_t get_offset_of_pathCallback_12() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___pathCallback_12)); }
	inline OnPathDelegate_t1613993614 * get_pathCallback_12() const { return ___pathCallback_12; }
	inline OnPathDelegate_t1613993614 ** get_address_of_pathCallback_12() { return &___pathCallback_12; }
	inline void set_pathCallback_12(OnPathDelegate_t1613993614 * value)
	{
		___pathCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___pathCallback_12), value);
	}

	inline static int32_t get_offset_of_preProcessPath_13() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___preProcessPath_13)); }
	inline OnPathDelegate_t1613993614 * get_preProcessPath_13() const { return ___preProcessPath_13; }
	inline OnPathDelegate_t1613993614 ** get_address_of_preProcessPath_13() { return &___preProcessPath_13; }
	inline void set_preProcessPath_13(OnPathDelegate_t1613993614 * value)
	{
		___preProcessPath_13 = value;
		Il2CppCodeGenWriteBarrier((&___preProcessPath_13), value);
	}

	inline static int32_t get_offset_of_postProcessPath_14() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___postProcessPath_14)); }
	inline OnPathDelegate_t1613993614 * get_postProcessPath_14() const { return ___postProcessPath_14; }
	inline OnPathDelegate_t1613993614 ** get_address_of_postProcessPath_14() { return &___postProcessPath_14; }
	inline void set_postProcessPath_14(OnPathDelegate_t1613993614 * value)
	{
		___postProcessPath_14 = value;
		Il2CppCodeGenWriteBarrier((&___postProcessPath_14), value);
	}

	inline static int32_t get_offset_of_lastCompletedVectorPath_15() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___lastCompletedVectorPath_15)); }
	inline List_1_t899420910 * get_lastCompletedVectorPath_15() const { return ___lastCompletedVectorPath_15; }
	inline List_1_t899420910 ** get_address_of_lastCompletedVectorPath_15() { return &___lastCompletedVectorPath_15; }
	inline void set_lastCompletedVectorPath_15(List_1_t899420910 * value)
	{
		___lastCompletedVectorPath_15 = value;
		Il2CppCodeGenWriteBarrier((&___lastCompletedVectorPath_15), value);
	}

	inline static int32_t get_offset_of_lastCompletedNodePath_16() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___lastCompletedNodePath_16)); }
	inline List_1_t2174534838 * get_lastCompletedNodePath_16() const { return ___lastCompletedNodePath_16; }
	inline List_1_t2174534838 ** get_address_of_lastCompletedNodePath_16() { return &___lastCompletedNodePath_16; }
	inline void set_lastCompletedNodePath_16(List_1_t2174534838 * value)
	{
		___lastCompletedNodePath_16 = value;
		Il2CppCodeGenWriteBarrier((&___lastCompletedNodePath_16), value);
	}

	inline static int32_t get_offset_of_path_17() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___path_17)); }
	inline Path_t276937969 * get_path_17() const { return ___path_17; }
	inline Path_t276937969 ** get_address_of_path_17() { return &___path_17; }
	inline void set_path_17(Path_t276937969 * value)
	{
		___path_17 = value;
		Il2CppCodeGenWriteBarrier((&___path_17), value);
	}

	inline static int32_t get_offset_of_prevPath_18() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___prevPath_18)); }
	inline Path_t276937969 * get_prevPath_18() const { return ___prevPath_18; }
	inline Path_t276937969 ** get_address_of_prevPath_18() { return &___prevPath_18; }
	inline void set_prevPath_18(Path_t276937969 * value)
	{
		___prevPath_18 = value;
		Il2CppCodeGenWriteBarrier((&___prevPath_18), value);
	}

	inline static int32_t get_offset_of_onPathDelegate_19() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___onPathDelegate_19)); }
	inline OnPathDelegate_t1613993614 * get_onPathDelegate_19() const { return ___onPathDelegate_19; }
	inline OnPathDelegate_t1613993614 ** get_address_of_onPathDelegate_19() { return &___onPathDelegate_19; }
	inline void set_onPathDelegate_19(OnPathDelegate_t1613993614 * value)
	{
		___onPathDelegate_19 = value;
		Il2CppCodeGenWriteBarrier((&___onPathDelegate_19), value);
	}

	inline static int32_t get_offset_of_tmpPathCallback_20() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___tmpPathCallback_20)); }
	inline OnPathDelegate_t1613993614 * get_tmpPathCallback_20() const { return ___tmpPathCallback_20; }
	inline OnPathDelegate_t1613993614 ** get_address_of_tmpPathCallback_20() { return &___tmpPathCallback_20; }
	inline void set_tmpPathCallback_20(OnPathDelegate_t1613993614 * value)
	{
		___tmpPathCallback_20 = value;
		Il2CppCodeGenWriteBarrier((&___tmpPathCallback_20), value);
	}

	inline static int32_t get_offset_of_lastPathID_21() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___lastPathID_21)); }
	inline uint32_t get_lastPathID_21() const { return ___lastPathID_21; }
	inline uint32_t* get_address_of_lastPathID_21() { return &___lastPathID_21; }
	inline void set_lastPathID_21(uint32_t value)
	{
		___lastPathID_21 = value;
	}

	inline static int32_t get_offset_of_modifiers_22() { return static_cast<int32_t>(offsetof(Seeker_t2437677217, ___modifiers_22)); }
	inline List_1_t3513960069 * get_modifiers_22() const { return ___modifiers_22; }
	inline List_1_t3513960069 ** get_address_of_modifiers_22() { return &___modifiers_22; }
	inline void set_modifiers_22(List_1_t3513960069 * value)
	{
		___modifiers_22 = value;
		Il2CppCodeGenWriteBarrier((&___modifiers_22), value);
	}
};

struct Seeker_t2437677217_StaticFields
{
public:
	// System.Comparison`1<Pathfinding.IPathModifier> Pathfinding.Seeker::<>f__am$cache0
	Comparison_1_t1816816506 * ___U3CU3Ef__amU24cache0_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_23() { return static_cast<int32_t>(offsetof(Seeker_t2437677217_StaticFields, ___U3CU3Ef__amU24cache0_23)); }
	inline Comparison_1_t1816816506 * get_U3CU3Ef__amU24cache0_23() const { return ___U3CU3Ef__amU24cache0_23; }
	inline Comparison_1_t1816816506 ** get_address_of_U3CU3Ef__amU24cache0_23() { return &___U3CU3Ef__amU24cache0_23; }
	inline void set_U3CU3Ef__amU24cache0_23(Comparison_1_t1816816506 * value)
	{
		___U3CU3Ef__amU24cache0_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEEKER_T2437677217_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_5;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_6;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_7;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_8;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_9;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_10;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_11;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_12;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_17;

public:
	inline static int32_t get_offset_of_m_Navigation_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_5)); }
	inline Navigation_t3049316579  get_m_Navigation_5() const { return ___m_Navigation_5; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_5() { return &___m_Navigation_5; }
	inline void set_m_Navigation_5(Navigation_t3049316579  value)
	{
		___m_Navigation_5 = value;
	}

	inline static int32_t get_offset_of_m_Transition_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_6)); }
	inline int32_t get_m_Transition_6() const { return ___m_Transition_6; }
	inline int32_t* get_address_of_m_Transition_6() { return &___m_Transition_6; }
	inline void set_m_Transition_6(int32_t value)
	{
		___m_Transition_6 = value;
	}

	inline static int32_t get_offset_of_m_Colors_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_7)); }
	inline ColorBlock_t2139031574  get_m_Colors_7() const { return ___m_Colors_7; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_7() { return &___m_Colors_7; }
	inline void set_m_Colors_7(ColorBlock_t2139031574  value)
	{
		___m_Colors_7 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_8)); }
	inline SpriteState_t1362986479  get_m_SpriteState_8() const { return ___m_SpriteState_8; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_8() { return &___m_SpriteState_8; }
	inline void set_m_SpriteState_8(SpriteState_t1362986479  value)
	{
		___m_SpriteState_8 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_9)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_9() const { return ___m_AnimationTriggers_9; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_9() { return &___m_AnimationTriggers_9; }
	inline void set_m_AnimationTriggers_9(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_9), value);
	}

	inline static int32_t get_offset_of_m_Interactable_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_10)); }
	inline bool get_m_Interactable_10() const { return ___m_Interactable_10; }
	inline bool* get_address_of_m_Interactable_10() { return &___m_Interactable_10; }
	inline void set_m_Interactable_10(bool value)
	{
		___m_Interactable_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_11)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_11() const { return ___m_TargetGraphic_11; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_11() { return &___m_TargetGraphic_11; }
	inline void set_m_TargetGraphic_11(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_11), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_12)); }
	inline bool get_m_GroupsAllowInteraction_12() const { return ___m_GroupsAllowInteraction_12; }
	inline bool* get_address_of_m_GroupsAllowInteraction_12() { return &___m_GroupsAllowInteraction_12; }
	inline void set_m_GroupsAllowInteraction_12(bool value)
	{
		___m_GroupsAllowInteraction_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_13)); }
	inline int32_t get_m_CurrentSelectionState_13() const { return ___m_CurrentSelectionState_13; }
	inline int32_t* get_address_of_m_CurrentSelectionState_13() { return &___m_CurrentSelectionState_13; }
	inline void set_m_CurrentSelectionState_13(int32_t value)
	{
		___m_CurrentSelectionState_13 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_14)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_14() const { return ___U3CisPointerInsideU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_14() { return &___U3CisPointerInsideU3Ek__BackingField_14; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_14(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_15() const { return ___U3CisPointerDownU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_15() { return &___U3CisPointerDownU3Ek__BackingField_15; }
	inline void set_U3CisPointerDownU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_16)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_16() const { return ___U3ChasSelectionU3Ek__BackingField_16; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_16() { return &___U3ChasSelectionU3Ek__BackingField_16; }
	inline void set_U3ChasSelectionU3Ek__BackingField_16(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_17() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_17)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_17() const { return ___m_CanvasGroupCache_17; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_17() { return &___m_CanvasGroupCache_17; }
	inline void set_m_CanvasGroupCache_17(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_17), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_4;

public:
	inline static int32_t get_offset_of_s_List_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_4)); }
	inline List_1_t427135887 * get_s_List_4() const { return ___s_List_4; }
	inline List_1_t427135887 ** get_address_of_s_List_4() { return &___s_List_4; }
	inline void set_s_List_4(List_1_t427135887 * value)
	{
		___s_List_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef VARIABLEJOYSTICK_T2643911586_H
#define VARIABLEJOYSTICK_T2643911586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VariableJoystick
struct  VariableJoystick_t2643911586  : public Joystick_t9498292
{
public:
	// System.Boolean VariableJoystick::isFixed
	bool ___isFixed_9;
	// UnityEngine.Vector2 VariableJoystick::fixedScreenPosition
	Vector2_t2156229523  ___fixedScreenPosition_10;
	// UnityEngine.Vector2 VariableJoystick::joystickCenter
	Vector2_t2156229523  ___joystickCenter_11;

public:
	inline static int32_t get_offset_of_isFixed_9() { return static_cast<int32_t>(offsetof(VariableJoystick_t2643911586, ___isFixed_9)); }
	inline bool get_isFixed_9() const { return ___isFixed_9; }
	inline bool* get_address_of_isFixed_9() { return &___isFixed_9; }
	inline void set_isFixed_9(bool value)
	{
		___isFixed_9 = value;
	}

	inline static int32_t get_offset_of_fixedScreenPosition_10() { return static_cast<int32_t>(offsetof(VariableJoystick_t2643911586, ___fixedScreenPosition_10)); }
	inline Vector2_t2156229523  get_fixedScreenPosition_10() const { return ___fixedScreenPosition_10; }
	inline Vector2_t2156229523 * get_address_of_fixedScreenPosition_10() { return &___fixedScreenPosition_10; }
	inline void set_fixedScreenPosition_10(Vector2_t2156229523  value)
	{
		___fixedScreenPosition_10 = value;
	}

	inline static int32_t get_offset_of_joystickCenter_11() { return static_cast<int32_t>(offsetof(VariableJoystick_t2643911586, ___joystickCenter_11)); }
	inline Vector2_t2156229523  get_joystickCenter_11() const { return ___joystickCenter_11; }
	inline Vector2_t2156229523 * get_address_of_joystickCenter_11() { return &___joystickCenter_11; }
	inline void set_joystickCenter_11(Vector2_t2156229523  value)
	{
		___joystickCenter_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARIABLEJOYSTICK_T2643911586_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef SLIDER_T3903728902_H
#define SLIDER_T3903728902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider
struct  Slider_t3903728902  : public Selectable_t3250028441
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t3704657025 * ___m_FillRect_18;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t3704657025 * ___m_HandleRect_19;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_20;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_21;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_22;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_23;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_24;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t3180273144 * ___m_OnValueChanged_25;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t2670269651 * ___m_FillImage_26;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_t3600365921 * ___m_FillTransform_27;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t3704657025 * ___m_FillContainerRect_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_t3600365921 * ___m_HandleTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t3704657025 * ___m_HandleContainerRect_30;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t2156229523  ___m_Offset_31;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_32;

public:
	inline static int32_t get_offset_of_m_FillRect_18() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillRect_18)); }
	inline RectTransform_t3704657025 * get_m_FillRect_18() const { return ___m_FillRect_18; }
	inline RectTransform_t3704657025 ** get_address_of_m_FillRect_18() { return &___m_FillRect_18; }
	inline void set_m_FillRect_18(RectTransform_t3704657025 * value)
	{
		___m_FillRect_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillRect_18), value);
	}

	inline static int32_t get_offset_of_m_HandleRect_19() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleRect_19)); }
	inline RectTransform_t3704657025 * get_m_HandleRect_19() const { return ___m_HandleRect_19; }
	inline RectTransform_t3704657025 ** get_address_of_m_HandleRect_19() { return &___m_HandleRect_19; }
	inline void set_m_HandleRect_19(RectTransform_t3704657025 * value)
	{
		___m_HandleRect_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleRect_19), value);
	}

	inline static int32_t get_offset_of_m_Direction_20() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Direction_20)); }
	inline int32_t get_m_Direction_20() const { return ___m_Direction_20; }
	inline int32_t* get_address_of_m_Direction_20() { return &___m_Direction_20; }
	inline void set_m_Direction_20(int32_t value)
	{
		___m_Direction_20 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_21() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_MinValue_21)); }
	inline float get_m_MinValue_21() const { return ___m_MinValue_21; }
	inline float* get_address_of_m_MinValue_21() { return &___m_MinValue_21; }
	inline void set_m_MinValue_21(float value)
	{
		___m_MinValue_21 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_22() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_MaxValue_22)); }
	inline float get_m_MaxValue_22() const { return ___m_MaxValue_22; }
	inline float* get_address_of_m_MaxValue_22() { return &___m_MaxValue_22; }
	inline void set_m_MaxValue_22(float value)
	{
		___m_MaxValue_22 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_23() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_WholeNumbers_23)); }
	inline bool get_m_WholeNumbers_23() const { return ___m_WholeNumbers_23; }
	inline bool* get_address_of_m_WholeNumbers_23() { return &___m_WholeNumbers_23; }
	inline void set_m_WholeNumbers_23(bool value)
	{
		___m_WholeNumbers_23 = value;
	}

	inline static int32_t get_offset_of_m_Value_24() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Value_24)); }
	inline float get_m_Value_24() const { return ___m_Value_24; }
	inline float* get_address_of_m_Value_24() { return &___m_Value_24; }
	inline void set_m_Value_24(float value)
	{
		___m_Value_24 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_25() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_OnValueChanged_25)); }
	inline SliderEvent_t3180273144 * get_m_OnValueChanged_25() const { return ___m_OnValueChanged_25; }
	inline SliderEvent_t3180273144 ** get_address_of_m_OnValueChanged_25() { return &___m_OnValueChanged_25; }
	inline void set_m_OnValueChanged_25(SliderEvent_t3180273144 * value)
	{
		___m_OnValueChanged_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_25), value);
	}

	inline static int32_t get_offset_of_m_FillImage_26() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillImage_26)); }
	inline Image_t2670269651 * get_m_FillImage_26() const { return ___m_FillImage_26; }
	inline Image_t2670269651 ** get_address_of_m_FillImage_26() { return &___m_FillImage_26; }
	inline void set_m_FillImage_26(Image_t2670269651 * value)
	{
		___m_FillImage_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillImage_26), value);
	}

	inline static int32_t get_offset_of_m_FillTransform_27() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillTransform_27)); }
	inline Transform_t3600365921 * get_m_FillTransform_27() const { return ___m_FillTransform_27; }
	inline Transform_t3600365921 ** get_address_of_m_FillTransform_27() { return &___m_FillTransform_27; }
	inline void set_m_FillTransform_27(Transform_t3600365921 * value)
	{
		___m_FillTransform_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillTransform_27), value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_28() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillContainerRect_28)); }
	inline RectTransform_t3704657025 * get_m_FillContainerRect_28() const { return ___m_FillContainerRect_28; }
	inline RectTransform_t3704657025 ** get_address_of_m_FillContainerRect_28() { return &___m_FillContainerRect_28; }
	inline void set_m_FillContainerRect_28(RectTransform_t3704657025 * value)
	{
		___m_FillContainerRect_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillContainerRect_28), value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_29() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleTransform_29)); }
	inline Transform_t3600365921 * get_m_HandleTransform_29() const { return ___m_HandleTransform_29; }
	inline Transform_t3600365921 ** get_address_of_m_HandleTransform_29() { return &___m_HandleTransform_29; }
	inline void set_m_HandleTransform_29(Transform_t3600365921 * value)
	{
		___m_HandleTransform_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleTransform_29), value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleContainerRect_30)); }
	inline RectTransform_t3704657025 * get_m_HandleContainerRect_30() const { return ___m_HandleContainerRect_30; }
	inline RectTransform_t3704657025 ** get_address_of_m_HandleContainerRect_30() { return &___m_HandleContainerRect_30; }
	inline void set_m_HandleContainerRect_30(RectTransform_t3704657025 * value)
	{
		___m_HandleContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleContainerRect_30), value);
	}

	inline static int32_t get_offset_of_m_Offset_31() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Offset_31)); }
	inline Vector2_t2156229523  get_m_Offset_31() const { return ___m_Offset_31; }
	inline Vector2_t2156229523 * get_address_of_m_Offset_31() { return &___m_Offset_31; }
	inline void set_m_Offset_31(Vector2_t2156229523  value)
	{
		___m_Offset_31 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_32() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Tracker_32)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_32() const { return ___m_Tracker_32; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_32() { return &___m_Tracker_32; }
	inline void set_m_Tracker_32(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDER_T3903728902_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_31;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_32;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_33;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_34;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_35;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_36;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_37;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_38;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_39;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_40;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_41;

public:
	inline static int32_t get_offset_of_m_Sprite_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_31)); }
	inline Sprite_t280657092 * get_m_Sprite_31() const { return ___m_Sprite_31; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_31() { return &___m_Sprite_31; }
	inline void set_m_Sprite_31(Sprite_t280657092 * value)
	{
		___m_Sprite_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_31), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_32)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_32() const { return ___m_OverrideSprite_32; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_32() { return &___m_OverrideSprite_32; }
	inline void set_m_OverrideSprite_32(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_32), value);
	}

	inline static int32_t get_offset_of_m_Type_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_33)); }
	inline int32_t get_m_Type_33() const { return ___m_Type_33; }
	inline int32_t* get_address_of_m_Type_33() { return &___m_Type_33; }
	inline void set_m_Type_33(int32_t value)
	{
		___m_Type_33 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_34)); }
	inline bool get_m_PreserveAspect_34() const { return ___m_PreserveAspect_34; }
	inline bool* get_address_of_m_PreserveAspect_34() { return &___m_PreserveAspect_34; }
	inline void set_m_PreserveAspect_34(bool value)
	{
		___m_PreserveAspect_34 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_35)); }
	inline bool get_m_FillCenter_35() const { return ___m_FillCenter_35; }
	inline bool* get_address_of_m_FillCenter_35() { return &___m_FillCenter_35; }
	inline void set_m_FillCenter_35(bool value)
	{
		___m_FillCenter_35 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_36)); }
	inline int32_t get_m_FillMethod_36() const { return ___m_FillMethod_36; }
	inline int32_t* get_address_of_m_FillMethod_36() { return &___m_FillMethod_36; }
	inline void set_m_FillMethod_36(int32_t value)
	{
		___m_FillMethod_36 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_37)); }
	inline float get_m_FillAmount_37() const { return ___m_FillAmount_37; }
	inline float* get_address_of_m_FillAmount_37() { return &___m_FillAmount_37; }
	inline void set_m_FillAmount_37(float value)
	{
		___m_FillAmount_37 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_38)); }
	inline bool get_m_FillClockwise_38() const { return ___m_FillClockwise_38; }
	inline bool* get_address_of_m_FillClockwise_38() { return &___m_FillClockwise_38; }
	inline void set_m_FillClockwise_38(bool value)
	{
		___m_FillClockwise_38 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_39() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_39)); }
	inline int32_t get_m_FillOrigin_39() const { return ___m_FillOrigin_39; }
	inline int32_t* get_address_of_m_FillOrigin_39() { return &___m_FillOrigin_39; }
	inline void set_m_FillOrigin_39(int32_t value)
	{
		___m_FillOrigin_39 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_40() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_40)); }
	inline float get_m_AlphaHitTestMinimumThreshold_40() const { return ___m_AlphaHitTestMinimumThreshold_40; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_40() { return &___m_AlphaHitTestMinimumThreshold_40; }
	inline void set_m_AlphaHitTestMinimumThreshold_40(float value)
	{
		___m_AlphaHitTestMinimumThreshold_40 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_41() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Tracked_41)); }
	inline bool get_m_Tracked_41() const { return ___m_Tracked_41; }
	inline bool* get_address_of_m_Tracked_41() { return &___m_Tracked_41; }
	inline void set_m_Tracked_41(bool value)
	{
		___m_Tracked_41 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_30;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_42;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_43;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_44;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_45;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t4142344393 * ___m_TrackedTexturelessImages_46;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_47;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.UI.Image::<>f__mg$cache0
	Action_1_t819399007 * ___U3CU3Ef__mgU24cache0_48;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_30() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_30)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_30() const { return ___s_ETC1DefaultUI_30; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_30() { return &___s_ETC1DefaultUI_30; }
	inline void set_s_ETC1DefaultUI_30(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_30), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_42)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_42() const { return ___s_VertScratch_42; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_42() { return &___s_VertScratch_42; }
	inline void set_s_VertScratch_42(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_42), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_43() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_43)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_43() const { return ___s_UVScratch_43; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_43() { return &___s_UVScratch_43; }
	inline void set_s_UVScratch_43(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_43 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_43), value);
	}

	inline static int32_t get_offset_of_s_Xy_44() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_44)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_44() const { return ___s_Xy_44; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_44() { return &___s_Xy_44; }
	inline void set_s_Xy_44(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_44 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_44), value);
	}

	inline static int32_t get_offset_of_s_Uv_45() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_45)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_45() const { return ___s_Uv_45; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_45() { return &___s_Uv_45; }
	inline void set_s_Uv_45(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_45 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_45), value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_46() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___m_TrackedTexturelessImages_46)); }
	inline List_1_t4142344393 * get_m_TrackedTexturelessImages_46() const { return ___m_TrackedTexturelessImages_46; }
	inline List_1_t4142344393 ** get_address_of_m_TrackedTexturelessImages_46() { return &___m_TrackedTexturelessImages_46; }
	inline void set_m_TrackedTexturelessImages_46(List_1_t4142344393 * value)
	{
		___m_TrackedTexturelessImages_46 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackedTexturelessImages_46), value);
	}

	inline static int32_t get_offset_of_s_Initialized_47() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Initialized_47)); }
	inline bool get_s_Initialized_47() const { return ___s_Initialized_47; }
	inline bool* get_address_of_s_Initialized_47() { return &___s_Initialized_47; }
	inline void set_s_Initialized_47(bool value)
	{
		___s_Initialized_47 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_48() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___U3CU3Ef__mgU24cache0_48)); }
	inline Action_1_t819399007 * get_U3CU3Ef__mgU24cache0_48() const { return ___U3CU3Ef__mgU24cache0_48; }
	inline Action_1_t819399007 ** get_address_of_U3CU3Ef__mgU24cache0_48() { return &___U3CU3Ef__mgU24cache0_48; }
	inline void set_U3CU3Ef__mgU24cache0_48(Action_1_t819399007 * value)
	{
		___U3CU3Ef__mgU24cache0_48 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_48), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m289627909_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m1930838076_gshared (List_1_t899420910 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  List_1_get_Item_m3603744195_gshared (List_1_t899420910 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m3130048814_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2355286769_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t3903728902 * GameObject_GetComponent_TisSlider_t3903728902_m865256018 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Slider_t3903728902 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t3935305588 * Component_GetComponent_TisAudioSource_t3935305588_m4094283362 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3235626157 * Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  SpriteRenderer_get_color_m904197748 (SpriteRenderer_t3235626157 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_MoveTowards_m2786395547 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void iTween::ColorTo(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C" IL2CPP_METHOD_ATTR void iTween_ColorTo_m3709821751 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, Color_t2555686324  p1, float p2, const RuntimeMethod* method);
// System.Collections.Hashtable iTween::Hash(System.Object[])
extern "C" IL2CPP_METHOD_ATTR Hashtable_t1853889766 * iTween_Hash_m3216314892 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void iTween::MoveTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" IL2CPP_METHOD_ATTR void iTween_MoveTo_m2204990545 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, Hashtable_t1853889766 * p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Collision2D_get_gameObject_m1443495885 (Collision2D_t2842956331 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
extern "C" IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_m3951609671 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.PolygonCollider2D>()
inline PolygonCollider2D_t57175488 * Component_GetComponent_TisPolygonCollider2D_t57175488_m709164463 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  PolygonCollider2D_t57175488 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t2670269651 * Component_GetComponent_TisImage_t2670269651_m980647750 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void Color32__ctor_m4150508762 (Color32_t2600501292 * __this, uint8_t p0, uint8_t p1, uint8_t p2, uint8_t p3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color32_op_Implicit_m213813866 (RuntimeObject * __this /* static, unused */, Color32_t2600501292  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<EnemyAI>()
inline EnemyAI_t2881305472 * Component_GetComponent_TisEnemyAI_t2881305472_m3684458930 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  EnemyAI_t2881305472 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Pathfinding.Seeker>()
inline Seeker_t2437677217 * Component_GetComponent_TisSeeker_t2437677217_m2860570514 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Seeker_t2437677217 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_t939494601 * Component_GetComponent_TisRigidbody2D_t939494601_m2191066352 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Pathfinding.OnPathDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnPathDelegate__ctor_m1724913331 (OnPathDelegate_t1613993614 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// Pathfinding.Path Pathfinding.Seeker::StartPath(UnityEngine.Vector3,UnityEngine.Vector3,Pathfinding.OnPathDelegate)
extern "C" IL2CPP_METHOD_ATTR Path_t276937969 * Seeker_StartPath_m674747636 (Seeker_t2437677217 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, OnPathDelegate_t1613993614 * p2, const RuntimeMethod* method);
// System.Collections.IEnumerator EnemyAI::UpdatePath()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* EnemyAI_UpdatePath_m561177725 (EnemyAI_t2881305472 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void EnemyAI/<UpdatePath>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CUpdatePathU3Ec__Iterator0__ctor_m2253429170 (U3CUpdatePathU3Ec__Iterator0_t3931466951 * __this, const RuntimeMethod* method);
// System.Boolean Pathfinding.Path::get_error()
extern "C" IL2CPP_METHOD_ATTR bool Path_get_error_m2491898497 (Path_t276937969 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m1930838076 (List_1_t899420910 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t899420910 *, const RuntimeMethod*))List_1_get_Count_m1930838076_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t3722313464  List_1_get_Item_m3603744195 (List_1_t899420910 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Vector3_t3722313464  (*) (List_1_t899420910 *, int32_t, const RuntimeMethod*))List_1_get_Item_m3603744195_gshared)(__this, p0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m3595802076 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m1099013366 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Camera__ctor_m741555041 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Void Joystick::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Joystick__ctor_m1272315817 (Joystick_t9498292 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RectTransformUtility_WorldToScreenPoint_m3914148572 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  PointerEventData_get_position_m437660275 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RectTransform_get_sizeDelta_m2183112744 (RectTransform_t3704657025 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_normalized_m2683665860 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Division_m132623573 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method);
// System.Void Joystick::ClampJoystick()
extern "C" IL2CPP_METHOD_ATTR void Joystick_ClampJoystick_m2501349361 (Joystick_t9498292 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m4126691837 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4227543964 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C" IL2CPP_METHOD_ATTR Scene_t2348375561  SceneManager_GetActiveScene_m1825203488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Scene_get_name_m622963475 (Scene_t2348375561 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Single Joystick::get_Horizontal()
extern "C" IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m3614099306 (Joystick_t9498292 * __this, const RuntimeMethod* method);
// System.Single Joystick::get_Vertical()
extern "C" IL2CPP_METHOD_ATTR float Joystick_get_Vertical_m3105283820 (Joystick_t9498292 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlayerController>()
inline PlayerController_t2064355688 * GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  PlayerController_t2064355688 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<EnemyAI>()
inline EnemyAI_t2881305472 * GameObject_GetComponent_TisEnemyAI_t2881305472_m2115804801 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  EnemyAI_t2881305472 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Enemy>()
inline Enemy_t1765729589 * GameObject_GetComponent_TisEnemy_t1765729589_m2539763118 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Enemy_t1765729589 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<CameraMask>()
inline CameraMask_t3224426225 * GameObject_GetComponent_TisCameraMask_t3224426225_m3965255740 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  CameraMask_t3224426225 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_print_m330341231 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
extern "C" IL2CPP_METHOD_ATTR void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m315980366 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_LookRotation_m3197602968 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" IL2CPP_METHOD_ATTR void Transform_Translate_m1990195114 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, int32_t p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_LookRotation_m4040767668 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Joystick>()
inline Joystick_t9498292 * Object_FindObjectOfType_TisJoystick_t9498292_m678039943 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  Joystick_t9498292 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m3130048814_gshared)(__this /* static, unused */, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t434523843 * Component_GetComponent_TisAnimator_t434523843_m2351447238 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t434523843 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C" IL2CPP_METHOD_ATTR float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Rigidbody2D_get_velocity_m366589732 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Magnitude_m3447562852 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloat_m1701463607 (Animator_t434523843 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m126972045 (SpriteRenderer_t3235626157 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBool_m234840832 (Animator_t434523843 * __this, String_t* p0, bool p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m694024665 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2355286769_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_m3293894611 (RuntimeObject * __this /* static, unused */, AudioClip_t3680889665 * p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void iTween::MoveTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void iTween_MoveTo_m1910897034 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// System.Void RoadmapWalking/<ChangeScene>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CChangeSceneU3Ec__Iterator0__ctor_m4121542340 (U3CChangeSceneU3Ec__Iterator0_t1991369956 * __this, const RuntimeMethod* method);
// System.Void RoadmapWalking::WalkingBetweenTwoPoints(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RoadmapWalking_WalkingBetweenTwoPoints_m364080705 (RoadmapWalking_t2643330104 * __this, Vector3_t3722313464  ___newPosition0, const RuntimeMethod* method);
// System.Collections.IEnumerator RoadmapWalking::ChangeScene(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RoadmapWalking_ChangeScene_m1971005180 (RoadmapWalking_t2643330104 * __this, String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void VariableJoystick::OnFixed()
extern "C" IL2CPP_METHOD_ATTR void VariableJoystick_OnFixed_m4141959043 (VariableJoystick_t2643911586 * __this, const RuntimeMethod* method);
// System.Void VariableJoystick::OnFloat()
extern "C" IL2CPP_METHOD_ATTR void VariableJoystick_OnFloat_m165815926 (VariableJoystick_t2643911586 * __this, const RuntimeMethod* method);
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
// System.Void BatteryUI::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BatteryUI__ctor_m2821721257 (BatteryUI_t2191842428 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BatteryUI::Start()
extern "C" IL2CPP_METHOD_ATTR void BatteryUI_Start_m3609772855 (BatteryUI_t2191842428 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void BatteryUI::Update()
extern "C" IL2CPP_METHOD_ATTR void BatteryUI_Update_m3705257035 (BatteryUI_t2191842428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BatteryUI_Update_m3705257035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		int32_t L_0 = ((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->get_candyCount_15();
		int32_t L_1 = __this->get_count_4();
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0037;
		}
	}
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Slider_t3903728902 * L_3 = GameObject_GetComponent_TisSlider_t3903728902_m865256018(L_2, /*hidden argument*/GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var);
		Slider_t3903728902 * L_4 = L_3;
		NullCheck(L_4);
		float L_5 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		NullCheck(L_4);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, ((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		int32_t L_6 = ((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->get_candyCount_15();
		__this->set_count_4(L_6);
	}

IL_0037:
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
// System.Void CameraMask::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CameraMask__ctor_m942792920 (CameraMask_t3224426225 * __this, const RuntimeMethod* method)
{
	{
		__this->set_scalingCoefficient_7((0.01f));
		__this->set_minScale_8((0.1f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMask::Update()
extern "C" IL2CPP_METHOD_ATTR void CameraMask_Update_m364181266 (CameraMask_t3224426225 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMask_Update_m364181266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_localScale_m129152068(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_2();
		float L_3 = __this->get_minScale_8();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0105;
		}
	}
	{
		float L_4 = __this->get_timer_4();
		float L_5 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0065;
		}
	}
	{
		__this->set_timer_4((0.0f));
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_7 = L_6;
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_localScale_m129152068(L_7, /*hidden argument*/NULL);
		float L_9 = __this->get_scalingCoefficient_7();
		float L_10 = __this->get_scalingCoefficient_7();
		Vector3_t3722313464  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m3353183577((&L_11), L_9, L_10, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_12 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_8, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localScale_m3053443106(L_7, L_12, /*hidden argument*/NULL);
	}

IL_0065:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraMask_t3224426225_il2cpp_TypeInfo_var);
		bool L_13 = ((CameraMask_t3224426225_StaticFields*)il2cpp_codegen_static_fields_for(CameraMask_t3224426225_il2cpp_TypeInfo_var))->get_getSpecialItem_5();
		if (!L_13)
		{
			goto IL_00ad;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraMask_t3224426225_il2cpp_TypeInfo_var);
		((CameraMask_t3224426225_StaticFields*)il2cpp_codegen_static_fields_for(CameraMask_t3224426225_il2cpp_TypeInfo_var))->set_getSpecialItem_5((bool)0);
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_15 = L_14;
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_localScale_m129152068(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_scalingCoefficient_7();
		float L_18 = __this->get_scalingCoefficient_7();
		Vector3_t3722313464  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m3353183577((&L_19), ((float)il2cpp_codegen_multiply((float)L_17, (float)(20.0f))), ((float)il2cpp_codegen_multiply((float)L_18, (float)(20.0f))), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_20 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_16, L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_m3053443106(L_15, L_20, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		bool L_21 = ((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->get_touchEnemy_18();
		if (!L_21)
		{
			goto IL_0100;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->set_touchEnemy_18((bool)0);
		AudioSource_t3935305588 * L_22 = Component_GetComponent_TisAudioSource_t3935305588_m4094283362(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m4094283362_RuntimeMethod_var);
		NullCheck(L_22);
		AudioSource_Play_m48294159(L_22, /*hidden argument*/NULL);
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_24 = L_23;
		NullCheck(L_24);
		Vector3_t3722313464  L_25 = Transform_get_localScale_m129152068(L_24, /*hidden argument*/NULL);
		float L_26 = __this->get_scalingCoefficient_7();
		float L_27 = __this->get_scalingCoefficient_7();
		Vector3_t3722313464  L_28;
		memset(&L_28, 0, sizeof(L_28));
		Vector3__ctor_m3353183577((&L_28), ((float)il2cpp_codegen_multiply((float)L_26, (float)(30.0f))), ((float)il2cpp_codegen_multiply((float)L_27, (float)(30.0f))), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_29 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_25, L_28, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localScale_m3053443106(L_24, L_29, /*hidden argument*/NULL);
	}

IL_0100:
	{
		goto IL_012a;
	}

IL_0105:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraMask_t3224426225_il2cpp_TypeInfo_var);
		((CameraMask_t3224426225_StaticFields*)il2cpp_codegen_static_fields_for(CameraMask_t3224426225_il2cpp_TypeInfo_var))->set_gameover_6((bool)1);
		Transform_t3600365921 * L_30 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector3__ctor_m3353183577((&L_31), (2.0f), (2.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localScale_m3053443106(L_30, L_31, /*hidden argument*/NULL);
	}

IL_012a:
	{
		float L_32 = __this->get_timer_4();
		__this->set_timer_4(((float)il2cpp_codegen_add((float)L_32, (float)(0.01f))));
		return;
	}
}
// System.Void CameraMask::.cctor()
extern "C" IL2CPP_METHOD_ATTR void CameraMask__cctor_m1708576227 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
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
// System.Void Candy::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Candy__ctor_m3356490484 (Candy_t646231226 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_5((2.5f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Candy::Start()
extern "C" IL2CPP_METHOD_ATTR void Candy_Start_m4073992040 (Candy_t646231226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Candy_Start_m4073992040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t3235626157 * L_0 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		NullCheck(L_0);
		Color_t2555686324  L_1 = SpriteRenderer_get_color_m904197748(L_0, /*hidden argument*/NULL);
		__this->set_newColor_6(L_1);
		Color_t2555686324 * L_2 = __this->get_address_of_newColor_6();
		L_2->set_a_3((0.0f));
		return;
	}
}
// System.Void Candy::Update()
extern "C" IL2CPP_METHOD_ATTR void Candy_Update_m2348536843 (Candy_t646231226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Candy_Update_m2348536843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_catchif_7();
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = __this->get_cameraposition_4();
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_speed_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_MoveTowards_m2786395547(NULL /*static, unused*/, L_3, L_5, ((float)((float)L_6/(float)(10.0f))), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_7, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Color_t2555686324  L_9 = __this->get_newColor_6();
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t770867771_il2cpp_TypeInfo_var);
		iTween_ColorTo_m3709821751(NULL /*static, unused*/, L_8, L_9, (3.0f), /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void Candy::MoveToExample()
extern "C" IL2CPP_METHOD_ATTR void Candy_MoveToExample_m230266482 (Candy_t646231226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Candy_MoveToExample_m230266482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral4254451314);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral4254451314);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		Transform_t3600365921 * L_4 = __this->get_cameraposition_4();
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = L_5;
		RuntimeObject * L_7 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral3556801464);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3556801464);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		float L_10 = __this->get_speed_5();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1021063790);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1021063790);
		ObjectU5BU5D_t2843939325* L_14 = L_13;
		int32_t L_15 = ((int32_t)((int32_t)14));
		RuntimeObject * L_16 = Box(EaseType_t2573404410_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_16);
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t770867771_il2cpp_TypeInfo_var);
		Hashtable_t1853889766 * L_17 = iTween_Hash_m3216314892(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		iTween_MoveTo_m2204990545(NULL /*static, unused*/, L_0, L_17, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_18 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Color_t2555686324  L_19 = __this->get_newColor_6();
		iTween_ColorTo_m3709821751(NULL /*static, unused*/, L_18, L_19, (2.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Candy::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" IL2CPP_METHOD_ATTR void Candy_OnCollisionEnter2D_m272735126 (Candy_t646231226 * __this, Collision2D_t2842956331 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Candy_OnCollisionEnter2D_m272735126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision2D_t2842956331 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Collision2D_get_gameObject_m1443495885(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		PolygonCollider2D_t57175488 * L_4 = Component_GetComponent_TisPolygonCollider2D_t57175488_m709164463(__this, /*hidden argument*/Component_GetComponent_TisPolygonCollider2D_t57175488_m709164463_RuntimeMethod_var);
		NullCheck(L_4);
		Behaviour_set_enabled_m20417929(L_4, (bool)0, /*hidden argument*/NULL);
		__this->set_catchif_7((bool)1);
	}

IL_002d:
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
// System.Void ColorChange::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ColorChange__ctor_m610578216 (ColorChange_t3035311908 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ColorChange::Start()
extern "C" IL2CPP_METHOD_ATTR void ColorChange_Start_m3514047912 (ColorChange_t3035311908 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ColorChange::Update()
extern "C" IL2CPP_METHOD_ATTR void ColorChange_Update_m3944220757 (ColorChange_t3035311908 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColorChange_Update_m3944220757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		int32_t L_0 = ((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->get_candyCount_15();
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0031;
		}
	}
	{
		Image_t2670269651 * L_1 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		Color32_t2600501292  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Color32__ctor_m4150508762((&L_2), (uint8_t)((int32_t)219), (uint8_t)((int32_t)197), (uint8_t)((int32_t)49), (uint8_t)((int32_t)185), /*hidden argument*/NULL);
		Color_t2555686324  L_3 = Color32_op_Implicit_m213813866(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_3);
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		int32_t L_4 = ((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->get_candyCount_15();
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0063;
		}
	}
	{
		Image_t2670269651 * L_5 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		Color32_t2600501292  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Color32__ctor_m4150508762((&L_6), (uint8_t)((int32_t)138), (uint8_t)((int32_t)253), (uint8_t)((int32_t)92), (uint8_t)((int32_t)185), /*hidden argument*/NULL);
		Color_t2555686324  L_7 = Color32_op_Implicit_m213813866(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
	}

IL_0063:
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
// System.Void Enemy::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Enemy__ctor_m2535212804 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	{
		__this->set_watchDistance_5((10.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Enemy::Awake()
extern "C" IL2CPP_METHOD_ATTR void Enemy_Awake_m1837176820 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	{
		__this->set_currentBehavior_10(1);
		return;
	}
}
// System.Void Enemy::Update()
extern "C" IL2CPP_METHOD_ATTR void Enemy_Update_m3583063749 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Update_m3583063749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_currentBehavior_10();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_003b;
	}

IL_0019:
	{
		EnemyAI_t2881305472 * L_3 = Component_GetComponent_TisEnemyAI_t2881305472_m3684458930(__this, /*hidden argument*/Component_GetComponent_TisEnemyAI_t2881305472_m3684458930_RuntimeMethod_var);
		NullCheck(L_3);
		Behaviour_set_enabled_m20417929(L_3, (bool)1, /*hidden argument*/NULL);
		goto IL_003b;
	}

IL_002a:
	{
		EnemyAI_t2881305472 * L_4 = Component_GetComponent_TisEnemyAI_t2881305472_m3684458930(__this, /*hidden argument*/Component_GetComponent_TisEnemyAI_t2881305472_m3684458930_RuntimeMethod_var);
		NullCheck(L_4);
		Behaviour_set_enabled_m20417929(L_4, (bool)0, /*hidden argument*/NULL);
		goto IL_003b;
	}

IL_003b:
	{
		return;
	}
}
// System.Void Enemy::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void Enemy_FixedUpdate_m2632478061 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_FixedUpdate_m2632478061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_player_4();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_5 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = V_0;
		float L_7 = __this->get_watchDistance_5();
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		__this->set_currentBehavior_10(0);
		goto IL_0040;
	}

IL_0039:
	{
		__this->set_currentBehavior_10(1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyAI::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EnemyAI__ctor_m156330303 (EnemyAI_t2881305472 * __this, const RuntimeMethod* method)
{
	{
		__this->set_updateRate_5((2.0f));
		__this->set_speed_9((200.0f));
		__this->set_nextWayPointDistance_12((3.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyAI::Start()
extern "C" IL2CPP_METHOD_ATTR void EnemyAI_Start_m648402889 (EnemyAI_t2881305472 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyAI_Start_m648402889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Seeker_t2437677217 * L_0 = Component_GetComponent_TisSeeker_t2437677217_m2860570514(__this, /*hidden argument*/Component_GetComponent_TisSeeker_t2437677217_m2860570514_RuntimeMethod_var);
		__this->set_seeker_6(L_0);
		Rigidbody2D_t939494601 * L_1 = Component_GetComponent_TisRigidbody2D_t939494601_m2191066352(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m2191066352_RuntimeMethod_var);
		__this->set_rb_7(L_1);
		Transform_t3600365921 * L_2 = __this->get_target_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral346940778, /*hidden argument*/NULL);
	}

IL_0033:
	{
		Seeker_t2437677217 * L_4 = __this->get_seeker_6();
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		Transform_t3600365921 * L_7 = __this->get_target_4();
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		intptr_t L_9 = (intptr_t)EnemyAI_OnPathComplete_m3986181712_RuntimeMethod_var;
		OnPathDelegate_t1613993614 * L_10 = (OnPathDelegate_t1613993614 *)il2cpp_codegen_object_new(OnPathDelegate_t1613993614_il2cpp_TypeInfo_var);
		OnPathDelegate__ctor_m1724913331(L_10, __this, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		Seeker_StartPath_m674747636(L_4, L_6, L_8, L_10, /*hidden argument*/NULL);
		RuntimeObject* L_11 = EnemyAI_UpdatePath_m561177725(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator EnemyAI::UpdatePath()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* EnemyAI_UpdatePath_m561177725 (EnemyAI_t2881305472 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyAI_UpdatePath_m561177725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUpdatePathU3Ec__Iterator0_t3931466951 * V_0 = NULL;
	{
		U3CUpdatePathU3Ec__Iterator0_t3931466951 * L_0 = (U3CUpdatePathU3Ec__Iterator0_t3931466951 *)il2cpp_codegen_object_new(U3CUpdatePathU3Ec__Iterator0_t3931466951_il2cpp_TypeInfo_var);
		U3CUpdatePathU3Ec__Iterator0__ctor_m2253429170(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUpdatePathU3Ec__Iterator0_t3931466951 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CUpdatePathU3Ec__Iterator0_t3931466951 * L_2 = V_0;
		return L_2;
	}
}
// System.Void EnemyAI::OnPathComplete(Pathfinding.Path)
extern "C" IL2CPP_METHOD_ATTR void EnemyAI_OnPathComplete_m3986181712 (EnemyAI_t2881305472 * __this, Path_t276937969 * ___p0, const RuntimeMethod* method)
{
	{
		Path_t276937969 * L_0 = ___p0;
		NullCheck(L_0);
		bool L_1 = Path_get_error_m2491898497(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		Path_t276937969 * L_2 = ___p0;
		__this->set_path_8(L_2);
		__this->set_currentWaypoint_13(0);
	}

IL_0019:
	{
		return;
	}
}
// System.Void EnemyAI::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void EnemyAI_FixedUpdate_m699871149 (EnemyAI_t2881305472 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyAI_FixedUpdate_m699871149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		Transform_t3600365921 * L_0 = __this->get_target_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Path_t276937969 * L_2 = __this->get_path_8();
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = __this->get_currentWaypoint_13();
		Path_t276937969 * L_4 = __this->get_path_8();
		NullCheck(L_4);
		List_1_t899420910 * L_5 = L_4->get_vectorPath_10();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m1930838076(L_5, /*hidden argument*/List_1_get_Count_m1930838076_RuntimeMethod_var);
		if ((((int32_t)L_3) < ((int32_t)L_6)))
		{
			goto IL_004d;
		}
	}
	{
		bool L_7 = __this->get_pathIsEnded_11();
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		return;
	}

IL_0045:
	{
		__this->set_pathIsEnded_11((bool)1);
		return;
	}

IL_004d:
	{
		__this->set_pathIsEnded_11((bool)0);
		Path_t276937969 * L_8 = __this->get_path_8();
		NullCheck(L_8);
		List_1_t899420910 * L_9 = L_8->get_vectorPath_10();
		int32_t L_10 = __this->get_currentWaypoint_13();
		NullCheck(L_9);
		Vector3_t3722313464  L_11 = List_1_get_Item_m3603744195(L_9, L_10, /*hidden argument*/List_1_get_Item_m3603744195_RuntimeMethod_var);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_14 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		Vector3_t3722313464  L_15 = Vector3_get_normalized_m2454957984((Vector3_t3722313464 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_15;
		Vector3_t3722313464  L_16 = V_0;
		float L_17 = __this->get_speed_9();
		float L_18 = Time_get_fixedDeltaTime_m3595802076(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_16, ((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)), /*hidden argument*/NULL);
		V_0 = L_19;
		Rigidbody2D_t939494601 * L_20 = __this->get_rb_7();
		Vector3_t3722313464  L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_22 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		int32_t L_23 = __this->get_fMode_10();
		NullCheck(L_20);
		Rigidbody2D_AddForce_m1099013366(L_20, L_22, L_23, /*hidden argument*/NULL);
		Transform_t3600365921 * L_24 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t3722313464  L_25 = Transform_get_position_m36019626(L_24, /*hidden argument*/NULL);
		Path_t276937969 * L_26 = __this->get_path_8();
		NullCheck(L_26);
		List_1_t899420910 * L_27 = L_26->get_vectorPath_10();
		int32_t L_28 = __this->get_currentWaypoint_13();
		NullCheck(L_27);
		Vector3_t3722313464  L_29 = List_1_get_Item_m3603744195(L_27, L_28, /*hidden argument*/List_1_get_Item_m3603744195_RuntimeMethod_var);
		float L_30 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_25, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		float L_31 = V_2;
		float L_32 = __this->get_nextWayPointDistance_12();
		if ((!(((float)L_31) < ((float)L_32))))
		{
			goto IL_00ee;
		}
	}
	{
		int32_t L_33 = __this->get_currentWaypoint_13();
		__this->set_currentWaypoint_13(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1)));
	}

IL_00ee:
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
// System.Void EnemyAI/<UpdatePath>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CUpdatePathU3Ec__Iterator0__ctor_m2253429170 (U3CUpdatePathU3Ec__Iterator0_t3931466951 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean EnemyAI/<UpdatePath>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CUpdatePathU3Ec__Iterator0_MoveNext_m105671661 (U3CUpdatePathU3Ec__Iterator0_t3931466951 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUpdatePathU3Ec__Iterator0_MoveNext_m105671661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00ae;
			}
		}
	}
	{
		goto IL_00cc;
	}

IL_0021:
	{
		EnemyAI_t2881305472 * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = L_2->get_target_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00cc;
	}

IL_003c:
	{
		EnemyAI_t2881305472 * L_5 = __this->get_U24this_0();
		NullCheck(L_5);
		Seeker_t2437677217 * L_6 = L_5->get_seeker_6();
		EnemyAI_t2881305472 * L_7 = __this->get_U24this_0();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		EnemyAI_t2881305472 * L_10 = __this->get_U24this_0();
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = L_10->get_target_4();
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		EnemyAI_t2881305472 * L_13 = __this->get_U24this_0();
		intptr_t L_14 = (intptr_t)EnemyAI_OnPathComplete_m3986181712_RuntimeMethod_var;
		OnPathDelegate_t1613993614 * L_15 = (OnPathDelegate_t1613993614 *)il2cpp_codegen_object_new(OnPathDelegate_t1613993614_il2cpp_TypeInfo_var);
		OnPathDelegate__ctor_m1724913331(L_15, L_13, (intptr_t)L_14, /*hidden argument*/NULL);
		NullCheck(L_6);
		Seeker_StartPath_m674747636(L_6, L_9, L_12, L_15, /*hidden argument*/NULL);
		EnemyAI_t2881305472 * L_16 = __this->get_U24this_0();
		NullCheck(L_16);
		float L_17 = L_16->get_updateRate_5();
		WaitForSeconds_t1699091251 * L_18 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_18, ((float)((float)(1.0f)/(float)L_17)), /*hidden argument*/NULL);
		__this->set_U24current_1(L_18);
		bool L_19 = __this->get_U24disposing_2();
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_00a9:
	{
		goto IL_00ce;
	}

IL_00ae:
	{
		EnemyAI_t2881305472 * L_20 = __this->get_U24this_0();
		EnemyAI_t2881305472 * L_21 = __this->get_U24this_0();
		NullCheck(L_21);
		RuntimeObject* L_22 = EnemyAI_UpdatePath_m561177725(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		MonoBehaviour_StartCoroutine_m3411253000(L_20, L_22, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_00cc:
	{
		return (bool)0;
	}

IL_00ce:
	{
		return (bool)1;
	}
}
// System.Object EnemyAI/<UpdatePath>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdatePathU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3356606829 (U3CUpdatePathU3Ec__Iterator0_t3931466951 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object EnemyAI/<UpdatePath>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdatePathU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1223417660 (U3CUpdatePathU3Ec__Iterator0_t3931466951 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void EnemyAI/<UpdatePath>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CUpdatePathU3Ec__Iterator0_Dispose_m366436370 (U3CUpdatePathU3Ec__Iterator0_t3931466951 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void EnemyAI/<UpdatePath>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CUpdatePathU3Ec__Iterator0_Reset_m2318622975 (U3CUpdatePathU3Ec__Iterator0_t3931466951 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUpdatePathU3Ec__Iterator0_Reset_m2318622975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CUpdatePathU3Ec__Iterator0_Reset_m2318622975_RuntimeMethod_var);
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
// System.Void FixedJoystick::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FixedJoystick__ctor_m3165509026 (FixedJoystick_t2618381211 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FixedJoystick__ctor_m3165509026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_joystickPosition_9(L_0);
		Camera_t4157153871 * L_1 = (Camera_t4157153871 *)il2cpp_codegen_object_new(Camera_t4157153871_il2cpp_TypeInfo_var);
		Camera__ctor_m741555041(L_1, /*hidden argument*/NULL);
		__this->set_cam_10(L_1);
		Joystick__ctor_m1272315817(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FixedJoystick::Start()
extern "C" IL2CPP_METHOD_ATTR void FixedJoystick_Start_m649713002 (FixedJoystick_t2618381211 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FixedJoystick_Start_m649713002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = __this->get_cam_10();
		RectTransform_t3704657025 * L_1 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1743242446_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = RectTransformUtility_WorldToScreenPoint_m3914148572(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		__this->set_joystickPosition_9(L_3);
		return;
	}
}
// System.Void FixedJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void FixedJoystick_OnDrag_m1042755941 (FixedJoystick_t2618381211 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FixedJoystick_OnDrag_m1042755941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	FixedJoystick_t2618381211 * G_B2_0 = NULL;
	FixedJoystick_t2618381211 * G_B1_0 = NULL;
	Vector2_t2156229523  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	FixedJoystick_t2618381211 * G_B3_1 = NULL;
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = PointerEventData_get_position_m437660275(L_0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2 = __this->get_joystickPosition_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = Vector2_get_magnitude_m2752892833((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_5 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = RectTransform_get_sizeDelta_m2183112744(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_x_0();
		G_B1_0 = __this;
		if ((!(((float)L_4) > ((float)((float)((float)L_7/(float)(2.0f)))))))
		{
			G_B2_0 = __this;
			goto IL_0044;
		}
	}
	{
		Vector2_t2156229523  L_8 = Vector2_get_normalized_m2683665860((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		goto IL_0063;
	}

IL_0044:
	{
		Vector2_t2156229523  L_9 = V_0;
		RectTransform_t3704657025 * L_10 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_10);
		Vector2_t2156229523  L_11 = RectTransform_get_sizeDelta_m2183112744(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12 = (&V_2)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_13 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_9, ((float)((float)L_12/(float)(2.0f))), /*hidden argument*/NULL);
		G_B3_0 = L_13;
		G_B3_1 = G_B2_0;
	}

IL_0063:
	{
		NullCheck(G_B3_1);
		((Joystick_t9498292 *)G_B3_1)->set_inputVector_6(G_B3_0);
		Joystick_ClampJoystick_m2501349361(__this, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_14 = ((Joystick_t9498292 *)__this)->get_handle_8();
		Vector2_t2156229523  L_15 = ((Joystick_t9498292 *)__this)->get_inputVector_6();
		RectTransform_t3704657025 * L_16 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_16);
		Vector2_t2156229523  L_17 = RectTransform_get_sizeDelta_m2183112744(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		float L_18 = (&V_3)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_19 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		Vector2_t2156229523  L_20 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_19, (2.0f), /*hidden argument*/NULL);
		float L_21 = ((Joystick_t9498292 *)__this)->get_handleLimit_4();
		Vector2_t2156229523  L_22 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_m4126691837(L_14, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FixedJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void FixedJoystick_OnPointerDown_m3601786111 (FixedJoystick_t2618381211 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		VirtActionInvoker1< PointerEventData_t3807901092 * >::Invoke(7 /* System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_0);
		return;
	}
}
// System.Void FixedJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void FixedJoystick_OnPointerUp_m763078753 (FixedJoystick_t2618381211 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FixedJoystick_OnPointerUp_m763078753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Joystick_t9498292 *)__this)->set_inputVector_6(L_0);
		RectTransform_t3704657025 * L_1 = ((Joystick_t9498292 *)__this)->get_handle_8();
		Vector2_t2156229523  L_2 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_m4126691837(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void FloatingJoystick::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FloatingJoystick__ctor_m612783692 (FloatingJoystick_t3402721920 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloatingJoystick__ctor_m612783692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_joystickCenter_9(L_0);
		Joystick__ctor_m1272315817(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FloatingJoystick::Start()
extern "C" IL2CPP_METHOD_ATTR void FloatingJoystick_Start_m290384880 (FloatingJoystick_t3402721920 * __this, const RuntimeMethod* method)
{
	{
		RectTransform_t3704657025 * L_0 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FloatingJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void FloatingJoystick_OnDrag_m1849813291 (FloatingJoystick_t3402721920 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloatingJoystick_OnDrag_m1849813291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	FloatingJoystick_t3402721920 * G_B2_0 = NULL;
	FloatingJoystick_t3402721920 * G_B1_0 = NULL;
	Vector2_t2156229523  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	FloatingJoystick_t3402721920 * G_B3_1 = NULL;
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = PointerEventData_get_position_m437660275(L_0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2 = __this->get_joystickCenter_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = Vector2_get_magnitude_m2752892833((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_5 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = RectTransform_get_sizeDelta_m2183112744(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_x_0();
		G_B1_0 = __this;
		if ((!(((float)L_4) > ((float)((float)((float)L_7/(float)(2.0f)))))))
		{
			G_B2_0 = __this;
			goto IL_0044;
		}
	}
	{
		Vector2_t2156229523  L_8 = Vector2_get_normalized_m2683665860((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		goto IL_0063;
	}

IL_0044:
	{
		Vector2_t2156229523  L_9 = V_0;
		RectTransform_t3704657025 * L_10 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_10);
		Vector2_t2156229523  L_11 = RectTransform_get_sizeDelta_m2183112744(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12 = (&V_2)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_13 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_9, ((float)((float)L_12/(float)(2.0f))), /*hidden argument*/NULL);
		G_B3_0 = L_13;
		G_B3_1 = G_B2_0;
	}

IL_0063:
	{
		NullCheck(G_B3_1);
		((Joystick_t9498292 *)G_B3_1)->set_inputVector_6(G_B3_0);
		Joystick_ClampJoystick_m2501349361(__this, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_14 = ((Joystick_t9498292 *)__this)->get_handle_8();
		Vector2_t2156229523  L_15 = ((Joystick_t9498292 *)__this)->get_inputVector_6();
		RectTransform_t3704657025 * L_16 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_16);
		Vector2_t2156229523  L_17 = RectTransform_get_sizeDelta_m2183112744(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		float L_18 = (&V_3)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_19 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		Vector2_t2156229523  L_20 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_19, (2.0f), /*hidden argument*/NULL);
		float L_21 = ((Joystick_t9498292 *)__this)->get_handleLimit_4();
		Vector2_t2156229523  L_22 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_m4126691837(L_14, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerDown_m3753834403 (FloatingJoystick_t3402721920 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloatingJoystick_OnPointerDown_m3753834403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_2 = ((Joystick_t9498292 *)__this)->get_background_7();
		PointerEventData_t3807901092 * L_3 = ___eventData0;
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = PointerEventData_get_position_m437660275(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_m3387557959(L_2, L_5, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_6 = ((Joystick_t9498292 *)__this)->get_handle_8();
		Vector2_t2156229523  L_7 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		RectTransform_set_anchoredPosition_m4126691837(L_6, L_7, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_8 = ___eventData0;
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = PointerEventData_get_position_m437660275(L_8, /*hidden argument*/NULL);
		__this->set_joystickCenter_9(L_9);
		return;
	}
}
// System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerUp_m2581807680 (FloatingJoystick_t3402721920 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloatingJoystick_OnPointerUp_m2581807680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Joystick_t9498292 *)__this)->set_inputVector_6(L_2);
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
// System.Void FollowPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FollowPlayer__ctor_m1808261062 (FollowPlayer_t2788059413 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FollowPlayer::Start()
extern "C" IL2CPP_METHOD_ATTR void FollowPlayer_Start_m1219397192 (FollowPlayer_t2788059413 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FollowPlayer_Start_m1219397192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_player_4();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->set_offset_5(L_5);
		return;
	}
}
// System.Void FollowPlayer::Update()
extern "C" IL2CPP_METHOD_ATTR void FollowPlayer_Update_m1580389478 (FollowPlayer_t2788059413 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FollowPlayer_Update_m1580389478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_player_4();
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = __this->get_offset_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m3387557959(L_0, L_5, /*hidden argument*/NULL);
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
// System.Void GameManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameManager__ctor_m180891015 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::Update()
extern "C" IL2CPP_METHOD_ATTR void GameManager_Update_m1981238775 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Update_m1981238775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		bool L_0 = ((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->get_touchTheDoor_17();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		MonoBehaviour_Invoke_m4227543964(__this, _stringLiteral199858606, (1.0f), /*hidden argument*/NULL);
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraMask_t3224426225_il2cpp_TypeInfo_var);
		bool L_1 = ((CameraMask_t3224426225_StaticFields*)il2cpp_codegen_static_fields_for(CameraMask_t3224426225_il2cpp_TypeInfo_var))->get_gameover_6();
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->set_candyCount_15(0);
		IL2CPP_RUNTIME_CLASS_INIT(CameraMask_t3224426225_il2cpp_TypeInfo_var);
		((CameraMask_t3224426225_StaticFields*)il2cpp_codegen_static_fields_for(CameraMask_t3224426225_il2cpp_TypeInfo_var))->set_gameover_6((bool)0);
		Scene_t2348375561  L_2 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void GameManager::ChangeTheLevel()
extern "C" IL2CPP_METHOD_ATTR void GameManager_ChangeTheLevel_m2882631212 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_ChangeTheLevel_m2882631212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_currentLevel_9();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_003b;
			}
			case 3:
			{
				goto IL_0046;
			}
			case 4:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_005c;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_level1Done_4((bool)1);
		goto IL_005c;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_level2Done_5((bool)1);
		goto IL_005c;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_level3Done_6((bool)1);
		goto IL_005c;
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_level4Done_7((bool)1);
		goto IL_005c;
	}

IL_0051:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_level5Done_8((bool)1);
		goto IL_005c;
	}

IL_005c:
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral3584844674, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->set_getKey_16((bool)0);
		((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->set_touchTheDoor_17((bool)0);
		return;
	}
}
// System.Void GameManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GameManager__cctor_m4243923930 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
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
// System.Void Joystick::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Joystick__ctor_m1272315817 (Joystick_t9498292 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick__ctor_m1272315817_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_handleLimit_4((1.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_inputVector_6(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Joystick::get_Horizontal()
extern "C" IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m3614099306 (Joystick_t9498292 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523 * L_0 = __this->get_address_of_inputVector_6();
		float L_1 = L_0->get_x_0();
		return L_1;
	}
}
// System.Single Joystick::get_Vertical()
extern "C" IL2CPP_METHOD_ATTR float Joystick_get_Vertical_m3105283820 (Joystick_t9498292 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523 * L_0 = __this->get_address_of_inputVector_6();
		float L_1 = L_0->get_y_1();
		return L_1;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Joystick_get_Direction_m3832432503 (Joystick_t9498292 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = Joystick_get_Horizontal_m3614099306(__this, /*hidden argument*/NULL);
		float L_1 = Joystick_get_Vertical_m3105283820(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_m3970636864((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void Joystick_OnDrag_m1548353041 (Joystick_t9498292 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_m1243099850 (Joystick_t9498292 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m3173419772 (Joystick_t9498292 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Joystick::ClampJoystick()
extern "C" IL2CPP_METHOD_ATTR void Joystick_ClampJoystick_m2501349361 (Joystick_t9498292 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_joystickMode_5();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		Vector2_t2156229523 * L_1 = __this->get_address_of_inputVector_6();
		float L_2 = L_1->get_x_0();
		Vector2_t2156229523  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3970636864((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		__this->set_inputVector_6(L_3);
	}

IL_0027:
	{
		int32_t L_4 = __this->get_joystickMode_5();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		Vector2_t2156229523 * L_5 = __this->get_address_of_inputVector_6();
		float L_6 = L_5->get_y_1();
		Vector2_t2156229523  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m3970636864((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		__this->set_inputVector_6(L_7);
	}

IL_004e:
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
// System.Void Key::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Key__ctor_m197577787 (Key_t3605096396 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Key::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" IL2CPP_METHOD_ATTR void Key_OnCollisionEnter2D_m1321304902 (Key_t3605096396 * __this, Collision2D_t2842956331 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Key_OnCollisionEnter2D_m1321304902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision2D_t2842956331 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Collision2D_get_gameObject_m1443495885(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0025:
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
// System.Void PaueGame::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PaueGame__ctor_m2064229653 (PaueGame_t649595565 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PaueGame::PauseTheGame()
extern "C" IL2CPP_METHOD_ATTR void PaueGame_PauseTheGame_m1347944285 (PaueGame_t649595565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PaueGame_PauseTheGame_m1347944285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_player_4();
		NullCheck(L_0);
		PlayerController_t2064355688 * L_1 = GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631_RuntimeMethod_var);
		NullCheck(L_1);
		Behaviour_set_enabled_m20417929(L_1, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_enemy1_6();
		NullCheck(L_2);
		EnemyAI_t2881305472 * L_3 = GameObject_GetComponent_TisEnemyAI_t2881305472_m2115804801(L_2, /*hidden argument*/GameObject_GetComponent_TisEnemyAI_t2881305472_m2115804801_RuntimeMethod_var);
		NullCheck(L_3);
		Behaviour_set_enabled_m20417929(L_3, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_enemy1_6();
		NullCheck(L_4);
		Enemy_t1765729589 * L_5 = GameObject_GetComponent_TisEnemy_t1765729589_m2539763118(L_4, /*hidden argument*/GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var);
		NullCheck(L_5);
		Behaviour_set_enabled_m20417929(L_5, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_enemy2_7();
		NullCheck(L_6);
		EnemyAI_t2881305472 * L_7 = GameObject_GetComponent_TisEnemyAI_t2881305472_m2115804801(L_6, /*hidden argument*/GameObject_GetComponent_TisEnemyAI_t2881305472_m2115804801_RuntimeMethod_var);
		NullCheck(L_7);
		Behaviour_set_enabled_m20417929(L_7, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = __this->get_enemy2_7();
		NullCheck(L_8);
		Enemy_t1765729589 * L_9 = GameObject_GetComponent_TisEnemy_t1765729589_m2539763118(L_8, /*hidden argument*/GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var);
		NullCheck(L_9);
		Behaviour_set_enabled_m20417929(L_9, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = __this->get_enemy3_8();
		NullCheck(L_10);
		EnemyAI_t2881305472 * L_11 = GameObject_GetComponent_TisEnemyAI_t2881305472_m2115804801(L_10, /*hidden argument*/GameObject_GetComponent_TisEnemyAI_t2881305472_m2115804801_RuntimeMethod_var);
		NullCheck(L_11);
		Behaviour_set_enabled_m20417929(L_11, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = __this->get_enemy3_8();
		NullCheck(L_12);
		Enemy_t1765729589 * L_13 = GameObject_GetComponent_TisEnemy_t1765729589_m2539763118(L_12, /*hidden argument*/GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var);
		NullCheck(L_13);
		Behaviour_set_enabled_m20417929(L_13, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = __this->get_cameraMask_5();
		NullCheck(L_14);
		CameraMask_t3224426225 * L_15 = GameObject_GetComponent_TisCameraMask_t3224426225_m3965255740(L_14, /*hidden argument*/GameObject_GetComponent_TisCameraMask_t3224426225_m3965255740_RuntimeMethod_var);
		NullCheck(L_15);
		Behaviour_set_enabled_m20417929(L_15, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_16 = __this->get_pauseScreen_9();
		NullCheck(L_16);
		GameObject_SetActive_m796801857(L_16, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PaueGame::ResumeTheGame()
extern "C" IL2CPP_METHOD_ATTR void PaueGame_ResumeTheGame_m2858720861 (PaueGame_t649595565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PaueGame_ResumeTheGame_m2858720861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_pauseScreen_9();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral4119301762, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_player_4();
		NullCheck(L_1);
		PlayerController_t2064355688 * L_2 = GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631(L_1, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631_RuntimeMethod_var);
		NullCheck(L_2);
		Behaviour_set_enabled_m20417929(L_2, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_enemy1_6();
		NullCheck(L_3);
		EnemyAI_t2881305472 * L_4 = GameObject_GetComponent_TisEnemyAI_t2881305472_m2115804801(L_3, /*hidden argument*/GameObject_GetComponent_TisEnemyAI_t2881305472_m2115804801_RuntimeMethod_var);
		NullCheck(L_4);
		Behaviour_set_enabled_m20417929(L_4, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = __this->get_enemy1_6();
		NullCheck(L_5);
		Enemy_t1765729589 * L_6 = GameObject_GetComponent_TisEnemy_t1765729589_m2539763118(L_5, /*hidden argument*/GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var);
		NullCheck(L_6);
		Behaviour_set_enabled_m20417929(L_6, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = __this->get_enemy2_7();
		NullCheck(L_7);
		EnemyAI_t2881305472 * L_8 = GameObject_GetComponent_TisEnemyAI_t2881305472_m2115804801(L_7, /*hidden argument*/GameObject_GetComponent_TisEnemyAI_t2881305472_m2115804801_RuntimeMethod_var);
		NullCheck(L_8);
		Behaviour_set_enabled_m20417929(L_8, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = __this->get_enemy2_7();
		NullCheck(L_9);
		Enemy_t1765729589 * L_10 = GameObject_GetComponent_TisEnemy_t1765729589_m2539763118(L_9, /*hidden argument*/GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var);
		NullCheck(L_10);
		Behaviour_set_enabled_m20417929(L_10, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_11 = __this->get_enemy3_8();
		NullCheck(L_11);
		EnemyAI_t2881305472 * L_12 = GameObject_GetComponent_TisEnemyAI_t2881305472_m2115804801(L_11, /*hidden argument*/GameObject_GetComponent_TisEnemyAI_t2881305472_m2115804801_RuntimeMethod_var);
		NullCheck(L_12);
		Behaviour_set_enabled_m20417929(L_12, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = __this->get_enemy3_8();
		NullCheck(L_13);
		Enemy_t1765729589 * L_14 = GameObject_GetComponent_TisEnemy_t1765729589_m2539763118(L_13, /*hidden argument*/GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var);
		NullCheck(L_14);
		Behaviour_set_enabled_m20417929(L_14, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_15 = __this->get_cameraMask_5();
		NullCheck(L_15);
		CameraMask_t3224426225 * L_16 = GameObject_GetComponent_TisCameraMask_t3224426225_m3965255740(L_15, /*hidden argument*/GameObject_GetComponent_TisCameraMask_t3224426225_m3965255740_RuntimeMethod_var);
		NullCheck(L_16);
		Behaviour_set_enabled_m20417929(L_16, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PaueGame::QuitAppInLevel()
extern "C" IL2CPP_METHOD_ATTR void PaueGame_QuitAppInLevel_m4204974004 (PaueGame_t649595565 * __this, const RuntimeMethod* method)
{
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Void Player2DExample::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Player2DExample__ctor_m25542223 (Player2DExample_t3660207970 * __this, const RuntimeMethod* method)
{
	{
		__this->set_moveSpeed_4((8.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player2DExample::Update()
extern "C" IL2CPP_METHOD_ATTR void Player2DExample_Update_m1065258874 (Player2DExample_t3660207970 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player2DExample_Update_m1065258874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Joystick_t9498292 * L_1 = __this->get_joystick_5();
		NullCheck(L_1);
		float L_2 = Joystick_get_Horizontal_m3614099306(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Joystick_t9498292 * L_5 = __this->get_joystick_5();
		NullCheck(L_5);
		float L_6 = Joystick_get_Vertical_m3105283820(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector3_t3722313464  L_9 = V_0;
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_11 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_13 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_15 = Quaternion_LookRotation_m3197602968(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m3524318132(L_12, L_15, /*hidden argument*/NULL);
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = V_0;
		float L_18 = __this->get_moveSpeed_4();
		Vector3_t3722313464  L_19 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		float L_20 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_Translate_m1990195114(L_16, L_21, 0, /*hidden argument*/NULL);
	}

IL_0078:
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
// System.Void Player3DExample::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Player3DExample__ctor_m3148918762 (Player3DExample_t3538731783 * __this, const RuntimeMethod* method)
{
	{
		__this->set_moveSpeed_4((8.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player3DExample::Update()
extern "C" IL2CPP_METHOD_ATTR void Player3DExample_Update_m584191189 (Player3DExample_t3538731783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player3DExample_Update_m584191189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Joystick_t9498292 * L_1 = __this->get_joystick_5();
		NullCheck(L_1);
		float L_2 = Joystick_get_Horizontal_m3614099306(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Joystick_t9498292 * L_5 = __this->get_joystick_5();
		NullCheck(L_5);
		float L_6 = Joystick_get_Vertical_m3105283820(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector3_t3722313464  L_9 = V_0;
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_11 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_14 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m3524318132(L_12, L_14, /*hidden argument*/NULL);
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = V_0;
		float L_17 = __this->get_moveSpeed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_18 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		float L_19 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_Translate_m1990195114(L_15, L_20, 0, /*hidden argument*/NULL);
	}

IL_0073:
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
// System.Void PlayerController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlayerController__ctor_m1333951952 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_4((3.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Awake()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_Awake_m4099664953 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Awake_m4099664953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Joystick_t9498292 * L_0 = Object_FindObjectOfType_TisJoystick_t9498292_m678039943(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisJoystick_t9498292_m678039943_RuntimeMethod_var);
		__this->set_joystick_9(L_0);
		Rigidbody2D_t939494601 * L_1 = Component_GetComponent_TisRigidbody2D_t939494601_m2191066352(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m2191066352_RuntimeMethod_var);
		__this->set_rb2D_10(L_1);
		SpriteRenderer_t3235626157 * L_2 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		__this->set_spriteRenderer_12(L_2);
		Animator_t434523843 * L_3 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_animator_11(L_3);
		return;
	}
}
// System.Void PlayerController::Update()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_Update_m848427540 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Update_m848427540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Joystick_t9498292 * L_0 = __this->get_joystick_9();
		NullCheck(L_0);
		float L_1 = Joystick_get_Horizontal_m3614099306(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		float L_3 = __this->get_speed_4();
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_1, (float)L_2)), (float)L_3));
		Joystick_t9498292 * L_4 = __this->get_joystick_9();
		NullCheck(L_4);
		float L_5 = Joystick_get_Vertical_m3105283820(L_4, /*hidden argument*/NULL);
		float L_6 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		float L_7 = __this->get_speed_4();
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_5, (float)L_6)), (float)L_7));
		Rigidbody2D_t939494601 * L_8 = __this->get_rb2D_10();
		float L_9 = V_0;
		float L_10 = V_1;
		Vector3_t3722313464  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m3353183577((&L_11), L_9, L_10, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_12 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		Rigidbody2D_set_velocity_m2898400508(L_8, L_12, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_13 = __this->get_rb2D_10();
		NullCheck(L_13);
		Vector2_t2156229523  L_14 = Rigidbody2D_get_velocity_m366589732(L_13, /*hidden argument*/NULL);
		Vector3_t3722313464  L_15 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_16 = Vector3_Magnitude_m3447562852(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		Animator_t434523843 * L_17 = __this->get_animator_11();
		float L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_19 = fabsf(L_18);
		NullCheck(L_17);
		Animator_SetFloat_m1701463607(L_17, _stringLiteral3556802456, L_19, /*hidden argument*/NULL);
		bool L_20 = __this->get_facingLeft_13();
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		float L_21 = V_0;
		if ((!(((float)L_21) > ((float)(0.0f)))))
		{
			goto IL_00b2;
		}
	}
	{
		__this->set_facingLeft_13((bool)0);
		SpriteRenderer_t3235626157 * L_22 = __this->get_spriteRenderer_12();
		NullCheck(L_22);
		SpriteRenderer_set_flipX_m126972045(L_22, (bool)0, /*hidden argument*/NULL);
		goto IL_00db;
	}

IL_00b2:
	{
		bool L_23 = __this->get_facingLeft_13();
		if (L_23)
		{
			goto IL_00db;
		}
	}
	{
		float L_24 = V_0;
		if ((!(((float)L_24) < ((float)(0.0f)))))
		{
			goto IL_00db;
		}
	}
	{
		__this->set_facingLeft_13((bool)1);
		SpriteRenderer_t3235626157 * L_25 = __this->get_spriteRenderer_12();
		NullCheck(L_25);
		SpriteRenderer_set_flipX_m126972045(L_25, (bool)1, /*hidden argument*/NULL);
	}

IL_00db:
	{
		float L_26 = V_1;
		if ((!(((float)L_26) > ((float)(0.0f)))))
		{
			goto IL_0108;
		}
	}
	{
		__this->set_facingUp_14((bool)1);
		Animator_t434523843 * L_27 = __this->get_animator_11();
		bool L_28 = __this->get_facingUp_14();
		NullCheck(L_27);
		Animator_SetBool_m234840832(L_27, _stringLiteral235949219, L_28, /*hidden argument*/NULL);
		goto IL_0125;
	}

IL_0108:
	{
		__this->set_facingUp_14((bool)0);
		Animator_t434523843 * L_29 = __this->get_animator_11();
		bool L_30 = __this->get_facingUp_14();
		NullCheck(L_29);
		Animator_SetBool_m234840832(L_29, _stringLiteral235949219, L_30, /*hidden argument*/NULL);
	}

IL_0125:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		int32_t L_31 = ((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->get_candyCount_15();
		if ((((int32_t)L_31) < ((int32_t)((int32_t)20))))
		{
			goto IL_014e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->set_candyCount_15(0);
		GameObject_t1113636619 * L_32 = __this->get_keyPrefab_5();
		Vector3_t3722313464  L_33 = __this->get_keyPosition_8();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_34 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m694024665(NULL /*static, unused*/, L_32, L_33, L_34, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m694024665_RuntimeMethod_var);
	}

IL_014e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		int32_t L_35 = ((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->get_candyCount_15();
		int32_t L_36 = L_35;
		RuntimeObject * L_37 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_36);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m1610259746 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter2D_m909387068 (PlayerController_t2064355688 * __this, Collision2D_t2842956331 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnCollisionEnter2D_m909387068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision2D_t2842956331 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Collision2D_get_gameObject_m1443495885(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral2223961601, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraMask_t3224426225_il2cpp_TypeInfo_var);
		((CameraMask_t3224426225_StaticFields*)il2cpp_codegen_static_fields_for(CameraMask_t3224426225_il2cpp_TypeInfo_var))->set_getSpecialItem_5((bool)1);
	}

IL_0020:
	{
		Collision2D_t2842956331 * L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = Collision2D_get_gameObject_m1443495885(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = GameObject_get_tag_m3951609671(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, _stringLiteral760905195, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->set_touchEnemy_18((bool)1);
	}

IL_0040:
	{
		Collision2D_t2842956331 * L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_t1113636619 * L_9 = Collision2D_get_gameObject_m1443495885(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = GameObject_get_tag_m3951609671(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m920492651(NULL /*static, unused*/, L_10, _stringLiteral3936374128, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		int32_t L_12 = ((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->get_candyCount_15();
		((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->set_candyCount_15(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
	}

IL_0066:
	{
		Collision2D_t2842956331 * L_13 = ___collision0;
		NullCheck(L_13);
		GameObject_t1113636619 * L_14 = Collision2D_get_gameObject_m1443495885(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = GameObject_get_tag_m3951609671(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Equality_m920492651(NULL /*static, unused*/, L_15, _stringLiteral2600272002, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->set_getKey_16((bool)1);
		AudioClip_t3680889665 * L_17 = __this->get_getKeySound_7();
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m3293894611(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
	}

IL_009c:
	{
		Collision2D_t2842956331 * L_20 = ___collision0;
		NullCheck(L_20);
		GameObject_t1113636619 * L_21 = Collision2D_get_gameObject_m1443495885(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22 = GameObject_get_tag_m3951609671(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_op_Equality_m920492651(NULL /*static, unused*/, L_22, _stringLiteral2710373835, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		bool L_24 = ((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->get_getKey_16();
		if (!L_24)
		{
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->set_touchTheDoor_17((bool)1);
		AudioClip_t3680889665 * L_25 = __this->get_levelCompleteSound_6();
		Transform_t3600365921 * L_26 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t3722313464  L_27 = Transform_get_position_m36019626(L_26, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m3293894611(NULL /*static, unused*/, L_25, L_27, /*hidden argument*/NULL);
	}

IL_00dc:
	{
		return;
	}
}
// System.Void PlayerController::.cctor()
extern "C" IL2CPP_METHOD_ATTR void PlayerController__cctor_m483794249 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
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
// System.Void RoadmapWalking::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RoadmapWalking__ctor_m93767770 (RoadmapWalking_t2643330104 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RoadmapWalking::Awake()
extern "C" IL2CPP_METHOD_ATTR void RoadmapWalking_Awake_m526251279 (RoadmapWalking_t2643330104 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoadmapWalking_Awake_m526251279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = ((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->get_roadmapPosition_16();
		NullCheck(L_0);
		Transform_set_position_m3387557959(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		bool L_2 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_level1Done_4();
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		GameObject_t1113636619 * L_3 = __this->get_level2Button_12();
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		bool L_4 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_level2Done_5();
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		GameObject_t1113636619 * L_5 = __this->get_level3Button_13();
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)1, /*hidden argument*/NULL);
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		bool L_6 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_level3Done_6();
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral4073034045, /*hidden argument*/NULL);
	}

IL_0050:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		bool L_7 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_level4Done_7();
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		GameObject_t1113636619 * L_8 = __this->get_level5Button_15();
		NullCheck(L_8);
		GameObject_SetActive_m796801857(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		bool L_9 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_level5Done_8();
		if (!L_9)
		{
			goto IL_0070;
		}
	}

IL_0070:
	{
		return;
	}
}
// System.Void RoadmapWalking::WalkingBetweenTwoPoints(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RoadmapWalking_WalkingBetweenTwoPoints_m364080705 (RoadmapWalking_t2643330104 * __this, Vector3_t3722313464  ___newPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoadmapWalking_WalkingBetweenTwoPoints_m364080705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = ___newPosition0;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t770867771_il2cpp_TypeInfo_var);
		iTween_MoveTo_m1910897034(NULL /*static, unused*/, L_0, L_1, (1.5f), /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator RoadmapWalking::ChangeScene(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RoadmapWalking_ChangeScene_m1971005180 (RoadmapWalking_t2643330104 * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoadmapWalking_ChangeScene_m1971005180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CChangeSceneU3Ec__Iterator0_t1991369956 * V_0 = NULL;
	{
		U3CChangeSceneU3Ec__Iterator0_t1991369956 * L_0 = (U3CChangeSceneU3Ec__Iterator0_t1991369956 *)il2cpp_codegen_object_new(U3CChangeSceneU3Ec__Iterator0_t1991369956_il2cpp_TypeInfo_var);
		U3CChangeSceneU3Ec__Iterator0__ctor_m4121542340(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CChangeSceneU3Ec__Iterator0_t1991369956 * L_1 = V_0;
		String_t* L_2 = ___sceneName0;
		NullCheck(L_1);
		L_1->set_sceneName_0(L_2);
		U3CChangeSceneU3Ec__Iterator0_t1991369956 * L_3 = V_0;
		return L_3;
	}
}
// System.Void RoadmapWalking::Level1()
extern "C" IL2CPP_METHOD_ATTR void RoadmapWalking_Level1_m3164221451 (RoadmapWalking_t2643330104 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoadmapWalking_Level1_m3164221451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_currentLevel_9(0);
		GameObject_t1113636619 * L_0 = __this->get_firstDoor_6();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->set_roadmapPosition_16(L_2);
		(((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->get_address_of_roadmapPosition_16())->set_z_4((-0.1f));
		Vector3_t3722313464  L_3 = ((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->get_roadmapPosition_16();
		RoadmapWalking_WalkingBetweenTwoPoints_m364080705(__this, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = RoadmapWalking_ChangeScene_m1971005180(__this, _stringLiteral1222789680, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_5 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_4, /*hidden argument*/NULL);
		__this->set_change_5(L_5);
		return;
	}
}
// System.Void RoadmapWalking::Level2()
extern "C" IL2CPP_METHOD_ATTR void RoadmapWalking_Level2_m3164155915 (RoadmapWalking_t2643330104 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoadmapWalking_Level2_m3164155915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_currentLevel_9(1);
		GameObject_t1113636619 * L_0 = __this->get_secondDoor_7();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->set_roadmapPosition_16(L_2);
		(((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->get_address_of_roadmapPosition_16())->set_z_4((-0.1f));
		Vector3_t3722313464  L_3 = ((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->get_roadmapPosition_16();
		RoadmapWalking_WalkingBetweenTwoPoints_m364080705(__this, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = RoadmapWalking_ChangeScene_m1971005180(__this, _stringLiteral1234020770, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_5 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_4, /*hidden argument*/NULL);
		__this->set_change_5(L_5);
		return;
	}
}
// System.Void RoadmapWalking::Level3()
extern "C" IL2CPP_METHOD_ATTR void RoadmapWalking_Level3_m3164090379 (RoadmapWalking_t2643330104 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoadmapWalking_Level3_m3164090379_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_currentLevel_9(2);
		GameObject_t1113636619 * L_0 = __this->get_thirdDoor_8();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->set_roadmapPosition_16(L_2);
		(((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->get_address_of_roadmapPosition_16())->set_z_4((-0.1f));
		Vector3_t3722313464  L_3 = ((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->get_roadmapPosition_16();
		RoadmapWalking_WalkingBetweenTwoPoints_m364080705(__this, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = RoadmapWalking_ChangeScene_m1971005180(__this, _stringLiteral1234282914, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_5 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_4, /*hidden argument*/NULL);
		__this->set_change_5(L_5);
		return;
	}
}
// System.Void RoadmapWalking::Level4()
extern "C" IL2CPP_METHOD_ATTR void RoadmapWalking_Level4_m3164024843 (RoadmapWalking_t2643330104 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoadmapWalking_Level4_m3164024843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_currentLevel_9(3);
		GameObject_t1113636619 * L_0 = __this->get_fourthDoor_9();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->set_roadmapPosition_16(L_2);
		(((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->get_address_of_roadmapPosition_16())->set_z_4((-0.1f));
		Vector3_t3722313464  L_3 = ((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->get_roadmapPosition_16();
		RoadmapWalking_WalkingBetweenTwoPoints_m364080705(__this, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = RoadmapWalking_ChangeScene_m1971005180(__this, _stringLiteral1234151842, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_5 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_4, /*hidden argument*/NULL);
		__this->set_change_5(L_5);
		return;
	}
}
// System.Void RoadmapWalking::Level5()
extern "C" IL2CPP_METHOD_ATTR void RoadmapWalking_Level5_m3163959307 (RoadmapWalking_t2643330104 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoadmapWalking_Level5_m3163959307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_currentLevel_9(4);
		GameObject_t1113636619 * L_0 = __this->get_fifthDoor_10();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->set_roadmapPosition_16(L_2);
		(((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->get_address_of_roadmapPosition_16())->set_z_4((-0.1f));
		Vector3_t3722313464  L_3 = ((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->get_roadmapPosition_16();
		RoadmapWalking_WalkingBetweenTwoPoints_m364080705(__this, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = RoadmapWalking_ChangeScene_m1971005180(__this, _stringLiteral1234086306, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_5 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_4, /*hidden argument*/NULL);
		__this->set_change_5(L_5);
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
// System.Void RoadmapWalking/<ChangeScene>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CChangeSceneU3Ec__Iterator0__ctor_m4121542340 (U3CChangeSceneU3Ec__Iterator0_t1991369956 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RoadmapWalking/<ChangeScene>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CChangeSceneU3Ec__Iterator0_MoveNext_m3682599430 (U3CChangeSceneU3Ec__Iterator0_t1991369956 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CChangeSceneU3Ec__Iterator0_MoveNext_m3682599430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_0057;
	}

IL_0021:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (1.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0040:
	{
		goto IL_0059;
	}

IL_0045:
	{
		String_t* L_4 = __this->get_sceneName_0();
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0057:
	{
		return (bool)0;
	}

IL_0059:
	{
		return (bool)1;
	}
}
// System.Object RoadmapWalking/<ChangeScene>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CChangeSceneU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3825043482 (U3CChangeSceneU3Ec__Iterator0_t1991369956 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object RoadmapWalking/<ChangeScene>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CChangeSceneU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m669292279 (U3CChangeSceneU3Ec__Iterator0_t1991369956 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void RoadmapWalking/<ChangeScene>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CChangeSceneU3Ec__Iterator0_Dispose_m3436671690 (U3CChangeSceneU3Ec__Iterator0_t1991369956 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void RoadmapWalking/<ChangeScene>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CChangeSceneU3Ec__Iterator0_Reset_m2573677861 (U3CChangeSceneU3Ec__Iterator0_t1991369956 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CChangeSceneU3Ec__Iterator0_Reset_m2573677861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CChangeSceneU3Ec__Iterator0_Reset_m2573677861_RuntimeMethod_var);
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
// System.Void SceneManagement::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SceneManagement__ctor_m774232616 (SceneManagement_t3330828178 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneManagement::LoadMenuScene()
extern "C" IL2CPP_METHOD_ATTR void SceneManagement_LoadMenuScene_m2598075104 (SceneManagement_t3330828178 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManagement_LoadMenuScene_m2598075104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_level1Done_4((bool)0);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_level2Done_5((bool)0);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_level3Done_6((bool)0);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_level4Done_7((bool)0);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_level5Done_8((bool)0);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1555075383, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneManagement::GoToRoadMap()
extern "C" IL2CPP_METHOD_ATTR void SceneManagement_GoToRoadMap_m3954923101 (SceneManagement_t3330828178 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManagement_GoToRoadMap_m3954923101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m3353183577((&L_0), (-8.0f), (-2.5f), (-0.1f), /*hidden argument*/NULL);
		((RoadmapWalking_t2643330104_StaticFields*)il2cpp_codegen_static_fields_for(RoadmapWalking_t2643330104_il2cpp_TypeInfo_var))->set_roadmapPosition_16(L_0);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral3584844674, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneManagement::LoadCreditsScene()
extern "C" IL2CPP_METHOD_ATTR void SceneManagement_LoadCreditsScene_m2537599392 (SceneManagement_t3330828178 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManagement_LoadCreditsScene_m2537599392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1603239357, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneManagement::QuitApp()
extern "C" IL2CPP_METHOD_ATTR void SceneManagement_QuitApp_m2127129941 (SceneManagement_t3330828178 * __this, const RuntimeMethod* method)
{
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneManagement::LoadMainScene()
extern "C" IL2CPP_METHOD_ATTR void SceneManagement_LoadMainScene_m551182123 (SceneManagement_t3330828178 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManagement_LoadMainScene_m551182123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1222789680, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneManagement::GoToLevel2()
extern "C" IL2CPP_METHOD_ATTR void SceneManagement_GoToLevel2_m3387332928 (SceneManagement_t3330828178 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManagement_GoToLevel2_m3387332928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1234020770, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneManagement::GoToLevel6()
extern "C" IL2CPP_METHOD_ATTR void SceneManagement_GoToLevel6_m1417964460 (SceneManagement_t3330828178 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManagement_GoToLevel6_m1417964460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1234282914, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneManagement::GoToLevel4()
extern "C" IL2CPP_METHOD_ATTR void SceneManagement_GoToLevel4_m2580763874 (SceneManagement_t3330828178 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManagement_GoToLevel4_m2580763874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1234151842, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneManagement::GoToLevel5()
extern "C" IL2CPP_METHOD_ATTR void SceneManagement_GoToLevel5_m1014679933 (SceneManagement_t3330828178 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManagement_GoToLevel5_m1014679933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1234086306, /*hidden argument*/NULL);
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
// System.Void VariableJoystick::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m1597116632 (VariableJoystick_t2643911586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick__ctor_m1597116632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isFixed_9((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_joystickCenter_11(L_0);
		Joystick__ctor_m1272315817(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::Start()
extern "C" IL2CPP_METHOD_ATTR void VariableJoystick_Start_m900724618 (VariableJoystick_t2643911586 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isFixed_9();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		VariableJoystick_OnFixed_m4141959043(__this, /*hidden argument*/NULL);
		goto IL_001c;
	}

IL_0016:
	{
		VariableJoystick_OnFloat_m165815926(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void VariableJoystick::ChangeFixed(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VariableJoystick_ChangeFixed_m3111545193 (VariableJoystick_t2643911586 * __this, bool ___joystickFixed0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___joystickFixed0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		VariableJoystick_OnFixed_m4141959043(__this, /*hidden argument*/NULL);
		goto IL_0017;
	}

IL_0011:
	{
		VariableJoystick_OnFloat_m165815926(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		bool L_1 = ___joystickFixed0;
		__this->set_isFixed_9(L_1);
		return;
	}
}
// System.Void VariableJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void VariableJoystick_OnDrag_m3080315221 (VariableJoystick_t2643911586 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnDrag_m3080315221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	VariableJoystick_t2643911586 * G_B2_0 = NULL;
	VariableJoystick_t2643911586 * G_B1_0 = NULL;
	Vector2_t2156229523  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	VariableJoystick_t2643911586 * G_B3_1 = NULL;
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = PointerEventData_get_position_m437660275(L_0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2 = __this->get_joystickCenter_11();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = Vector2_get_magnitude_m2752892833((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_5 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = RectTransform_get_sizeDelta_m2183112744(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_x_0();
		G_B1_0 = __this;
		if ((!(((float)L_4) > ((float)((float)((float)L_7/(float)(2.0f)))))))
		{
			G_B2_0 = __this;
			goto IL_0044;
		}
	}
	{
		Vector2_t2156229523  L_8 = Vector2_get_normalized_m2683665860((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		goto IL_0063;
	}

IL_0044:
	{
		Vector2_t2156229523  L_9 = V_0;
		RectTransform_t3704657025 * L_10 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_10);
		Vector2_t2156229523  L_11 = RectTransform_get_sizeDelta_m2183112744(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12 = (&V_2)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_13 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_9, ((float)((float)L_12/(float)(2.0f))), /*hidden argument*/NULL);
		G_B3_0 = L_13;
		G_B3_1 = G_B2_0;
	}

IL_0063:
	{
		NullCheck(G_B3_1);
		((Joystick_t9498292 *)G_B3_1)->set_inputVector_6(G_B3_0);
		Joystick_ClampJoystick_m2501349361(__this, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_14 = ((Joystick_t9498292 *)__this)->get_handle_8();
		Vector2_t2156229523  L_15 = ((Joystick_t9498292 *)__this)->get_inputVector_6();
		RectTransform_t3704657025 * L_16 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_16);
		Vector2_t2156229523  L_17 = RectTransform_get_sizeDelta_m2183112744(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		float L_18 = (&V_3)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_19 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		Vector2_t2156229523  L_20 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_19, (2.0f), /*hidden argument*/NULL);
		float L_21 = ((Joystick_t9498292 *)__this)->get_handleLimit_4();
		Vector2_t2156229523  L_22 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_m4126691837(L_14, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m4235218688 (VariableJoystick_t2643911586 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnPointerDown_m4235218688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isFixed_9();
		if (L_0)
		{
			goto IL_004e;
		}
	}
	{
		RectTransform_t3704657025 * L_1 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_3 = ((Joystick_t9498292 *)__this)->get_background_7();
		PointerEventData_t3807901092 * L_4 = ___eventData0;
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = PointerEventData_get_position_m437660275(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_m3387557959(L_3, L_6, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_7 = ((Joystick_t9498292 *)__this)->get_handle_8();
		Vector2_t2156229523  L_8 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		RectTransform_set_anchoredPosition_m4126691837(L_7, L_8, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_9 = ___eventData0;
		NullCheck(L_9);
		Vector2_t2156229523  L_10 = PointerEventData_get_position_m437660275(L_9, /*hidden argument*/NULL);
		__this->set_joystickCenter_11(L_10);
	}

IL_004e:
	{
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_m3792644295 (VariableJoystick_t2643911586 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnPointerUp_m3792644295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isFixed_9();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		RectTransform_t3704657025 * L_1 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Joystick_t9498292 *)__this)->set_inputVector_6(L_3);
		RectTransform_t3704657025 * L_4 = ((Joystick_t9498292 *)__this)->get_handle_8();
		Vector2_t2156229523  L_5 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_anchoredPosition_m4126691837(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::OnFixed()
extern "C" IL2CPP_METHOD_ATTR void VariableJoystick_OnFixed_m4141959043 (VariableJoystick_t2643911586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnFixed_m4141959043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t2156229523  L_0 = __this->get_fixedScreenPosition_10();
		__this->set_joystickCenter_11(L_0);
		RectTransform_t3704657025 * L_1 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_3 = ((Joystick_t9498292 *)__this)->get_handle_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_m4126691837(L_3, L_4, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_5 = ((Joystick_t9498292 *)__this)->get_background_7();
		Vector2_t2156229523  L_6 = __this->get_fixedScreenPosition_10();
		NullCheck(L_5);
		RectTransform_set_anchoredPosition_m4126691837(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::OnFloat()
extern "C" IL2CPP_METHOD_ATTR void VariableJoystick_OnFloat_m165815926 (VariableJoystick_t2643911586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnFloat_m165815926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = ((Joystick_t9498292 *)__this)->get_handle_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m4126691837(L_0, L_1, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_2 = ((Joystick_t9498292 *)__this)->get_background_7();
		NullCheck(L_2);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
