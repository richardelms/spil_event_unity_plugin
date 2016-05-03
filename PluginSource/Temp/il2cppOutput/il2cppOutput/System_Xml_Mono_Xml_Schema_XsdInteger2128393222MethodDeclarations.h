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

// Mono.Xml.Schema.XsdInteger
struct XsdInteger_t2128393222;
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
#include "System_Xml_System_Xml_Schema_XmlTypeCode4137841803.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlNameTable3232213908.h"

// System.Void Mono.Xml.Schema.XsdInteger::.ctor()
extern "C"  void XsdInteger__ctor_m3723735205 (XsdInteger_t2128393222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdInteger::get_TypeCode()
extern "C"  int32_t XsdInteger_get_TypeCode_m2479489467 (XsdInteger_t2128393222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdInteger::get_ValueType()
extern "C"  Type_t * XsdInteger_get_ValueType_m3391367819 (XsdInteger_t2128393222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdInteger::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdInteger_ParseValue_m2774144783 (XsdInteger_t2128393222 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdInteger::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4014882752 * XsdInteger_ParseValueType_m1849923449 (XsdInteger_t2128393222 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
