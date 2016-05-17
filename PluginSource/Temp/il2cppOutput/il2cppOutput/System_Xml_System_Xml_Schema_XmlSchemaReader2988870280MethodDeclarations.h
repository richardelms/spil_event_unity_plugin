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

// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t2988870280;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlNodeType3966624571.h"
#include "System_Xml_System_Xml_ReadState457987651.h"
#include "System_Xml_System_Xml_XmlSpace3747690775.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Xml.Schema.XmlSchemaReader::.ctor(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaReader__ctor_m3907755405 (XmlSchemaReader_t2988870280 * __this, XmlReader_t4229084514 * ___reader, ValidationEventHandler_t2777264566 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_FullName()
extern "C"  String_t* XmlSchemaReader_get_FullName_m2119236167 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.Schema.XmlSchemaReader::get_Reader()
extern "C"  XmlReader_t4229084514 * XmlSchemaReader_get_Reader_m3775628518 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::RaiseInvalidElementError()
extern "C"  void XmlSchemaReader_RaiseInvalidElementError_m1814784638 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::ReadNextElement()
extern "C"  bool XmlSchemaReader_ReadNextElement_m1979189718 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::SkipToEnd()
extern "C"  void XmlSchemaReader_SkipToEnd_m3052962012 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::HasLineInfo()
extern "C"  bool XmlSchemaReader_HasLineInfo_m706787071 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_LineNumber()
extern "C"  int32_t XmlSchemaReader_get_LineNumber_m1268142987 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_LinePosition()
extern "C"  int32_t XmlSchemaReader_get_LinePosition_m689290539 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_AttributeCount()
extern "C"  int32_t XmlSchemaReader_get_AttributeCount_m1443043073 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_BaseURI()
extern "C"  String_t* XmlSchemaReader_get_BaseURI_m2428765072 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_CanResolveEntity()
extern "C"  bool XmlSchemaReader_get_CanResolveEntity_m1981832327 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_Depth()
extern "C"  int32_t XmlSchemaReader_get_Depth_m2333604215 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_EOF()
extern "C"  bool XmlSchemaReader_get_EOF_m1743604566 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_HasAttributes()
extern "C"  bool XmlSchemaReader_get_HasAttributes_m3320035691 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_HasValue()
extern "C"  bool XmlSchemaReader_get_HasValue_m2244084095 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_IsDefault()
extern "C"  bool XmlSchemaReader_get_IsDefault_m3354147473 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_IsEmptyElement()
extern "C"  bool XmlSchemaReader_get_IsEmptyElement_m4233006081 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Item(System.String)
extern "C"  String_t* XmlSchemaReader_get_Item_m2194498466 (XmlSchemaReader_t2988870280 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_LocalName()
extern "C"  String_t* XmlSchemaReader_get_LocalName_m1950830475 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Name()
extern "C"  String_t* XmlSchemaReader_get_Name_m2620471512 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_NamespaceURI()
extern "C"  String_t* XmlSchemaReader_get_NamespaceURI_m540957406 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaReader::get_NameTable()
extern "C"  XmlNameTable_t3232213908 * XmlSchemaReader_get_NameTable_m3659631046 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.Schema.XmlSchemaReader::get_NodeType()
extern "C"  int32_t XmlSchemaReader_get_NodeType_m1493339288 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Prefix()
extern "C"  String_t* XmlSchemaReader_get_Prefix_m2589505567 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.Schema.XmlSchemaReader::get_ReadState()
extern "C"  int32_t XmlSchemaReader_get_ReadState_m2516644153 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Value()
extern "C"  String_t* XmlSchemaReader_get_Value_m2434912166 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_XmlLang()
extern "C"  String_t* XmlSchemaReader_get_XmlLang_m2431985370 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.Schema.XmlSchemaReader::get_XmlSpace()
extern "C"  int32_t XmlSchemaReader_get_XmlSpace_m2943663089 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::Close()
extern "C"  void XmlSchemaReader_Close_m1642193907 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::Equals(System.Object)
extern "C"  bool XmlSchemaReader_Equals_m43688982 (XmlSchemaReader_t2988870280 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.Int32)
extern "C"  String_t* XmlSchemaReader_GetAttribute_m3262556987 (XmlSchemaReader_t2988870280 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.String)
extern "C"  String_t* XmlSchemaReader_GetAttribute_m2811717208 (XmlSchemaReader_t2988870280 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlSchemaReader_GetAttribute_m1938986132 (XmlSchemaReader_t2988870280 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::GetHashCode()
extern "C"  int32_t XmlSchemaReader_GetHashCode_m3787851182 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::LookupNamespace(System.String)
extern "C"  String_t* XmlSchemaReader_LookupNamespace_m2279918595 (XmlSchemaReader_t2988870280 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.Int32)
extern "C"  void XmlSchemaReader_MoveToAttribute_m974258716 (XmlSchemaReader_t2988870280 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlSchemaReader_MoveToAttribute_m1744159883 (XmlSchemaReader_t2988870280 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.Schema.XmlSchemaReader::MoveToContent()
extern "C"  int32_t XmlSchemaReader_MoveToContent_m1249486588 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToElement()
extern "C"  bool XmlSchemaReader_MoveToElement_m1682648371 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToFirstAttribute()
extern "C"  bool XmlSchemaReader_MoveToFirstAttribute_m3061145303 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToNextAttribute()
extern "C"  bool XmlSchemaReader_MoveToNextAttribute_m1604691808 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::Read()
extern "C"  bool XmlSchemaReader_Read_m197994965 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::ReadAttributeValue()
extern "C"  bool XmlSchemaReader_ReadAttributeValue_m450456042 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadElementString()
extern "C"  String_t* XmlSchemaReader_ReadElementString_m2337497045 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ReadEndElement()
extern "C"  void XmlSchemaReader_ReadEndElement_m273434974 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadInnerXml()
extern "C"  String_t* XmlSchemaReader_ReadInnerXml_m3066784347 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadOuterXml()
extern "C"  String_t* XmlSchemaReader_ReadOuterXml_m3987351382 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ReadStartElement()
extern "C"  void XmlSchemaReader_ReadStartElement_m3827713719 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ReadStartElement(System.String,System.String)
extern "C"  void XmlSchemaReader_ReadStartElement_m2774112935 (XmlSchemaReader_t2988870280 * __this, String_t* ___localname, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadString()
extern "C"  String_t* XmlSchemaReader_ReadString_m1953773259 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ResolveEntity()
extern "C"  void XmlSchemaReader_ResolveEntity_m3582901034 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::Skip()
extern "C"  void XmlSchemaReader_Skip_m3003785350 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ToString()
extern "C"  String_t* XmlSchemaReader_ToString_m1982196592 (XmlSchemaReader_t2988870280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
