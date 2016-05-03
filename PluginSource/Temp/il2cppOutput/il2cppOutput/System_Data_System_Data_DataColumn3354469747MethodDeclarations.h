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

// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t2898121368;
// System.Object
struct Il2CppObject;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Data.PropertyCollection
struct PropertyCollection_t3599376422;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.Common.DataContainer
struct DataContainer_t1942492167;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t569023745;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3410743138;
// System.Data.DataRelation
struct DataRelation_t1483987353;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_Data_System_Data_MappingType1033973435.h"
#include "System_System_ComponentModel_PropertyChangedEventH2898121368.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataSetDateTime3597676966.h"
#include "System_Data_System_Data_PropertyCollection3599376422.h"
#include "System_System_ComponentModel_PropertyChangedEventAr569023745.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "System_Data_System_Data_DataColumn3354469747.h"

// System.Void System.Data.DataColumn::.ctor()
extern "C"  void DataColumn__ctor_m3502306929 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::.ctor(System.String)
extern "C"  void DataColumn__ctor_m273049649 (DataColumn_t3354469747 * __this, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::.ctor(System.String,System.Type)
extern "C"  void DataColumn__ctor_m611202532 (DataColumn_t3354469747 * __this, String_t* ___columnName, Type_t * ___dataType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::.ctor(System.String,System.Type,System.String,System.Data.MappingType)
extern "C"  void DataColumn__ctor_m3837862921 (DataColumn_t3354469747 * __this, String_t* ___columnName, Type_t * ___dataType, String_t* ___expr, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::.cctor()
extern "C"  void DataColumn__cctor_m715236188 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C"  void DataColumn_add_PropertyChanged_m3302088726 (DataColumn_t3354469747 * __this, PropertyChangedEventHandler_t2898121368 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C"  void DataColumn_remove_PropertyChanged_m914620655 (DataColumn_t3354469747 * __this, PropertyChangedEventHandler_t2898121368 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataColumn::get_Item(System.Int32)
extern "C"  Il2CppObject * DataColumn_get_Item_m3915274389 (DataColumn_t3354469747 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Item(System.Int32,System.Object)
extern "C"  void DataColumn_set_Item_m590671138 (DataColumn_t3354469747 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSetDateTime System.Data.DataColumn::get_DateTimeMode()
extern "C"  int32_t DataColumn_get_DateTimeMode_m2748824863 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_DateTimeMode(System.Data.DataSetDateTime)
extern "C"  void DataColumn_set_DateTimeMode_m1140613974 (DataColumn_t3354469747 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_AllowDBNull()
extern "C"  bool DataColumn_get_AllowDBNull_m4042991754 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_AllowDBNull(System.Boolean)
extern "C"  void DataColumn_set_AllowDBNull_m4066005655 (DataColumn_t3354469747 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_AutoIncrement()
extern "C"  bool DataColumn_get_AutoIncrement_m3258447900 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_AutoIncrement(System.Boolean)
extern "C"  void DataColumn_set_AutoIncrement_m2609925417 (DataColumn_t3354469747 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.DataColumn::get_AutoIncrementSeed()
extern "C"  int64_t DataColumn_get_AutoIncrementSeed_m1857508850 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_AutoIncrementSeed(System.Int64)
extern "C"  void DataColumn_set_AutoIncrementSeed_m2380713301 (DataColumn_t3354469747 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.DataColumn::get_AutoIncrementStep()
extern "C"  int64_t DataColumn_get_AutoIncrementStep_m1871373197 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_AutoIncrementStep(System.Int64)
extern "C"  void DataColumn_set_AutoIncrementStep_m2116274800 (DataColumn_t3354469747 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::UpdateAutoIncrementValue(System.Int64)
extern "C"  void DataColumn_UpdateAutoIncrementValue_m2463181311 (DataColumn_t3354469747 * __this, int64_t ___value64, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.DataColumn::AutoIncrementValue()
extern "C"  int64_t DataColumn_AutoIncrementValue_m3120312745 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::SetDefaultValue(System.Int32)
extern "C"  void DataColumn_SetDefaultValue_m3153146514 (DataColumn_t3354469747 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Caption()
extern "C"  String_t* DataColumn_get_Caption_m971990217 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Caption(System.String)
extern "C"  void DataColumn_set_Caption_m3162200106 (DataColumn_t3354469747 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.MappingType System.Data.DataColumn::get_ColumnMapping()
extern "C"  int32_t DataColumn_get_ColumnMapping_m530202350 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_ColumnMapping(System.Data.MappingType)
extern "C"  void DataColumn_set_ColumnMapping_m4196870565 (DataColumn_t3354469747 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_ColumnName()
extern "C"  String_t* DataColumn_get_ColumnName_m409531680 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_ColumnName(System.String)
extern "C"  void DataColumn_set_ColumnName_m68362481 (DataColumn_t3354469747 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.DataColumn::get_DataType()
extern "C"  Type_t * DataColumn_get_DataType_m3376662490 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_DataType(System.Type)
extern "C"  void DataColumn_set_DataType_m1172045637 (DataColumn_t3354469747 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataColumn::get_DefaultValue()
extern "C"  Il2CppObject * DataColumn_get_DefaultValue_m2400376481 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_DefaultValue(System.Object)
extern "C"  void DataColumn_set_DefaultValue_m199373492 (DataColumn_t3354469747 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::SetDefaultValue(System.Object,System.Boolean)
extern "C"  void DataColumn_SetDefaultValue_m73831082 (DataColumn_t3354469747 * __this, Il2CppObject * ___value, bool ___forcedTypeCheck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Expression()
extern "C"  String_t* DataColumn_get_Expression_m2168051447 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Expression(System.String)
extern "C"  void DataColumn_set_Expression_m213660794 (DataColumn_t3354469747 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.SqlExpressions.IExpression System.Data.DataColumn::get_CompiledExpression()
extern "C"  Il2CppObject * DataColumn_get_CompiledExpression_m2668302111 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataColumn::get_ExtendedProperties()
extern "C"  PropertyCollection_t3599376422 * DataColumn_get_ExtendedProperties_m3441609827 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_ExtendedProperties(System.Data.PropertyCollection)
extern "C"  void DataColumn_set_ExtendedProperties_m3797550980 (DataColumn_t3354469747 * __this, PropertyCollection_t3599376422 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumn::get_MaxLength()
extern "C"  int32_t DataColumn_get_MaxLength_m3416668844 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_MaxLength(System.Int32)
extern "C"  void DataColumn_set_MaxLength_m1864982381 (DataColumn_t3354469747 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Namespace()
extern "C"  String_t* DataColumn_get_Namespace_m546686590 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Namespace(System.String)
extern "C"  void DataColumn_set_Namespace_m2872284245 (DataColumn_t3354469747 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumn::get_Ordinal()
extern "C"  int32_t DataColumn_get_Ordinal_m317938227 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Ordinal(System.Int32)
extern "C"  void DataColumn_set_Ordinal_m3012429940 (DataColumn_t3354469747 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Prefix()
extern "C"  String_t* DataColumn_get_Prefix_m1148206961 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Prefix(System.String)
extern "C"  void DataColumn_set_Prefix_m2169684416 (DataColumn_t3354469747 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_ReadOnly()
extern "C"  bool DataColumn_get_ReadOnly_m3035570536 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_ReadOnly(System.Boolean)
extern "C"  void DataColumn_set_ReadOnly_m897759881 (DataColumn_t3354469747 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataColumn::get_Table()
extern "C"  DataTable_t2176726999 * DataColumn_get_Table_m1031823232 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_Unique()
extern "C"  bool DataColumn_get_Unique_m1966323799 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Unique(System.Boolean)
extern "C"  void DataColumn_set_Unique_m3538380216 (DataColumn_t3354469747 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataContainer System.Data.DataColumn::get_DataContainer()
extern "C"  DataContainer_t1942492167 * DataColumn_get_DataContainer_m3423049315 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::CanAutoIncrement(System.Type)
extern "C"  bool DataColumn_CanAutoIncrement_m1908774860 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumn::Clone()
extern "C"  DataColumn_t3354469747 * DataColumn_Clone_m724001790 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::SetUnique()
extern "C"  void DataColumn_SetUnique_m2177883810 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::OnPropertyChanging(System.ComponentModel.PropertyChangedEventArgs)
extern "C"  void DataColumn_OnPropertyChanging_m1804130649 (DataColumn_t3354469747 * __this, PropertyChangedEventArgs_t569023745 * ___pcevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::RaisePropertyChanging(System.String)
extern "C"  void DataColumn_RaisePropertyChanging_m2068258981 (DataColumn_t3354469747 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::ToString()
extern "C"  String_t* DataColumn_ToString_m1891311426 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::SetTable(System.Data.DataTable)
extern "C"  void DataColumn_SetTable_m1664076340 (DataColumn_t3354469747 * __this, DataTable_t2176726999 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::AreColumnSetsTheSame(System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  bool DataColumn_AreColumnSetsTheSame_m1487621133 (Il2CppObject * __this /* static, unused */, DataColumnU5BU5D_t3410743138* ___columnSet, DataColumnU5BU5D_t3410743138* ___compareSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumn::CompareValues(System.Int32,System.Int32)
extern "C"  int32_t DataColumn_CompareValues_m397175700 (DataColumn_t3354469747 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataColumn::GetParentRelation()
extern "C"  DataRelation_t1483987353 * DataColumn_GetParentRelation_m2368903811 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataColumn::GetChildRelation()
extern "C"  DataRelation_t1483987353 * DataColumn_GetChildRelation_m3136013437 (DataColumn_t3354469747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::DataTypeMatches(System.Data.DataColumn)
extern "C"  bool DataColumn_DataTypeMatches_m1677424623 (DataColumn_t3354469747 * __this, DataColumn_t3354469747 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataColumn::GetDefaultValueForType(System.Type)
extern "C"  Il2CppObject * DataColumn_GetDefaultValueForType_m983945556 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
