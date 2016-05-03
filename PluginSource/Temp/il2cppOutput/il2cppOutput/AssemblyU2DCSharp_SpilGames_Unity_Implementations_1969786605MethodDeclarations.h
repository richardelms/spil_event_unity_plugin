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

// SpilGames.Unity.Implementations.SpilUnityEditorImplementation
struct SpilUnityEditorImplementation_t1969786605;
// System.String
struct String_t;
// SpilGames.Unity.Helpers.PackagesHelper
struct PackagesHelper_t1471447264;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void SpilGames.Unity.Implementations.SpilUnityEditorImplementation::.ctor()
extern "C"  void SpilUnityEditorImplementation__ctor_m4169022922 (SpilUnityEditorImplementation_t1969786605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpilUnityEditorImplementation::GetConfigAll()
extern "C"  String_t* SpilUnityEditorImplementation_GetConfigAll_m2663454208 (SpilUnityEditorImplementation_t1969786605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpilUnityEditorImplementation::GetConfigValue(System.String)
extern "C"  String_t* SpilUnityEditorImplementation_GetConfigValue_m3365656242 (SpilUnityEditorImplementation_t1969786605 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpilGames.Unity.Helpers.PackagesHelper SpilGames.Unity.Implementations.SpilUnityEditorImplementation::GetPackagesAndPromotions()
extern "C"  PackagesHelper_t1471447264 * SpilUnityEditorImplementation_GetPackagesAndPromotions_m1609017259 (SpilUnityEditorImplementation_t1969786605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityEditorImplementation::UpdatePackagesAndPromotions()
extern "C"  void SpilUnityEditorImplementation_UpdatePackagesAndPromotions_m1476809625 (SpilUnityEditorImplementation_t1969786605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityEditorImplementation::spilInit()
extern "C"  void SpilUnityEditorImplementation_spilInit_m1925219082 (SpilUnityEditorImplementation_t1969786605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityEditorImplementation::SendCustomEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void SpilUnityEditorImplementation_SendCustomEvent_m1767984542 (SpilUnityEditorImplementation_t1969786605 * __this, String_t* ___eventName, Dictionary_2_t2606186806 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityEditorImplementation::PlayVideo()
extern "C"  void SpilUnityEditorImplementation_PlayVideo_m68027215 (SpilUnityEditorImplementation_t1969786605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityEditorImplementation::PlayMoreApps()
extern "C"  void SpilUnityEditorImplementation_PlayMoreApps_m564315445 (SpilUnityEditorImplementation_t1969786605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityEditorImplementation::RequestMoreApps()
extern "C"  void SpilUnityEditorImplementation_RequestMoreApps_m1681874878 (SpilUnityEditorImplementation_t1969786605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityEditorImplementation::TestStartDFP(System.String)
extern "C"  void SpilUnityEditorImplementation_TestStartDFP_m4205248810 (SpilUnityEditorImplementation_t1969786605 * __this, String_t* ___adUnitId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityEditorImplementation::TestStartFyber(System.String,System.String)
extern "C"  void SpilUnityEditorImplementation_TestStartFyber_m2447667768 (SpilUnityEditorImplementation_t1969786605 * __this, String_t* ___appId, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityEditorImplementation::TestStartChartBoost(System.String,System.String)
extern "C"  void SpilUnityEditorImplementation_TestStartChartBoost_m3377471169 (SpilUnityEditorImplementation_t1969786605 * __this, String_t* ___appId, String_t* ___appSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityEditorImplementation::TestRequestAd(System.String,System.String,System.Boolean)
extern "C"  void SpilUnityEditorImplementation_TestRequestAd_m374583431 (SpilUnityEditorImplementation_t1969786605 * __this, String_t* ___provider, String_t* ___adType, bool ___parentalGate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityEditorImplementation::EnablePushNotifications()
extern "C"  void SpilUnityEditorImplementation_EnablePushNotifications_m3136125203 (SpilUnityEditorImplementation_t1969786605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityEditorImplementation::DisablePushNotifications()
extern "C"  void SpilUnityEditorImplementation_DisablePushNotifications_m3261599776 (SpilUnityEditorImplementation_t1969786605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityEditorImplementation::RegisterDevice(System.String)
extern "C"  void SpilUnityEditorImplementation_RegisterDevice_m2221410895 (SpilUnityEditorImplementation_t1969786605 * __this, String_t* ___projectID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpilUnityEditorImplementation::GetSpilUID()
extern "C"  String_t* SpilUnityEditorImplementation_GetSpilUID_m2923288241 (SpilUnityEditorImplementation_t1969786605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpilUnityEditorImplementation::clearLog()
extern "C"  String_t* SpilUnityEditorImplementation_clearLog_m604382926 (SpilUnityEditorImplementation_t1969786605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpilUnityEditorImplementation::getLog()
extern "C"  String_t* SpilUnityEditorImplementation_getLog_m3833006309 (SpilUnityEditorImplementation_t1969786605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Implementations.SpilUnityEditorImplementation::CallNativeMethod(System.String)
extern "C"  String_t* SpilUnityEditorImplementation_CallNativeMethod_m3467343701 (SpilUnityEditorImplementation_t1969786605 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
