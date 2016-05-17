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

// Mono.Xml.Schema.XsdWildcard
struct XsdWildcard_t323128660;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2900481284;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3827156353;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2900481284.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny3827156353.h"
#include "System_Xml_Mono_Xml_Schema_XsdWildcard323128660.h"

// System.Void Mono.Xml.Schema.XsdWildcard::.ctor(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XsdWildcard__ctor_m3279048073 (XsdWildcard_t323128660 * __this, XmlSchemaObject_t2900481284 * ___wildcard, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::Reset()
extern "C"  void XsdWildcard_Reset_m2924675830 (XsdWildcard_t323128660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::Compile(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XsdWildcard_Compile_m4203221961 (XsdWildcard_t323128660 * __this, String_t* ___nss, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ExamineAttributeWildcardIntersection(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  bool XsdWildcard_ExamineAttributeWildcardIntersection_m1346006443 (XsdWildcard_t323128660 * __this, XmlSchemaAny_t3827156353 * ___other, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XsdWildcard_ValidateWildcardAllowsNamespaceName_m3469531379 (XsdWildcard_t323128660 * __this, String_t* ___ns, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::ValidateWildcardSubset(Mono.Xml.Schema.XsdWildcard,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XsdWildcard_ValidateWildcardSubset_m2036236740 (XsdWildcard_t323128660 * __this, XsdWildcard_t323128660 * ___other, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ValidateWildcardSubset(Mono.Xml.Schema.XsdWildcard,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XsdWildcard_ValidateWildcardSubset_m2072467265 (XsdWildcard_t323128660 * __this, XsdWildcard_t323128660 * ___other, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
