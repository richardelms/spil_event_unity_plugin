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

// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_t1403680037;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Uri
struct Uri_t2776692961;
// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_t1233309079;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_WriteState761362101.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Formatting1733320232.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateFormatHandling279613453.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateTimeZoneHandlin418377391.h"
#include "Newtonsoft_Json_Newtonsoft_Json_StringEscapeHandli2810244538.h"
#include "Newtonsoft_Json_Newtonsoft_Json_FloatFormatHandlin4083058171.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonContainerType722464214.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonToken326031476.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "mscorlib_System_Nullable_1_gen3871963234.h"
#include "mscorlib_System_Nullable_1_gen1438485494.h"
#include "mscorlib_System_Nullable_1_gen3871963329.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"
#include "mscorlib_System_Nullable_1_gen3420554522.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "mscorlib_System_Nullable_1_gen1438485341.h"
#include "mscorlib_System_Nullable_1_gen3871963176.h"
#include "mscorlib_System_Nullable_1_gen1369777311.h"
#include "mscorlib_System_Nullable_1_gen1369764433.h"
#include "mscorlib_System_Nullable_1_gen1446416676.h"
#include "mscorlib_System_Nullable_1_gen279627866.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"
#include "mscorlib_System_Nullable_1_gen1369909202.h"
#include "mscorlib_System_Nullable_1_gen3649900800.h"
#include "System_System_Uri2776692961.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Primitiv1430423845.h"

// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::BuildStateArray()
extern "C"  StateU5BU5DU5BU5D_t1403680037* JsonWriter_BuildStateArray_m272506541 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::.cctor()
extern "C"  void JsonWriter__cctor_m4138458967 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonWriter::get_CloseOutput()
extern "C"  bool JsonWriter_get_CloseOutput_m1611670778 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_CloseOutput(System.Boolean)
extern "C"  void JsonWriter_set_CloseOutput_m2056979367 (JsonWriter_t1972966974 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonWriter::get_Top()
extern "C"  int32_t JsonWriter_get_Top_m3321560156 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.WriteState Newtonsoft.Json.JsonWriter::get_WriteState()
extern "C"  int32_t JsonWriter_get_WriteState_m621552693 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonWriter::get_ContainerPath()
extern "C"  String_t* JsonWriter_get_ContainerPath_m1492978766 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonWriter::get_Path()
extern "C"  String_t* JsonWriter_get_Path_m2966842239 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::get_Formatting()
extern "C"  int32_t JsonWriter_get_Formatting_m3778024021 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_Formatting(Newtonsoft.Json.Formatting)
extern "C"  void JsonWriter_set_Formatting_m1365721046 (JsonWriter_t1972966974 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::get_DateFormatHandling()
extern "C"  int32_t JsonWriter_get_DateFormatHandling_m2731436085 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_DateFormatHandling(Newtonsoft.Json.DateFormatHandling)
extern "C"  void JsonWriter_set_DateFormatHandling_m733385206 (JsonWriter_t1972966974 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::get_DateTimeZoneHandling()
extern "C"  int32_t JsonWriter_get_DateTimeZoneHandling_m3019090997 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_DateTimeZoneHandling(Newtonsoft.Json.DateTimeZoneHandling)
extern "C"  void JsonWriter_set_DateTimeZoneHandling_m2970742902 (JsonWriter_t1972966974 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::get_StringEscapeHandling()
extern "C"  int32_t JsonWriter_get_StringEscapeHandling_m1536345365 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_StringEscapeHandling(Newtonsoft.Json.StringEscapeHandling)
extern "C"  void JsonWriter_set_StringEscapeHandling_m2961518998 (JsonWriter_t1972966974 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::OnStringEscapeHandlingChanged()
extern "C"  void JsonWriter_OnStringEscapeHandlingChanged_m392325650 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::get_FloatFormatHandling()
extern "C"  int32_t JsonWriter_get_FloatFormatHandling_m3137994899 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_FloatFormatHandling(Newtonsoft.Json.FloatFormatHandling)
extern "C"  void JsonWriter_set_FloatFormatHandling_m1330889824 (JsonWriter_t1972966974 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonWriter::get_DateFormatString()
extern "C"  String_t* JsonWriter_get_DateFormatString_m2720048976 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_DateFormatString(System.String)
extern "C"  void JsonWriter_set_DateFormatString_m411881473 (JsonWriter_t1972966974 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::get_Culture()
extern "C"  CultureInfo_t3603717042 * JsonWriter_get_Culture_m3036682614 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_Culture(System.Globalization.CultureInfo)
extern "C"  void JsonWriter_set_Culture_m2572871989 (JsonWriter_t1972966974 * __this, CultureInfo_t3603717042 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::.ctor()
extern "C"  void JsonWriter__ctor_m3335638806 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::UpdateScopeWithFinishedValue()
extern "C"  void JsonWriter_UpdateScopeWithFinishedValue_m111201820 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::Push(Newtonsoft.Json.JsonContainerType)
extern "C"  void JsonWriter_Push_m2886287756 (JsonWriter_t1972966974 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonWriter::Pop()
extern "C"  int32_t JsonWriter_Pop_m522572976 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonWriter::Peek()
extern "C"  int32_t JsonWriter_Peek_m3305361854 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::Close()
extern "C"  void JsonWriter_Close_m751531052 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartObject()
extern "C"  void JsonWriter_WriteStartObject_m1414051920 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEndObject()
extern "C"  void JsonWriter_WriteEndObject_m1392439113 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartArray()
extern "C"  void JsonWriter_WriteStartArray_m1247913802 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEndArray()
extern "C"  void JsonWriter_WriteEndArray_m3741068593 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartConstructor(System.String)
extern "C"  void JsonWriter_WriteStartConstructor_m3534161975 (JsonWriter_t1972966974 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEndConstructor()
extern "C"  void JsonWriter_WriteEndConstructor_m1872822610 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String)
extern "C"  void JsonWriter_WritePropertyName_m1132873327 (JsonWriter_t1972966974 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String,System.Boolean)
extern "C"  void JsonWriter_WritePropertyName_m1004831022 (JsonWriter_t1972966974 * __this, String_t* ___name, bool ___escape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd()
extern "C"  void JsonWriter_WriteEnd_m651439722 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader)
extern "C"  void JsonWriter_WriteToken_m1538904232 (JsonWriter_t1972966974 * __this, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Boolean)
extern "C"  void JsonWriter_WriteToken_m845553109 (JsonWriter_t1972966974 * __this, JsonReader_t1817561742 * ___reader, bool ___writeChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonToken,System.Object)
extern "C"  void JsonWriter_WriteToken_m3159175804 (JsonWriter_t1972966974 * __this, int32_t ___token, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void JsonWriter_WriteToken_m3345805685 (JsonWriter_t1972966974 * __this, JsonReader_t1817561742 * ___reader, bool ___writeChildren, bool ___writeDateConstructorAsDate, bool ___writeComments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Int32,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void JsonWriter_WriteToken_m4123415630 (JsonWriter_t1972966974 * __this, JsonReader_t1817561742 * ___reader, int32_t ___initialDepth, bool ___writeChildren, bool ___writeDateConstructorAsDate, bool ___writeComments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteConstructorDate(Newtonsoft.Json.JsonReader)
extern "C"  void JsonWriter_WriteConstructorDate_m3515055991 (JsonWriter_t1972966974 * __this, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd(Newtonsoft.Json.JsonContainerType)
extern "C"  void JsonWriter_WriteEnd_m2353093482 (JsonWriter_t1972966974 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::AutoCompleteAll()
extern "C"  void JsonWriter_AutoCompleteAll_m3168773805 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonWriter::GetCloseTokenForType(Newtonsoft.Json.JsonContainerType)
extern "C"  int32_t JsonWriter_GetCloseTokenForType_m3572852771 (JsonWriter_t1972966974 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::AutoCompleteClose(Newtonsoft.Json.JsonContainerType)
extern "C"  void JsonWriter_AutoCompleteClose_m2673642128 (JsonWriter_t1972966974 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JsonWriter_WriteEnd_m1280514188 (JsonWriter_t1972966974 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteIndent()
extern "C"  void JsonWriter_WriteIndent_m818324639 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValueDelimiter()
extern "C"  void JsonWriter_WriteValueDelimiter_m2184221449 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteIndentSpace()
extern "C"  void JsonWriter_WriteIndentSpace_m2792085385 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::AutoComplete(Newtonsoft.Json.JsonToken)
extern "C"  void JsonWriter_AutoComplete_m2028147712 (JsonWriter_t1972966974 * __this, int32_t ___tokenBeingWritten, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteNull()
extern "C"  void JsonWriter_WriteNull_m3279192890 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteUndefined()
extern "C"  void JsonWriter_WriteUndefined_m1627884319 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteRaw(System.String)
extern "C"  void JsonWriter_WriteRaw_m1756977643 (JsonWriter_t1972966974 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteRawValue(System.String)
extern "C"  void JsonWriter_WriteRawValue_m2991160870 (JsonWriter_t1972966974 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String)
extern "C"  void JsonWriter_WriteValue_m3054407938 (JsonWriter_t1972966974 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int32)
extern "C"  void JsonWriter_WriteValue_m4101669713 (JsonWriter_t1972966974 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt32)
extern "C"  void JsonWriter_WriteValue_m3594937082 (JsonWriter_t1972966974 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int64)
extern "C"  void JsonWriter_WriteValue_m4101672658 (JsonWriter_t1972966974 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt64)
extern "C"  void JsonWriter_WriteValue_m3594940027 (JsonWriter_t1972966974 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single)
extern "C"  void JsonWriter_WriteValue_m2735731627 (JsonWriter_t1972966974 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Double)
extern "C"  void JsonWriter_WriteValue_m2486168898 (JsonWriter_t1972966974 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Boolean)
extern "C"  void JsonWriter_WriteValue_m408421239 (JsonWriter_t1972966974 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int16)
extern "C"  void JsonWriter_WriteValue_m4101667915 (JsonWriter_t1972966974 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt16)
extern "C"  void JsonWriter_WriteValue_m3594935284 (JsonWriter_t1972966974 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Char)
extern "C"  void JsonWriter_WriteValue_m3451711709 (JsonWriter_t1972966974 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte)
extern "C"  void JsonWriter_WriteValue_m3451312491 (JsonWriter_t1972966974 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.SByte)
extern "C"  void JsonWriter_WriteValue_m52572004 (JsonWriter_t1972966974 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Decimal)
extern "C"  void JsonWriter_WriteValue_m3262857582 (JsonWriter_t1972966974 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTime)
extern "C"  void JsonWriter_WriteValue_m1753360440 (JsonWriter_t1972966974 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Guid)
extern "C"  void JsonWriter_WriteValue_m3455800330 (JsonWriter_t1972966974 * __this, Guid_t2778838590  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.TimeSpan)
extern "C"  void JsonWriter_WriteValue_m2038156188 (JsonWriter_t1972966974 * __this, TimeSpan_t763862892  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Int32>)
extern "C"  void JsonWriter_WriteValue_m2209005646 (JsonWriter_t1972966974 * __this, Nullable_1_t1438485399  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.UInt32>)
extern "C"  void JsonWriter_WriteValue_m608960911 (JsonWriter_t1972966974 * __this, Nullable_1_t3871963234  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Int64>)
extern "C"  void JsonWriter_WriteValue_m2209096941 (JsonWriter_t1972966974 * __this, Nullable_1_t1438485494  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.UInt64>)
extern "C"  void JsonWriter_WriteValue_m609052206 (JsonWriter_t1972966974 * __this, Nullable_1_t3871963329  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Single>)
extern "C"  void JsonWriter_WriteValue_m4038362878 (JsonWriter_t1972966974 * __this, Nullable_1_t3844246929  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Double>)
extern "C"  void JsonWriter_WriteValue_m596885575 (JsonWriter_t1972966974 * __this, Nullable_1_t3420554522  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Boolean>)
extern "C"  void JsonWriter_WriteValue_m4188192296 (JsonWriter_t1972966974 * __this, Nullable_1_t3097043249  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Int16>)
extern "C"  void JsonWriter_WriteValue_m2208949908 (JsonWriter_t1972966974 * __this, Nullable_1_t1438485341  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.UInt16>)
extern "C"  void JsonWriter_WriteValue_m608905173 (JsonWriter_t1972966974 * __this, Nullable_1_t3871963176  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Char>)
extern "C"  void JsonWriter_WriteValue_m1694552396 (JsonWriter_t1972966974 * __this, Nullable_1_t1369777311  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Byte>)
extern "C"  void JsonWriter_WriteValue_m1682176638 (JsonWriter_t1972966974 * __this, Nullable_1_t1369764433  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.SByte>)
extern "C"  void JsonWriter_WriteValue_m1241028251 (JsonWriter_t1972966974 * __this, Nullable_1_t1446416676  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Decimal>)
extern "C"  void JsonWriter_WriteValue_m2481405713 (JsonWriter_t1972966974 * __this, Nullable_1_t279627866  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.DateTime>)
extern "C"  void JsonWriter_WriteValue_m2148700881 (JsonWriter_t1972966974 * __this, Nullable_1_t3225071844  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Guid>)
extern "C"  void JsonWriter_WriteValue_m1821299647 (JsonWriter_t1972966974 * __this, Nullable_1_t1369909202  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.TimeSpan>)
extern "C"  void JsonWriter_WriteValue_m2387434477 (JsonWriter_t1972966974 * __this, Nullable_1_t3649900800  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte[])
extern "C"  void JsonWriter_WriteValue_m996602313 (JsonWriter_t1972966974 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Uri)
extern "C"  void JsonWriter_WriteValue_m2605743539 (JsonWriter_t1972966974 * __this, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteComment(System.String)
extern "C"  void JsonWriter_WriteComment_m139855316 (JsonWriter_t1972966974 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::System.IDisposable.Dispose()
extern "C"  void JsonWriter_System_IDisposable_Dispose_m2994563657 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::Dispose(System.Boolean)
extern "C"  void JsonWriter_Dispose_m1799280138 (JsonWriter_t1972966974 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Utilities.PrimitiveTypeCode,System.Object)
extern "C"  void JsonWriter_WriteValue_m4025506229 (Il2CppObject * __this /* static, unused */, JsonWriter_t1972966974 * ___writer, int32_t ___typeCode, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonWriterException Newtonsoft.Json.JsonWriter::CreateUnsupportedTypeException(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  JsonWriterException_t1233309079 * JsonWriter_CreateUnsupportedTypeException_m3485544604 (Il2CppObject * __this /* static, unused */, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::InternalWriteEnd(Newtonsoft.Json.JsonContainerType)
extern "C"  void JsonWriter_InternalWriteEnd_m4248200557 (JsonWriter_t1972966974 * __this, int32_t ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::InternalWritePropertyName(System.String)
extern "C"  void JsonWriter_InternalWritePropertyName_m2045993036 (JsonWriter_t1972966974 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::InternalWriteRaw()
extern "C"  void JsonWriter_InternalWriteRaw_m2180750356 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::InternalWriteStart(Newtonsoft.Json.JsonToken,Newtonsoft.Json.JsonContainerType)
extern "C"  void JsonWriter_InternalWriteStart_m1287337782 (JsonWriter_t1972966974 * __this, int32_t ___token, int32_t ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::InternalWriteValue(Newtonsoft.Json.JsonToken)
extern "C"  void JsonWriter_InternalWriteValue_m2374407673 (JsonWriter_t1972966974 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::InternalWriteComment()
extern "C"  void JsonWriter_InternalWriteComment_m175551243 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
