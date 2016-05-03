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

// Mono.Data.SqlExpressions.ArithmeticOperation
struct ArithmeticOperation_t78727519;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_Mono_Data_SqlExpressions_Operation717003497.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.ArithmeticOperation::.ctor(Mono.Data.SqlExpressions.Operation,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void ArithmeticOperation__ctor_m2128313410 (ArithmeticOperation_t78727519 * __this, int32_t ___op, Il2CppObject * ___e1, Il2CppObject * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ArithmeticOperation::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * ArithmeticOperation_Eval_m2936725747 (ArithmeticOperation_t78727519 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
