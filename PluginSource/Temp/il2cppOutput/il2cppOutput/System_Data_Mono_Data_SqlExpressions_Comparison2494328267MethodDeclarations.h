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

// Mono.Data.SqlExpressions.Comparison
struct Comparison_t2494328267;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;
// System.IComparable
struct IComparable_t1596950936;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_Mono_Data_SqlExpressions_Operation717003497.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.Comparison::.ctor(Mono.Data.SqlExpressions.Operation,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void Comparison__ctor_m1861880192 (Comparison_t2494328267 * __this, int32_t ___op, Il2CppObject * ___e1, Il2CppObject * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Comparison::.cctor()
extern "C"  void Comparison__cctor_m968278446 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Comparison::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Comparison_Eval_m3704653179 (Comparison_t2494328267 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Comparison::EvalBoolean(System.Data.DataRow)
extern "C"  bool Comparison_EvalBoolean_m646492276 (Comparison_t2494328267 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Comparison::Compare(System.IComparable,System.IComparable,System.Boolean)
extern "C"  int32_t Comparison_Compare_m1227875517 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o1, Il2CppObject * ___o2, bool ___caseSensitive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
