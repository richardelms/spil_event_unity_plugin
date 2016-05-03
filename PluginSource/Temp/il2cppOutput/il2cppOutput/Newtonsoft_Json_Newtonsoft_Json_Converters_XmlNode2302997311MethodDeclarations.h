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

// Newtonsoft.Json.Converters.XmlNodeConverter
struct XmlNodeConverter_t2302997311;
// System.String
struct String_t;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// Newtonsoft.Json.Converters.IXmlNode
struct IXmlNode_t314115688;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1861067185;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.Type
struct Type_t;
// Newtonsoft.Json.Converters.IXmlDocument
struct IXmlDocument_t2884133505;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// Newtonsoft.Json.Converters.IXmlElement
struct IXmlElement_t3875231814;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Converters.IXmlNode>
struct IEnumerable_1_t3186270044;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_Object837106420.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "System_Xml_System_Xml_XmlNamespaceManager1861067185.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"

// System.String Newtonsoft.Json.Converters.XmlNodeConverter::get_DeserializeRootElementName()
extern "C"  String_t* XmlNodeConverter_get_DeserializeRootElementName_m1632217469 (XmlNodeConverter_t2302997311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::get_WriteArrayAttribute()
extern "C"  bool XmlNodeConverter_get_WriteArrayAttribute_m882412660 (XmlNodeConverter_t2302997311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::get_OmitRootObject()
extern "C"  bool XmlNodeConverter_get_OmitRootObject_m289230106 (XmlNodeConverter_t2302997311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void XmlNodeConverter_WriteJson_m1843475809 (XmlNodeConverter_t2302997311 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeConverter::WrapXml(System.Object)
extern "C"  Il2CppObject * XmlNodeConverter_WrapXml_m3815660729 (XmlNodeConverter_t2302997311 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::PushParentNamespaces(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
extern "C"  void XmlNodeConverter_PushParentNamespaces_m388026340 (XmlNodeConverter_t2302997311 * __this, Il2CppObject * ___node, XmlNamespaceManager_t1861067185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::ResolveFullName(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
extern "C"  String_t* XmlNodeConverter_ResolveFullName_m647861233 (XmlNodeConverter_t2302997311 * __this, Il2CppObject * ___node, XmlNamespaceManager_t1861067185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::GetPropertyName(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
extern "C"  String_t* XmlNodeConverter_GetPropertyName_m3455925409 (XmlNodeConverter_t2302997311 * __this, Il2CppObject * ___node, XmlNamespaceManager_t1861067185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsArray(Newtonsoft.Json.Converters.IXmlNode)
extern "C"  bool XmlNodeConverter_IsArray_m777231762 (XmlNodeConverter_t2302997311 * __this, Il2CppObject * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::SerializeGroupedNodes(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
extern "C"  void XmlNodeConverter_SerializeGroupedNodes_m2313009492 (XmlNodeConverter_t2302997311 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___node, XmlNamespaceManager_t1861067185 * ___manager, bool ___writePropertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::SerializeNode(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
extern "C"  void XmlNodeConverter_SerializeNode_m1166356259 (XmlNodeConverter_t2302997311 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___node, XmlNamespaceManager_t1861067185 * ___manager, bool ___writePropertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.XmlNodeConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * XmlNodeConverter_ReadJson_m851507996 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, Il2CppObject * ___existingValue, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::DeserializeValue(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,System.String,Newtonsoft.Json.Converters.IXmlNode)
extern "C"  void XmlNodeConverter_DeserializeValue_m2862622565 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___document, XmlNamespaceManager_t1861067185 * ___manager, String_t* ___propertyName, Il2CppObject * ___currentNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::ReadElement(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager)
extern "C"  void XmlNodeConverter_ReadElement_m4294952525 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___document, Il2CppObject * ___currentNode, String_t* ___propertyName, XmlNamespaceManager_t1861067185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateElement(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void XmlNodeConverter_CreateElement_m793302632 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___document, Il2CppObject * ___currentNode, String_t* ___elementName, XmlNamespaceManager_t1861067185 * ___manager, String_t* ___elementPrefix, Dictionary_2_t2606186806 * ___attributeNameValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::AddAttribute(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager,System.String)
extern "C"  void XmlNodeConverter_AddAttribute_m3975688084 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, Il2CppObject * ___document, Il2CppObject * ___currentNode, String_t* ___attributeName, XmlNamespaceManager_t1861067185 * ___manager, String_t* ___attributePrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::ConvertTokenToXmlValue(Newtonsoft.Json.JsonReader)
extern "C"  String_t* XmlNodeConverter_ConvertTokenToXmlValue_m803273161 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::ReadArrayElements(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.String,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
extern "C"  void XmlNodeConverter_ReadArrayElements_m2920788569 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___document, String_t* ___propertyName, Il2CppObject * ___currentNode, XmlNamespaceManager_t1861067185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::AddJsonArrayAttribute(Newtonsoft.Json.Converters.IXmlElement,Newtonsoft.Json.Converters.IXmlDocument)
extern "C"  void XmlNodeConverter_AddJsonArrayAttribute_m2961777266 (XmlNodeConverter_t2302997311 * __this, Il2CppObject * ___element, Il2CppObject * ___document, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Newtonsoft.Json.Converters.XmlNodeConverter::ReadAttributeElements(Newtonsoft.Json.JsonReader,System.Xml.XmlNamespaceManager)
extern "C"  Dictionary_2_t2606186806 * XmlNodeConverter_ReadAttributeElements_m3362308193 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, XmlNamespaceManager_t1861067185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateInstruction(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String)
extern "C"  void XmlNodeConverter_CreateInstruction_m3173250738 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___document, Il2CppObject * ___currentNode, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateDocumentType(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode)
extern "C"  void XmlNodeConverter_CreateDocumentType_m2931604405 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___document, Il2CppObject * ___currentNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XmlNodeConverter::CreateElement(System.String,Newtonsoft.Json.Converters.IXmlDocument,System.String,System.Xml.XmlNamespaceManager)
extern "C"  Il2CppObject * XmlNodeConverter_CreateElement_m548935092 (XmlNodeConverter_t2302997311 * __this, String_t* ___elementName, Il2CppObject * ___document, String_t* ___elementPrefix, XmlNamespaceManager_t1861067185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::DeserializeNode(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,Newtonsoft.Json.Converters.IXmlNode)
extern "C"  void XmlNodeConverter_DeserializeNode_m2855307322 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___document, XmlNamespaceManager_t1861067185 * ___manager, Il2CppObject * ___currentNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsNamespaceAttribute(System.String,System.String&)
extern "C"  bool XmlNodeConverter_IsNamespaceAttribute_m1404770688 (XmlNodeConverter_t2302997311 * __this, String_t* ___attributeName, String_t** ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeConverter::ValueAttributes(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Converters.IXmlNode>)
extern "C"  Il2CppObject* XmlNodeConverter_ValueAttributes_m4250260646 (XmlNodeConverter_t2302997311 * __this, Il2CppObject* ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::CanConvert(System.Type)
extern "C"  bool XmlNodeConverter_CanConvert_m3942419855 (XmlNodeConverter_t2302997311 * __this, Type_t * ___valueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::.ctor()
extern "C"  void XmlNodeConverter__ctor_m821616659 (XmlNodeConverter_t2302997311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
