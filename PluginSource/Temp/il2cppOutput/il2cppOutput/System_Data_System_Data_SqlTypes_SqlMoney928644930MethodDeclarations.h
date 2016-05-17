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
#include "System_Data_System_Data_SqlTypes_SqlMoney928644930.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean1393776170.h"

// System.Void System.Data.SqlTypes.SqlMoney::.ctor(System.Decimal)
extern "C"  void SqlMoney__ctor_m2590586702 (SqlMoney_t928644930 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::.ctor(System.Int32)
extern "C"  void SqlMoney__ctor_m824996145 (SqlMoney_t928644930 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::.cctor()
extern "C"  void SqlMoney__cctor_m1552137165 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlMoney::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * SqlMoney_System_Xml_Serialization_IXmlSerializable_GetSchema_m3297993690 (SqlMoney_t928644930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlMoney_System_Xml_Serialization_IXmlSerializable_ReadXml_m4284486030 (SqlMoney_t928644930 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlMoney_System_Xml_Serialization_IXmlSerializable_WriteXml_m699075925 (SqlMoney_t928644930 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlMoney::get_IsNull()
extern "C"  bool SqlMoney_get_IsNull_m3338045812 (SqlMoney_t928644930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Data.SqlTypes.SqlMoney::get_Value()
extern "C"  Decimal_t1688557254  SqlMoney_get_Value_m4215726151 (SqlMoney_t928644930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlMoney::CompareTo(System.Object)
extern "C"  int32_t SqlMoney_CompareTo_m4074156850 (SqlMoney_t928644930 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlMoney::CompareSqlMoney(System.Data.SqlTypes.SqlMoney)
extern "C"  int32_t SqlMoney_CompareSqlMoney_m3830902697 (SqlMoney_t928644930 * __this, SqlMoney_t928644930  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlMoney::Equals(System.Object)
extern "C"  bool SqlMoney_Equals_m2003131547 (SqlMoney_t928644930 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlMoney::GetHashCode()
extern "C"  int32_t SqlMoney_GetHashCode_m2552195187 (SqlMoney_t928644930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlMoney::ToString()
extern "C"  String_t* SqlMoney_ToString_m2148534733 (SqlMoney_t928644930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlMoney::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t176365656 * SqlMoney_GetXsdType_m93563107 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlMoney::op_Equality(System.Data.SqlTypes.SqlMoney,System.Data.SqlTypes.SqlMoney)
extern "C"  SqlBoolean_t1393776170  SqlMoney_op_Equality_m3864068237 (Il2CppObject * __this /* static, unused */, SqlMoney_t928644930  ___x, SqlMoney_t928644930  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlMoney_t928644930;
struct SqlMoney_t928644930_marshaled_pinvoke;

extern "C" void SqlMoney_t928644930_marshal_pinvoke(const SqlMoney_t928644930& unmarshaled, SqlMoney_t928644930_marshaled_pinvoke& marshaled);
extern "C" void SqlMoney_t928644930_marshal_pinvoke_back(const SqlMoney_t928644930_marshaled_pinvoke& marshaled, SqlMoney_t928644930& unmarshaled);
extern "C" void SqlMoney_t928644930_marshal_pinvoke_cleanup(SqlMoney_t928644930_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlMoney_t928644930;
struct SqlMoney_t928644930_marshaled_com;

extern "C" void SqlMoney_t928644930_marshal_com(const SqlMoney_t928644930& unmarshaled, SqlMoney_t928644930_marshaled_com& marshaled);
extern "C" void SqlMoney_t928644930_marshal_com_back(const SqlMoney_t928644930_marshaled_com& marshaled, SqlMoney_t928644930& unmarshaled);
extern "C" void SqlMoney_t928644930_marshal_com_cleanup(SqlMoney_t928644930_marshaled_com& marshaled);
