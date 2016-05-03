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

// System.Data.SqlTypes.SqlBytes
struct SqlBytes_t918789869;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3827173367;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"

// System.Void System.Data.SqlTypes.SqlBytes::.ctor()
extern "C"  void SqlBytes__ctor_m905534613 (SqlBytes_t918789869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlBytes::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * SqlBytes_System_Xml_Serialization_IXmlSerializable_GetSchema_m1875656655 (SqlBytes_t918789869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBytes::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlBytes_System_Xml_Serialization_IXmlSerializable_ReadXml_m3796351555 (SqlBytes_t918789869 * __this, XmlReader_t4229084514 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBytes::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlBytes_System_Xml_Serialization_IXmlSerializable_WriteXml_m2746776384 (SqlBytes_t918789869 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBytes::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SqlBytes_System_Runtime_Serialization_ISerializable_GetObjectData_m1059878742 (SqlBytes_t918789869 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBytes System.Data.SqlTypes.SqlBytes::get_Null()
extern "C"  SqlBytes_t918789869 * SqlBytes_get_Null_m2934006727 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlBytes::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t176365656 * SqlBytes_GetXsdType_m1840034830 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
