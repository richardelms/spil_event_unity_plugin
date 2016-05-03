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

// Mono.Xml.Schema.XsdDateTime
struct XsdDateTime_t3288893205;
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

// System.Void Mono.Xml.Schema.XsdDateTime::.ctor()
extern "C"  void XsdDateTime__ctor_m836503464 (XsdDateTime_t3288893205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdDateTime::get_AllowedFacets()
extern "C"  int32_t XsdDateTime_get_AllowedFacets_m1102258996 (XsdDateTime_t3288893205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdDateTime::get_TokenizedType()
extern "C"  int32_t XsdDateTime_get_TokenizedType_m1885453521 (XsdDateTime_t3288893205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdDateTime::get_TypeCode()
extern "C"  int32_t XsdDateTime_get_TypeCode_m280196480 (XsdDateTime_t3288893205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdDateTime::get_ValueType()
extern "C"  Type_t * XsdDateTime_get_ValueType_m388147714 (XsdDateTime_t3288893205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdDateTime::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdDateTime_ParseValue_m3191865826 (XsdDateTime_t3288893205 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdDateTime::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4014882752 * XsdDateTime_ParseValueType_m1062765484 (XsdDateTime_t3288893205 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdDateTime::Compare(System.Object,System.Object)
extern "C"  int32_t XsdDateTime_Compare_m1391203126 (XsdDateTime_t3288893205 * __this, Il2CppObject * ___x, Il2CppObject * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
