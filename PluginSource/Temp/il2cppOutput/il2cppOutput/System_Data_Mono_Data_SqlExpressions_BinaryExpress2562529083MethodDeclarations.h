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

// Mono.Data.SqlExpressions.BinaryExpression
struct BinaryExpression_t2562529083;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Object
struct Il2CppObject;
// System.Data.DataColumn
struct DataColumn_t3354469747;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataColumn3354469747.h"

// System.Void Mono.Data.SqlExpressions.BinaryExpression::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void BinaryExpression__ctor_m707057687 (BinaryExpression_t2562529083 * __this, Il2CppObject * ___e1, Il2CppObject * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BinaryExpression::Equals(System.Object)
extern "C"  bool BinaryExpression_Equals_m1075131946 (BinaryExpression_t2562529083 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.BinaryExpression::GetHashCode()
extern "C"  int32_t BinaryExpression_GetHashCode_m3914426882 (BinaryExpression_t2562529083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BinaryExpression::DependsOn(System.Data.DataColumn)
extern "C"  bool BinaryExpression_DependsOn_m2491150136 (BinaryExpression_t2562529083 * __this, DataColumn_t3354469747 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
