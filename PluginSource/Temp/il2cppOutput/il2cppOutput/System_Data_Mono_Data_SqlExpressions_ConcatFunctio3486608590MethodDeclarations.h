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

// Mono.Data.SqlExpressions.ConcatFunction
struct ConcatFunction_t3486608590;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.ConcatFunction::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void ConcatFunction__ctor_m1662794154 (ConcatFunction_t3486608590 * __this, Il2CppObject * ___e, Il2CppObject * ___add, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ConcatFunction::Equals(System.Object)
extern "C"  bool ConcatFunction_Equals_m445983479 (ConcatFunction_t3486608590 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.ConcatFunction::GetHashCode()
extern "C"  int32_t ConcatFunction_GetHashCode_m3779770959 (ConcatFunction_t3486608590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ConcatFunction::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * ConcatFunction_Eval_m3881254808 (ConcatFunction_t3486608590 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
