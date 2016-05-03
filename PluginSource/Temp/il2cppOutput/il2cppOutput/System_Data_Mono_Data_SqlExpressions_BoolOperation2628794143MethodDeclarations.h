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

// Mono.Data.SqlExpressions.BoolOperation
struct BoolOperation_t2628794143;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_Mono_Data_SqlExpressions_Operation717003497.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.BoolOperation::.ctor(Mono.Data.SqlExpressions.Operation,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void BoolOperation__ctor_m3377024706 (BoolOperation_t2628794143 * __this, int32_t ___op, Il2CppObject * ___e1, Il2CppObject * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.BoolOperation::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * BoolOperation_Eval_m2244878259 (BoolOperation_t2628794143 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BoolOperation::EvalBoolean(System.Data.DataRow)
extern "C"  bool BoolOperation_EvalBoolean_m977417670 (BoolOperation_t2628794143 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
