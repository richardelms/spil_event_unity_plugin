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

// System.Data.DataSet
struct DataSet_t3654702571;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.DataRow
struct DataRow_t3654701923;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3410743138;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3654702571.h"
#include "System_Data_System_Data_MissingSchemaAction2534824272.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "System_Data_System_Data_DataRow3654701923.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Data.MergeManager::Merge(System.Data.DataSet,System.Data.DataSet,System.Boolean,System.Data.MissingSchemaAction)
extern "C"  void MergeManager_Merge_m2795912427 (Il2CppObject * __this /* static, unused */, DataSet_t3654702571 * ___targetSet, DataSet_t3654702571 * ___sourceSet, bool ___preserveChanges, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::Merge(System.Data.DataSet,System.Data.DataTable,System.Boolean,System.Data.MissingSchemaAction)
extern "C"  void MergeManager_Merge_m3732824087 (Il2CppObject * __this /* static, unused */, DataSet_t3654702571 * ___targetSet, DataTable_t2176726999 * ___sourceTable, bool ___preserveChanges, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::MergeRow(System.Data.DataTable,System.Data.DataRow,System.Boolean)
extern "C"  void MergeManager_MergeRow_m2123697555 (Il2CppObject * __this /* static, unused */, DataTable_t2176726999 * ___targetTable, DataRow_t3654701923 * ___row, bool ___preserveChanges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustSchemaRelations(System.Data.DataSet,System.Data.DataSet,System.Data.MissingSchemaAction)
extern "C"  bool MergeManager_AdjustSchemaRelations_m4238695125 (Il2CppObject * __this /* static, unused */, DataSet_t3654702571 * ___targetSet, DataSet_t3654702571 * ___sourceSet, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.MergeManager::ResolveColumns(System.Data.DataTable,System.Data.DataColumn[])
extern "C"  DataColumnU5BU5D_t3410743138* MergeManager_ResolveColumns_m4268605521 (Il2CppObject * __this /* static, unused */, DataTable_t2176726999 * ___targetTable, DataColumnU5BU5D_t3410743138* ___sourceColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustSchema(System.Data.DataSet,System.Data.DataTable,System.Data.MissingSchemaAction,System.Data.DataTable&)
extern "C"  bool MergeManager_AdjustSchema_m2201951713 (Il2CppObject * __this /* static, unused */, DataSet_t3654702571 * ___targetSet, DataTable_t2176726999 * ___sourceTable, int32_t ___missingSchemaAction, DataTable_t2176726999 ** ___newTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustSchema(System.Data.DataTable,System.Data.DataTable,System.Data.MissingSchemaAction)
extern "C"  bool MergeManager_AdjustSchema_m1161494034 (Il2CppObject * __this /* static, unused */, DataTable_t2176726999 * ___targetTable, DataTable_t2176726999 * ___sourceTable, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustPrimaryKeys(System.Data.DataTable,System.Data.DataTable)
extern "C"  bool MergeManager_AdjustPrimaryKeys_m1290603145 (Il2CppObject * __this /* static, unused */, DataTable_t2176726999 * ___targetTable, DataTable_t2176726999 * ___sourceTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::fillData(System.Data.DataTable,System.Data.DataTable,System.Boolean)
extern "C"  void MergeManager_fillData_m2292431090 (Il2CppObject * __this /* static, unused */, DataTable_t2176726999 * ___targetTable, DataTable_t2176726999 * ___sourceTable, bool ___preserveChanges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::checkColumnTypes(System.Data.DataTable,System.Data.DataTable)
extern "C"  void MergeManager_checkColumnTypes_m3906757661 (Il2CppObject * __this /* static, unused */, DataTable_t2176726999 * ___targetTable, DataTable_t2176726999 * ___sourceTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::CompareColumnArrays(System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  bool MergeManager_CompareColumnArrays_m2386686113 (Il2CppObject * __this /* static, unused */, DataColumnU5BU5D_t3410743138* ___arr1, DataColumnU5BU5D_t3410743138* ___arr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::RaiseMergeFailedEvent(System.Data.DataTable,System.String)
extern "C"  void MergeManager_RaiseMergeFailedEvent_m2483389284 (Il2CppObject * __this /* static, unused */, DataTable_t2176726999 * ___targetTable, String_t* ___errMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
