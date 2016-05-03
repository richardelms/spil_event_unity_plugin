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

// Mono.Data.SqlExpressions.IifFunction
struct IifFunction_t1626609344;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.IifFunction::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void IifFunction__ctor_m1888673287 (IifFunction_t1626609344 * __this, Il2CppObject * ___e, Il2CppObject * ___trueExpr, Il2CppObject * ___falseExpr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.IifFunction::Equals(System.Object)
extern "C"  bool IifFunction_Equals_m2743130695 (IifFunction_t1626609344 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.IifFunction::GetHashCode()
extern "C"  int32_t IifFunction_GetHashCode_m1850069675 (IifFunction_t1626609344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.IifFunction::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * IifFunction_Eval_m3688465650 (IifFunction_t1626609344 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
