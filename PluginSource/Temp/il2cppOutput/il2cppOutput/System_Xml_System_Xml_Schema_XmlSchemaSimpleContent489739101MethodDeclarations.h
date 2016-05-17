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

// System.Xml.Schema.XmlSchemaSimpleContentExtension
struct XmlSchemaSimpleContentExtension_t489739101;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t2238201602;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t2163251669;
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

// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::.ctor()
extern "C"  void XmlSchemaSimpleContentExtension__ctor_m91409320 (XmlSchemaSimpleContentExtension_t489739101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::get_BaseTypeName()
extern "C"  XmlQualifiedName_t176365656 * XmlSchemaSimpleContentExtension_get_BaseTypeName_m414359854 (XmlSchemaSimpleContentExtension_t489739101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleContentExtension::get_Attributes()
extern "C"  XmlSchemaObjectCollection_t2238201602 * XmlSchemaSimpleContentExtension_get_Attributes_m310061703 (XmlSchemaSimpleContentExtension_t489739101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaSimpleContentExtension::get_AnyAttribute()
extern "C"  XmlSchemaAnyAttribute_t2163251669 * XmlSchemaSimpleContentExtension_get_AnyAttribute_m2242692563 (XmlSchemaSimpleContentExtension_t489739101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C"  void XmlSchemaSimpleContentExtension_set_AnyAttribute_m1362095672 (XmlSchemaSimpleContentExtension_t489739101 * __this, XmlSchemaAnyAttribute_t2163251669 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleContentExtension::get_IsExtension()
extern "C"  bool XmlSchemaSimpleContentExtension_get_IsExtension_m3772222554 (XmlSchemaSimpleContentExtension_t489739101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleContentExtension_SetParent_m4178162688 (XmlSchemaSimpleContentExtension_t489739101 * __this, XmlSchemaObject_t2900481284 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentExtension::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleContentExtension_Compile_m1533196678 (XmlSchemaSimpleContentExtension_t489739101 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::GetBaseTypeName()
extern "C"  XmlQualifiedName_t176365656 * XmlSchemaSimpleContentExtension_GetBaseTypeName_m438744767 (XmlSchemaSimpleContentExtension_t489739101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentExtension::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleContentExtension_Validate_m1246388027 (XmlSchemaSimpleContentExtension_t489739101 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleContentExtension System.Xml.Schema.XmlSchemaSimpleContentExtension::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleContentExtension_t489739101 * XmlSchemaSimpleContentExtension_Read_m3857222320 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
