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

// Mono.Data.SqlExpressions.UnaryExpression
struct UnaryExpression_t1811781289;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Object
struct Il2CppObject;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataColumn3354469747.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.UnaryExpression::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C"  void UnaryExpression__ctor_m2040029150 (UnaryExpression_t1811781289 * __this, Il2CppObject * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.UnaryExpression::Equals(System.Object)
extern "C"  bool UnaryExpression_Equals_m1302995902 (UnaryExpression_t1811781289 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.UnaryExpression::GetHashCode()
extern "C"  int32_t UnaryExpression_GetHashCode_m365903906 (UnaryExpression_t1811781289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.UnaryExpression::DependsOn(System.Data.DataColumn)
extern "C"  bool UnaryExpression_DependsOn_m349511372 (UnaryExpression_t1811781289 * __this, DataColumn_t3354469747 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.UnaryExpression::EvalBoolean(System.Data.DataRow)
extern "C"  bool UnaryExpression_EvalBoolean_m970261264 (UnaryExpression_t1811781289 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
