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

// System.Xml.Schema.XmlSchemaSimpleTypeList
struct XmlSchemaSimpleTypeList_t3214959759;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1500525009;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2900481284;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t2988870280;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleType1500525009.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2900481284.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader2988870280.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::.ctor()
extern "C"  void XmlSchemaSimpleTypeList__ctor_m2115999670 (XmlSchemaSimpleTypeList_t3214959759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeList::get_ItemTypeName()
extern "C"  XmlQualifiedName_t176365656 * XmlSchemaSimpleTypeList_get_ItemTypeName_m2125876514 (XmlSchemaSimpleTypeList_t3214959759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::set_ItemTypeName(System.Xml.XmlQualifiedName)
extern "C"  void XmlSchemaSimpleTypeList_set_ItemTypeName_m2340184841 (XmlSchemaSimpleTypeList_t3214959759 * __this, XmlQualifiedName_t176365656 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeList::get_ItemType()
extern "C"  XmlSchemaSimpleType_t1500525009 * XmlSchemaSimpleTypeList_get_ItemType_m4195254174 (XmlSchemaSimpleTypeList_t3214959759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::set_ItemType(System.Xml.Schema.XmlSchemaSimpleType)
extern "C"  void XmlSchemaSimpleTypeList_set_ItemType_m2953079053 (XmlSchemaSimpleTypeList_t3214959759 * __this, XmlSchemaSimpleType_t1500525009 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeList::get_ValidatedListItemType()
extern "C"  Il2CppObject * XmlSchemaSimpleTypeList_get_ValidatedListItemType_m701359481 (XmlSchemaSimpleTypeList_t3214959759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleTypeList_SetParent_m3811637426 (XmlSchemaSimpleTypeList_t3214959759 * __this, XmlSchemaObject_t2900481284 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeList::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeList_Compile_m1444500756 (XmlSchemaSimpleTypeList_t3214959759 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeList::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeList_Validate_m2791781741 (XmlSchemaSimpleTypeList_t3214959759 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeList System.Xml.Schema.XmlSchemaSimpleTypeList::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleTypeList_t3214959759 * XmlSchemaSimpleTypeList_Read_m2328868500 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
