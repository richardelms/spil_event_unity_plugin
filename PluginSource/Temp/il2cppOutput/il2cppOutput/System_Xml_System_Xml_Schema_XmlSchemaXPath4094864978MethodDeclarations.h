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

// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t4094864978;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t36593264;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t2988870280;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader2988870280.h"

// System.Void System.Xml.Schema.XmlSchemaXPath::.ctor()
extern "C"  void XmlSchemaXPath__ctor_m3400589577 (XmlSchemaXPath_t4094864978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaXPath::get_XPath()
extern "C"  String_t* XmlSchemaXPath_get_XPath_m2946469112 (XmlSchemaXPath_t4094864978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaXPath::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaXPath_Compile_m3472859683 (XmlSchemaXPath_t4094864978 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath[] System.Xml.Schema.XmlSchemaXPath::get_CompiledExpression()
extern "C"  XsdIdentityPathU5BU5D_t36593264* XmlSchemaXPath_get_CompiledExpression_m1070271229 (XmlSchemaXPath_t4094864978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParseExpression(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaXPath_ParseExpression_m2043180545 (XmlSchemaXPath_t4094864978 * __this, String_t* ___xpath, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParsePath(System.String,System.Int32,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaXPath_ParsePath_m2782280958 (XmlSchemaXPath_t4094864978 * __this, String_t* ___xpath, int32_t ___pos, ArrayList_t2121638921 * ___paths, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParseStep(System.String,System.Int32,System.Collections.ArrayList,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaXPath_ParseStep_m1604962518 (XmlSchemaXPath_t4094864978 * __this, String_t* ___xpath, int32_t ___pos, ArrayList_t2121638921 * ___steps, ArrayList_t2121638921 * ___paths, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaXPath::SkipWhitespace(System.String,System.Int32)
extern "C"  int32_t XmlSchemaXPath_SkipWhitespace_m2356894766 (XmlSchemaXPath_t4094864978 * __this, String_t* ___xpath, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaXPath System.Xml.Schema.XmlSchemaXPath::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.String)
extern "C"  XmlSchemaXPath_t4094864978 * XmlSchemaXPath_Read_m523859194 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
