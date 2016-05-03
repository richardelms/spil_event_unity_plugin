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

// System.Data.XmlSchemaWriter
struct XmlSchemaWriter_t2141469886;
// System.Data.DataSet
struct DataSet_t3654702571;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;
// System.Data.DataTableCollection
struct DataTableCollection_t2915263893;
// System.Data.DataRelationCollection
struct DataRelationCollection_t267599063;
// System.Data.DataTable[]
struct DataTableU5BU5D_t1761989358;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t909637604;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Data.DataRelation
struct DataRelation_t1483987353;
// System.Data.UniqueConstraint
struct UniqueConstraint_t1006662241;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Data.PropertyCollection
struct PropertyCollection_t3599376422;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t4226329727;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3654702571.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "System_Data_System_Data_DataTableCollection2915263893.h"
#include "System_Data_System_Data_DataRelationCollection267599063.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "System_Data_System_Data_DataRelation1483987353.h"
#include "System_Data_System_Data_UniqueConstraint1006662241.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "System_Data_System_Data_PropertyCollection3599376422.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "System_Data_System_Data_DataColumn3354469747.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"
#include "System_System_Collections_Specialized_ListDictiona4226329727.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Data.XmlSchemaWriter::.ctor(System.Data.DataSet,System.Xml.XmlWriter,System.Data.DataTableCollection,System.Data.DataRelationCollection)
extern "C"  void XmlSchemaWriter__ctor_m553200337 (XmlSchemaWriter_t2141469886 * __this, DataSet_t3654702571 * ___dataset, XmlWriter_t89522450 * ___writer, DataTableCollection_t2915263893 * ___tables, DataRelationCollection_t267599063 * ___relations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::.ctor(System.Xml.XmlWriter,System.Data.DataTable[],System.Data.DataRelation[],System.String,System.String,System.Globalization.CultureInfo)
extern "C"  void XmlSchemaWriter__ctor_m4080395814 (XmlSchemaWriter_t2141469886 * __this, XmlWriter_t89522450 * ___writer, DataTableU5BU5D_t1761989358* ___tables, DataRelationU5BU5D_t909637604* ___relations, String_t* ___mainDataTable, String_t* ___dataSetName, CultureInfo_t3603717042 * ___locale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Data.DataSet,System.Xml.XmlWriter)
extern "C"  void XmlSchemaWriter_WriteXmlSchema_m3024174918 (Il2CppObject * __this /* static, unused */, DataSet_t3654702571 * ___dataset, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Data.DataSet,System.Xml.XmlWriter,System.Data.DataTableCollection,System.Data.DataRelationCollection)
extern "C"  void XmlSchemaWriter_WriteXmlSchema_m1494422280 (Il2CppObject * __this /* static, unused */, DataSet_t3654702571 * ___dataset, XmlWriter_t89522450 * ___writer, DataTableCollection_t2915263893 * ___tables, DataRelationCollection_t267599063 * ___relations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Xml.XmlWriter,System.Data.DataTable[],System.Data.DataRelation[],System.String,System.String,System.Globalization.CultureInfo)
extern "C"  void XmlSchemaWriter_WriteXmlSchema_m843176399 (Il2CppObject * __this /* static, unused */, XmlWriter_t89522450 * ___writer, DataTableU5BU5D_t1761989358* ___tables, DataRelationU5BU5D_t909637604* ___relations, String_t* ___mainDataTable, String_t* ___dataSetName, CultureInfo_t3603717042 * ___locale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.XmlSchemaWriter::get_ConstraintPrefix()
extern "C"  String_t* XmlSchemaWriter_get_ConstraintPrefix_m4028319215 (XmlSchemaWriter_t2141469886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteSchema()
extern "C"  void XmlSchemaWriter_WriteSchema_m3203862312 (XmlSchemaWriter_t2141469886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteDataSetElement()
extern "C"  void XmlSchemaWriter_WriteDataSetElement_m2963877451 (XmlSchemaWriter_t2141469886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteDataRelationAnnotation(System.Data.DataRelation)
extern "C"  void XmlSchemaWriter_WriteDataRelationAnnotation_m3530929873 (XmlSchemaWriter_t2141469886 * __this, DataRelation_t1483987353 * ___rel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteConstraints()
extern "C"  void XmlSchemaWriter_WriteConstraints_m1550895281 (XmlSchemaWriter_t2141469886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddUniqueConstraints(System.Data.UniqueConstraint,System.Collections.ArrayList)
extern "C"  void XmlSchemaWriter_AddUniqueConstraints_m621813724 (XmlSchemaWriter_t2141469886 * __this, UniqueConstraint_t1006662241 * ___uniq, ArrayList_t2121638921 * ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddForeignKeys(System.Data.DataRelation,System.Collections.ArrayList,System.Boolean)
extern "C"  void XmlSchemaWriter_AddForeignKeys_m1874584300 (XmlSchemaWriter_t2141469886 * __this, DataRelation_t1483987353 * ___rel, ArrayList_t2121638921 * ___names, bool ___isConstraintOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaWriter::CheckExtendedPropertyExists(System.Data.DataTable[],System.Data.DataRelation[])
extern "C"  bool XmlSchemaWriter_CheckExtendedPropertyExists_m4066524780 (XmlSchemaWriter_t2141469886 * __this, DataTableU5BU5D_t1761989358* ___tables, DataRelationU5BU5D_t909637604* ___relations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddExtendedPropertyAttributes(System.Data.PropertyCollection)
extern "C"  void XmlSchemaWriter_AddExtendedPropertyAttributes_m1280916214 (XmlSchemaWriter_t2141469886 * __this, PropertyCollection_t3599376422 * ___props, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableElement(System.Data.DataTable)
extern "C"  void XmlSchemaWriter_WriteTableElement_m3446834206 (XmlSchemaWriter_t2141469886 * __this, DataTable_t2176726999 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableType(System.Data.DataTable)
extern "C"  void XmlSchemaWriter_WriteTableType_m163055952 (XmlSchemaWriter_t2141469886 * __this, DataTable_t2176726999 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableTypeParticles(System.Data.DataColumn)
extern "C"  void XmlSchemaWriter_WriteTableTypeParticles_m4266320007 (XmlSchemaWriter_t2141469886 * __this, DataColumn_t3354469747 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteChildRelations(System.Data.DataRelation)
extern "C"  void XmlSchemaWriter_WriteChildRelations_m841801207 (XmlSchemaWriter_t2141469886 * __this, DataRelation_t1483987353 * ___rel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableAttributes(System.Collections.ArrayList)
extern "C"  void XmlSchemaWriter_WriteTableAttributes_m1436721665 (XmlSchemaWriter_t2141469886 * __this, ArrayList_t2121638921 * ___atts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteSimpleType(System.Data.DataColumn)
extern "C"  void XmlSchemaWriter_WriteSimpleType_m3522381358 (XmlSchemaWriter_t2141469886 * __this, DataColumn_t3354469747 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteQName(System.Xml.XmlQualifiedName)
extern "C"  void XmlSchemaWriter_WriteQName_m2811822933 (XmlSchemaWriter_t2141469886 * __this, XmlQualifiedName_t176365656 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::CheckNamespace(System.String,System.String,System.Collections.Specialized.ListDictionary,System.Collections.Specialized.ListDictionary)
extern "C"  void XmlSchemaWriter_CheckNamespace_m566926279 (XmlSchemaWriter_t2141469886 * __this, String_t* ___prefix, String_t* ___ns, ListDictionary_t4226329727 * ___names, ListDictionary_t4226329727 * ___includes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::HandleExternalNamespace(System.String,System.String,System.Collections.Specialized.ListDictionary)
extern "C"  void XmlSchemaWriter_HandleExternalNamespace_m456176137 (XmlSchemaWriter_t2141469886 * __this, String_t* ___prefix, String_t* ___ns, ListDictionary_t4226329727 * ___includes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.XmlSchemaWriter::MapType(System.Type)
extern "C"  XmlQualifiedName_t176365656 * XmlSchemaWriter_MapType_m2141526126 (XmlSchemaWriter_t2141469886 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
