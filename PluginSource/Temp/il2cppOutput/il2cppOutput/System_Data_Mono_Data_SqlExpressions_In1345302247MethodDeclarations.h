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

// Mono.Data.SqlExpressions.In
struct In_t1345302247;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Collections.IList
struct IList_t1612618265;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.In::.ctor(Mono.Data.SqlExpressions.IExpression,System.Collections.IList)
extern "C"  void In__ctor_m1307578797 (In_t1345302247 * __this, Il2CppObject * ___e, Il2CppObject * ___set, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.In::Equals(System.Object)
extern "C"  bool In_Equals_m2713226046 (In_t1345302247 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.In::GetHashCode()
extern "C"  int32_t In_GetHashCode_m1654646934 (In_t1345302247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.In::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * In_Eval_m4131187935 (In_t1345302247 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.In::EvalBoolean(System.Data.DataRow)
extern "C"  bool In_EvalBoolean_m3278039952 (In_t1345302247 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
