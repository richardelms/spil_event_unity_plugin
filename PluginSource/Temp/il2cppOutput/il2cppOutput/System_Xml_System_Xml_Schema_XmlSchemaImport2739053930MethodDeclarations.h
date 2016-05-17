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

// System.Xml.Schema.XmlSchemaImport
struct XmlSchemaImport_t2739053930;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t1377046772;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t2988870280;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotation1377046772.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader2988870280.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"

// System.Void System.Xml.Schema.XmlSchemaImport::.ctor()
extern "C"  void XmlSchemaImport__ctor_m2829009467 (XmlSchemaImport_t2739053930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaImport::get_Namespace()
extern "C"  String_t* XmlSchemaImport_get_Namespace_m2628660334 (XmlSchemaImport_t2739053930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaImport::set_Annotation(System.Xml.Schema.XmlSchemaAnnotation)
extern "C"  void XmlSchemaImport_set_Annotation_m4037025293 (XmlSchemaImport_t2739053930 * __this, XmlSchemaAnnotation_t1377046772 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaImport System.Xml.Schema.XmlSchemaImport::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaImport_t2739053930 * XmlSchemaImport_Read_m2737228554 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
