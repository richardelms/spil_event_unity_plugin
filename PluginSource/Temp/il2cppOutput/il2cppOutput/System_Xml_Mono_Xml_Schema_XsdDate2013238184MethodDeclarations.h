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

// Mono.Xml.Schema.XsdDate
struct XsdDate_t2013238184;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3696234203;
// System.ValueType
struct ValueType_t4014882752;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet67634583.h"
#include "System_Xml_System_Xml_XmlTokenizedType1796599028.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode4137841803.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlNameTable3232213908.h"
#include "System_Xml_Mono_Xml_Schema_XsdOrdering2730458446.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Mono.Xml.Schema.XsdDate::.ctor()
extern "C"  void XsdDate__ctor_m4205501685 (XsdDate_t2013238184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdDate::get_AllowedFacets()
extern "C"  int32_t XsdDate_get_AllowedFacets_m3488980609 (XsdDate_t2013238184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdDate::get_TokenizedType()
extern "C"  int32_t XsdDate_get_TokenizedType_m2312853278 (XsdDate_t2013238184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdDate::get_TypeCode()
extern "C"  int32_t XsdDate_get_TypeCode_m890046867 (XsdDate_t2013238184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdDate::get_ValueType()
extern "C"  Type_t * XsdDate_get_ValueType_m1013317455 (XsdDate_t2013238184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdDate::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdDate_ParseValue_m2187952117 (XsdDate_t2013238184 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdDate::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4014882752 * XsdDate_ParseValueType_m3146086463 (XsdDate_t2013238184 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdDate::Compare(System.Object,System.Object)
extern "C"  int32_t XsdDate_Compare_m2005648521 (XsdDate_t2013238184 * __this, Il2CppObject * ___x, Il2CppObject * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
