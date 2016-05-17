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

// System.Data.MergeFailedEventArgs
struct MergeFailedEventArgs_t3393563989;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Data.MergeFailedEventArgs::.ctor(System.Data.DataTable,System.String)
extern "C"  void MergeFailedEventArgs__ctor_m1350428512 (MergeFailedEventArgs_t3393563989 * __this, DataTable_t2176726999 * ___table, String_t* ___conflict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.MergeFailedEventArgs::get_Conflict()
extern "C"  String_t* MergeFailedEventArgs_get_Conflict_m158994131 (MergeFailedEventArgs_t3393563989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
