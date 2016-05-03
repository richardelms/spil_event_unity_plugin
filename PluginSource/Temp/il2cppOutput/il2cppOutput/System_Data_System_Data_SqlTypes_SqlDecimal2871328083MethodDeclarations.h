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

// System.Int32[]
struct Int32U5BU5D_t1809983122;
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
#include "System_Data_System_Data_SqlTypes_SqlDecimal2871328083.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean1393776170.h"

// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Decimal)
extern "C"  void SqlDecimal__ctor_m853675613 (SqlDecimal_t2871328083 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Int64)
extern "C"  void SqlDecimal__ctor_m1757268865 (SqlDecimal_t2871328083 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Byte,System.Byte,System.Boolean,System.Int32[])
extern "C"  void SqlDecimal__ctor_m1769327961 (SqlDecimal_t2871328083 * __this, uint8_t ___bPrecision, uint8_t ___bScale, bool ___fPositive, Int32U5BU5D_t1809983122* ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Byte,System.Byte,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SqlDecimal__ctor_m2279593500 (SqlDecimal_t2871328083 * __this, uint8_t ___bPrecision, uint8_t ___bScale, bool ___fPositive, int32_t ___data1, int32_t ___data2, int32_t ___data3, int32_t ___data4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.cctor()
extern "C"  void SqlDecimal__cctor_m4258240606 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlDecimal::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * SqlDecimal_System_Xml_Serialization_IXmlSerializable_GetSchema_m2810172009 (SqlDecimal_t2871328083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlDecimal_System_Xml_Serialization_IXmlSerializable_ReadXml_m1425794781 (SqlDecimal_t2871328083 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlDecimal_System_Xml_Serialization_IXmlSerializable_WriteXml_m2273960422 (SqlDecimal_t2871328083 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.SqlTypes.SqlDecimal::get_Data()
extern "C"  Int32U5BU5D_t1809983122* SqlDecimal_get_Data_m2871677606 (SqlDecimal_t2871328083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDecimal::get_IsNull()
extern "C"  bool SqlDecimal_get_IsNull_m3899265029 (SqlDecimal_t2871328083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDecimal::get_IsPositive()
extern "C"  bool SqlDecimal_get_IsPositive_m2986584439 (SqlDecimal_t2871328083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlDecimal::get_Precision()
extern "C"  uint8_t SqlDecimal_get_Precision_m1780966126 (SqlDecimal_t2871328083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlDecimal::get_Scale()
extern "C"  uint8_t SqlDecimal_get_Scale_m3573744698 (SqlDecimal_t2871328083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Data.SqlTypes.SqlDecimal::get_Value()
extern "C"  Decimal_t1688557254  SqlDecimal_get_Value_m4162736598 (SqlDecimal_t2871328083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::AdjustScale(System.Data.SqlTypes.SqlDecimal,System.Int32,System.Boolean)
extern "C"  SqlDecimal_t2871328083  SqlDecimal_AdjustScale_m1560736221 (Il2CppObject * __this /* static, unused */, SqlDecimal_t2871328083  ___n, int32_t ___digits, bool ___fRound, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::CompareTo(System.Object)
extern "C"  int32_t SqlDecimal_CompareTo_m140859075 (SqlDecimal_t2871328083 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::CompareTo(System.Data.SqlTypes.SqlDecimal)
extern "C"  int32_t SqlDecimal_CompareTo_m3295461952 (SqlDecimal_t2871328083 * __this, SqlDecimal_t2871328083  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDecimal::Equals(System.Object)
extern "C"  bool SqlDecimal_Equals_m371304746 (SqlDecimal_t2871328083 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::GetHashCode()
extern "C"  int32_t SqlDecimal_GetHashCode_m1915966850 (SqlDecimal_t2871328083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Round(System.Data.SqlTypes.SqlDecimal,System.Int32)
extern "C"  SqlDecimal_t2871328083  SqlDecimal_Round_m374749555 (Il2CppObject * __this /* static, unused */, SqlDecimal_t2871328083  ___n, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlDecimal::GetPrecision(System.Decimal)
extern "C"  uint8_t SqlDecimal_GetPrecision_m71811871 (SqlDecimal_t2871328083 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Data.SqlTypes.SqlDecimal::ToDouble()
extern "C"  double SqlDecimal_ToDouble_m1696137822 (SqlDecimal_t2871328083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlDecimal::ToString()
extern "C"  String_t* SqlDecimal_ToString_m3604437726 (SqlDecimal_t2871328083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::Div128By32(System.UInt64&,System.UInt64&,System.UInt32,System.UInt32&)
extern "C"  int32_t SqlDecimal_Div128By32_m3312417771 (Il2CppObject * __this /* static, unused */, uint64_t* ___hi, uint64_t* ___lo, uint32_t ___divider, uint32_t* ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Truncate(System.Data.SqlTypes.SqlDecimal,System.Int32)
extern "C"  SqlDecimal_t2871328083  SqlDecimal_Truncate_m575181839 (Il2CppObject * __this /* static, unused */, SqlDecimal_t2871328083  ___n, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlDecimal::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t176365656 * SqlDecimal_GetXsdType_m510582900 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDecimal::op_Equality(System.Data.SqlTypes.SqlDecimal,System.Data.SqlTypes.SqlDecimal)
extern "C"  SqlBoolean_t1393776170  SqlDecimal_op_Equality_m552947580 (Il2CppObject * __this /* static, unused */, SqlDecimal_t2871328083  ___x, SqlDecimal_t2871328083  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::op_Multiply(System.Data.SqlTypes.SqlDecimal,System.Data.SqlTypes.SqlDecimal)
extern "C"  SqlDecimal_t2871328083  SqlDecimal_op_Multiply_m1229214459 (Il2CppObject * __this /* static, unused */, SqlDecimal_t2871328083  ___x, SqlDecimal_t2871328083  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::op_Implicit(System.Int64)
extern "C"  SqlDecimal_t2871328083  SqlDecimal_op_Implicit_m3279229588 (Il2CppObject * __this /* static, unused */, int64_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlDecimal_t2871328083;
struct SqlDecimal_t2871328083_marshaled_pinvoke;

extern "C" void SqlDecimal_t2871328083_marshal_pinvoke(const SqlDecimal_t2871328083& unmarshaled, SqlDecimal_t2871328083_marshaled_pinvoke& marshaled);
extern "C" void SqlDecimal_t2871328083_marshal_pinvoke_back(const SqlDecimal_t2871328083_marshaled_pinvoke& marshaled, SqlDecimal_t2871328083& unmarshaled);
extern "C" void SqlDecimal_t2871328083_marshal_pinvoke_cleanup(SqlDecimal_t2871328083_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlDecimal_t2871328083;
struct SqlDecimal_t2871328083_marshaled_com;

extern "C" void SqlDecimal_t2871328083_marshal_com(const SqlDecimal_t2871328083& unmarshaled, SqlDecimal_t2871328083_marshaled_com& marshaled);
extern "C" void SqlDecimal_t2871328083_marshal_com_back(const SqlDecimal_t2871328083_marshaled_com& marshaled, SqlDecimal_t2871328083& unmarshaled);
extern "C" void SqlDecimal_t2871328083_marshal_com_cleanup(SqlDecimal_t2871328083_marshaled_com& marshaled);
