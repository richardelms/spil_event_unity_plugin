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

// Newtonsoft.Json.Converters.XmlDocumentWrapper
struct XmlDocumentWrapper_t1991577145;
// System.Xml.XmlDocument
struct XmlDocument_t3705263098;
// Newtonsoft.Json.Converters.IXmlNode
struct IXmlNode_t314115688;
// System.String
struct String_t;
// Newtonsoft.Json.Converters.IXmlElement
struct IXmlElement_t3875231814;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlDocument3705263098.h"
#include "mscorlib_System_String968488902.h"

// System.Void Newtonsoft.Json.Converters.XmlDocumentWrapper::.ctor(System.Xml.XmlDocument)
extern "C"  void XmlDocumentWrapper__ctor_m3807224573 (XmlDocumentWrapper_t1991577145 * __this, XmlDocument_t3705263098 * ___document, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateComment(System.String)
extern "C"  Il2CppObject * XmlDocumentWrapper_CreateComment_m3414585675 (XmlDocumentWrapper_t1991577145 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateTextNode(System.String)
extern "C"  Il2CppObject * XmlDocumentWrapper_CreateTextNode_m3824769577 (XmlDocumentWrapper_t1991577145 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateCDataSection(System.String)
extern "C"  Il2CppObject * XmlDocumentWrapper_CreateCDataSection_m4204787936 (XmlDocumentWrapper_t1991577145 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateWhitespace(System.String)
extern "C"  Il2CppObject * XmlDocumentWrapper_CreateWhitespace_m46352635 (XmlDocumentWrapper_t1991577145 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateSignificantWhitespace(System.String)
extern "C"  Il2CppObject * XmlDocumentWrapper_CreateSignificantWhitespace_m849309114 (XmlDocumentWrapper_t1991577145 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateXmlDeclaration(System.String,System.String,System.String)
extern "C"  Il2CppObject * XmlDocumentWrapper_CreateXmlDeclaration_m1031872589 (XmlDocumentWrapper_t1991577145 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateXmlDocumentType(System.String,System.String,System.String,System.String)
extern "C"  Il2CppObject * XmlDocumentWrapper_CreateXmlDocumentType_m1961063058 (XmlDocumentWrapper_t1991577145 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateProcessingInstruction(System.String,System.String)
extern "C"  Il2CppObject * XmlDocumentWrapper_CreateProcessingInstruction_m956434155 (XmlDocumentWrapper_t1991577145 * __this, String_t* ___target, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateElement(System.String)
extern "C"  Il2CppObject * XmlDocumentWrapper_CreateElement_m3691878912 (XmlDocumentWrapper_t1991577145 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateElement(System.String,System.String)
extern "C"  Il2CppObject * XmlDocumentWrapper_CreateElement_m1337016892 (XmlDocumentWrapper_t1991577145 * __this, String_t* ___qualifiedName, String_t* ___namespaceUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateAttribute(System.String,System.String)
extern "C"  Il2CppObject * XmlDocumentWrapper_CreateAttribute_m4080319722 (XmlDocumentWrapper_t1991577145 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateAttribute(System.String,System.String,System.String)
extern "C"  Il2CppObject * XmlDocumentWrapper_CreateAttribute_m2638480294 (XmlDocumentWrapper_t1991577145 * __this, String_t* ___qualifiedName, String_t* ___namespaceUri, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XmlDocumentWrapper::get_DocumentElement()
extern "C"  Il2CppObject * XmlDocumentWrapper_get_DocumentElement_m3932296602 (XmlDocumentWrapper_t1991577145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
