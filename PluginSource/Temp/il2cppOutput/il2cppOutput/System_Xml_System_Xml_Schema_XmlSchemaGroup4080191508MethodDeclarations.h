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

// System.Xml.Schema.XmlSchemaGroup
struct XmlSchemaGroup_t4080191508;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t3990058885;
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
#include "System_Xml_System_Xml_Schema_XmlSchemaGroupBase3990058885.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2900481284.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader2988870280.h"

// System.Void System.Xml.Schema.XmlSchemaGroup::.ctor()
extern "C"  void XmlSchemaGroup__ctor_m457482631 (XmlSchemaGroup_t4080191508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaGroup::get_Name()
extern "C"  String_t* XmlSchemaGroup_get_Name_m3067474388 (XmlSchemaGroup_t4080191508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroupBase System.Xml.Schema.XmlSchemaGroup::get_Particle()
extern "C"  XmlSchemaGroupBase_t3990058885 * XmlSchemaGroup_get_Particle_m4108333646 (XmlSchemaGroup_t4080191508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroup::set_Particle(System.Xml.Schema.XmlSchemaGroupBase)
extern "C"  void XmlSchemaGroup_set_Particle_m803346225 (XmlSchemaGroup_t4080191508 * __this, XmlSchemaGroupBase_t3990058885 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroup::get_QualifiedName()
extern "C"  XmlQualifiedName_t176365656 * XmlSchemaGroup_get_QualifiedName_m2583472886 (XmlSchemaGroup_t4080191508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroup::get_IsCircularDefinition()
extern "C"  bool XmlSchemaGroup_get_IsCircularDefinition_m2043379466 (XmlSchemaGroup_t4080191508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroup::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaGroup_SetParent_m1696558465 (XmlSchemaGroup_t4080191508 * __this, XmlSchemaObject_t2900481284 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroup::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaGroup_Compile_m2739248161 (XmlSchemaGroup_t4080191508 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroup::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaGroup_Validate_m4274245632 (XmlSchemaGroup_t4080191508 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroup System.Xml.Schema.XmlSchemaGroup::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaGroup_t4080191508 * XmlSchemaGroup_Read_m3787358590 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
