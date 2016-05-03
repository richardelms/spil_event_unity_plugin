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

// System.Xml.XmlNodeReader
struct XmlNodeReader_t3079406212;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t142482116;
// System.Xml.XmlParserContext
struct XmlParserContext_t3629084577;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t886430410;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"
#include "System_Xml_System_Xml_XmlNodeReaderImpl142482116.h"
#include "System_Xml_System_Xml_XmlNodeType3966624571.h"
#include "System_Xml_System_Xml_ReadState457987651.h"
#include "System_Xml_System_Xml_XmlSpace3747690775.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Xml.XmlNodeReader::.ctor(System.Xml.XmlNode)
extern "C"  void XmlNodeReader__ctor_m1653620444 (XmlNodeReader_t3079406212 * __this, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::.ctor(System.Xml.XmlNodeReaderImpl,System.Boolean)
extern "C"  void XmlNodeReader__ctor_m1137952900 (XmlNodeReader_t3079406212 * __this, XmlNodeReaderImpl_t142482116 * ___entityContainer, bool ___insideAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlNodeReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t3629084577 * XmlNodeReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m2185915422 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlNodeReader::get_Current()
extern "C"  XmlReader_t4229084514 * XmlNodeReader_get_Current_m2692280064 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReader::get_AttributeCount()
extern "C"  int32_t XmlNodeReader_get_AttributeCount_m3245981987 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_BaseURI()
extern "C"  String_t* XmlNodeReader_get_BaseURI_m2376286476 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_CanResolveEntity()
extern "C"  bool XmlNodeReader_get_CanResolveEntity_m2018310069 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReader::get_Depth()
extern "C"  int32_t XmlNodeReader_get_Depth_m514654485 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_EOF()
extern "C"  bool XmlNodeReader_get_EOF_m146677096 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_HasAttributes()
extern "C"  bool XmlNodeReader_get_HasAttributes_m3043663101 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_HasValue()
extern "C"  bool XmlNodeReader_get_HasValue_m1599842989 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_IsDefault()
extern "C"  bool XmlNodeReader_get_IsDefault_m562542371 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_IsEmptyElement()
extern "C"  bool XmlNodeReader_get_IsEmptyElement_m4255390383 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_LocalName()
extern "C"  String_t* XmlNodeReader_get_LocalName_m3058507271 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Name()
extern "C"  String_t* XmlNodeReader_get_Name_m2922073308 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_NamespaceURI()
extern "C"  String_t* XmlNodeReader_get_NamespaceURI_m1106651874 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNodeReader::get_NameTable()
extern "C"  XmlNameTable_t3232213908 * XmlNodeReader_get_NameTable_m3490090086 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNodeReader::get_NodeType()
extern "C"  int32_t XmlNodeReader_get_NodeType_m3937776990 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Prefix()
extern "C"  String_t* XmlNodeReader_get_Prefix_m371055395 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlNodeReader::get_ReadState()
extern "C"  int32_t XmlNodeReader_get_ReadState_m281368515 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNodeReader::get_SchemaInfo()
extern "C"  Il2CppObject * XmlNodeReader_get_SchemaInfo_m1841033562 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Value()
extern "C"  String_t* XmlNodeReader_get_Value_m3194633250 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_XmlLang()
extern "C"  String_t* XmlNodeReader_get_XmlLang_m2379506774 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNodeReader::get_XmlSpace()
extern "C"  int32_t XmlNodeReader_get_XmlSpace_m2069928811 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::Close()
extern "C"  void XmlNodeReader_Close_m1445002133 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::GetAttribute(System.Int32)
extern "C"  String_t* XmlNodeReader_GetAttribute_m678442815 (XmlNodeReader_t3079406212 * __this, int32_t ___attributeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::GetAttribute(System.String)
extern "C"  String_t* XmlNodeReader_GetAttribute_m13589204 (XmlNodeReader_t3079406212 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlNodeReader_GetAttribute_m2283208720 (XmlNodeReader_t3079406212 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::LookupNamespace(System.String)
extern "C"  String_t* XmlNodeReader_LookupNamespace_m4268799495 (XmlNodeReader_t3079406212 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::MoveToAttribute(System.Int32)
extern "C"  void XmlNodeReader_MoveToAttribute_m1295569982 (XmlNodeReader_t3079406212 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlNodeReader_MoveToAttribute_m2648025401 (XmlNodeReader_t3079406212 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToElement()
extern "C"  bool XmlNodeReader_MoveToElement_m3186010565 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToFirstAttribute()
extern "C"  bool XmlNodeReader_MoveToFirstAttribute_m3097623045 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToNextAttribute()
extern "C"  bool XmlNodeReader_MoveToNextAttribute_m2298605170 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::Read()
extern "C"  bool XmlNodeReader_Read_m2311184643 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::ReadAttributeValue()
extern "C"  bool XmlNodeReader_ReadAttributeValue_m472840344 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::ReadString()
extern "C"  String_t* XmlNodeReader_ReadString_m4030290383 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::ResolveEntity()
extern "C"  void XmlNodeReader_ResolveEntity_m336924876 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::Skip()
extern "C"  void XmlNodeReader_Skip_m1889045668 (XmlNodeReader_t3079406212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
