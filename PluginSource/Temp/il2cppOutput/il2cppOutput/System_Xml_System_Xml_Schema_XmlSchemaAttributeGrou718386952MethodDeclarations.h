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

// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t718386952;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t2238201602;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t167066468;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t2163251669;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2900481284;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t2988870280;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnyAttribute2163251669.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2900481284.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader2988870280.h"

// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::.ctor()
extern "C"  void XmlSchemaAttributeGroup__ctor_m385940829 (XmlSchemaAttributeGroup_t718386952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttributeGroup::get_Name()
extern "C"  String_t* XmlSchemaAttributeGroup_get_Name_m1816681816 (XmlSchemaAttributeGroup_t718386952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAttributeGroup::get_Attributes()
extern "C"  XmlSchemaObjectCollection_t2238201602 * XmlSchemaAttributeGroup_get_Attributes_m2225409906 (XmlSchemaAttributeGroup_t718386952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaAttributeGroup::get_AttributeUses()
extern "C"  XmlSchemaObjectTable_t167066468 * XmlSchemaAttributeGroup_get_AttributeUses_m1276538813 (XmlSchemaAttributeGroup_t718386952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::get_AnyAttributeUse()
extern "C"  XmlSchemaAnyAttribute_t2163251669 * XmlSchemaAttributeGroup_get_AnyAttributeUse_m4057963915 (XmlSchemaAttributeGroup_t718386952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::get_AnyAttribute()
extern "C"  XmlSchemaAnyAttribute_t2163251669 * XmlSchemaAttributeGroup_get_AnyAttribute_m3563871998 (XmlSchemaAttributeGroup_t718386952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C"  void XmlSchemaAttributeGroup_set_AnyAttribute_m88860845 (XmlSchemaAttributeGroup_t718386952 * __this, XmlSchemaAnyAttribute_t2163251669 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttributeGroup::get_QualifiedName()
extern "C"  XmlQualifiedName_t176365656 * XmlSchemaAttributeGroup_get_QualifiedName_m1369605062 (XmlSchemaAttributeGroup_t718386952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaAttributeGroup_SetParent_m127852395 (XmlSchemaAttributeGroup_t718386952 * __this, XmlSchemaObject_t2900481284 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroup::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAttributeGroup_Compile_m3916753275 (XmlSchemaAttributeGroup_t718386952 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroup::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAttributeGroup_Validate_m2122198502 (XmlSchemaAttributeGroup_t718386952 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchemaAttributeGroup::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAttributeGroup_t718386952 * XmlSchemaAttributeGroup_Read_m445209542 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
