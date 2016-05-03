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

// Mono.Data.SqlExpressions.ConvertFunction
struct ConvertFunction_t3624988717;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.ConvertFunction::.ctor(Mono.Data.SqlExpressions.IExpression,System.String)
extern "C"  void ConvertFunction__ctor_m3497742230 (ConvertFunction_t3624988717 * __this, Il2CppObject * ___e, String_t* ___targetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ConvertFunction::Equals(System.Object)
extern "C"  bool ConvertFunction_Equals_m2008044986 (ConvertFunction_t3624988717 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.ConvertFunction::GetHashCode()
extern "C"  int32_t ConvertFunction_GetHashCode_m2796891678 (ConvertFunction_t3624988717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ConvertFunction::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * ConvertFunction_Eval_m3827141733 (ConvertFunction_t3624988717 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ConvertFunction::ThrowInvalidCastException(System.Object)
extern "C"  void ConvertFunction_ThrowInvalidCastException_m1529540868 (ConvertFunction_t3624988717 * __this, Il2CppObject * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
