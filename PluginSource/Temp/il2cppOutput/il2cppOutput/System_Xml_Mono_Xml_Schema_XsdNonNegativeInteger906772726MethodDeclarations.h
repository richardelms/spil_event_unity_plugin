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

// Mono.Xml.Schema.XsdNonNegativeInteger
struct XsdNonNegativeInteger_t906772726;
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

// System.Void Mono.Xml.Schema.XsdNonNegativeInteger::.ctor()
extern "C"  void XsdNonNegativeInteger__ctor_m1363977127 (XsdNonNegativeInteger_t906772726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdNonNegativeInteger::get_TypeCode()
extern "C"  int32_t XsdNonNegativeInteger_get_TypeCode_m2274046881 (XsdNonNegativeInteger_t906772726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdNonNegativeInteger::get_ValueType()
extern "C"  Type_t * XsdNonNegativeInteger_get_ValueType_m459734657 (XsdNonNegativeInteger_t906772726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdNonNegativeInteger::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdNonNegativeInteger_ParseValue_m1024966339 (XsdNonNegativeInteger_t906772726 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdNonNegativeInteger::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4014882752 * XsdNonNegativeInteger_ParseValueType_m3509492749 (XsdNonNegativeInteger_t906772726 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
