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

// Newtonsoft.Json.Utilities.ReflectionObject
struct ReflectionObject_t321445473;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t602487958;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>
struct IDictionary_2_t3080407975;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MethodBase3461000640.h"

// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.ReflectionObject::get_Creator()
extern "C"  ObjectConstructor_1_t602487958 * ReflectionObject_get_Creator_m2911534260 (ReflectionObject_t321445473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::set_Creator(Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>)
extern "C"  void ReflectionObject_set_Creator_m1602307373 (ReflectionObject_t321445473 * __this, ObjectConstructor_1_t602487958 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember> Newtonsoft.Json.Utilities.ReflectionObject::get_Members()
extern "C"  Il2CppObject* ReflectionObject_get_Members_m1028611368 (ReflectionObject_t321445473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::set_Members(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>)
extern "C"  void ReflectionObject_set_Members_m1877907763 (ReflectionObject_t321445473 * __this, Il2CppObject* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::.ctor()
extern "C"  void ReflectionObject__ctor_m511425059 (ReflectionObject_t321445473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionObject::GetValue(System.Object,System.String)
extern "C"  Il2CppObject * ReflectionObject_GetValue_m1998683839 (ReflectionObject_t321445473 * __this, Il2CppObject * ___target, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionObject::GetType(System.String)
extern "C"  Type_t * ReflectionObject_GetType_m3167460427 (ReflectionObject_t321445473 * __this, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ReflectionObject Newtonsoft.Json.Utilities.ReflectionObject::Create(System.Type,System.Reflection.MethodBase,System.String[])
extern "C"  ReflectionObject_t321445473 * ReflectionObject_Create_m1865659230 (Il2CppObject * __this /* static, unused */, Type_t * ___t, MethodBase_t3461000640 * ___creator, StringU5BU5D_t2956870243* ___memberNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
