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

// Mono.Xml.Schema.XsdDecimal
struct XsdDecimal_t1712604697;
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

// System.Void Mono.Xml.Schema.XsdDecimal::.ctor()
extern "C"  void XsdDecimal__ctor_m680772594 (XsdDecimal_t1712604697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdDecimal::get_AllowedFacets()
extern "C"  int32_t XsdDecimal_get_AllowedFacets_m1203068216 (XsdDecimal_t1712604697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdDecimal::get_TokenizedType()
extern "C"  int32_t XsdDecimal_get_TokenizedType_m3768992089 (XsdDecimal_t1712604697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdDecimal::get_TypeCode()
extern "C"  int32_t XsdDecimal_get_TypeCode_m171511246 (XsdDecimal_t1712604697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdDecimal::get_ValueType()
extern "C"  Type_t * XsdDecimal_get_ValueType_m563519704 (XsdDecimal_t1712604697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdDecimal::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdDecimal_ParseValue_m269535650 (XsdDecimal_t1712604697 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdDecimal::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4014882752 * XsdDecimal_ParseValueType_m1651034252 (XsdDecimal_t1712604697 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdDecimal::Compare(System.Object,System.Object)
extern "C"  int32_t XsdDecimal_Compare_m1825878926 (XsdDecimal_t1712604697 * __this, Il2CppObject * ___x, Il2CppObject * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
