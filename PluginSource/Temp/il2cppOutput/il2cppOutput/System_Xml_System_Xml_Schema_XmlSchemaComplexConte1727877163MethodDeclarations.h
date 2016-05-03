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

// System.Xml.Schema.XmlSchemaComplexContentExtension
struct XmlSchemaComplexContentExtension_t1727877163;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3696384587;
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

// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::.ctor()
extern "C"  void XmlSchemaComplexContentExtension__ctor_m886437520 (XmlSchemaComplexContentExtension_t1727877163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexContentExtension::get_BaseTypeName()
extern "C"  XmlQualifiedName_t176365656 * XmlSchemaComplexContentExtension_get_BaseTypeName_m286354496 (XmlSchemaComplexContentExtension_t1727877163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexContentExtension::get_Particle()
extern "C"  XmlSchemaParticle_t3696384587 * XmlSchemaComplexContentExtension_get_Particle_m1576836143 (XmlSchemaComplexContentExtension_t1727877163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaComplexContentExtension::get_Attributes()
extern "C"  XmlSchemaObjectCollection_t2238201602 * XmlSchemaComplexContentExtension_get_Attributes_m81863273 (XmlSchemaComplexContentExtension_t1727877163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexContentExtension::get_AnyAttribute()
extern "C"  XmlSchemaAnyAttribute_t2163251669 * XmlSchemaComplexContentExtension_get_AnyAttribute_m2724443759 (XmlSchemaComplexContentExtension_t1727877163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C"  void XmlSchemaComplexContentExtension_set_AnyAttribute_m1254592288 (XmlSchemaComplexContentExtension_t1727877163 * __this, XmlSchemaAnyAttribute_t2163251669 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaComplexContentExtension::get_IsExtension()
extern "C"  bool XmlSchemaComplexContentExtension_get_IsExtension_m4179929650 (XmlSchemaComplexContentExtension_t1727877163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaComplexContentExtension_SetParent_m2081864216 (XmlSchemaComplexContentExtension_t1727877163 * __this, XmlSchemaObject_t2900481284 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContentExtension::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaComplexContentExtension_Compile_m795837162 (XmlSchemaComplexContentExtension_t1727877163 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexContentExtension::GetBaseTypeName()
extern "C"  XmlQualifiedName_t176365656 * XmlSchemaComplexContentExtension_GetBaseTypeName_m3759751533 (XmlSchemaComplexContentExtension_t1727877163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContentExtension::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaComplexContentExtension_Validate_m4158046807 (XmlSchemaComplexContentExtension_t1727877163 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexContentExtension System.Xml.Schema.XmlSchemaComplexContentExtension::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaComplexContentExtension_t1727877163 * XmlSchemaComplexContentExtension_Read_m3348703262 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
