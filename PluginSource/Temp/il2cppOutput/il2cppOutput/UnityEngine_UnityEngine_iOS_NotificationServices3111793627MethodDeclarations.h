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
struct RemoteNotification_t1121285571;
// UnityEngine.iOS.RemoteNotification[]
struct RemoteNotificationU5BU5D_t2509186002;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_iOS_NotificationType104038455.h"

// System.Int32 UnityEngine.iOS.NotificationServices::get_remoteNotificationCount()
extern "C"  int32_t NotificationServices_get_remoteNotificationCount_m3821812694 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.RemoteNotification UnityEngine.iOS.NotificationServices::GetRemoteNotification(System.Int32)
extern "C"  RemoteNotification_t1121285571 * NotificationServices_GetRemoteNotification_m3703896883 (Il2CppObject * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.RemoteNotification[] UnityEngine.iOS.NotificationServices::get_remoteNotifications()
extern "C"  RemoteNotificationU5BU5D_t2509186002* NotificationServices_get_remoteNotifications_m800019510 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::ClearRemoteNotifications()
extern "C"  void NotificationServices_ClearRemoteNotifications_m3581432662 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType,System.Boolean)
extern "C"  void NotificationServices_RegisterForNotifications_m736063639 (Il2CppObject * __this /* static, unused */, int32_t ___notificationTypes, bool ___registerForRemote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.iOS.NotificationServices::get_deviceToken()
extern "C"  ByteU5BU5D_t58506160* NotificationServices_get_deviceToken_m1646897969 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
