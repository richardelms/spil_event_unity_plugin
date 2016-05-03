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
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Data.PropertyCollection
struct PropertyCollection_t3599376422;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Data.DataRelationCollection
struct DataRelationCollection_t267599063;
// System.ComponentModel.ISite
struct ISite_t19613145;
// System.Data.DataTableCollection
struct DataTableCollection_t2915263893;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.DataRow
struct DataRow_t3654701923;
// System.Xml.XmlDocument
struct XmlDocument_t3705263098;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.IO.TextReader
struct TextReader_t1534522647;
// System.Data.MergeFailedEventArgs
struct MergeFailedEventArgs_t3393563989;
// System.Object
struct Il2CppObject;
// System.Data.DataRow[]
struct DataRowU5BU5D_t1036778418;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1860629407;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3827173367;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "System_Data_System_Data_DataSet3654702571.h"
#include "System_Data_System_Data_MissingSchemaAction2534824272.h"
#include "System_Data_System_Data_DataRowState2071073396.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "System_Data_System_Data_DataRow3654701923.h"
#include "System_Xml_System_Xml_XmlDocument3705263098.h"
#include "System_Data_System_Data_XmlWriteMode1570852254.h"
#include "mscorlib_System_IO_TextReader1534522647.h"
#include "System_Data_System_Data_XmlReadMode2944115491.h"
#include "System_Data_System_Data_MergeFailedEventArgs3393563989.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataTableCollection2915263893.h"
#include "System_Data_System_Data_DataRowVersion2975473339.h"
#include "System_Data_System_Data_DataColumn3354469747.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "System_Data_System_Data_SerializationFormat3494733210.h"
#include "System_Data_System_Data_SchemaSerializationMode1625709477.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"

// System.Void System.Data.DataSet::.ctor()
extern "C"  void DataSet__ctor_m1241065565 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::.ctor(System.String)
extern "C"  void DataSet__ctor_m4263228869 (DataSet_t3654702571 * __this, String_t* ___dataSetName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataSet__ctor_m3728049182 (DataSet_t3654702571 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void DataSet_System_Xml_Serialization_IXmlSerializable_ReadXml_m268781067 (DataSet_t3654702571 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void DataSet_System_Xml_Serialization_IXmlSerializable_WriteXml_m766273656 (DataSet_t3654702571 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.DataSet::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * DataSet_System_Xml_Serialization_IXmlSerializable_GetSchema_m1060482071 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_CaseSensitive()
extern "C"  bool DataSet_get_CaseSensitive_m468622626 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_CaseSensitive(System.Boolean)
extern "C"  void DataSet_set_CaseSensitive_m1036462811 (DataSet_t3654702571 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::get_DataSetName()
extern "C"  String_t* DataSet_get_DataSetName_m1556380856 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_DataSetName(System.String)
extern "C"  void DataSet_set_DataSetName_m1679911553 (DataSet_t3654702571 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_EnforceConstraints()
extern "C"  bool DataSet_get_EnforceConstraints_m1069235578 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_EnforceConstraints(System.Boolean)
extern "C"  void DataSet_set_EnforceConstraints_m2529190639 (DataSet_t3654702571 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataSet::get_ExtendedProperties()
extern "C"  PropertyCollection_t3599376422 * DataSet_get_ExtendedProperties_m3188566177 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Data.DataSet::get_Locale()
extern "C"  CultureInfo_t3603717042 * DataSet_get_Locale_m4139362567 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Locale(System.Globalization.CultureInfo)
extern "C"  void DataSet_set_Locale_m2876356750 (DataSet_t3654702571 * __this, CultureInfo_t3603717042 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_LocaleSpecified()
extern "C"  bool DataSet_get_LocaleSpecified_m1230188946 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::InternalEnforceConstraints(System.Boolean,System.Boolean)
extern "C"  void DataSet_InternalEnforceConstraints_m3701829902 (DataSet_t3654702571 * __this, bool ___value, bool ___resetIndexes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::Merge(System.Data.DataSet,System.Boolean,System.Data.MissingSchemaAction)
extern "C"  void DataSet_Merge_m951892869 (DataSet_t3654702571 * __this, DataSet_t3654702571 * ___dataSet, bool ___preserveChanges, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::IsLegalSchemaAction(System.Data.MissingSchemaAction)
extern "C"  bool DataSet_IsLegalSchemaAction_m573282959 (Il2CppObject * __this /* static, unused */, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::get_Namespace()
extern "C"  String_t* DataSet_get_Namespace_m20720144 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Namespace(System.String)
extern "C"  void DataSet_set_Namespace_m1090260457 (DataSet_t3654702571 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::get_Prefix()
extern "C"  String_t* DataSet_get_Prefix_m1297405215 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Prefix(System.String)
extern "C"  void DataSet_set_Prefix_m1381159084 (DataSet_t3654702571 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataSet::get_Relations()
extern "C"  DataRelationCollection_t267599063 * DataSet_get_Relations_m498597843 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.Data.DataSet::get_Site()
extern "C"  Il2CppObject * DataSet_get_Site_m939269169 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Site(System.ComponentModel.ISite)
extern "C"  void DataSet_set_Site_m1480317210 (DataSet_t3654702571 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTableCollection System.Data.DataSet::get_Tables()
extern "C"  DataTableCollection_t2915263893 * DataSet_get_Tables_m87321279 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataSet::Clone()
extern "C"  DataSet_t3654702571 * DataSet_Clone_m3201784376 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::CopyProperties(System.Data.DataSet)
extern "C"  void DataSet_CopyProperties_m4291423056 (DataSet_t3654702571 * __this, DataSet_t3654702571 * ___Copy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::CopyRelations(System.Data.DataSet)
extern "C"  void DataSet_CopyRelations_m2086373858 (DataSet_t3654702571 * __this, DataSet_t3654702571 * ___Copy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataSet::GetChanges(System.Data.DataRowState)
extern "C"  DataSet_t3654702571 * DataSet_GetChanges_m2511511214 (DataSet_t3654702571 * __this, int32_t ___rowStates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::AddChangedRow(System.Collections.Hashtable,System.Data.DataTable,System.Data.DataRow)
extern "C"  void DataSet_AddChangedRow_m1003559688 (DataSet_t3654702571 * __this, Hashtable_t3875263730 * ___addedRows, DataTable_t2176726999 * ___copyTable, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::HasChanges(System.Data.DataRowState)
extern "C"  bool DataSet_HasChanges_m62534144 (DataSet_t3654702571 * __this, int32_t ___rowStates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::InferXmlSchema(System.Xml.XmlDocument,System.String[])
extern "C"  void DataSet_InferXmlSchema_m2510305775 (DataSet_t3654702571 * __this, XmlDocument_t3705263098 * ___doc, StringU5BU5D_t2956870243* ___nsArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteXml(System.Xml.XmlWriter)
extern "C"  void DataSet_WriteXml_m2239339211 (DataSet_t3654702571 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteXml(System.Xml.XmlWriter,System.Data.XmlWriteMode)
extern "C"  void DataSet_WriteXml_m1861290347 (DataSet_t3654702571 * __this, XmlWriter_t89522450 * ___writer, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteXmlSchema(System.Xml.XmlWriter)
extern "C"  void DataSet_WriteXmlSchema_m351407948 (DataSet_t3654702571 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::ReadXmlSchema(System.IO.TextReader)
extern "C"  void DataSet_ReadXmlSchema_m2602003172 (DataSet_t3654702571 * __this, TextReader_t1534522647 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::ReadXmlSchema(System.Xml.XmlReader)
extern "C"  void DataSet_ReadXmlSchema_m2278529049 (DataSet_t3654702571 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataSet::ReadXml(System.Xml.XmlReader)
extern "C"  int32_t DataSet_ReadXml_m340264256 (DataSet_t3654702571 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataSet::ReadXml(System.IO.TextReader,System.Data.XmlReadMode)
extern "C"  int32_t DataSet_ReadXml_m2969732236 (DataSet_t3654702571 * __this, TextReader_t1534522647 * ___reader, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataSet::ReadXml(System.Xml.XmlReader,System.Data.XmlReadMode)
extern "C"  int32_t DataSet_ReadXml_m3510870721 (DataSet_t3654702571 * __this, XmlReader_t4229084514 * ___reader, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataSet_GetObjectData_m45600123 (DataSet_t3654702571 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::GetSerializationData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataSet_GetSerializationData_m1414283788 (DataSet_t3654702571 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::ReadXmlSerializable(System.Xml.XmlReader)
extern "C"  void DataSet_ReadXmlSerializable_m2390034615 (DataSet_t3654702571 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::OnMergeFailed(System.Data.MergeFailedEventArgs)
extern "C"  void DataSet_OnMergeFailed_m1417153962 (DataSet_t3654702571 * __this, MergeFailedEventArgs_t3393563989 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::RaisePropertyChanging(System.String)
extern "C"  void DataSet_RaisePropertyChanging_m3642148409 (DataSet_t3654702571 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::WriteObjectXml(System.Object)
extern "C"  String_t* DataSet_WriteObjectXml_m942680311 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTables(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataTableCollection,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteTables_m3474122623 (DataSet_t3654702571 * __this, XmlWriter_t89522450 * ___writer, int32_t ___mode, DataTableCollection_t2915263893 * ___tableCollection, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTable(System.Xml.XmlWriter,System.Data.DataTable,System.Data.XmlWriteMode,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteTable_m1465720466 (Il2CppObject * __this /* static, unused */, XmlWriter_t89522450 * ___writer, DataTable_t2176726999 * ___table, int32_t ___mode, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTable(System.Xml.XmlWriter,System.Data.DataRow[],System.Data.XmlWriteMode,System.Data.DataRowVersion,System.Boolean)
extern "C"  void DataSet_WriteTable_m244638361 (Il2CppObject * __this /* static, unused */, XmlWriter_t89522450 * ___writer, DataRowU5BU5D_t1036778418* ___rows, int32_t ___mode, int32_t ___version, bool ___skipIfNested, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteColumnAsElement(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataColumn,System.Data.DataRow,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteColumnAsElement_m2897671141 (Il2CppObject * __this /* static, unused */, XmlWriter_t89522450 * ___writer, int32_t ___mode, DataColumn_t3354469747 * ___col, DataRow_t3654701923 * ___row, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteColumnAsAttribute(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataColumn,System.Data.DataRow,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteColumnAsAttribute_m3907993605 (Il2CppObject * __this /* static, unused */, XmlWriter_t89522450 * ___writer, int32_t ___mode, DataColumn_t3354469747 * ___col, DataRow_t3654701923 * ___row, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTableElement(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataTable,System.Data.DataRow,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteTableElement_m1735930057 (Il2CppObject * __this /* static, unused */, XmlWriter_t89522450 * ___writer, int32_t ___mode, DataTable_t2176726999 * ___table, DataRow_t3654701923 * ___row, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteStartElement(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.String,System.String,System.String)
extern "C"  void DataSet_WriteStartElement_m3228473290 (Il2CppObject * __this /* static, unused */, XmlWriter_t89522450 * ___writer, int32_t ___mode, String_t* ___nspc, String_t* ___prefix, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteAttributeString(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.String,System.String,System.String,System.String)
extern "C"  void DataSet_WriteAttributeString_m3971094373 (Il2CppObject * __this /* static, unused */, XmlWriter_t89522450 * ___writer, int32_t ___mode, String_t* ___nspc, String_t* ___prefix, String_t* ___name, String_t* ___stringValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteIndividualTableContent(System.Xml.XmlWriter,System.Data.DataTable,System.Data.XmlWriteMode)
extern "C"  void DataSet_WriteIndividualTableContent_m3201530015 (DataSet_t3654702571 * __this, XmlWriter_t89522450 * ___writer, DataTable_t2176726999 * ___table, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::DoWriteXmlSchema(System.Xml.XmlWriter)
extern "C"  void DataSet_DoWriteXmlSchema_m2508950775 (DataSet_t3654702571 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::SplitColumns(System.Data.DataTable,System.Collections.ArrayList&,System.Collections.ArrayList&,System.Data.DataColumn&)
extern "C"  void DataSet_SplitColumns_m85014974 (Il2CppObject * __this /* static, unused */, DataTable_t2176726999 * ___table, ArrayList_t2121638921 ** ___atts, ArrayList_t2121638921 ** ___elements, DataColumn_t3354469747 ** ___simple, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteDiffGramElement(System.Xml.XmlWriter)
extern "C"  void DataSet_WriteDiffGramElement_m525942484 (Il2CppObject * __this /* static, unused */, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::SetRowsID()
extern "C"  void DataSet_SetRowsID_m1941142193 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SerializationFormat System.Data.DataSet::get_RemotingFormat()
extern "C"  int32_t DataSet_get_RemotingFormat_m4062369081 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SchemaSerializationMode System.Data.DataSet::get_SchemaSerializationMode()
extern "C"  int32_t DataSet_get_SchemaSerializationMode_m1805551754 (DataSet_t3654702571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexType System.Data.DataSet::GetDataSetSchema(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlSchemaComplexType_t1860629407 * DataSet_GetDataSetSchema_m2375084031 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::BinarySerialize(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataSet_BinarySerialize_m3936170383 (DataSet_t3654702571 * __this, SerializationInfo_t2995724695 * ___si, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::BinaryDeserialize(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataSet_BinaryDeserialize_m2433864174 (DataSet_t3654702571 * __this, SerializationInfo_t2995724695 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::IsBinarySerialized(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  bool DataSet_IsBinarySerialized_m186372973 (DataSet_t3654702571 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
