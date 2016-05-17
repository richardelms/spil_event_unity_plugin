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

// System.Data.XmlDataInferenceLoader
struct XmlDataInferenceLoader_t1258518718;
// System.Data.DataSet
struct DataSet_t3654702571;
// System.Xml.XmlDocument
struct XmlDocument_t3705263098;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Xml.XmlElement
struct XmlElement_t3562928333;
// System.Data.TableMapping
struct TableMapping_t3011643123;
// System.String
struct String_t;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.Type
struct Type_t;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3654702571.h"
#include "System_Xml_System_Xml_XmlDocument3705263098.h"
#include "System_Data_System_Data_XmlReadMode2944115491.h"
#include "System_Xml_System_Xml_XmlElement3562928333.h"
#include "System_Data_System_Data_TableMapping3011643123.h"
#include "mscorlib_System_String968488902.h"
#include "System_Data_System_Data_MappingType1033973435.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "System_Data_System_Data_ElementMappingType2531382879.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"

// System.Void System.Data.XmlDataInferenceLoader::.ctor(System.Data.DataSet,System.Xml.XmlDocument,System.Data.XmlReadMode,System.String[])
extern "C"  void XmlDataInferenceLoader__ctor_m3485632556 (XmlDataInferenceLoader_t1258518718 * __this, DataSet_t3654702571 * ___ds, XmlDocument_t3705263098 * ___doc, int32_t ___mode, StringU5BU5D_t2956870243* ___ignoredNamespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::Infer(System.Data.DataSet,System.Xml.XmlDocument,System.Data.XmlReadMode,System.String[])
extern "C"  void XmlDataInferenceLoader_Infer_m3654205208 (Il2CppObject * __this /* static, unused */, DataSet_t3654702571 * ___dataset, XmlDocument_t3705263098 * ___document, int32_t ___mode, StringU5BU5D_t2956870243* ___ignoredNamespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::ReadXml()
extern "C"  void XmlDataInferenceLoader_ReadXml_m1710146885 (XmlDataInferenceLoader_t1258518718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferTopLevelTable(System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_InferTopLevelTable_m596841832 (XmlDataInferenceLoader_t1258518718 * __this, XmlElement_t3562928333 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferColumnElement(System.Data.TableMapping,System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_InferColumnElement_m2557478562 (XmlDataInferenceLoader_t1258518718 * __this, TableMapping_t3011643123 * ___table, XmlElement_t3562928333 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::CheckExtraneousElementColumn(System.Data.TableMapping,System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_CheckExtraneousElementColumn_m397505038 (XmlDataInferenceLoader_t1258518718 * __this, TableMapping_t3011643123 * ___parentTable, XmlElement_t3562928333 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::PopulatePrimaryKey(System.Data.TableMapping)
extern "C"  void XmlDataInferenceLoader_PopulatePrimaryKey_m1228797088 (XmlDataInferenceLoader_t1258518718 * __this, TableMapping_t3011643123 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::PopulateRelationStructure(System.String,System.String,System.String)
extern "C"  void XmlDataInferenceLoader_PopulateRelationStructure_m648573609 (XmlDataInferenceLoader_t1258518718 * __this, String_t* ___parent, String_t* ___child, String_t* ___pkeyColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferRepeatedElement(System.Data.TableMapping,System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_InferRepeatedElement_m3500509758 (XmlDataInferenceLoader_t1258518718 * __this, TableMapping_t3011643123 * ___parentTable, XmlElement_t3562928333 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferTableElement(System.Data.TableMapping,System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_InferTableElement_m1785259436 (XmlDataInferenceLoader_t1258518718 * __this, TableMapping_t3011643123 * ___parentTable, XmlElement_t3562928333 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.TableMapping System.Data.XmlDataInferenceLoader::GetMappedTable(System.Data.TableMapping,System.String,System.String)
extern "C"  TableMapping_t3011643123 * XmlDataInferenceLoader_GetMappedTable_m1908544612 (XmlDataInferenceLoader_t1258518718 * __this, TableMapping_t3011643123 * ___parent, String_t* ___tableName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.XmlDataInferenceLoader::GetMappedColumn(System.Data.TableMapping,System.String,System.String,System.String,System.Data.MappingType,System.Type)
extern "C"  DataColumn_t3354469747 * XmlDataInferenceLoader_GetMappedColumn_m4111948480 (XmlDataInferenceLoader_t1258518718 * __this, TableMapping_t3011643123 * ___table, String_t* ___name, String_t* ___prefix, String_t* ___ns, int32_t ___type, Type_t * ___optColType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::SetAsExistingTable(System.Xml.XmlElement,System.Collections.Hashtable)
extern "C"  void XmlDataInferenceLoader_SetAsExistingTable_m3536871892 (Il2CppObject * __this /* static, unused */, XmlElement_t3562928333 * ___el, Hashtable_t3875263730 * ___existingTables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ElementMappingType System.Data.XmlDataInferenceLoader::GetElementMappingType(System.Xml.XmlElement,System.Collections.ArrayList,System.Collections.Hashtable)
extern "C"  int32_t XmlDataInferenceLoader_GetElementMappingType_m959501994 (Il2CppObject * __this /* static, unused */, XmlElement_t3562928333 * ___el, ArrayList_t2121638921 * ___ignoredNamespaces, Hashtable_t3875263730 * ___existingTables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlDataInferenceLoader::IsDocumentElementTable()
extern "C"  bool XmlDataInferenceLoader_IsDocumentElementTable_m1972492031 (XmlDataInferenceLoader_t1258518718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlDataInferenceLoader::IsDocumentElementTable(System.Xml.XmlElement,System.Collections.ArrayList)
extern "C"  bool XmlDataInferenceLoader_IsDocumentElementTable_m2892000111 (Il2CppObject * __this /* static, unused */, XmlElement_t3562928333 * ___top, ArrayList_t2121638921 * ___ignoredNamespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
