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

// Mono.Xml.Schema.XsdUnsignedInt
struct XsdUnsignedInt_t4045809666;
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
#include "System_Xml_Mono_Xml_Schema_XsdOrdering2730458446.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Mono.Xml.Schema.XsdUnsignedInt::.ctor()
extern "C"  void XsdUnsignedInt__ctor_m3112219817 (XsdUnsignedInt_t4045809666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdUnsignedInt::get_TypeCode()
extern "C"  int32_t XsdUnsignedInt_get_TypeCode_m3494968119 (XsdUnsignedInt_t4045809666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdUnsignedInt::get_ValueType()
extern "C"  Type_t * XsdUnsignedInt_get_ValueType_m1045702543 (XsdUnsignedInt_t4045809666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdUnsignedInt::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdUnsignedInt_ParseValue_m3088254475 (XsdUnsignedInt_t4045809666 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdUnsignedInt::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4014882752 * XsdUnsignedInt_ParseValueType_m2394316917 (XsdUnsignedInt_t4045809666 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdUnsignedInt::Compare(System.Object,System.Object)
extern "C"  int32_t XsdUnsignedInt_Compare_m3862849975 (XsdUnsignedInt_t4045809666 * __this, Il2CppObject * ___x, Il2CppObject * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
