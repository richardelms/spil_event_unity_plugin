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

// Mono.Data.SqlExpressions.Negation
struct Negation_t2331055399;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.Negation::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C"  void Negation__ctor_m1443182090 (Negation_t2331055399 * __this, Il2CppObject * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Negation::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Negation_Eval_m4213740319 (Negation_t2331055399 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Negation::EvalBoolean(System.Data.DataRow)
extern "C"  bool Negation_EvalBoolean_m2938075408 (Negation_t2331055399 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
