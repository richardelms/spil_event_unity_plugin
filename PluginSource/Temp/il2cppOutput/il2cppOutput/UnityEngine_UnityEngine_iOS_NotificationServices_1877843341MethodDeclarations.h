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

// UnityEngine.iOS.RemoteNotification
struct RemoteNotification_t1346606811_0;
// UnityEngine.iOS.RemoteNotification[]
struct RemoteNotificationU5BU5D_t1303992189_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_iOS_NotificationType_1269681201.h"

// System.Int32 UnityEngine.iOS.NotificationServices::get_remoteNotificationCount()
extern "C"  int32_t NotificationServices_get_remoteNotificationCount_m_473154602_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.RemoteNotification UnityEngine.iOS.NotificationServices::GetRemoteNotification(System.Int32)
extern "C"  RemoteNotification_t1346606811_0 * NotificationServices_GetRemoteNotification_m_591070413_0 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.RemoteNotification[] UnityEngine.iOS.NotificationServices::get_remoteNotifications()
extern "C"  RemoteNotificationU5BU5D_t1303992189_0* NotificationServices_get_remoteNotifications_m800019510_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::ClearRemoteNotifications()
extern "C"  void NotificationServices_ClearRemoteNotifications_m_713534634_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType,System.Boolean)
extern "C"  void NotificationServices_RegisterForNotifications_m736063639_0 (Object_t * __this /* static, unused */, int32_t ___notificationTypes, bool ___registerForRemote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.iOS.NotificationServices::get_deviceToken()
extern "C"  ByteU5BU5D_t_1238178395_0* NotificationServices_get_deviceToken_m1646897969_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
