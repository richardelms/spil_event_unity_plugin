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

// System.Xml.Schema.XmlSchemaSimpleTypeRestriction
struct XmlSchemaSimpleTypeRestriction_t409858485;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1500525009;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t2238201602;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2900481284;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.Schema.XmlSchemaFacet
struct XmlSchemaFacet_t4078749516;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaTotalDigitsFacet
struct XmlSchemaTotalDigitsFacet_t385164882;
// System.Xml.Schema.XmlSchemaFractionDigitsFacet
struct XmlSchemaFractionDigitsFacet_t1682039972;
// System.Xml.Schema.XmlSchemaLengthFacet
struct XmlSchemaLengthFacet_t3070365190;
// System.Xml.Schema.XmlSchemaMaxLengthFacet
struct XmlSchemaMaxLengthFacet_t2333687858;
// System.Xml.Schema.XmlSchemaMinLengthFacet
struct XmlSchemaMinLengthFacet_t2990603908;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t8663200;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3696234203;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t2988870280;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2900481284.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet4078749516.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaTotalDigitsFa385164882.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFractionDigi1682039972.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaLengthFacet3070365190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet67634583.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaMaxLengthFac2333687858.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaMinLengthFac2990603908.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlNameTable3232213908.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader2988870280.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::.ctor()
extern "C"  void XmlSchemaSimpleTypeRestriction__ctor_m3797960454 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::.cctor()
extern "C"  void XmlSchemaSimpleTypeRestriction__cctor_m1290560871 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_BaseTypeName()
extern "C"  XmlQualifiedName_t176365656 * XmlSchemaSimpleTypeRestriction_get_BaseTypeName_m1100684618 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_BaseType()
extern "C"  XmlSchemaSimpleType_t1500525009 * XmlSchemaSimpleTypeRestriction_get_BaseType_m772514584 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_Facets()
extern "C"  XmlSchemaObjectCollection_t2238201602 * XmlSchemaSimpleTypeRestriction_get_Facets_m2477381752 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleTypeRestriction_SetParent_m164797282 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, XmlSchemaObject_t2900481284 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeRestriction_Compile_m3374838368 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::IsAllowedFacet(System.Xml.Schema.XmlSchemaFacet)
extern "C"  bool XmlSchemaSimpleTypeRestriction_IsAllowedFacet_m1764378281 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, XmlSchemaFacet_t4078749516 * ___xsf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeRestriction_Validate_m2502705569 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateActualType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaSimpleTypeRestriction_ValidateActualType_m4143680007 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::GetActualType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  Il2CppObject * XmlSchemaSimpleTypeRestriction_GetActualType_m953534181 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkTotalDigitsFacet(System.Xml.Schema.XmlSchemaTotalDigitsFacet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkTotalDigitsFacet_m2433654619 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, XmlSchemaTotalDigitsFacet_t385164882 * ___totf, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkFractionDigitsFacet(System.Xml.Schema.XmlSchemaFractionDigitsFacet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkFractionDigitsFacet_m449967183 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, XmlSchemaFractionDigitsFacet_t1682039972 * ___fracf, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMinMaxFacet(System.Xml.Schema.XmlSchemaFacet,System.Object&,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkMinMaxFacet_m3037887949 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, XmlSchemaFacet_t4078749516 * ___facet, Il2CppObject ** ___baseFacet, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkLengthFacet(System.Xml.Schema.XmlSchemaLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkLengthFacet_m1926611573 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, XmlSchemaLengthFacet_t3070365190 * ___lf, int32_t ___facetsDefined, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMaxLengthFacet(System.Xml.Schema.XmlSchemaMaxLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkMaxLengthFacet_m90842857 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, XmlSchemaMaxLengthFacet_t2333687858 * ___maxlf, int32_t ___facetsDefined, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMinLengthFacet(System.Xml.Schema.XmlSchemaMinLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkMinLengthFacet_m1299209541 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, XmlSchemaMinLengthFacet_t2990603908 * ___minlf, int32_t ___facetsDefined, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::getDatatype()
extern "C"  XsdAnySimpleType_t8663200 * XmlSchemaSimpleTypeRestriction_getDatatype_m2425998919 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateValueWithDatatype(System.String)
extern "C"  Il2CppObject * XmlSchemaSimpleTypeRestriction_ValidateValueWithDatatype_m1620343502 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateValueWithFacets_m1918122134 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, String_t* ___value, XmlNameTable_t3232213908 * ___nt, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateListValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateListValueWithFacets_m2870567832 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, String_t* ___value, XmlNameTable_t3232213908 * ___nt, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateListValueWithFacetsCore(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateListValueWithFacetsCore_m3890910039 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, String_t* ___value, XmlNameTable_t3232213908 * ___nt, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateNonListValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateNonListValueWithFacets_m3914776865 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, String_t* ___value, XmlNameTable_t3232213908 * ___nt, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateNonListValueWithFacetsCore(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateNonListValueWithFacetsCore_m3854304352 (XmlSchemaSimpleTypeRestriction_t409858485 * __this, String_t* ___value, XmlNameTable_t3232213908 * ___nt, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeRestriction System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleTypeRestriction_t409858485 * XmlSchemaSimpleTypeRestriction_Read_m4153758622 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
