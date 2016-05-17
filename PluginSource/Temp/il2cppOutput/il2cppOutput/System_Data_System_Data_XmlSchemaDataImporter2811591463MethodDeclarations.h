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

// System.Data.XmlSchemaDataImporter
struct XmlSchemaDataImporter_t2811591463;
// System.Data.DataSet
struct DataSet_t3654702571;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Data.TableAdapterSchemaInfo
struct TableAdapterSchemaInfo_t1131857475;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t471922321;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3696384587;
// System.Data.DataRelation
struct DataRelation_t1483987353;
// System.Data.RelationStructure
struct RelationStructure_t3039531114;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t3990058885;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t2590121;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1191708721;
// System.Xml.Schema.XmlSchemaAnnotated
struct XmlSchemaAnnotated_t2513933869;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1500525009;
// System.Type
struct Type_t;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t3473808128;
// System.Data.ConstraintStructure
struct ConstraintStructure_t742574505;
// System.Xml.Schema.XmlSchemaKeyref
struct XmlSchemaKeyref_t2789194649;
// System.Data.UniqueConstraint
struct UniqueConstraint_t1006662241;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t1377046772;
// System.Xml.XmlElement
struct XmlElement_t3562928333;
// System.Data.Common.DbProviderFactory
struct DbProviderFactory_t2435213707;
// System.Data.Common.DbCommand
struct DbCommand_t2323745021;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Data.Common.DataTableMapping
struct DataTableMapping_t171110970;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3654702571.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaElement471922321.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3696384587.h"
#include "System_Data_System_Data_RelationStructure3039531114.h"
#include "System_Data_System_Data_DataColumn3354469747.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaGroupBase3990058885.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAttribute1191708721.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated2513933869.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleType1500525009.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDatatype2590121.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaIdentityCons3473808128.h"
#include "System_Data_System_Data_ConstraintStructure742574505.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaKeyref2789194649.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotation1377046772.h"
#include "System_Xml_System_Xml_XmlElement3562928333.h"
#include "System_Data_System_Data_Common_DbProviderFactory2435213707.h"
#include "System_Data_System_Data_Common_DataTableMapping171110970.h"

// System.Void System.Data.XmlSchemaDataImporter::.ctor(System.Data.DataSet,System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlSchemaDataImporter__ctor_m1313483257 (XmlSchemaDataImporter_t2811591463 * __this, DataSet_t3654702571 * ___dataset, XmlReader_t4229084514 * ___reader, bool ___forDataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::.cctor()
extern "C"  void XmlSchemaDataImporter__cctor_m1892208812 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.TableAdapterSchemaInfo System.Data.XmlSchemaDataImporter::get_CurrentAdapter()
extern "C"  TableAdapterSchemaInfo_t1131857475 * XmlSchemaDataImporter_get_CurrentAdapter_m1240851460 (XmlSchemaDataImporter_t2811591463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::Process()
extern "C"  void XmlSchemaDataImporter_Process_m3436620654 (XmlSchemaDataImporter_t2811591463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaDataImporter::IsDataSetElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  bool XmlSchemaDataImporter_IsDataSetElement_m2426452300 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaElement_t471922321 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaDataImporter::ContainsColumn(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaDataImporter_ContainsColumn_m1156723965 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaParticle_t3696384587 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessGlobalElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  void XmlSchemaDataImporter_ProcessGlobalElement_m4175921586 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaElement_t471922321 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessDataSetElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  void XmlSchemaDataImporter_ProcessDataSetElement_m2938042519 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaElement_t471922321 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleDataSetContentTypeParticle(System.Xml.Schema.XmlSchemaParticle)
extern "C"  void XmlSchemaDataImporter_HandleDataSetContentTypeParticle_m2951522367 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaParticle_t3696384587 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessDataTableElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  void XmlSchemaDataImporter_ProcessDataTableElement_m1241068523 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaElement_t471922321 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.XmlSchemaDataImporter::GenerateRelationship(System.Data.RelationStructure)
extern "C"  DataRelation_t1483987353 * XmlSchemaDataImporter_GenerateRelationship_m939278488 (XmlSchemaDataImporter_t2811591463 * __this, RelationStructure_t3039531114 * ___rs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.XmlSchemaDataImporter::CreateChildColumn(System.Data.DataColumn,System.Data.DataTable)
extern "C"  DataColumn_t3354469747 * XmlSchemaDataImporter_CreateChildColumn_m1891437899 (XmlSchemaDataImporter_t2811591463 * __this, DataColumn_t3354469747 * ___parentColumn, DataTable_t2176726999 * ___childTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnGroupBase(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaGroupBase)
extern "C"  void XmlSchemaDataImporter_ImportColumnGroupBase_m637005790 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaElement_t471922321 * ___parent, XmlSchemaGroupBase_t3990058885 * ___gb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Data.XmlSchemaDataImporter::GetSchemaPrimitiveType(System.Object)
extern "C"  XmlSchemaDatatype_t2590121 * XmlSchemaDataImporter_GetSchemaPrimitiveType_m1245543317 (XmlSchemaDataImporter_t2811591463 * __this, Il2CppObject * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnAttribute(System.Xml.Schema.XmlSchemaAttribute)
extern "C"  void XmlSchemaDataImporter_ImportColumnAttribute_m1880307109 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaAttribute_t1191708721 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnElement(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement)
extern "C"  void XmlSchemaDataImporter_ImportColumnElement_m3899597382 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaElement_t471922321 * ___parent, XmlSchemaElement_t471922321 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnMetaInfo(System.Xml.Schema.XmlSchemaAnnotated,System.Xml.XmlQualifiedName,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_ImportColumnMetaInfo_m1182641313 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaAnnotated_t2513933869 * ___obj, XmlQualifiedName_t176365656 * ___name, DataColumn_t3354469747 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillDataColumnComplexElement(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_FillDataColumnComplexElement_m3772967117 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaElement_t471922321 * ___parent, XmlSchemaElement_t471922321 * ___el, DataColumn_t3354469747 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaDataImporter::DataSetDefinesKey(System.String)
extern "C"  bool XmlSchemaDataImporter_DataSetDefinesKey_m3193089178 (XmlSchemaDataImporter_t2811591463 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::AddParentKeyColumn(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_AddParentKeyColumn_m3337141160 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaElement_t471922321 * ___parent, XmlSchemaElement_t471922321 * ___el, DataColumn_t3354469747 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillDataColumnRepeatedSimpleElement(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_FillDataColumnRepeatedSimpleElement_m2259279687 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaElement_t471922321 * ___parent, XmlSchemaElement_t471922321 * ___el, DataColumn_t3354469747 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillDataColumnSimpleElement(System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_FillDataColumnSimpleElement_m1238370774 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaElement_t471922321 * ___el, DataColumn_t3354469747 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::AddColumn(System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_AddColumn_m1391011057 (XmlSchemaDataImporter_t2811591463 * __this, DataColumn_t3354469747 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillFacet(System.Data.DataColumn,System.Xml.Schema.XmlSchemaSimpleType)
extern "C"  void XmlSchemaDataImporter_FillFacet_m682853069 (XmlSchemaDataImporter_t2811591463 * __this, DataColumn_t3354469747 * ___col, XmlSchemaSimpleType_t1500525009 * ___st, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.XmlSchemaDataImporter::ConvertDatatype(System.Xml.Schema.XmlSchemaDatatype)
extern "C"  Type_t * XmlSchemaDataImporter_ConvertDatatype_m2516858589 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaDatatype_t2590121 * ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.XmlSchemaDataImporter::GetSelectorTarget(System.String)
extern "C"  String_t* XmlSchemaDataImporter_GetSelectorTarget_m3671140954 (XmlSchemaDataImporter_t2811591463 * __this, String_t* ___xpath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ReserveSelfIdentity(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XmlSchemaDataImporter_ReserveSelfIdentity_m4246710545 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaIdentityConstraint_t3473808128 * ___ic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessSelfIdentity(System.Data.ConstraintStructure)
extern "C"  void XmlSchemaDataImporter_ProcessSelfIdentity_m1913038921 (XmlSchemaDataImporter_t2811591463 * __this, ConstraintStructure_t742574505 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ReserveRelationIdentity(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaKeyref)
extern "C"  void XmlSchemaDataImporter_ReserveRelationIdentity_m2792997361 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaElement_t471922321 * ___element, XmlSchemaKeyref_t2789194649 * ___keyref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessRelationIdentity(System.Xml.Schema.XmlSchemaElement,System.Data.ConstraintStructure)
extern "C"  void XmlSchemaDataImporter_ProcessRelationIdentity_m2555776360 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaElement_t471922321 * ___element, ConstraintStructure_t742574505 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.XmlSchemaDataImporter::FindConstraint(System.String,System.Xml.Schema.XmlSchemaElement)
extern "C"  UniqueConstraint_t1006662241 * XmlSchemaDataImporter_FindConstraint_m1313766018 (XmlSchemaDataImporter_t2811591463 * __this, String_t* ___name, XmlSchemaElement_t471922321 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleAnnotations(System.Xml.Schema.XmlSchemaAnnotation,System.Boolean)
extern "C"  void XmlSchemaDataImporter_HandleAnnotations_m996806934 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaAnnotation_t1377046772 * ___an, bool ___nested, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleDataSourceAnnotation(System.Xml.XmlElement,System.Boolean)
extern "C"  void XmlSchemaDataImporter_HandleDataSourceAnnotation_m1129752357 (XmlSchemaDataImporter_t2811591463 * __this, XmlElement_t3562928333 * ___el, bool ___nested, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessTableAdapter(System.Xml.XmlElement,System.Data.Common.DbProviderFactory,System.String)
extern "C"  void XmlSchemaDataImporter_ProcessTableAdapter_m3783769469 (XmlSchemaDataImporter_t2811591463 * __this, XmlElement_t3562928333 * ___el, DbProviderFactory_t2435213707 * ___provider, String_t* ___connStr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessDbSource(System.Xml.XmlElement)
extern "C"  void XmlSchemaDataImporter_ProcessDbSource_m1138771216 (XmlSchemaDataImporter_t2811591463 * __this, XmlElement_t3562928333 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.XmlSchemaDataImporter::ProcessDbCommand(System.Xml.XmlElement)
extern "C"  DbCommand_t2323745021 * XmlSchemaDataImporter_ProcessDbCommand_m2276008986 (XmlSchemaDataImporter_t2811591463 * __this, XmlElement_t3562928333 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.XmlSchemaDataImporter::ProcessDbParameters(System.Xml.XmlElement)
extern "C"  ArrayList_t2121638921 * XmlSchemaDataImporter_ProcessDbParameters_m4109702477 (XmlSchemaDataImporter_t2811591463 * __this, XmlElement_t3562928333 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessColumnMapping(System.Xml.XmlElement,System.Data.Common.DataTableMapping)
extern "C"  void XmlSchemaDataImporter_ProcessColumnMapping_m1831631887 (XmlSchemaDataImporter_t2811591463 * __this, XmlElement_t3562928333 * ___el, DataTableMapping_t171110970 * ___tableMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleRelationshipAnnotation(System.Xml.XmlElement,System.Boolean)
extern "C"  void XmlSchemaDataImporter_HandleRelationshipAnnotation_m1112614008 (XmlSchemaDataImporter_t2811591463 * __this, XmlElement_t3562928333 * ___el, bool ___nested, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.XmlSchemaDataImporter::GetElementDefaultValue(System.Xml.Schema.XmlSchemaElement)
extern "C"  Il2CppObject * XmlSchemaDataImporter_GetElementDefaultValue_m3219825097 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaElement_t471922321 * ___elem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.XmlSchemaDataImporter::GetAttributeDefaultValue(System.Xml.Schema.XmlSchemaAttribute)
extern "C"  Il2CppObject * XmlSchemaDataImporter_GetAttributeDefaultValue_m1546929417 (XmlSchemaDataImporter_t2811591463 * __this, XmlSchemaAttribute_t1191708721 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
