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

// System.Xml.XmlWriter
struct XmlWriter_t89522450;
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t3992467285;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t4229084514;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlSpace3747690775.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Xml.XmlWriter::.ctor()
extern "C"  void XmlWriter__ctor_m2911908785 (XmlWriter_t89522450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C"  void XmlWriter_System_IDisposable_Dispose_m3193799822 (XmlWriter_t89522450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWriterSettings System.Xml.XmlWriter::get_Settings()
extern "C"  XmlWriterSettings_t3992467285 * XmlWriter_get_Settings_m4235714649 (XmlWriter_t89522450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C"  String_t* XmlWriter_get_XmlLang_m4143028872 (XmlWriter_t89522450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C"  int32_t XmlWriter_get_XmlSpace_m767449337 (XmlWriter_t89522450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C"  void XmlWriter_Dispose_m1200530597 (XmlWriter_t89522450 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteAttribute_m1597931729 (XmlWriter_t89522450 * __this, XmlReader_t4229084514 * ___reader, bool ___defattr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m1129629501 (XmlWriter_t89522450 * __this, String_t* ___localName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m1630990645 (XmlWriter_t89522450 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String)
extern "C"  void XmlWriter_WriteElementString_m764708381 (XmlWriter_t89522450 * __this, String_t* ___localName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteQualifiedName(System.String,System.String)
extern "C"  void XmlWriter_WriteQualifiedName_m2599870787 (XmlWriter_t89522450 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteQualifiedNameInternal(System.String,System.String)
extern "C"  void XmlWriter_WriteQualifiedNameInternal_m2020252038 (XmlWriter_t89522450 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteNode_m817874929 (XmlWriter_t89522450 * __this, XmlReader_t4229084514 * ___reader, bool ___defattr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String)
extern "C"  void XmlWriter_WriteStartAttribute_m904857238 (XmlWriter_t89522450 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String)
extern "C"  void XmlWriter_WriteStartElement_m4138955962 (XmlWriter_t89522450 * __this, String_t* ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
