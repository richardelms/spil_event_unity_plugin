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

// Mono.Data.SqlExpressions.Aggregation
struct Aggregation_t3854693476;
// System.Data.DataRow[]
struct DataRowU5BU5D_t1036778418;
// Mono.Data.SqlExpressions.ColumnReference
struct ColumnReference_t2222606871;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.IConvertible
struct IConvertible_t4194222097;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Data.DataRowChangeEventArgs
struct DataRowChangeEventArgs_t116317866;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_Mono_Data_SqlExpressions_AggregationFu3214535260.h"
#include "System_Data_Mono_Data_SqlExpressions_ColumnReferen2222606871.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataRow3654701923.h"
#include "System_Data_System_Data_DataColumn3354469747.h"
#include "System_Data_System_Data_DataRowChangeEventArgs116317866.h"

// System.Void Mono.Data.SqlExpressions.Aggregation::.ctor(System.Boolean,System.Data.DataRow[],Mono.Data.SqlExpressions.AggregationFunction,Mono.Data.SqlExpressions.ColumnReference)
extern "C"  void Aggregation__ctor_m3232058551 (Aggregation_t3854693476 * __this, bool ___cacheResults, DataRowU5BU5D_t1036778418* ___rows, int32_t ___function, ColumnReference_t2222606871 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Aggregation::Equals(System.Object)
extern "C"  bool Aggregation_Equals_m3513377827 (Aggregation_t3854693476 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Aggregation::GetHashCode()
extern "C"  int32_t Aggregation_GetHashCode_m2211739783 (Aggregation_t3854693476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Aggregation::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Aggregation_Eval_m2016559310 (Aggregation_t3854693476 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Aggregation::DependsOn(System.Data.DataColumn)
extern "C"  bool Aggregation_DependsOn_m1353084849 (Aggregation_t3854693476 * __this, DataColumn_t3354469747 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Aggregation::Aggregate(System.IConvertible)
extern "C"  void Aggregation_Aggregate_m2886634526 (Aggregation_t3854693476 * __this, Il2CppObject * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Mono.Data.SqlExpressions.Aggregation::CalcStatisticalFunction(System.Object[])
extern "C"  Il2CppObject * Aggregation_CalcStatisticalFunction_m2296158066 (Aggregation_t3854693476 * __this, ObjectU5BU5D_t11523773* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Aggregation::InvalidateCache(System.Object,System.Data.DataRowChangeEventArgs)
extern "C"  void Aggregation_InvalidateCache_m2729061527 (Aggregation_t3854693476 * __this, Il2CppObject * ___sender, DataRowChangeEventArgs_t116317866 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
