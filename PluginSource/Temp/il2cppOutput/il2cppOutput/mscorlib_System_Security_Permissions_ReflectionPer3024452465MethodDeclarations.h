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

// System.Security.Permissions.ReflectionPermission
struct ReflectionPermission_t3024452465;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_ReflectionPer1174020605.h"

// System.Void System.Security.Permissions.ReflectionPermission::.ctor(System.Security.Permissions.ReflectionPermissionFlag)
extern "C"  void ReflectionPermission__ctor_m2237025280 (ReflectionPermission_t3024452465 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermission::get_Flags()
extern "C"  int32_t ReflectionPermission_get_Flags_m1908790767 (ReflectionPermission_t3024452465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ReflectionPermission::set_Flags(System.Security.Permissions.ReflectionPermissionFlag)
extern "C"  void ReflectionPermission_set_Flags_m2379421960 (ReflectionPermission_t3024452465 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ReflectionPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool ReflectionPermission_IsSubsetOf_m2138106367 (ReflectionPermission_t3024452465 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ReflectionPermission::IsUnrestricted()
extern "C"  bool ReflectionPermission_IsUnrestricted_m3088418949 (ReflectionPermission_t3024452465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.ReflectionPermission::ToXml()
extern "C"  SecurityElement_t2475331585 * ReflectionPermission_ToXml_m4018000339 (ReflectionPermission_t3024452465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ReflectionPermission System.Security.Permissions.ReflectionPermission::Cast(System.Security.IPermission)
extern "C"  ReflectionPermission_t3024452465 * ReflectionPermission_Cast_m2732601581 (ReflectionPermission_t3024452465 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
