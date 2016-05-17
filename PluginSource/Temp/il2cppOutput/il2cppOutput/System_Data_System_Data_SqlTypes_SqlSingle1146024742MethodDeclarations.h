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

// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3827173367;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlSingle1146024742.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean1393776170.h"

// System.Void System.Data.SqlTypes.SqlSingle::.ctor(System.Single)
extern "C"  void SqlSingle__ctor_m2532088237 (SqlSingle_t1146024742 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlSingle::.cctor()
extern "C"  void SqlSingle__cctor_m847238831 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlSingle::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * SqlSingle_System_Xml_Serialization_IXmlSerializable_GetSchema_m350481620 (SqlSingle_t1146024742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlSingle::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlSingle_System_Xml_Serialization_IXmlSerializable_ReadXml_m3320717932 (SqlSingle_t1146024742 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlSingle::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlSingle_System_Xml_Serialization_IXmlSerializable_WriteXml_m887035959 (SqlSingle_t1146024742 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlSingle::get_IsNull()
extern "C"  bool SqlSingle_get_IsNull_m2173842986 (SqlSingle_t1146024742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Data.SqlTypes.SqlSingle::get_Value()
extern "C"  float SqlSingle_get_Value_m2788630168 (SqlSingle_t1146024742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlSingle::CompareTo(System.Object)
extern "C"  int32_t SqlSingle_CompareTo_m3981371996 (SqlSingle_t1146024742 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlSingle::CompareSqlSingle(System.Data.SqlTypes.SqlSingle)
extern "C"  int32_t SqlSingle_CompareSqlSingle_m695074531 (SqlSingle_t1146024742 * __this, SqlSingle_t1146024742  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlSingle::Equals(System.Object)
extern "C"  bool SqlSingle_Equals_m2137103525 (SqlSingle_t1146024742 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlSingle::GetHashCode()
extern "C"  int32_t SqlSingle_GetHashCode_m3747743625 (SqlSingle_t1146024742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlSingle::ToString()
extern "C"  String_t* SqlSingle_ToString_m3996710613 (SqlSingle_t1146024742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlSingle::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t176365656 * SqlSingle_GetXsdType_m1267243327 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlSingle::op_Equality(System.Data.SqlTypes.SqlSingle,System.Data.SqlTypes.SqlSingle)
extern "C"  SqlBoolean_t1393776170  SqlSingle_op_Equality_m3849170253 (Il2CppObject * __this /* static, unused */, SqlSingle_t1146024742  ___x, SqlSingle_t1146024742  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlSingle_t1146024742;
struct SqlSingle_t1146024742_marshaled_pinvoke;

extern "C" void SqlSingle_t1146024742_marshal_pinvoke(const SqlSingle_t1146024742& unmarshaled, SqlSingle_t1146024742_marshaled_pinvoke& marshaled);
extern "C" void SqlSingle_t1146024742_marshal_pinvoke_back(const SqlSingle_t1146024742_marshaled_pinvoke& marshaled, SqlSingle_t1146024742& unmarshaled);
extern "C" void SqlSingle_t1146024742_marshal_pinvoke_cleanup(SqlSingle_t1146024742_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlSingle_t1146024742;
struct SqlSingle_t1146024742_marshaled_com;

extern "C" void SqlSingle_t1146024742_marshal_com(const SqlSingle_t1146024742& unmarshaled, SqlSingle_t1146024742_marshaled_com& marshaled);
extern "C" void SqlSingle_t1146024742_marshal_com_back(const SqlSingle_t1146024742_marshaled_com& marshaled, SqlSingle_t1146024742& unmarshaled);
extern "C" void SqlSingle_t1146024742_marshal_com_cleanup(SqlSingle_t1146024742_marshaled_com& marshaled);
