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

// System.Reflection.Emit.DynamicMethodTokenGenerator
struct DynamicMethodTokenGenerator_t4108787335;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t2778460557;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_DynamicMethod2778460557.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"

// System.Void System.Reflection.Emit.DynamicMethodTokenGenerator::.ctor(System.Reflection.Emit.DynamicMethod)
extern "C"  void DynamicMethodTokenGenerator__ctor_m1691264806 (DynamicMethodTokenGenerator_t4108787335 * __this, DynamicMethod_t2778460557 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.String)
extern "C"  int32_t DynamicMethodTokenGenerator_GetToken_m2923455182 (DynamicMethodTokenGenerator_t4108787335 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C"  int32_t DynamicMethodTokenGenerator_GetToken_m1285718002 (DynamicMethodTokenGenerator_t4108787335 * __this, MethodInfo_t * ___method, TypeU5BU5D_t3431720054* ___opt_param_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C"  int32_t DynamicMethodTokenGenerator_GetToken_m4110543368 (DynamicMethodTokenGenerator_t4108787335 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
