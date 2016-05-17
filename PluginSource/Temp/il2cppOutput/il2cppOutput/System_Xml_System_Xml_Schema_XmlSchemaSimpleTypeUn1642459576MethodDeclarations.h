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

// System.Xml.Schema.XmlSchemaSimpleTypeUnion
struct XmlSchemaSimpleTypeUnion_t1642459576;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t2238201602;
// System.Xml.XmlQualifiedName[]
struct XmlQualifiedNameU5BU5D_t781474633;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2900481284;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t2988870280;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2900481284.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader2988870280.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeUnion::.ctor()
extern "C"  void XmlSchemaSimpleTypeUnion__ctor_m383336099 (XmlSchemaSimpleTypeUnion_t1642459576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_BaseTypes()
extern "C"  XmlSchemaObjectCollection_t2238201602 * XmlSchemaSimpleTypeUnion_get_BaseTypes_m1523723083 (XmlSchemaSimpleTypeUnion_t1642459576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_MemberTypes()
extern "C"  XmlQualifiedNameU5BU5D_t781474633* XmlSchemaSimpleTypeUnion_get_MemberTypes_m507135532 (XmlSchemaSimpleTypeUnion_t1642459576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_ValidatedTypes()
extern "C"  ObjectU5BU5D_t11523773* XmlSchemaSimpleTypeUnion_get_ValidatedTypes_m2857961384 (XmlSchemaSimpleTypeUnion_t1642459576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeUnion::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleTypeUnion_SetParent_m622989797 (XmlSchemaSimpleTypeUnion_t1642459576 * __this, XmlSchemaObject_t2900481284 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeUnion::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeUnion_Compile_m2011977405 (XmlSchemaSimpleTypeUnion_t1642459576 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeUnion::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeUnion_Validate_m3203688676 (XmlSchemaSimpleTypeUnion_t1642459576 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeUnion System.Xml.Schema.XmlSchemaSimpleTypeUnion::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleTypeUnion_t1642459576 * XmlSchemaSimpleTypeUnion_Read_m1781101310 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
