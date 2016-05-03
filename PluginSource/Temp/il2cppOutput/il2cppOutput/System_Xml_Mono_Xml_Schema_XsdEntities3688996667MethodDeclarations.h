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

// Mono.Xml.Schema.XsdEntities
struct XsdEntities_t3688996667;
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

// System.Void Mono.Xml.Schema.XsdEntities::.ctor()
extern "C"  void XsdEntities__ctor_m61127234 (XsdEntities_t3688996667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdEntities::get_TokenizedType()
extern "C"  int32_t XsdEntities_get_TokenizedType_m1803638891 (XsdEntities_t3688996667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdEntities::get_TypeCode()
extern "C"  int32_t XsdEntities_get_TypeCode_m1016299942 (XsdEntities_t3688996667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdEntities::get_ValueType()
extern "C"  Type_t * XsdEntities_get_ValueType_m1732518556 (XsdEntities_t3688996667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdEntities::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdEntities_ParseValue_m2666879752 (XsdEntities_t3688996667 * __this, String_t* ___value, XmlNameTable_t3232213908 * ___nt, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdEntities::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4014882752 * XsdEntities_ParseValueType_m2781927890 (XsdEntities_t3688996667 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdEntities::GetValidatedArray(System.String,System.Xml.XmlNameTable)
extern "C"  StringU5BU5D_t2956870243* XsdEntities_GetValidatedArray_m995508170 (XsdEntities_t3688996667 * __this, String_t* ___value, XmlNameTable_t3232213908 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
