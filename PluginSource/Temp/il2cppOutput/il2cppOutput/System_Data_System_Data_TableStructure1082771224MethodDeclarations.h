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

// System.Data.TableStructure
struct TableStructure_t1082771224;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Data.TableStructure::.ctor(System.Data.DataTable)
extern "C"  void TableStructure__ctor_m422151719 (TableStructure_t1082771224 * __this, DataTable_t2176726999 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.TableStructure::ContainsColumn(System.String)
extern "C"  bool TableStructure_ContainsColumn_m123918059 (TableStructure_t1082771224 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
