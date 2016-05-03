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

// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Exception
struct Exception_t1967233988;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2900481284;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2900481284.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSeverityType564452507.h"

// System.Void System.Xml.Schema.ValidationHandler::RaiseValidationEvent(System.Xml.Schema.ValidationEventHandler,System.Exception,System.String,System.Xml.Schema.XmlSchemaObject,System.Object,System.String,System.Xml.Schema.XmlSeverityType)
extern "C"  void ValidationHandler_RaiseValidationEvent_m959099307 (Il2CppObject * __this /* static, unused */, ValidationEventHandler_t2777264566 * ___handle, Exception_t1967233988 * ___innerException, String_t* ___message, XmlSchemaObject_t2900481284 * ___xsobj, Il2CppObject * ___sender, String_t* ___sourceUri, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
