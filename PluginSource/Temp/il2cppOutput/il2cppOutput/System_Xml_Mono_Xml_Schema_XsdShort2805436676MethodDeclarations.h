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

// Mono.Xml.Schema.XsdShort
struct XsdShort_t2805436676;
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

// System.Void Mono.Xml.Schema.XsdShort::.ctor()
extern "C"  void XsdShort__ctor_m2889145127 (XsdShort_t2805436676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdShort::get_TypeCode()
extern "C"  int32_t XsdShort_get_TypeCode_m3707542521 (XsdShort_t2805436676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdShort::get_ValueType()
extern "C"  Type_t * XsdShort_get_ValueType_m1297523853 (XsdShort_t2805436676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdShort::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdShort_ParseValue_m4247638157 (XsdShort_t2805436676 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdShort::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4014882752 * XsdShort_ParseValueType_m105317879 (XsdShort_t2805436676 * __this, String_t* ___s, XmlNameTable_t3232213908 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdShort::Compare(System.Object,System.Object)
extern "C"  int32_t XsdShort_Compare_m3233587385 (XsdShort_t2805436676 * __this, Il2CppObject * ___x, Il2CppObject * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
