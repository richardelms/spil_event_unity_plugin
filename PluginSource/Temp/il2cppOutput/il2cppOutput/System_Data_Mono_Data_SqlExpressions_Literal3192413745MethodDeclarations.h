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

// Mono.Data.SqlExpressions.Literal
struct Literal_t3192413745;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;
// System.Data.DataColumn
struct DataColumn_t3354469747;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataRow3654701923.h"
#include "System_Data_System_Data_DataColumn3354469747.h"

// System.Void Mono.Data.SqlExpressions.Literal::.ctor(System.Object)
extern "C"  void Literal__ctor_m1803314789 (Literal_t3192413745 * __this, Il2CppObject * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Literal::Equals(System.Object)
extern "C"  bool Literal_Equals_m398091318 (Literal_t3192413745 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Literal::GetHashCode()
extern "C"  int32_t Literal_GetHashCode_m2602401434 (Literal_t3192413745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Literal::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Literal_Eval_m1174290913 (Literal_t3192413745 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Literal::DependsOn(System.Data.DataColumn)
extern "C"  bool Literal_DependsOn_m3589303108 (Literal_t3192413745 * __this, DataColumn_t3354469747 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
