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

// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t2590121;
// System.ValueType
struct ValueType_t4014882752;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3696234203;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdWhitespaceFacet3778568450.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode4137841803.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlNameTable3232213908.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"

// System.Void System.Xml.Schema.XmlSchemaDatatype::.ctor()
extern "C"  void XmlSchemaDatatype__ctor_m503494556 (XmlSchemaDatatype_t2590121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaDatatype::.cctor()
extern "C"  void XmlSchemaDatatype__cctor_m2241333137 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdWhitespaceFacet System.Xml.Schema.XmlSchemaDatatype::get_Whitespace()
extern "C"  int32_t XmlSchemaDatatype_get_Whitespace_m3737645433 (XmlSchemaDatatype_t2590121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlSchemaDatatype::get_TypeCode()
extern "C"  int32_t XmlSchemaDatatype_get_TypeCode_m3697841932 (XmlSchemaDatatype_t2590121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType System.Xml.Schema.XmlSchemaDatatype::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4014882752 * XmlSchemaDatatype_ParseValueType_m1070187064 (XmlSchemaDatatype_t2590121 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaDatatype::Normalize(System.String)
extern "C"  String_t* XmlSchemaDatatype_Normalize_m3958757528 (XmlSchemaDatatype_t2590121 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaDatatype::Normalize(System.String,Mono.Xml.Schema.XsdWhitespaceFacet)
extern "C"  String_t* XmlSchemaDatatype_Normalize_m3655513970 (XmlSchemaDatatype_t2590121 * __this, String_t* ___s, int32_t ___whitespaceFacet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaDatatype_t2590121 * XmlSchemaDatatype_FromName_m2003221181 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t176365656 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.String,System.String)
extern "C"  XmlSchemaDatatype_t2590121 * XmlSchemaDatatype_FromName_m1008904623 (Il2CppObject * __this /* static, unused */, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
