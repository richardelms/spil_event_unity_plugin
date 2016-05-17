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
#include "System_Data_System_Data_SqlTypes_SqlByte1619413862.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean1393776170.h"

// System.Void System.Data.SqlTypes.SqlByte::.ctor(System.Byte)
extern "C"  void SqlByte__ctor_m352622573 (SqlByte_t1619413862 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlByte::.cctor()
extern "C"  void SqlByte__cctor_m3871037103 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlByte::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * SqlByte_System_Xml_Serialization_IXmlSerializable_GetSchema_m348418132 (SqlByte_t1619413862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlByte::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlByte_System_Xml_Serialization_IXmlSerializable_ReadXml_m4165116524 (SqlByte_t1619413862 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlByte::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlByte_System_Xml_Serialization_IXmlSerializable_WriteXml_m1293588535 (SqlByte_t1619413862 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlByte::get_IsNull()
extern "C"  bool SqlByte_get_IsNull_m2474467498 (SqlByte_t1619413862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlByte::get_Value()
extern "C"  uint8_t SqlByte_get_Value_m1948021784 (SqlByte_t1619413862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlByte::CompareTo(System.Object)
extern "C"  int32_t SqlByte_CompareTo_m116626268 (SqlByte_t1619413862 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlByte::CompareTo(System.Data.SqlTypes.SqlByte)
extern "C"  int32_t SqlByte_CompareTo_m67581984 (SqlByte_t1619413862 * __this, SqlByte_t1619413862  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlByte::Equals(System.Object)
extern "C"  bool SqlByte_Equals_m2535342629 (SqlByte_t1619413862 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlByte::GetHashCode()
extern "C"  int32_t SqlByte_GetHashCode_m1041038985 (SqlByte_t1619413862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlByte::ToString()
extern "C"  String_t* SqlByte_ToString_m1918002069 (SqlByte_t1619413862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlByte::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t176365656 * SqlByte_GetXsdType_m2289746047 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlByte::op_Equality(System.Data.SqlTypes.SqlByte,System.Data.SqlTypes.SqlByte)
extern "C"  SqlBoolean_t1393776170  SqlByte_op_Equality_m4159351565 (Il2CppObject * __this /* static, unused */, SqlByte_t1619413862  ___x, SqlByte_t1619413862  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlByte_t1619413862;
struct SqlByte_t1619413862_marshaled_pinvoke;

extern "C" void SqlByte_t1619413862_marshal_pinvoke(const SqlByte_t1619413862& unmarshaled, SqlByte_t1619413862_marshaled_pinvoke& marshaled);
extern "C" void SqlByte_t1619413862_marshal_pinvoke_back(const SqlByte_t1619413862_marshaled_pinvoke& marshaled, SqlByte_t1619413862& unmarshaled);
extern "C" void SqlByte_t1619413862_marshal_pinvoke_cleanup(SqlByte_t1619413862_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlByte_t1619413862;
struct SqlByte_t1619413862_marshaled_com;

extern "C" void SqlByte_t1619413862_marshal_com(const SqlByte_t1619413862& unmarshaled, SqlByte_t1619413862_marshaled_com& marshaled);
extern "C" void SqlByte_t1619413862_marshal_com_back(const SqlByte_t1619413862_marshaled_com& marshaled, SqlByte_t1619413862& unmarshaled);
extern "C" void SqlByte_t1619413862_marshal_com_cleanup(SqlByte_t1619413862_marshaled_com& marshaled);
