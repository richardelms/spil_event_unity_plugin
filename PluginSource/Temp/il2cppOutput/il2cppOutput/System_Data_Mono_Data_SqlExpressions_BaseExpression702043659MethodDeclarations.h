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

// Mono.Data.SqlExpressions.BaseExpression
struct BaseExpression_t702043659;
// System.Data.DataRow
struct DataRow_t3654701923;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataRow3654701923.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Mono.Data.SqlExpressions.BaseExpression::.ctor()
extern "C"  void BaseExpression__ctor_m1235151647 (BaseExpression_t702043659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BaseExpression::EvalBoolean(System.Data.DataRow)
extern "C"  bool BaseExpression_EvalBoolean_m1859110964 (BaseExpression_t702043659 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BaseExpression::Equals(System.Object)
extern "C"  bool BaseExpression_Equals_m1362570522 (BaseExpression_t702043659 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.BaseExpression::GetHashCode()
extern "C"  int32_t BaseExpression_GetHashCode_m4248211314 (BaseExpression_t702043659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
