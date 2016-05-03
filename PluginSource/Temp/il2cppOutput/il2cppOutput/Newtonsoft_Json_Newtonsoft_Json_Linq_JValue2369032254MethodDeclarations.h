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

// Newtonsoft.Json.Linq.JValue
struct JValue_t2369032254;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// System.String
struct String_t;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t1140441370;
// System.IFormatProvider
struct IFormatProvider_t3436592966;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JTokenType656424096.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JValue2369032254.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen3542462004.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_TypeCode2164429820.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Object,Newtonsoft.Json.Linq.JTokenType)
extern "C"  void JValue__ctor_m2043810974 (JValue_t2369032254 * __this, Il2CppObject * ___value, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(Newtonsoft.Json.Linq.JValue)
extern "C"  void JValue__ctor_m2907634802 (JValue_t2369032254 * __this, JValue_t2369032254 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Object)
extern "C"  void JValue__ctor_m4001003604 (JValue_t2369032254 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::get_HasValues()
extern "C"  bool JValue_get_HasValues_m2926891451 (JValue_t2369032254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::Compare(Newtonsoft.Json.Linq.JTokenType,System.Object,System.Object)
extern "C"  int32_t JValue_Compare_m1822349061 (Il2CppObject * __this /* static, unused */, int32_t ___valueType, Il2CppObject * ___objA, Il2CppObject * ___objB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::CompareFloat(System.Object,System.Object)
extern "C"  int32_t JValue_CompareFloat_m917115211 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___objA, Il2CppObject * ___objB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JValue::CloneToken()
extern "C"  JToken_t2367600838 * JValue_CloneToken_m2333140469 (JValue_t2369032254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JValue::CreateComment(System.String)
extern "C"  JValue_t2369032254 * JValue_CreateComment_m2083720782 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JValue::CreateNull()
extern "C"  JValue_t2369032254 * JValue_CreateNull_m3629498292 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JValue::CreateUndefined()
extern "C"  JValue_t2369032254 * JValue_CreateUndefined_m1673202405 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::GetValueType(System.Nullable`1<Newtonsoft.Json.Linq.JTokenType>,System.Object)
extern "C"  int32_t JValue_GetValueType_m3891484303 (Il2CppObject * __this /* static, unused */, Nullable_1_t3542462004  ___current, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::GetStringValueType(System.Nullable`1<Newtonsoft.Json.Linq.JTokenType>)
extern "C"  int32_t JValue_GetStringValueType_m1087024624 (Il2CppObject * __this /* static, unused */, Nullable_1_t3542462004  ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::get_Type()
extern "C"  int32_t JValue_get_Type_m3234308982 (JValue_t2369032254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JValue::get_Value()
extern "C"  Il2CppObject * JValue_get_Value_m4269792155 (JValue_t2369032254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JValue_WriteTo_m194251215 (JValue_t2369032254 * __this, JsonWriter_t1972966974 * ___writer, JsonConverterU5BU5D_t1140441370* ___converters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::ValuesEquals(Newtonsoft.Json.Linq.JValue,Newtonsoft.Json.Linq.JValue)
extern "C"  bool JValue_ValuesEquals_m45605155 (Il2CppObject * __this /* static, unused */, JValue_t2369032254 * ___v1, JValue_t2369032254 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::Equals(Newtonsoft.Json.Linq.JValue)
extern "C"  bool JValue_Equals_m2031772153 (JValue_t2369032254 * __this, JValue_t2369032254 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::Equals(System.Object)
extern "C"  bool JValue_Equals_m3719366171 (JValue_t2369032254 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::GetHashCode()
extern "C"  int32_t JValue_GetHashCode_m3004417139 (JValue_t2369032254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JValue::ToString()
extern "C"  String_t* JValue_ToString_m2488799149 (JValue_t2369032254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JValue::ToString(System.IFormatProvider)
extern "C"  String_t* JValue_ToString_m3314730203 (JValue_t2369032254 * __this, Il2CppObject * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JValue::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* JValue_ToString_m806795487 (JValue_t2369032254 * __this, String_t* ___format, Il2CppObject * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::System.IComparable.CompareTo(System.Object)
extern "C"  int32_t JValue_System_IComparable_CompareTo_m2429741150 (JValue_t2369032254 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::CompareTo(Newtonsoft.Json.Linq.JValue)
extern "C"  int32_t JValue_CompareTo_m4235132624 (JValue_t2369032254 * __this, JValue_t2369032254 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode Newtonsoft.Json.Linq.JValue::System.IConvertible.GetTypeCode()
extern "C"  int32_t JValue_System_IConvertible_GetTypeCode_m2161571349 (JValue_t2369032254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool JValue_System_IConvertible_ToBoolean_m2991424368 (JValue_t2369032254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.Linq.JValue::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  uint16_t JValue_System_IConvertible_ToChar_m128450424 (JValue_t2369032254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte Newtonsoft.Json.Linq.JValue::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t JValue_System_IConvertible_ToSByte_m1444681936 (JValue_t2369032254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Newtonsoft.Json.Linq.JValue::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t JValue_System_IConvertible_ToByte_m975302876 (JValue_t2369032254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Newtonsoft.Json.Linq.JValue::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t JValue_System_IConvertible_ToInt16_m1374887664 (JValue_t2369032254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Newtonsoft.Json.Linq.JValue::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t JValue_System_IConvertible_ToUInt16_m1569854154 (JValue_t2369032254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t JValue_System_IConvertible_ToInt32_m3642137648 (JValue_t2369032254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Newtonsoft.Json.Linq.JValue::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t JValue_System_IConvertible_ToUInt32_m1116920510 (JValue_t2369032254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Linq.JValue::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t JValue_System_IConvertible_ToInt64_m987336976 (JValue_t2369032254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Newtonsoft.Json.Linq.JValue::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t JValue_System_IConvertible_ToUInt64_m2004171964 (JValue_t2369032254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Newtonsoft.Json.Linq.JValue::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float JValue_System_IConvertible_ToSingle_m1540219484 (JValue_t2369032254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Newtonsoft.Json.Linq.JValue::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double JValue_System_IConvertible_ToDouble_m3830435374 (JValue_t2369032254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal Newtonsoft.Json.Linq.JValue::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t1688557254  JValue_System_IConvertible_ToDecimal_m3759904208 (JValue_t2369032254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Linq.JValue::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t339033936  JValue_System_IConvertible_ToDateTime_m3102489474 (JValue_t2369032254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JValue::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Il2CppObject * JValue_System_IConvertible_ToType_m2324167538 (JValue_t2369032254 * __this, Type_t * ___conversionType, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
