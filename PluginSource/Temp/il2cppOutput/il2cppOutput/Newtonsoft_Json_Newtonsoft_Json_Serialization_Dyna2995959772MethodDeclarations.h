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

// Newtonsoft.Json.Serialization.DynamicValueProvider
struct DynamicValueProvider_t2995959772;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Newtonsoft.Json.Serialization.DynamicValueProvider::.ctor(System.Reflection.MemberInfo)
extern "C"  void DynamicValueProvider__ctor_m1675164356 (DynamicValueProvider_t2995959772 * __this, MemberInfo_t * ___memberInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DynamicValueProvider::SetValue(System.Object,System.Object)
extern "C"  void DynamicValueProvider_SetValue_m3285367487 (DynamicValueProvider_t2995959772 * __this, Il2CppObject * ___target, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.DynamicValueProvider::GetValue(System.Object)
extern "C"  Il2CppObject * DynamicValueProvider_GetValue_m4072954896 (DynamicValueProvider_t2995959772 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
