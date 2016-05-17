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

// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t2238201602;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t167066468;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3827173367;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Xml.XmlResolver
struct XmlResolver_t2502213349;
// System.Xml.Schema.XmlSchemaExternal
struct XmlSchemaExternal_t686772112;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1191708721;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t718386952;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t471922321;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3432810239;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t2988870280;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaForm3432383625.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe4042409021.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_XmlResolver2502213349.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaExternal686772112.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectCollec2238201602.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader2988870280.h"

// System.Void System.Xml.Schema.XmlSchema::.ctor()
extern "C"  void XmlSchema__ctor_m188227104 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_AttributeFormDefault()
extern "C"  int32_t XmlSchema_get_AttributeFormDefault_m2406364640 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_BlockDefault()
extern "C"  int32_t XmlSchema_get_BlockDefault_m1868070695 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_FinalDefault()
extern "C"  int32_t XmlSchema_get_FinalDefault_m3994351710 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_ElementFormDefault()
extern "C"  int32_t XmlSchema_get_ElementFormDefault_m361882880 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_TargetNamespace()
extern "C"  String_t* XmlSchema_get_TargetNamespace_m1263789570 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::set_TargetNamespace(System.String)
extern "C"  void XmlSchema_set_TargetNamespace_m3512711863 (XmlSchema_t1932230565 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Version()
extern "C"  String_t* XmlSchema_get_Version_m1135093648 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Includes()
extern "C"  XmlSchemaObjectCollection_t2238201602 * XmlSchema_get_Includes_m748082563 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Items()
extern "C"  XmlSchemaObjectCollection_t2238201602 * XmlSchema_get_Items_m3467235754 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::get_IsCompiled()
extern "C"  bool XmlSchema_get_IsCompiled_m3170323904 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Attributes()
extern "C"  XmlSchemaObjectTable_t167066468 * XmlSchema_get_Attributes_m631487041 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_AttributeGroups()
extern "C"  XmlSchemaObjectTable_t167066468 * XmlSchema_get_AttributeGroups_m2860353672 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_SchemaTypes()
extern "C"  XmlSchemaObjectTable_t167066468 * XmlSchema_get_SchemaTypes_m2406206928 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Elements()
extern "C"  XmlSchemaObjectTable_t167066468 * XmlSchema_get_Elements_m1404485665 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Id()
extern "C"  String_t* XmlSchema_get_Id_m792700229 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Groups()
extern "C"  XmlSchemaObjectTable_t167066468 * XmlSchema_get_Groups_m1629027326 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Notations()
extern "C"  XmlSchemaObjectTable_t167066468 * XmlSchema_get_Notations_m506061481 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_NamedIdentities()
extern "C"  XmlSchemaObjectTable_t167066468 * XmlSchema_get_NamedIdentities_m543179181 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchema::get_Schemas()
extern "C"  XmlSchemaSet_t3827173367 * XmlSchema_get_Schemas_m2385362935 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Schema.XmlSchema::get_IDCollection()
extern "C"  Hashtable_t3875263730 * XmlSchema_get_IDCollection_m2655855613 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::Compile(System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchema_Compile_m2629685169 (XmlSchema_t1932230565 * __this, ValidationEventHandler_t2777264566 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.XmlResolver)
extern "C"  void XmlSchema_Compile_m1951277774 (XmlSchema_t1932230565 * __this, ValidationEventHandler_t2777264566 * ___handler, XmlResolver_t2502213349 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::CompileSubset(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver,System.Collections.Hashtable)
extern "C"  void XmlSchema_CompileSubset_m3567496017 (XmlSchema_t1932230565 * __this, ValidationEventHandler_t2777264566 * ___handler, XmlSchemaSet_t3827173367 * ___col, XmlResolver_t2502213349 * ___resolver, Hashtable_t3875263730 * ___handledUris, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::SetParent()
extern "C"  void XmlSchema_SetParent_m798376298 (XmlSchema_t1932230565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::DoCompile(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver)
extern "C"  void XmlSchema_DoCompile_m1793284530 (XmlSchema_t1932230565 * __this, ValidationEventHandler_t2777264566 * ___handler, Hashtable_t3875263730 * ___handledUris, XmlSchemaSet_t3827173367 * ___col, XmlResolver_t2502213349 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::GetResolvedUri(System.Xml.XmlResolver,System.String)
extern "C"  String_t* XmlSchema_GetResolvedUri_m669425620 (XmlSchema_t1932230565 * __this, XmlResolver_t2502213349 * ___resolver, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ProcessExternal(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaExternal,System.Xml.Schema.XmlSchemaSet)
extern "C"  void XmlSchema_ProcessExternal_m3624028268 (XmlSchema_t1932230565 * __this, ValidationEventHandler_t2777264566 * ___handler, Hashtable_t3875263730 * ___handledUris, XmlResolver_t2502213349 * ___resolver, XmlSchemaExternal_t686772112 * ___ext, XmlSchemaSet_t3827173367 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::AddExternalComponentsTo(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaSet)
extern "C"  void XmlSchema_AddExternalComponentsTo_m3629422530 (XmlSchema_t1932230565 * __this, XmlSchema_t1932230565 * ___s, XmlSchemaObjectCollection_t2238201602 * ___items, ValidationEventHandler_t2777264566 * ___handler, Hashtable_t3875263730 * ___handledUris, XmlResolver_t2502213349 * ___resolver, XmlSchemaSet_t3827173367 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::IsNamespaceAbsent(System.String)
extern "C"  bool XmlSchema_IsNamespaceAbsent_m3886411730 (XmlSchema_t1932230565 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchema::FindAttribute(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaAttribute_t1191708721 * XmlSchema_FindAttribute_m1642502741 (XmlSchema_t1932230565 * __this, XmlQualifiedName_t176365656 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchema::FindAttributeGroup(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaAttributeGroup_t718386952 * XmlSchema_FindAttributeGroup_m2150583515 (XmlSchema_t1932230565 * __this, XmlQualifiedName_t176365656 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchema::FindElement(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaElement_t471922321 * XmlSchema_FindElement_m3492185045 (XmlSchema_t1932230565 * __this, XmlQualifiedName_t176365656 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchema::FindSchemaType(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaType_t3432810239 * XmlSchema_FindSchemaType_m2055392780 (XmlSchema_t1932230565 * __this, XmlQualifiedName_t176365656 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::Validate(System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchema_Validate_m3258498682 (XmlSchema_t1932230565 * __this, ValidationEventHandler_t2777264566 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchema::Read(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchema_t1932230565 * XmlSchema_Read_m807478306 (Il2CppObject * __this /* static, unused */, XmlReader_t4229084514 * ___rdr, ValidationEventHandler_t2777264566 * ___validationEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadAttributes(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchema_ReadAttributes_m4276125438 (Il2CppObject * __this /* static, unused */, XmlSchema_t1932230565 * ___schema, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadContent(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchema_ReadContent_m572495374 (Il2CppObject * __this /* static, unused */, XmlSchema_t1932230565 * ___schema, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
