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
#include "System_Data_System_Data_SqlTypes_SqlBoolean1393776170.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"

// System.Void System.Data.SqlTypes.SqlBoolean::.ctor(System.Boolean)
extern "C"  void SqlBoolean__ctor_m58488239 (SqlBoolean_t1393776170 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBoolean::.ctor(System.Int32)
extern "C"  void SqlBoolean__ctor_m2483430281 (SqlBoolean_t1393776170 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBoolean::.cctor()
extern "C"  void SqlBoolean__cctor_m3183612021 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlBoolean::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * SqlBoolean_System_Xml_Serialization_IXmlSerializable_GetSchema_m3706590130 (SqlBoolean_t1393776170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBoolean::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlBoolean_System_Xml_Serialization_IXmlSerializable_ReadXml_m860997606 (SqlBoolean_t1393776170 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBoolean::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlBoolean_System_Xml_Serialization_IXmlSerializable_WriteXml_m1945117181 (SqlBoolean_t1393776170 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlBoolean::get_ByteValue()
extern "C"  uint8_t SqlBoolean_get_ByteValue_m366828802 (SqlBoolean_t1393776170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_IsNull()
extern "C"  bool SqlBoolean_get_IsNull_m4221871260 (SqlBoolean_t1393776170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_IsTrue()
extern "C"  bool SqlBoolean_get_IsTrue_m96169699 (SqlBoolean_t1393776170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_Value()
extern "C"  bool SqlBoolean_get_Value_m1349248744 (SqlBoolean_t1393776170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBoolean::CompareTo(System.Object)
extern "C"  int32_t SqlBoolean_CompareTo_m2209005786 (SqlBoolean_t1393776170 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBoolean::CompareTo(System.Data.SqlTypes.SqlBoolean)
extern "C"  int32_t SqlBoolean_CompareTo_m890713760 (SqlBoolean_t1393776170 * __this, SqlBoolean_t1393776170  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::Equals(System.Object)
extern "C"  bool SqlBoolean_Equals_m2430553715 (SqlBoolean_t1393776170 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBoolean::GetHashCode()
extern "C"  int32_t SqlBoolean_GetHashCode_m3326825419 (SqlBoolean_t1393776170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlBoolean::ToString()
extern "C"  String_t* SqlBoolean_ToString_m1678518581 (SqlBoolean_t1393776170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlBoolean::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t176365656 * SqlBoolean_GetXsdType_m960271051 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::op_Equality(System.Data.SqlTypes.SqlBoolean,System.Data.SqlTypes.SqlBoolean)
extern "C"  SqlBoolean_t1393776170  SqlBoolean_op_Equality_m373738533 (Il2CppObject * __this /* static, unused */, SqlBoolean_t1393776170  ___x, SqlBoolean_t1393776170  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::op_Explicit(System.Data.SqlTypes.SqlBoolean)
extern "C"  bool SqlBoolean_op_Explicit_m383583784 (Il2CppObject * __this /* static, unused */, SqlBoolean_t1393776170  ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlBoolean_t1393776170;
struct SqlBoolean_t1393776170_marshaled_pinvoke;

extern "C" void SqlBoolean_t1393776170_marshal_pinvoke(const SqlBoolean_t1393776170& unmarshaled, SqlBoolean_t1393776170_marshaled_pinvoke& marshaled);
extern "C" void SqlBoolean_t1393776170_marshal_pinvoke_back(const SqlBoolean_t1393776170_marshaled_pinvoke& marshaled, SqlBoolean_t1393776170& unmarshaled);
extern "C" void SqlBoolean_t1393776170_marshal_pinvoke_cleanup(SqlBoolean_t1393776170_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlBoolean_t1393776170;
struct SqlBoolean_t1393776170_marshaled_com;

extern "C" void SqlBoolean_t1393776170_marshal_com(const SqlBoolean_t1393776170& unmarshaled, SqlBoolean_t1393776170_marshaled_com& marshaled);
extern "C" void SqlBoolean_t1393776170_marshal_com_back(const SqlBoolean_t1393776170_marshaled_com& marshaled, SqlBoolean_t1393776170& unmarshaled);
extern "C" void SqlBoolean_t1393776170_marshal_com_cleanup(SqlBoolean_t1393776170_marshaled_com& marshaled);
