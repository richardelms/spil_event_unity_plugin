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

// System.Data.DataRowCollection
struct DataRowCollection_t1405583905;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.DataRow
struct DataRow_t3654701923;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Data.DataRow[]
struct DataRowU5BU5D_t1036778418;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "System_Data_System_Data_DataRow3654701923.h"
#include "System_Data_System_Data_DataRowAction22198713.h"
#include "System_Data_System_Data_DataViewRowState3383768889.h"
#include "mscorlib_System_Array2840145358.h"

// System.Void System.Data.DataRowCollection::.ctor(System.Data.DataTable)
extern "C"  void DataRowCollection__ctor_m3654544908 (DataRowCollection_t1405583905 * __this, DataTable_t2176726999 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::get_Item(System.Int32)
extern "C"  DataRow_t3654701923 * DataRowCollection_get_Item_m2467265538 (DataRowCollection_t1405583905 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::Add(System.Data.DataRow)
extern "C"  void DataRowCollection_Add_m2125891809 (DataRowCollection_t1405583905 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRowCollection::IndexOf(System.Data.DataRow)
extern "C"  int32_t DataRowCollection_IndexOf_m2540589525 (DataRowCollection_t1405583905 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::AddInternal(System.Data.DataRow)
extern "C"  void DataRowCollection_AddInternal_m2413989668 (DataRowCollection_t1405583905 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::AddInternal(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataRowCollection_AddInternal_m289812943 (DataRowCollection_t1405583905 * __this, DataRow_t3654701923 * ___row, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Add(System.Object[])
extern "C"  DataRow_t3654701923 * DataRowCollection_Add_m1816756452 (DataRowCollection_t1405583905 * __this, ObjectU5BU5D_t11523773* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Find(System.Object[])
extern "C"  DataRow_t3654701923 * DataRowCollection_Find_m3688137636 (DataRowCollection_t1405583905 * __this, ObjectU5BU5D_t11523773* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Find(System.Object[],System.Data.DataViewRowState)
extern "C"  DataRow_t3654701923 * DataRowCollection_Find_m3083875959 (DataRowCollection_t1405583905 * __this, ObjectU5BU5D_t11523773* ___keys, int32_t ___rowStateFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::InsertAt(System.Data.DataRow,System.Int32)
extern "C"  void DataRowCollection_InsertAt_m3491267193 (DataRowCollection_t1405583905 * __this, DataRow_t3654701923 * ___row, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::RemoveInternal(System.Data.DataRow)
extern "C"  void DataRowCollection_RemoveInternal_m2838259881 (DataRowCollection_t1405583905 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRowCollection::get_Count()
extern "C"  int32_t DataRowCollection_get_Count_m1914630095 (DataRowCollection_t1405583905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::CopyTo(System.Data.DataRow[],System.Int32)
extern "C"  void DataRowCollection_CopyTo_m1012967583 (DataRowCollection_t1405583905 * __this, DataRowU5BU5D_t1036778418* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::CopyTo(System.Array,System.Int32)
extern "C"  void DataRowCollection_CopyTo_m2058801284 (DataRowCollection_t1405583905 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Data.DataRowCollection::GetEnumerator()
extern "C"  Il2CppObject * DataRowCollection_GetEnumerator_m609921437 (DataRowCollection_t1405583905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
