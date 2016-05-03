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
#include "System_Data_System_Data_SqlTypes_SqlInt32924925200.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean1393776170.h"

// System.Void System.Data.SqlTypes.SqlInt32::.ctor(System.Int32)
extern "C"  void SqlInt32__ctor_m3235479587 (SqlInt32_t924925200 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt32::.cctor()
extern "C"  void SqlInt32__cctor_m3727331355 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlInt32::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * SqlInt32_System_Xml_Serialization_IXmlSerializable_GetSchema_m1013069388 (SqlInt32_t924925200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt32::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlInt32_System_Xml_Serialization_IXmlSerializable_ReadXml_m3116231552 (SqlInt32_t924925200 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt32::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlInt32_System_Xml_Serialization_IXmlSerializable_WriteXml_m3137892771 (SqlInt32_t924925200 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt32::get_IsNull()
extern "C"  bool SqlInt32_get_IsNull_m3042870978 (SqlInt32_t924925200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt32::get_Value()
extern "C"  int32_t SqlInt32_get_Value_m231095708 (SqlInt32_t924925200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt32::CompareTo(System.Object)
extern "C"  int32_t SqlInt32_CompareTo_m2820090752 (SqlInt32_t924925200 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt32::CompareSqlInt32(System.Data.SqlTypes.SqlInt32)
extern "C"  int32_t SqlInt32_CompareSqlInt32_m3675200987 (SqlInt32_t924925200 * __this, SqlInt32_t924925200  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt32::Equals(System.Object)
extern "C"  bool SqlInt32_Equals_m3490346765 (SqlInt32_t924925200 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt32::GetHashCode()
extern "C"  int32_t SqlInt32_GetHashCode_m1991709925 (SqlInt32_t924925200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlInt32::ToString()
extern "C"  String_t* SqlInt32_ToString_m861078171 (SqlInt32_t924925200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlInt32::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t176365656 * SqlInt32_GetXsdType_m1922034097 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt32::op_Equality(System.Data.SqlTypes.SqlInt32,System.Data.SqlTypes.SqlInt32)
extern "C"  SqlBoolean_t1393776170  SqlInt32_op_Equality_m1311992127 (Il2CppObject * __this /* static, unused */, SqlInt32_t924925200  ___x, SqlInt32_t924925200  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlInt32_t924925200;
struct SqlInt32_t924925200_marshaled_pinvoke;

extern "C" void SqlInt32_t924925200_marshal_pinvoke(const SqlInt32_t924925200& unmarshaled, SqlInt32_t924925200_marshaled_pinvoke& marshaled);
extern "C" void SqlInt32_t924925200_marshal_pinvoke_back(const SqlInt32_t924925200_marshaled_pinvoke& marshaled, SqlInt32_t924925200& unmarshaled);
extern "C" void SqlInt32_t924925200_marshal_pinvoke_cleanup(SqlInt32_t924925200_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlInt32_t924925200;
struct SqlInt32_t924925200_marshaled_com;

extern "C" void SqlInt32_t924925200_marshal_com(const SqlInt32_t924925200& unmarshaled, SqlInt32_t924925200_marshaled_com& marshaled);
extern "C" void SqlInt32_t924925200_marshal_com_back(const SqlInt32_t924925200_marshaled_com& marshaled, SqlInt32_t924925200& unmarshaled);
extern "C" void SqlInt32_t924925200_marshal_com_cleanup(SqlInt32_t924925200_marshaled_com& marshaled);
