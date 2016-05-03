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

// Mono.Data.SqlExpressions.Like
struct Like_t1347668313;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.Like::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void Like__ctor_m4124143413 (Like_t1347668313 * __this, Il2CppObject * ___e, Il2CppObject * ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Like::Equals(System.Object)
extern "C"  bool Like_Equals_m235425996 (Like_t1347668313 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Like::GetHashCode()
extern "C"  int32_t Like_GetHashCode_m1496194468 (Like_t1347668313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Like::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Like_Eval_m3660221613 (Like_t1347668313 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Like::EvalBoolean(System.Data.DataRow)
extern "C"  bool Like_EvalBoolean_m3632251202 (Like_t1347668313 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
