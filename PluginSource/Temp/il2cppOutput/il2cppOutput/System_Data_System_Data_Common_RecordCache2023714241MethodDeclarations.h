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

// System.Data.Common.RecordCache
struct RecordCache_t2023714241;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void System.Data.Common.RecordCache::.ctor(System.Data.DataTable)
extern "C"  void RecordCache__ctor_m375012400 (RecordCache_t2023714241 * __this, DataTable_t2176726999 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.RecordCache::get_CurrentCapacity()
extern "C"  int32_t RecordCache_get_CurrentCapacity_m3206565735 (RecordCache_t2023714241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.Common.RecordCache::get_Item(System.Int32)
extern "C"  DataRow_t3654701923 * RecordCache_get_Item_m3108742774 (RecordCache_t2023714241 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.RecordCache::set_Item(System.Int32,System.Data.DataRow)
extern "C"  void RecordCache_set_Item_m3225568259 (RecordCache_t2023714241 * __this, int32_t ___index, DataRow_t3654701923 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.RecordCache::NewRecord()
extern "C"  int32_t RecordCache_NewRecord_m1921048654 (RecordCache_t2023714241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.RecordCache::DisposeRecord(System.Int32)
extern "C"  void RecordCache_DisposeRecord_m3665059330 (RecordCache_t2023714241 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.RecordCache::CopyRecord(System.Data.DataTable,System.Int32,System.Int32)
extern "C"  int32_t RecordCache_CopyRecord_m3908798632 (RecordCache_t2023714241 * __this, DataTable_t2176726999 * ___fromTable, int32_t ___fromRecordIndex, int32_t ___toRecordIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
