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

// System.Xml.Schema.XmlSchemaRedefine
struct XmlSchemaRedefine_t1727340915;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t2238201602;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2900481284;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t2988870280;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2900481284.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader2988870280.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"

// System.Void System.Xml.Schema.XmlSchemaRedefine::.ctor()
extern "C"  void XmlSchemaRedefine__ctor_m1195818770 (XmlSchemaRedefine_t1727340915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaRedefine::get_Items()
extern "C"  XmlSchemaObjectCollection_t2238201602 * XmlSchemaRedefine_get_Items_m3199911068 (XmlSchemaRedefine_t1727340915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaRedefine::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaRedefine_SetParent_m636910294 (XmlSchemaRedefine_t1727340915 * __this, XmlSchemaObject_t2900481284 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaRedefine System.Xml.Schema.XmlSchemaRedefine::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaRedefine_t1727340915 * XmlSchemaRedefine_Read_m3865787548 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
