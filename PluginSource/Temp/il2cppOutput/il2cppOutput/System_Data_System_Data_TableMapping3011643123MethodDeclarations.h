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

// System.Data.TableMapping
struct TableMapping_t3011643123;
// System.String
struct String_t;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.DataColumn
struct DataColumn_t3354469747;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Data_System_Data_DataTable2176726999.h"

// System.Void System.Data.TableMapping::.ctor(System.String,System.String)
extern "C"  void TableMapping__ctor_m516615085 (TableMapping_t3011643123 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.TableMapping::.ctor(System.Data.DataTable)
extern "C"  void TableMapping__ctor_m738931010 (TableMapping_t3011643123 * __this, DataTable_t2176726999 * ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.TableMapping::get_ExistsInDataSet()
extern "C"  bool TableMapping_get_ExistsInDataSet_m1826415891 (TableMapping_t3011643123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.TableMapping::GetColumn(System.String)
extern "C"  DataColumn_t3354469747 * TableMapping_GetColumn_m1258267765 (TableMapping_t3011643123 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.TableMapping::RemoveElementColumn(System.String)
extern "C"  void TableMapping_RemoveElementColumn_m2741199941 (TableMapping_t3011643123 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
