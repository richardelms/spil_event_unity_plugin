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

// Mono.Data.SqlExpressions.TrimFunction
struct TrimFunction_t3451782108;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.TrimFunction::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C"  void TrimFunction__ctor_m3361509109 (TrimFunction_t3451782108 * __this, Il2CppObject * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.TrimFunction::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * TrimFunction_Eval_m1392893514 (TrimFunction_t3451782108 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
