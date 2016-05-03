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

// System.Xml.Schema.XmlSchemaDocumentation
struct XmlSchemaDocumentation_t2342964303;
// System.Xml.XmlNode[]
struct XmlNodeU5BU5D_t1808339196;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t2988870280;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader2988870280.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"

// System.Void System.Xml.Schema.XmlSchemaDocumentation::.ctor()
extern "C"  void XmlSchemaDocumentation__ctor_m2359358636 (XmlSchemaDocumentation_t2342964303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaDocumentation::get_Markup()
extern "C"  XmlNodeU5BU5D_t1808339196* XmlSchemaDocumentation_get_Markup_m1128062037 (XmlSchemaDocumentation_t2342964303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaDocumentation::set_Markup(System.Xml.XmlNode[])
extern "C"  void XmlSchemaDocumentation_set_Markup_m12182200 (XmlSchemaDocumentation_t2342964303 * __this, XmlNodeU5BU5D_t1808339196* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDocumentation System.Xml.Schema.XmlSchemaDocumentation::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.Boolean&)
extern "C"  XmlSchemaDocumentation_t2342964303 * XmlSchemaDocumentation_Read_m2371864525 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, bool* ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
