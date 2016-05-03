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

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t2163251669;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t2988870280;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnyAttribute2163251669.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader2988870280.h"

// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::.ctor()
extern "C"  void XmlSchemaAnyAttribute__ctor_m931168880 (XmlSchemaAnyAttribute_t2163251669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_Namespace()
extern "C"  String_t* XmlSchemaAnyAttribute_get_Namespace_m1933652323 (XmlSchemaAnyAttribute_t2163251669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAnyAttribute_Compile_m2801274062 (XmlSchemaAnyAttribute_t2163251669 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAnyAttribute_Validate_m1902081267 (XmlSchemaAnyAttribute_t2163251669 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardSubset(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAnyAttribute_ValidateWildcardSubset_m550143286 (XmlSchemaAnyAttribute_t2163251669 * __this, XmlSchemaAnyAttribute_t2163251669 * ___other, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.XmlSchema)
extern "C"  bool XmlSchemaAnyAttribute_ValidateWildcardAllowsNamespaceName_m2705546027 (XmlSchemaAnyAttribute_t2163251669 * __this, String_t* ___ns, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAnyAttribute::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAnyAttribute_t2163251669 * XmlSchemaAnyAttribute_Read_m1540580064 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
