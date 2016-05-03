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

// Mono.Data.SqlExpressions.IsNullFunction
struct IsNullFunction_t871664267;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.IsNullFunction::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void IsNullFunction__ctor_m983161383 (IsNullFunction_t871664267 * __this, Il2CppObject * ___e, Il2CppObject * ___defaultExpr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.IsNullFunction::Equals(System.Object)
extern "C"  bool IsNullFunction_Equals_m4184336538 (IsNullFunction_t871664267 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.IsNullFunction::GetHashCode()
extern "C"  int32_t IsNullFunction_GetHashCode_m1637534450 (IsNullFunction_t871664267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.IsNullFunction::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * IsNullFunction_Eval_m2105308091 (IsNullFunction_t871664267 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
