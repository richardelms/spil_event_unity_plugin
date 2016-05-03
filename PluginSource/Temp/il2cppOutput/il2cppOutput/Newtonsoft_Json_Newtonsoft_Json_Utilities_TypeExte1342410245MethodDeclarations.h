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

// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberTypes938013741.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Type2779229935.h"

// System.Reflection.MemberTypes Newtonsoft.Json.Utilities.TypeExtensions::MemberType(System.Reflection.MemberInfo)
extern "C"  int32_t TypeExtensions_MemberType_m3939202661 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___memberInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ContainsGenericParameters(System.Type)
extern "C"  bool TypeExtensions_ContainsGenericParameters_m2227104932 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsInterface(System.Type)
extern "C"  bool TypeExtensions_IsInterface_m3205073367 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericType(System.Type)
extern "C"  bool TypeExtensions_IsGenericType_m1172204127 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericTypeDefinition(System.Type)
extern "C"  bool TypeExtensions_IsGenericTypeDefinition_m1927696140 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.TypeExtensions::BaseType(System.Type)
extern "C"  Type_t * TypeExtensions_BaseType_m3282128463 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsEnum(System.Type)
extern "C"  bool TypeExtensions_IsEnum_m326902495 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsClass(System.Type)
extern "C"  bool TypeExtensions_IsClass_m1623226360 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsSealed(System.Type)
extern "C"  bool TypeExtensions_IsSealed_m2490128996 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsAbstract(System.Type)
extern "C"  bool TypeExtensions_IsAbstract_m1372008798 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsValueType(System.Type)
extern "C"  bool TypeExtensions_IsValueType_m2619215877 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ImplementInterface(System.Type,System.Type)
extern "C"  bool TypeExtensions_ImplementInterface_m3520736487 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___interfaceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
