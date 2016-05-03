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

// System.Reflection.Emit.ArrayType
struct ArrayType_t2240794816;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_TypeAttributes104824479.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Reflection.Emit.ArrayType::.ctor(System.Type,System.Int32)
extern "C"  void ArrayType__ctor_m3010985652 (ArrayType_t2240794816 * __this, Type_t * ___elementType, int32_t ___rank, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ArrayType::IsArrayImpl()
extern "C"  bool ArrayType_IsArrayImpl_m3525158049 (ArrayType_t2240794816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ArrayType::GetArrayRank()
extern "C"  int32_t ArrayType_GetArrayRank_m2521337497 (ArrayType_t2240794816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ArrayType::get_BaseType()
extern "C"  Type_t * ArrayType_get_BaseType_m82445660 (ArrayType_t2240794816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.ArrayType::GetAttributeFlagsImpl()
extern "C"  int32_t ArrayType_GetAttributeFlagsImpl_m3930019551 (ArrayType_t2240794816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ArrayType::FormatName(System.String)
extern "C"  String_t* ArrayType_FormatName_m3866946191 (ArrayType_t2240794816 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
