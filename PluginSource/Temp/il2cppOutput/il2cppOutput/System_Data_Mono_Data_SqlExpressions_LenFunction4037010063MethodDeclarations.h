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

// Mono.Data.SqlExpressions.LenFunction
struct LenFunction_t4037010063;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.LenFunction::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C"  void LenFunction__ctor_m1303086904 (LenFunction_t4037010063 * __this, Il2CppObject * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.LenFunction::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * LenFunction_Eval_m1395380163 (LenFunction_t4037010063 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
