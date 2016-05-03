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

// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t1700465963;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t2660249060;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaException2660249060.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Schema_XmlSeverityType564452507.h"

// System.Void System.Xml.Schema.ValidationEventArgs::.ctor(System.Xml.Schema.XmlSchemaException,System.String,System.Xml.Schema.XmlSeverityType)
extern "C"  void ValidationEventArgs__ctor_m1860798045 (ValidationEventArgs_t1700465963 * __this, XmlSchemaException_t2660249060 * ___ex, String_t* ___message, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::get_Exception()
extern "C"  XmlSchemaException_t2660249060 * ValidationEventArgs_get_Exception_m1711707009 (ValidationEventArgs_t1700465963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::get_Severity()
extern "C"  int32_t ValidationEventArgs_get_Severity_m3103623188 (ValidationEventArgs_t1700465963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
