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

// SpilGames.Unity.Implementations.SpiliOSUnityImplementation
struct SpiliOSUnityImplementation_t3920049011;
// System.String
struct String_t;
// SpilGames.Unity.Helpers.PackagesHelper
struct PackagesHelper_t1471447264;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::.ctor()
extern "C"  void SpiliOSUnityImplementation__ctor_m3211652654 (SpiliOSUnityImplementation_t3920049011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpiliOSUnityImplementation::GetConfigAll()
extern "C"  String_t* SpiliOSUnityImplementation_GetConfigAll_m3329183938 (SpiliOSUnityImplementation_t3920049011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpiliOSUnityImplementation::GetConfigValue(System.String)
extern "C"  String_t* SpiliOSUnityImplementation_GetConfigValue_m2348580784 (SpiliOSUnityImplementation_t3920049011 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpilGames.Unity.Helpers.PackagesHelper SpilGames.Unity.Implementations.SpiliOSUnityImplementation::GetPackagesAndPromotions()
extern "C"  PackagesHelper_t1471447264 * SpiliOSUnityImplementation_GetPackagesAndPromotions_m1483026829 (SpiliOSUnityImplementation_t3920049011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpiliOSUnityImplementation::getAllPackages()
extern "C"  String_t* SpiliOSUnityImplementation_getAllPackages_m1460954897 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::UpdatePackagesAndPromotions()
extern "C"  void SpiliOSUnityImplementation_UpdatePackagesAndPromotions_m3329351933 (SpiliOSUnityImplementation_t3920049011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpiliOSUnityImplementation::requestPackages()
extern "C"  String_t* SpiliOSUnityImplementation_requestPackages_m3709113861 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpiliOSUnityImplementation::getPackageByID(System.String)
extern "C"  String_t* SpiliOSUnityImplementation_getPackageByID_m3008989927 (Il2CppObject * __this /* static, unused */, String_t* ___keyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpiliOSUnityImplementation::getPromotionByID(System.String)
extern "C"  String_t* SpiliOSUnityImplementation_getPromotionByID_m2772583402 (Il2CppObject * __this /* static, unused */, String_t* ___keyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::spilInit()
extern "C"  void SpiliOSUnityImplementation_spilInit_m3785377830 (SpiliOSUnityImplementation_t3920049011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::SendCustomEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void SpiliOSUnityImplementation_SendCustomEvent_m307830786 (SpiliOSUnityImplementation_t3920049011 * __this, String_t* ___eventName, Dictionary_2_t2606186806 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::PlayVideo()
extern "C"  void SpiliOSUnityImplementation_PlayVideo_m1898373555 (SpiliOSUnityImplementation_t3920049011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpiliOSUnityImplementation::playRewardVideo()
extern "C"  String_t* SpiliOSUnityImplementation_playRewardVideo_m530751777 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::PlayMoreApps()
extern "C"  void SpiliOSUnityImplementation_PlayMoreApps_m3802307665 (SpiliOSUnityImplementation_t3920049011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpiliOSUnityImplementation::showMoreApps()
extern "C"  String_t* SpiliOSUnityImplementation_showMoreApps_m1800129309 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::RequestMoreApps()
extern "C"  void SpiliOSUnityImplementation_RequestMoreApps_m4037600034 (SpiliOSUnityImplementation_t3920049011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpiliOSUnityImplementation::getConfigNative()
extern "C"  String_t* SpiliOSUnityImplementation_getConfigNative_m990681368 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpiliOSUnityImplementation::getConfigValueNative(System.String)
extern "C"  String_t* SpiliOSUnityImplementation_getConfigValueNative_m1924456313 (Il2CppObject * __this /* static, unused */, String_t* ___keyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::setPushNotificationKey(System.String)
extern "C"  void SpiliOSUnityImplementation_setPushNotificationKey_m2300597908 (Il2CppObject * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::handlePushNotification(System.String)
extern "C"  void SpiliOSUnityImplementation_handlePushNotification_m2122051007 (Il2CppObject * __this /* static, unused */, String_t* ___notificationStringParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::RegisterForIosPushNotifications()
extern "C"  void SpiliOSUnityImplementation_RegisterForIosPushNotifications_m671278451 (SpiliOSUnityImplementation_t3920049011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::CheckForRemoteNotifications()
extern "C"  void SpiliOSUnityImplementation_CheckForRemoteNotifications_m738155181 (SpiliOSUnityImplementation_t3920049011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::sendNotificationTokenToSpil()
extern "C"  void SpiliOSUnityImplementation_sendNotificationTokenToSpil_m2758709005 (SpiliOSUnityImplementation_t3920049011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::applicationDidEnterBackground()
extern "C"  void SpiliOSUnityImplementation_applicationDidEnterBackground_m4058865091 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::applicationDidBecomeActive()
extern "C"  void SpiliOSUnityImplementation_applicationDidBecomeActive_m4139187922 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::OnApplicationPause(System.Boolean)
extern "C"  void SpiliOSUnityImplementation_OnApplicationPause_m2578942994 (SpiliOSUnityImplementation_t3920049011 * __this, bool ___pauseStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::initEventTrackerWithOptions(System.String)
extern "C"  void SpiliOSUnityImplementation_initEventTrackerWithOptions_m859133548 (Il2CppObject * __this /* static, unused */, String_t* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::trackEventNative(System.String)
extern "C"  void SpiliOSUnityImplementation_trackEventNative_m3878657862 (Il2CppObject * __this /* static, unused */, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpiliOSUnityImplementation::trackEventWithParamsNative(System.String,System.String)
extern "C"  void SpiliOSUnityImplementation_trackEventWithParamsNative_m1410250870 (Il2CppObject * __this /* static, unused */, String_t* ___eventName, String_t* ___jsonStringParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
