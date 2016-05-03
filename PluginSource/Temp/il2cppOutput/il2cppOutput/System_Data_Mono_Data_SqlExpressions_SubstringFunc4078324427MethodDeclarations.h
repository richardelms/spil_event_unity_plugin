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

// Mono.Data.SqlExpressions.SubstringFunction
struct SubstringFunction_t4078324427;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void Mono.Data.SqlExpressions.SubstringFunction::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void SubstringFunction__ctor_m3039750492 (SubstringFunction_t4078324427 * __this, Il2CppObject * ___e, Il2CppObject * ___start, Il2CppObject * ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.SubstringFunction::Equals(System.Object)
extern "C"  bool SubstringFunction_Equals_m2468270364 (SubstringFunction_t4078324427 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.SubstringFunction::GetHashCode()
extern "C"  int32_t SubstringFunction_GetHashCode_m1094425088 (SubstringFunction_t4078324427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.SubstringFunction::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * SubstringFunction_Eval_m1638022535 (SubstringFunction_t4078324427 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
