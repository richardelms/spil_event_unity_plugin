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

// Spil
struct Spil_t_895718981_0;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t910085258_0;
// JSONObject
struct JSONObject_t_498240670_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Spil::.ctor()
extern "C"  void Spil__ctor_m_797177285_0 (Spil_t_895718981_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::Awake()
extern "C"  void Spil_Awake_m_559572066_0 (Spil_t_895718981_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::initEventTracker()
extern "C"  void Spil_initEventTracker_m_378310537_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::applicationDidEnterBackground()
extern "C"  void Spil_applicationDidEnterBackground_m937124560_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::applicationDidBecomeActive()
extern "C"  void Spil_applicationDidBecomeActive_m798809317_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::trackEventNative(System.String)
extern "C"  void Spil_trackEventNative_m756917331_0 (Object_t * __this /* static, unused */, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::setPushNotificationKey(System.String)
extern "C"  void Spil_setPushNotificationKey_m1399299553_0 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::trackEventWithParamsNative(System.String,System.String)
extern "C"  void Spil_trackEventWithParamsNative_m_672029053_0 (Object_t * __this /* static, unused */, String_t* ___eventName, String_t* ___jsonStringParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::handlePushNotification(System.String)
extern "C"  void Spil_handlePushNotification_m1220752652_0 (Object_t * __this /* static, unused */, String_t* ___notificationStringParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::SpilInit()
extern "C"  void Spil_SpilInit_m291795225_0 (Spil_t_895718981_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::RegisterForIosPushNotifications()
extern "C"  void Spil_RegisterForIosPushNotifications_m_1434199232_0 (Spil_t_895718981_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::Update()
extern "C"  void Spil_Update_m_1510797262_0 (Spil_t_895718981_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::SendNotificationTokenToSpil()
extern "C"  void Spil_SendNotificationTokenToSpil_m1581769530_0 (Spil_t_895718981_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::TrackEvent(System.String)
extern "C"  void Spil_TrackEvent_m102457354_0 (Object_t * __this /* static, unused */, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::TrackEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void Spil_TrackEvent_m_1484241171_0 (Object_t * __this /* static, unused */, String_t* ___eventName, Dictionary_2_t910085258_0 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spil::GetConfigAll()
extern "C"  String_t* Spil_GetConfigAll_m_1574816683_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spil::GetConfigValue(System.String)
extern "C"  String_t* Spil_GetConfigValue_m1955177405_0 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::OnApplicationPause(System.Boolean)
extern "C"  void Spil_OnApplicationPause_m1733644261_0 (Spil_t_895718981_0 * __this, bool ___pauseStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::CheckForRemoteNotifications()
extern "C"  void Spil_CheckForRemoteNotifications_m265633530_0 (Spil_t_895718981_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::OnResponseReceived(System.String)
extern "C"  void Spil_OnResponseReceived_m_923361128_0 (Spil_t_895718981_0 * __this, String_t* ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::ShowSpilMoreApps()
extern "C"  void Spil_ShowSpilMoreApps_m903834125_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spil::OnReward(JSONObject)
extern "C"  void Spil_OnReward_m_670937296_0 (Spil_t_895718981_0 * __this, JSONObject_t_498240670_0 * ___rewardData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
