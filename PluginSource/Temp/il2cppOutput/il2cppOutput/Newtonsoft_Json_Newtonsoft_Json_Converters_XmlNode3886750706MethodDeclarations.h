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

// Newtonsoft.Json.Converters.XmlNodeWrapper
struct XmlNodeWrapper_t3886750706;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Converters.IXmlNode>
struct IList_1_t2480608002;
// Newtonsoft.Json.Converters.IXmlNode
struct IXmlNode_t314115688;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"
#include "System_Xml_System_Xml_XmlNodeType3966624571.h"
#include "mscorlib_System_String968488902.h"

// System.Void Newtonsoft.Json.Converters.XmlNodeWrapper::.ctor(System.Xml.XmlNode)
extern "C"  void XmlNodeWrapper__ctor_m695491741 (XmlNodeWrapper_t3886750706 * __this, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.XmlNodeWrapper::get_WrappedNode()
extern "C"  Il2CppObject * XmlNodeWrapper_get_WrappedNode_m201567889 (XmlNodeWrapper_t3886750706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Newtonsoft.Json.Converters.XmlNodeWrapper::get_NodeType()
extern "C"  int32_t XmlNodeWrapper_get_NodeType_m3993369459 (XmlNodeWrapper_t3886750706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Converters.XmlNodeWrapper::get_LocalName()
extern "C"  String_t* XmlNodeWrapper_get_LocalName_m3654672750 (XmlNodeWrapper_t3886750706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::get_ChildNodes()
extern "C"  Il2CppObject* XmlNodeWrapper_get_ChildNodes_m3671120106 (XmlNodeWrapper_t3886750706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::WrapNode(System.Xml.XmlNode)
extern "C"  Il2CppObject * XmlNodeWrapper_WrapNode_m1375926288 (Il2CppObject * __this /* static, unused */, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::get_Attributes()
extern "C"  Il2CppObject* XmlNodeWrapper_get_Attributes_m4083774156 (XmlNodeWrapper_t3886750706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::get_ParentNode()
extern "C"  Il2CppObject * XmlNodeWrapper_get_ParentNode_m4169834204 (XmlNodeWrapper_t3886750706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Converters.XmlNodeWrapper::get_Value()
extern "C"  String_t* XmlNodeWrapper_get_Value_m674417417 (XmlNodeWrapper_t3886750706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeWrapper::set_Value(System.String)
extern "C"  void XmlNodeWrapper_set_Value_m2957483216 (XmlNodeWrapper_t3886750706 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode)
extern "C"  Il2CppObject * XmlNodeWrapper_AppendChild_m3457685439 (XmlNodeWrapper_t3886750706 * __this, Il2CppObject * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Converters.XmlNodeWrapper::get_NamespaceUri()
extern "C"  String_t* XmlNodeWrapper_get_NamespaceUri_m1783651867 (XmlNodeWrapper_t3886750706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
