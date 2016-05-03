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

// System.Data.DataTable
struct DataTable_t2176726999;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t309042851;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Data.DataRow
struct DataRow_t3654701923;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.Object
struct Il2CppObject;
// System.Data.DataRelationCollection
struct DataRelationCollection_t267599063;
// System.Data.DataColumnCollection
struct DataColumnCollection_t3528392753;
// System.Data.ConstraintCollection
struct ConstraintCollection_t392455726;
// System.Data.DataSet
struct DataSet_t3654702571;
// System.Data.PropertyCollection
struct PropertyCollection_t3599376422;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3410743138;
// System.Data.DataRowCollection
struct DataRowCollection_t1405583905;
// System.ComponentModel.ISite
struct ISite_t19613145;
// System.Data.Common.RecordCache
struct RecordCache_t2023714241;
// System.Data.DataRowBuilder
struct DataRowBuilder_t2854809982;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Data.DataRow[]
struct DataRowU5BU5D_t1036778418;
// System.Data.Common.Index
struct Index_t3430588642;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t3969845317;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Data.DataColumnChangeEventArgs
struct DataColumnChangeEventArgs_t2729683610;
// System.Data.DataRowChangeEventArgs
struct DataRowChangeEventArgs_t116317866;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1860629407;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3827173367;
// System.Collections.Generic.List`1<System.Data.DataTable>
struct List_1_t2973685968;
// System.Collections.BitArray
struct BitArray_t2687322878;
// System.Data.DataTableNewRowEventArgs
struct DataTableNewRowEventArgs_t2261990028;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "System_Data_System_Data_DataRowChangeEventHandler309042851.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "System_Data_System_Data_DataRow3654701923.h"
#include "System_Data_System_Data_DataColumn3354469747.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataRowAction22198713.h"
#include "System_Data_System_Data_ConstraintCollection392455726.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "System_Data_System_Data_DataRowState2071073396.h"
#include "System_Data_System_Data_DataRowBuilder2854809982.h"
#include "System_Data_System_Data_Common_Index3430588642.h"
#include "System_Data_System_Data_DataViewRowState3383768889.h"
#include "System_Data_System_Data_DataColumnChangeEventArgs2729683610.h"
#include "System_Data_System_Data_DataRowChangeEventArgs116317866.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "System_Data_System_Data_XmlReadMode2944115491.h"
#include "System_Data_System_Data_DataSet3654702571.h"
#include "System_Data_System_Data_XmlWriteMode1570852254.h"
#include "System_Data_System_Data_SerializationFormat3494733210.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "mscorlib_System_Collections_BitArray2687322878.h"
#include "System_Data_System_Data_DataTableNewRowEventArgs2261990028.h"

// System.Void System.Data.DataTable::.ctor()
extern "C"  void DataTable__ctor_m798602097 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::.ctor(System.String)
extern "C"  void DataTable__ctor_m1313393457 (DataTable_t2176726999 * __this, String_t* ___tableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataTable__ctor_m275958066 (DataTable_t2176726999 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::.cctor()
extern "C"  void DataTable__cctor_m2799732316 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::add_RowChanged(System.Data.DataRowChangeEventHandler)
extern "C"  void DataTable_add_RowChanged_m3180851868 (DataTable_t2176726999 * __this, DataRowChangeEventHandler_t309042851 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::remove_RowChanged(System.Data.DataRowChangeEventHandler)
extern "C"  void DataTable_remove_RowChanged_m1351591587 (DataTable_t2176726999 * __this, DataRowChangeEventHandler_t309042851 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.DataTable::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * DataTable_System_Xml_Serialization_IXmlSerializable_GetSchema_m2337007531 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void DataTable_System_Xml_Serialization_IXmlSerializable_ReadXml_m4274204959 (DataTable_t2176726999 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void DataTable_System_Xml_Serialization_IXmlSerializable_WriteXml_m380362724 (DataTable_t2176726999 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_CaseSensitive()
extern "C"  bool DataTable_get_CaseSensitive_m3153780662 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_CaseSensitive(System.Boolean)
extern "C"  void DataTable_set_CaseSensitive_m3654632687 (DataTable_t2176726999 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataTable::get_Indexes()
extern "C"  ArrayList_t2121638921 * DataTable_get_Indexes_m2124064378 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangedDataColumn(System.Data.DataRow,System.Data.DataColumn,System.Object)
extern "C"  void DataTable_ChangedDataColumn_m2365272971 (DataTable_t2176726999 * __this, DataRow_t3654701923 * ___dr, DataColumn_t3354469747 * ___dc, Il2CppObject * ___pv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangingDataColumn(System.Data.DataRow,System.Data.DataColumn,System.Object)
extern "C"  void DataTable_ChangingDataColumn_m3431219560 (DataTable_t2176726999 * __this, DataRow_t3654701923 * ___dr, DataColumn_t3354469747 * ___dc, Il2CppObject * ___pv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeletedDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataTable_DeletedDataRow_m976216520 (DataTable_t2176726999 * __this, DataRow_t3654701923 * ___dr, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeletingDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataTable_DeletingDataRow_m3960232891 (DataTable_t2176726999 * __this, DataRow_t3654701923 * ___dr, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangedDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataTable_ChangedDataRow_m3855036963 (DataTable_t2176726999 * __this, DataRow_t3654701923 * ___dr, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangingDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataTable_ChangingDataRow_m3009353408 (DataTable_t2176726999 * __this, DataRow_t3654701923 * ___dr, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataTable::get_ChildRelations()
extern "C"  DataRelationCollection_t267599063 * DataTable_get_ChildRelations_m2551063725 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumnCollection System.Data.DataTable::get_Columns()
extern "C"  DataColumnCollection_t3528392753 * DataTable_get_Columns_m220042291 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ConstraintCollection System.Data.DataTable::get_Constraints()
extern "C"  ConstraintCollection_t392455726 * DataTable_get_Constraints_m4225751151 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Constraints(System.Data.ConstraintCollection)
extern "C"  void DataTable_set_Constraints_m2150321512 (DataTable_t2176726999 * __this, ConstraintCollection_t392455726 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataTable::get_DataSet()
extern "C"  DataSet_t3654702571 * DataTable_get_DataSet_m3509335390 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_DisplayExpression()
extern "C"  String_t* DataTable_get_DisplayExpression_m1743784003 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_DisplayExpression(System.String)
extern "C"  void DataTable_set_DisplayExpression_m2002411222 (DataTable_t2176726999 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataTable::get_ExtendedProperties()
extern "C"  PropertyCollection_t3599376422 * DataTable_get_ExtendedProperties_m3062393549 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_HasErrors()
extern "C"  bool DataTable_get_HasErrors_m1413766357 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Data.DataTable::get_Locale()
extern "C"  CultureInfo_t3603717042 * DataTable_get_Locale_m556791603 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Locale(System.Globalization.CultureInfo)
extern "C"  void DataTable_set_Locale_m1062226426 (DataTable_t2176726999 * __this, CultureInfo_t3603717042 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_LocaleSpecified()
extern "C"  bool DataTable_get_LocaleSpecified_m391716646 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTable::get_MinimumCapacity()
extern "C"  int32_t DataTable_get_MinimumCapacity_m1033087026 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_MinimumCapacity(System.Int32)
extern "C"  void DataTable_set_MinimumCapacity_m1759758507 (DataTable_t2176726999 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_Namespace()
extern "C"  String_t* DataTable_get_Namespace_m3829929060 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Namespace(System.String)
extern "C"  void DataTable_set_Namespace_m1042478933 (DataTable_t2176726999 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataTable::get_ParentRelations()
extern "C"  DataRelationCollection_t267599063 * DataTable_get_ParentRelations_m3551104541 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_Prefix()
extern "C"  String_t* DataTable_get_Prefix_m494218059 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Prefix(System.String)
extern "C"  void DataTable_set_Prefix_m2757115584 (DataTable_t2176726999 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.DataTable::get_PrimaryKey()
extern "C"  DataColumnU5BU5D_t3410743138* DataTable_get_PrimaryKey_m478420397 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_PrimaryKey(System.Data.DataColumn[])
extern "C"  void DataTable_set_PrimaryKey_m2105023398 (DataTable_t2176726999 * __this, DataColumnU5BU5D_t3410743138* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowCollection System.Data.DataTable::get_Rows()
extern "C"  DataRowCollection_t1405583905 * DataTable_get_Rows_m954608043 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.Data.DataTable::get_Site()
extern "C"  Il2CppObject * DataTable_get_Site_m2684246557 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Site(System.ComponentModel.ISite)
extern "C"  void DataTable_set_Site_m2898708782 (DataTable_t2176726999 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_TableName()
extern "C"  String_t* DataTable_get_TableName_m3141812994 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_TableName(System.String)
extern "C"  void DataTable_set_TableName_m3787716983 (DataTable_t2176726999 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.RecordCache System.Data.DataTable::get_RecordCache()
extern "C"  RecordCache_t2023714241 * DataTable_get_RecordCache_m4004312983 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowBuilder System.Data.DataTable::get_RowBuilder()
extern "C"  DataRowBuilder_t2854809982 * DataTable_get_RowBuilder_m2915417722 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_EnforceConstraints()
extern "C"  bool DataTable_get_EnforceConstraints_m1670739814 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AssertNotNullConstraints()
extern "C"  void DataTable_AssertNotNullConstraints_m2133804789 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::RowsExist(System.Data.DataColumn[],System.Data.DataColumn[],System.Data.DataRow)
extern "C"  bool DataTable_RowsExist_m2730034512 (DataTable_t2176726999 * __this, DataColumnU5BU5D_t3410743138* ___columns, DataColumnU5BU5D_t3410743138* ___relatedColumns, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::RowsExist(System.Data.DataColumn[],System.Int32)
extern "C"  bool DataTable_RowsExist_m4069511399 (DataTable_t2176726999 * __this, DataColumnU5BU5D_t3410743138* ___columns, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTable::Clone()
extern "C"  DataTable_t2176726999 * DataTable_Clone_m951623840 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::CopyProperties(System.Data.DataTable)
extern "C"  void DataTable_CopyProperties_m2331810616 (DataTable_t2176726999 * __this, DataTable_t2176726999 * ___Copy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::CopyConstraints(System.Data.DataTable)
extern "C"  void DataTable_CopyConstraints_m20700611 (DataTable_t2176726999 * __this, DataTable_t2176726999 * ___copy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_InitInProgress()
extern "C"  bool DataTable_get_InitInProgress_m1278731028 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTable::GetChanges(System.Data.DataRowState)
extern "C"  DataTable_t2176726999 * DataTable_GetChanges_m277139782 (DataTable_t2176726999 * __this, int32_t ___rowStates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.DataTable::GetRowType()
extern "C"  Type_t * DataTable_GetRowType_m1326600535 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTable::get_DefaultValuesRowIndex()
extern "C"  int32_t DataTable_get_DefaultValuesRowIndex_m964734149 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataTable_GetObjectData_m2939731599 (DataTable_t2176726999 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::LoadDataRow(System.Object[],System.Boolean)
extern "C"  DataRow_t3654701923 * DataTable_LoadDataRow_m3290625932 (DataTable_t2176726999 * __this, ObjectU5BU5D_t11523773* ___values, bool ___fAcceptChanges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::NewRow()
extern "C"  DataRow_t3654701923 * DataTable_NewRow_m3256434597 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTable::CreateRecord(System.Object[])
extern "C"  int32_t DataTable_CreateRecord_m1229863094 (DataTable_t2176726999 * __this, ObjectU5BU5D_t11523773* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::EnsureDefaultValueRowIndex()
extern "C"  void DataTable_EnsureDefaultValueRowIndex_m1076984057 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataTable::NewRowArray(System.Int32)
extern "C"  DataRowU5BU5D_t1036778418* DataTable_NewRowArray_m1613150405 (DataTable_t2176726999 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::NewRowFromBuilder(System.Data.DataRowBuilder)
extern "C"  DataRow_t3654701923 * DataTable_NewRowFromBuilder_m1162965374 (DataTable_t2176726999 * __this, DataRowBuilder_t2854809982 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::NewNotInitializedRow()
extern "C"  DataRow_t3654701923 * DataTable_NewNotInitializedRow_m3885903012 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AddIndex(System.Data.Common.Index)
extern "C"  void DataTable_AddIndex_m2226592720 (DataTable_t2176726999 * __this, Index_t3430588642 * ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::GetIndex(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression,System.Boolean)
extern "C"  Index_t3430588642 * DataTable_GetIndex_m2017926296 (DataTable_t2176726999 * __this, DataColumnU5BU5D_t3410743138* ___columns, ListSortDirectionU5BU5D_t3969845317* ___sort, int32_t ___rowState, Il2CppObject * ___filter, bool ___reset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::GetIndex(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression,System.Boolean,System.Boolean)
extern "C"  Index_t3430588642 * DataTable_GetIndex_m4277760997 (DataTable_t2176726999 * __this, DataColumnU5BU5D_t3410743138* ___columns, ListSortDirectionU5BU5D_t3969845317* ___sort, int32_t ___rowState, Il2CppObject * ___filter, bool ___reset, bool ___addIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::FindIndex(System.Data.DataColumn[])
extern "C"  Index_t3430588642 * DataTable_FindIndex_m874260448 (DataTable_t2176726999 * __this, DataColumnU5BU5D_t3410743138* ___columns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::FindIndex(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression)
extern "C"  Index_t3430588642 * DataTable_FindIndex_m1101984700 (DataTable_t2176726999 * __this, DataColumnU5BU5D_t3410743138* ___columns, ListSortDirectionU5BU5D_t3969845317* ___sort, int32_t ___rowState, Il2CppObject * ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ResetIndexes()
extern "C"  void DataTable_ResetIndexes_m952830500 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ResetCaseSensitiveIndexes()
extern "C"  void DataTable_ResetCaseSensitiveIndexes_m1551747096 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DropIndex(System.Data.Common.Index)
extern "C"  void DataTable_DropIndex_m3863497374 (DataTable_t2176726999 * __this, Index_t3430588642 * ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AddRowToIndexes(System.Data.DataRow)
extern "C"  void DataTable_AddRowToIndexes_m4187915020 (DataTable_t2176726999 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeleteRowFromIndexes(System.Data.DataRow)
extern "C"  void DataTable_DeleteRowFromIndexes_m3323077901 (DataTable_t2176726999 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::ToString()
extern "C"  String_t* DataTable_ToString_m165493148 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnColumnChanged(System.Data.DataColumnChangeEventArgs)
extern "C"  void DataTable_OnColumnChanged_m3633622594 (DataTable_t2176726999 * __this, DataColumnChangeEventArgs_t2729683610 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnColumnChanging(System.Data.DataColumnChangeEventArgs)
extern "C"  void DataTable_OnColumnChanging_m3110675195 (DataTable_t2176726999 * __this, DataColumnChangeEventArgs_t2729683610 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowChanged(System.Data.DataRowChangeEventArgs)
extern "C"  void DataTable_OnRowChanged_m818125936 (DataTable_t2176726999 * __this, DataRowChangeEventArgs_t116317866 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowChanging(System.Data.DataRowChangeEventArgs)
extern "C"  void DataTable_OnRowChanging_m958224667 (DataTable_t2176726999 * __this, DataRowChangeEventArgs_t116317866 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowDeleted(System.Data.DataRowChangeEventArgs)
extern "C"  void DataTable_OnRowDeleted_m800480085 (DataTable_t2176726999 * __this, DataRowChangeEventArgs_t116317866 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowDeleting(System.Data.DataRowChangeEventArgs)
extern "C"  void DataTable_OnRowDeleting_m411203286 (DataTable_t2176726999 * __this, DataRowChangeEventArgs_t116317866 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ResetPropertyDescriptorsCache()
extern "C"  void DataTable_ResetPropertyDescriptorsCache_m851225969 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::SetRowsID()
extern "C"  void DataTable_SetRowsID_m825252805 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.DataTable::GetSchema()
extern "C"  XmlSchema_t1932230565 * DataTable_GetSchema_m112306104 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexType System.Data.DataTable::GetDataTableSchema(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlSchemaComplexType_t1860629407 * DataTable_GetDataTableSchema_m2070090327 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataTable::ReadXml_internal(System.Xml.XmlReader,System.Boolean)
extern "C"  int32_t DataTable_ReadXml_internal_m2466116763 (DataTable_t2176726999 * __this, XmlReader_t4229084514 * ___reader, bool ___serializable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DenyXmlResolving(System.Data.DataTable,System.Data.DataSet,System.Data.XmlReadMode,System.Boolean,System.Boolean)
extern "C"  void DataTable_DenyXmlResolving_m885787804 (DataTable_t2176726999 * __this, DataTable_t2176726999 * ___table, DataSet_t3654702571 * ___ds, int32_t ___mode, bool ___isTableNameBlank, bool ___isPartOfDataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::WriteXml(System.Xml.XmlWriter)
extern "C"  void DataTable_WriteXml_m3565934903 (DataTable_t2176726999 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::WriteXml(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Boolean)
extern "C"  void DataTable_WriteXml_m2550286622 (DataTable_t2176726999 * __this, XmlWriter_t89522450 * ___writer, int32_t ___mode, bool ___writeHierarchy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::FindAllChildren(System.Collections.Generic.List`1<System.Data.DataTable>,System.Data.DataTable)
extern "C"  void DataTable_FindAllChildren_m2366682214 (DataTable_t2176726999 * __this, List_1_t2973685968 * ___list, DataTable_t2176726999 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SerializationFormat System.Data.DataTable::get_RemotingFormat()
extern "C"  int32_t DataTable_get_RemotingFormat_m3071128293 (DataTable_t2176726999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeserializeConstraints(System.Collections.ArrayList)
extern "C"  void DataTable_DeserializeConstraints_m2622800939 (DataTable_t2176726999 * __this, ArrayList_t2121638921 * ___arrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowState System.Data.DataTable::GetCurrentRowState(System.Collections.BitArray,System.Int32)
extern "C"  int32_t DataTable_GetCurrentRowState_m2752215465 (DataTable_t2176726999 * __this, BitArray_t2687322878 * ___rowStateBitArray, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeserializeRecords(System.Collections.ArrayList,System.Collections.ArrayList,System.Collections.BitArray)
extern "C"  void DataTable_DeserializeRecords_m3193980120 (DataTable_t2176726999 * __this, ArrayList_t2121638921 * ___arrayList, ArrayList_t2121638921 * ___nullBits, BitArray_t2687322878 * ___rowStateBitArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BinaryDeserializeTable(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataTable_BinaryDeserializeTable_m2074498456 (DataTable_t2176726999 * __this, SerializationInfo_t2995724695 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BinarySerializeProperty(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataTable_BinarySerializeProperty_m938760088 (DataTable_t2176726999 * __this, SerializationInfo_t2995724695 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::SerializeConstraints(System.Runtime.Serialization.SerializationInfo,System.String)
extern "C"  void DataTable_SerializeConstraints_m609310554 (DataTable_t2176726999 * __this, SerializationInfo_t2995724695 * ___info, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BinarySerialize(System.Runtime.Serialization.SerializationInfo,System.String)
extern "C"  void DataTable_BinarySerialize_m2090549151 (DataTable_t2176726999 * __this, SerializationInfo_t2995724695 * ___info, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnTableNewRow(System.Data.DataTableNewRowEventArgs)
extern "C"  void DataTable_OnTableNewRow_m2006686618 (DataTable_t2176726999 * __this, DataTableNewRowEventArgs_t2261990028 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::NewRowAdded(System.Data.DataRow)
extern "C"  void DataTable_NewRowAdded_m4013227986 (DataTable_t2176726999 * __this, DataRow_t3654701923 * ___dr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
