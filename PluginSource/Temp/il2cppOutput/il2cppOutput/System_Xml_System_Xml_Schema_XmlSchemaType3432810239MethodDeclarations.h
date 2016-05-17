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

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3432810239;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t2590121;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1500525009;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe4042409021.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode4137841803.h"

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
extern "C"  void XmlSchemaType__ctor_m67578246 (XmlSchemaType_t3432810239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaType::get_Name()
extern "C"  String_t* XmlSchemaType_get_Name_m2625227983 (XmlSchemaType_t3432810239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaType::set_Name(System.String)
extern "C"  void XmlSchemaType_set_Name_m1730959868 (XmlSchemaType_t3432810239 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_Final()
extern "C"  int32_t XmlSchemaType_get_Final_m3202034283 (XmlSchemaType_t3432810239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaType::set_Final(System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  void XmlSchemaType_set_Final_m1693833788 (XmlSchemaType_t3432810239 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
extern "C"  XmlQualifiedName_t176365656 * XmlSchemaType_get_QualifiedName_m3059613359 (XmlSchemaType_t3432810239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_FinalResolved()
extern "C"  int32_t XmlSchemaType_get_FinalResolved_m330734211 (XmlSchemaType_t3432810239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaType::get_BaseSchemaType()
extern "C"  Il2CppObject * XmlSchemaType_get_BaseSchemaType_m3726912798 (XmlSchemaType_t3432810239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::get_BaseXmlSchemaType()
extern "C"  XmlSchemaType_t3432810239 * XmlSchemaType_get_BaseXmlSchemaType_m2751433812 (XmlSchemaType_t3432810239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_DerivedBy()
extern "C"  int32_t XmlSchemaType_get_DerivedBy_m1086003913 (XmlSchemaType_t3432810239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaType::get_Datatype()
extern "C"  XmlSchemaDatatype_t2590121 * XmlSchemaType_get_Datatype_m2483034461 (XmlSchemaType_t3432810239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaType::get_IsMixed()
extern "C"  bool XmlSchemaType_get_IsMixed_m1307732852 (XmlSchemaType_t3432810239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaSimpleType_t1500525009 * XmlSchemaType_GetBuiltInSimpleType_m799232347 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t176365656 * ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.Schema.XmlTypeCode)
extern "C"  XmlSchemaSimpleType_t1500525009 * XmlSchemaType_GetBuiltInSimpleType_m277874394 (Il2CppObject * __this /* static, unused */, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaType::ValidateRecursionCheck()
extern "C"  bool XmlSchemaType_ValidateRecursionCheck_m3528203058 (XmlSchemaType_t3432810239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
