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

// Mono.Xml.Schema.XsdIDRefs
struct XsdIDRefs_t1259314069;
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
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlTokenizedType1796599028.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode4137841803.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlNameTable3232213908.h"

// System.Void Mono.Xml.Schema.XsdIDRefs::.ctor()
extern "C"  void XsdIDRefs__ctor_m969339240 (XsdIDRefs_t1259314069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdIDRefs::get_TokenizedType()
extern "C"  int32_t XsdIDRefs_get_TokenizedType_m1619207889 (XsdIDRefs_t1259314069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdIDRefs::get_TypeCode()
extern "C"  int32_t XsdIDRefs_get_TypeCode_m1663776960 (XsdIDRefs_t1259314069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdIDRefs::get_ValueType()
extern "C"  Type_t * XsdIDRefs_get_ValueType_m801837634 (XsdIDRefs_t1259314069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdIDRefs::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdIDRefs_ParseValue_m3859320546 (XsdIDRefs_t1259314069 * __this, String_t* ___value, XmlNameTable_t3232213908 * ___nt, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdIDRefs::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4014882752 * XsdIDRefs_ParseValueType_m1390570668 (XsdIDRefs_t1259314069 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdIDRefs::GetValidatedArray(System.String,System.Xml.XmlNameTable)
extern "C"  StringU5BU5D_t2956870243* XsdIDRefs_GetValidatedArray_m2566675748 (XsdIDRefs_t1259314069 * __this, String_t* ___value, XmlNameTable_t3232213908 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
