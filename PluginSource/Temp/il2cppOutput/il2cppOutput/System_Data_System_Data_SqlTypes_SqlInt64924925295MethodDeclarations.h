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
#include "System_Data_System_Data_SqlTypes_SqlInt64924925295.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean1393776170.h"

// System.Void System.Data.SqlTypes.SqlInt64::.ctor(System.Int64)
extern "C"  void SqlInt64__ctor_m2893663397 (SqlInt64_t924925295 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt64::.cctor()
extern "C"  void SqlInt64__cctor_m520676794 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlInt64::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * SqlInt64_System_Xml_Serialization_IXmlSerializable_GetSchema_m2945120013 (SqlInt64_t924925295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt64::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlInt64_System_Xml_Serialization_IXmlSerializable_ReadXml_m2309643777 (SqlInt64_t924925295 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt64::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlInt64_System_Xml_Serialization_IXmlSerializable_WriteXml_m3903475522 (SqlInt64_t924925295 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt64::get_IsNull()
extern "C"  bool SqlInt64_get_IsNull_m231404769 (SqlInt64_t924925295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.SqlTypes.SqlInt64::get_Value()
extern "C"  int64_t SqlInt64_get_Value_m885991902 (SqlInt64_t924925295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt64::CompareTo(System.Object)
extern "C"  int32_t SqlInt64_CompareTo_m3979109151 (SqlInt64_t924925295 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt64::CompareSqlInt64(System.Data.SqlTypes.SqlInt64)
extern "C"  int32_t SqlInt64_CompareSqlInt64_m956760956 (SqlInt64_t924925295 * __this, SqlInt64_t924925295  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt64::Equals(System.Object)
extern "C"  bool SqlInt64_Equals_m1419672526 (SqlInt64_t924925295 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt64::GetHashCode()
extern "C"  int32_t SqlInt64_GetHashCode_m735603366 (SqlInt64_t924925295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlInt64::ToString()
extern "C"  String_t* SqlInt64_ToString_m3052563578 (SqlInt64_t924925295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlInt64::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t176365656 * SqlInt64_GetXsdType_m3560445840 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt64::op_Equality(System.Data.SqlTypes.SqlInt64,System.Data.SqlTypes.SqlInt64)
extern "C"  SqlBoolean_t1393776170  SqlInt64_op_Equality_m96273952 (Il2CppObject * __this /* static, unused */, SqlInt64_t924925295  ___x, SqlInt64_t924925295  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlInt64_t924925295;
struct SqlInt64_t924925295_marshaled_pinvoke;

extern "C" void SqlInt64_t924925295_marshal_pinvoke(const SqlInt64_t924925295& unmarshaled, SqlInt64_t924925295_marshaled_pinvoke& marshaled);
extern "C" void SqlInt64_t924925295_marshal_pinvoke_back(const SqlInt64_t924925295_marshaled_pinvoke& marshaled, SqlInt64_t924925295& unmarshaled);
extern "C" void SqlInt64_t924925295_marshal_pinvoke_cleanup(SqlInt64_t924925295_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlInt64_t924925295;
struct SqlInt64_t924925295_marshaled_com;

extern "C" void SqlInt64_t924925295_marshal_com(const SqlInt64_t924925295& unmarshaled, SqlInt64_t924925295_marshaled_com& marshaled);
extern "C" void SqlInt64_t924925295_marshal_com_back(const SqlInt64_t924925295_marshaled_com& marshaled, SqlInt64_t924925295& unmarshaled);
extern "C" void SqlInt64_t924925295_marshal_com_cleanup(SqlInt64_t924925295_marshaled_com& marshaled);
