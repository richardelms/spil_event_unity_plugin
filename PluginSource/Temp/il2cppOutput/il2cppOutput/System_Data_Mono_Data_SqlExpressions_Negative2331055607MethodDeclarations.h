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

// Mono.Data.SqlExpressions.Negative
struct Negative_t2331055607;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.Negative::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C"  void Negative__ctor_m120080186 (Negative_t2331055607 * __this, Il2CppObject * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Negative::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Negative_Eval_m2768146511 (Negative_t2331055607 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
