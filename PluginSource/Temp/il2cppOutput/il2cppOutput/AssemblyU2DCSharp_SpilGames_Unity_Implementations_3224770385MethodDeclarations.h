#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SpilGames.Unity.Implementations.SpilUnityImplementationBase
struct SpilUnityImplementationBase_t3224770385;
// SpilGames.Unity.Implementations.SpilUnityImplementationBase/RewardEvent
struct RewardEvent_t2542469259;
// SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdAvailableEvent
struct AdAvailableEvent_t2821451892;
// SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdNotAvailableEvent
struct AdNotAvailableEvent_t1662598401;
// SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdStartedEvent
struct AdStartedEvent_t2961930876;
// SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdFinishedEvent
struct AdFinishedEvent_t4079166917;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// SpilGames.Unity.Utils.RewardData
struct RewardData_t903330946;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SpilGames_Unity_Implementations_2542469259.h"
#include "AssemblyU2DCSharp_SpilGames_Unity_Implementations_2821451892.h"
#include "AssemblyU2DCSharp_SpilGames_Unity_Implementations_1662598401.h"
#include "AssemblyU2DCSharp_SpilGames_Unity_Implementations_2961930876.h"
#include "AssemblyU2DCSharp_SpilGames_Unity_Implementations_4079166917.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_SpilGames_Unity_Utils_RewardData903330946.h"

// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::.ctor()
extern "C"  void SpilUnityImplementationBase__ctor_m1446715558 (SpilUnityImplementationBase_t3224770385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::add_OnReward(SpilGames.Unity.Implementations.SpilUnityImplementationBase/RewardEvent)
extern "C"  void SpilUnityImplementationBase_add_OnReward_m2856125383 (SpilUnityImplementationBase_t3224770385 * __this, RewardEvent_t2542469259 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::remove_OnReward(SpilGames.Unity.Implementations.SpilUnityImplementationBase/RewardEvent)
extern "C"  void SpilUnityImplementationBase_remove_OnReward_m2047247044 (SpilUnityImplementationBase_t3224770385 * __this, RewardEvent_t2542469259 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::add_OnAdAvailable(SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdAvailableEvent)
extern "C"  void SpilUnityImplementationBase_add_OnAdAvailable_m1716209487 (SpilUnityImplementationBase_t3224770385 * __this, AdAvailableEvent_t2821451892 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::remove_OnAdAvailable(SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdAvailableEvent)
extern "C"  void SpilUnityImplementationBase_remove_OnAdAvailable_m2228481548 (SpilUnityImplementationBase_t3224770385 * __this, AdAvailableEvent_t2821451892 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::add_OnAdNotAvailable(SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdNotAvailableEvent)
extern "C"  void SpilUnityImplementationBase_add_OnAdNotAvailable_m3388277383 (SpilUnityImplementationBase_t3224770385 * __this, AdNotAvailableEvent_t1662598401 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::remove_OnAdNotAvailable(SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdNotAvailableEvent)
extern "C"  void SpilUnityImplementationBase_remove_OnAdNotAvailable_m987948932 (SpilUnityImplementationBase_t3224770385 * __this, AdNotAvailableEvent_t1662598401 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::add_OnAdStarted(SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdStartedEvent)
extern "C"  void SpilUnityImplementationBase_add_OnAdStarted_m3996551999 (SpilUnityImplementationBase_t3224770385 * __this, AdStartedEvent_t2961930876 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::remove_OnAdStarted(SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdStartedEvent)
extern "C"  void SpilUnityImplementationBase_remove_OnAdStarted_m2616334460 (SpilUnityImplementationBase_t3224770385 * __this, AdStartedEvent_t2961930876 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::add_OnAdFinished(SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdFinishedEvent)
extern "C"  void SpilUnityImplementationBase_add_OnAdFinished_m445755783 (SpilUnityImplementationBase_t3224770385 * __this, AdFinishedEvent_t4079166917 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::remove_OnAdFinished(SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdFinishedEvent)
extern "C"  void SpilUnityImplementationBase_remove_OnAdFinished_m1201595268 (SpilUnityImplementationBase_t3224770385 * __this, AdFinishedEvent_t4079166917 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::SendwalletUpdateEvent(System.String,System.String,System.String,System.String,System.String)
extern "C"  void SpilUnityImplementationBase_SendwalletUpdateEvent_m2603943326 (SpilUnityImplementationBase_t3224770385 * __this, String_t* ___walletValue, String_t* ___itemValue, String_t* ___source, String_t* ___item, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::SendmilestoneAchievedEvent(System.String)
extern "C"  void SpilUnityImplementationBase_SendmilestoneAchievedEvent_m2529272229 (SpilUnityImplementationBase_t3224770385 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::SendlevelStartEvent(System.String)
extern "C"  void SpilUnityImplementationBase_SendlevelStartEvent_m3255323914 (SpilUnityImplementationBase_t3224770385 * __this, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::SendlevelCompleteEvent(System.String)
extern "C"  void SpilUnityImplementationBase_SendlevelCompleteEvent_m2402821439 (SpilUnityImplementationBase_t3224770385 * __this, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::SendlevelFailedEvent(System.String)
extern "C"  void SpilUnityImplementationBase_SendlevelFailedEvent_m2394323459 (SpilUnityImplementationBase_t3224770385 * __this, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::SendplayerDiesEvent(System.String)
extern "C"  void SpilUnityImplementationBase_SendplayerDiesEvent_m3286273344 (SpilUnityImplementationBase_t3224770385 * __this, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::SendrequestRewardVideoEvent(System.String)
extern "C"  void SpilUnityImplementationBase_SendrequestRewardVideoEvent_m294160329 (SpilUnityImplementationBase_t3224770385 * __this, String_t* ___rewardType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::ShowRewardedVideo()
extern "C"  void SpilUnityImplementationBase_ShowRewardedVideo_m1636990548 (SpilUnityImplementationBase_t3224770385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::SendiapPurchasedEvent(System.String,System.String,System.String)
extern "C"  void SpilUnityImplementationBase_SendiapPurchasedEvent_m3476847375 (SpilUnityImplementationBase_t3224770385 * __this, String_t* ___skuId, String_t* ___transactionId, String_t* ___purchaseDate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::SendiapRestoredEvent(System.String,System.String,System.String)
extern "C"  void SpilUnityImplementationBase_SendiapRestoredEvent_m2091297320 (SpilUnityImplementationBase_t3224770385 * __this, String_t* ___skuId, String_t* ___originalTransactionId, String_t* ___originalPurchaseDate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::SendiapFailedEvent(System.String,System.String)
extern "C"  void SpilUnityImplementationBase_SendiapFailedEvent_m3719584403 (SpilUnityImplementationBase_t3224770385 * __this, String_t* ___error, String_t* ___skuId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::TrackEvent(System.String)
extern "C"  void SpilUnityImplementationBase_TrackEvent_m3568816565 (SpilUnityImplementationBase_t3224770385 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::SendCustomEvent(System.String)
extern "C"  void SpilUnityImplementationBase_SendCustomEvent_m186371165 (SpilUnityImplementationBase_t3224770385 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::TrackEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void SpilUnityImplementationBase_TrackEvent_m2196963362 (SpilUnityImplementationBase_t3224770385 * __this, String_t* ___eventName, Dictionary_2_t2606186806 * ___eventParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::OnResponseReceived(System.String)
extern "C"  void SpilUnityImplementationBase_OnResponseReceived_m2051553091 (Il2CppObject * __this /* static, unused */, String_t* ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::fireOnRewardEvent(SpilGames.Unity.Utils.RewardData)
extern "C"  void SpilUnityImplementationBase_fireOnRewardEvent_m174447934 (Il2CppObject * __this /* static, unused */, RewardData_t903330946 * ___rewardResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::fireAdAvailableEvent(System.String)
extern "C"  void SpilUnityImplementationBase_fireAdAvailableEvent_m4261307930 (Il2CppObject * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::fireAdNotAvailableEvent(System.String)
extern "C"  void SpilUnityImplementationBase_fireAdNotAvailableEvent_m3011979251 (Il2CppObject * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::fireAdStartedEvent()
extern "C"  void SpilUnityImplementationBase_fireAdStartedEvent_m4028398256 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase::fireAdFinishedEvent(System.String)
extern "C"  void SpilUnityImplementationBase_fireAdFinishedEvent_m3171405871 (Il2CppObject * __this /* static, unused */, String_t* ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
