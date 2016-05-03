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

// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t549712711;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader_State80204913.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateTimeZoneHandlin418377391.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateParseHandling2542055981.h"
#include "Newtonsoft_Json_Newtonsoft_Json_FloatParseHandling3634579071.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonToken326031476.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonPosition3404062964.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonContainerType722464214.h"
#include "mscorlib_System_Nullable_1_gen3420554522.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "mscorlib_System_Nullable_1_gen279627866.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"
#include "mscorlib_System_Object837106420.h"

// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::get_CurrentState()
extern "C"  int32_t JsonReader_get_CurrentState_m3312461392 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonReader::get_CloseInput()
extern "C"  bool JsonReader_get_CloseInput_m604522595 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_CloseInput(System.Boolean)
extern "C"  void JsonReader_set_CloseInput_m926613284 (JsonReader_t1817561742 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonReader::get_SupportMultipleContent()
extern "C"  bool JsonReader_get_SupportMultipleContent_m2315361835 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_SupportMultipleContent(System.Boolean)
extern "C"  void JsonReader_set_SupportMultipleContent_m2067339244 (JsonReader_t1817561742 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::get_DateTimeZoneHandling()
extern "C"  int32_t JsonReader_get_DateTimeZoneHandling_m2387724421 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_DateTimeZoneHandling(Newtonsoft.Json.DateTimeZoneHandling)
extern "C"  void JsonReader_set_DateTimeZoneHandling_m3020170438 (JsonReader_t1817561742 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::get_DateParseHandling()
extern "C"  int32_t JsonReader_get_DateParseHandling_m370773607 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_DateParseHandling(Newtonsoft.Json.DateParseHandling)
extern "C"  void JsonReader_set_DateParseHandling_m1579222924 (JsonReader_t1817561742 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::get_FloatParseHandling()
extern "C"  int32_t JsonReader_get_FloatParseHandling_m1805100869 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_FloatParseHandling(Newtonsoft.Json.FloatParseHandling)
extern "C"  void JsonReader_set_FloatParseHandling_m1849650054 (JsonReader_t1817561742 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonReader::get_DateFormatString()
extern "C"  String_t* JsonReader_get_DateFormatString_m1780050848 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_DateFormatString(System.String)
extern "C"  void JsonReader_set_DateFormatString_m1732349361 (JsonReader_t1817561742 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::get_MaxDepth()
extern "C"  Nullable_1_t1438485399  JsonReader_get_MaxDepth_m24490229 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_MaxDepth(System.Nullable`1<System.Int32>)
extern "C"  void JsonReader_set_MaxDepth_m3214607444 (JsonReader_t1817561742 * __this, Nullable_1_t1438485399  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType()
extern "C"  int32_t JsonReader_get_TokenType_m10459159 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonReader::get_Value()
extern "C"  Il2CppObject * JsonReader_get_Value_m1778205847 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.JsonReader::get_ValueType()
extern "C"  Type_t * JsonReader_get_ValueType_m1167179180 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonReader::get_Depth()
extern "C"  int32_t JsonReader_get_Depth_m900953722 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonReader::get_Path()
extern "C"  String_t* JsonReader_get_Path_m387393487 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::get_Culture()
extern "C"  CultureInfo_t3603717042 * JsonReader_get_Culture_m4233771814 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_Culture(System.Globalization.CultureInfo)
extern "C"  void JsonReader_set_Culture_m1279412965 (JsonReader_t1817561742 * __this, CultureInfo_t3603717042 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::GetPosition(System.Int32)
extern "C"  JsonPosition_t3404062964  JsonReader_GetPosition_m282290503 (JsonReader_t1817561742 * __this, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::.ctor()
extern "C"  void JsonReader__ctor_m2652042438 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Push(Newtonsoft.Json.JsonContainerType)
extern "C"  void JsonReader_Push_m4056393532 (JsonReader_t1817561742 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonReader::Pop()
extern "C"  int32_t JsonReader_Pop_m651470432 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonReader::Peek()
extern "C"  int32_t JsonReader_Peek_m3006215694 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::ReadAsInt32()
extern "C"  Nullable_1_t1438485399  JsonReader_ReadAsInt32_m2422124955 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::ReadInt32String(System.String)
extern "C"  Nullable_1_t1438485399  JsonReader_ReadInt32String_m3115248420 (JsonReader_t1817561742 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonReader::ReadAsString()
extern "C"  String_t* JsonReader_ReadAsString_m1760397370 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.JsonReader::ReadAsBytes()
extern "C"  ByteU5BU5D_t58506160* JsonReader_ReadAsBytes_m2999013725 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.JsonReader::ReadArrayIntoByteArray()
extern "C"  ByteU5BU5D_t58506160* JsonReader_ReadArrayIntoByteArray_m2301865398 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.JsonReader::ReadAsDouble()
extern "C"  Nullable_1_t3420554522  JsonReader_ReadAsDouble_m88393809 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.JsonReader::ReadDoubleString(System.String)
extern "C"  Nullable_1_t3420554522  JsonReader_ReadDoubleString_m1522105938 (JsonReader_t1817561742 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonReader::ReadAsBoolean()
extern "C"  Nullable_1_t3097043249  JsonReader_ReadAsBoolean_m2104660315 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonReader::ReadBooleanString(System.String)
extern "C"  Nullable_1_t3097043249  JsonReader_ReadBooleanString_m2809290340 (JsonReader_t1817561742 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.JsonReader::ReadAsDecimal()
extern "C"  Nullable_1_t279627866  JsonReader_ReadAsDecimal_m3637410235 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.JsonReader::ReadDecimalString(System.String)
extern "C"  Nullable_1_t279627866  JsonReader_ReadDecimalString_m1035833412 (JsonReader_t1817561742 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Newtonsoft.Json.JsonReader::ReadAsDateTime()
extern "C"  Nullable_1_t3225071844  JsonReader_ReadAsDateTime_m2336841509 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Newtonsoft.Json.JsonReader::ReadDateTimeString(System.String)
extern "C"  Nullable_1_t3225071844  JsonReader_ReadDateTimeString_m418514942 (JsonReader_t1817561742 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::ReaderReadAndAssert()
extern "C"  void JsonReader_ReaderReadAndAssert_m2979485352 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReader::CreateUnexpectedEndException()
extern "C"  JsonReaderException_t549712711 * JsonReader_CreateUnexpectedEndException_m1282616483 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::ReadIntoWrappedTypeObject()
extern "C"  void JsonReader_ReadIntoWrappedTypeObject_m1944668012 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Skip()
extern "C"  void JsonReader_Skip_m1428982141 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken)
extern "C"  void JsonReader_SetToken_m643401505 (JsonReader_t1817561742 * __this, int32_t ___newToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken,System.Object)
extern "C"  void JsonReader_SetToken_m4271916079 (JsonReader_t1817561742 * __this, int32_t ___newToken, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken,System.Object,System.Boolean)
extern "C"  void JsonReader_SetToken_m559369070 (JsonReader_t1817561742 * __this, int32_t ___newToken, Il2CppObject * ___value, bool ___updateIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetPostValueState(System.Boolean)
extern "C"  void JsonReader_SetPostValueState_m1883599677 (JsonReader_t1817561742 * __this, bool ___updateIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::UpdateScopeWithFinishedValue()
extern "C"  void JsonReader_UpdateScopeWithFinishedValue_m284705388 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::ValidateEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JsonReader_ValidateEnd_m2489956749 (JsonReader_t1817561742 * __this, int32_t ___endToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetStateBasedOnCurrent()
extern "C"  void JsonReader_SetStateBasedOnCurrent_m245109844 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetFinished()
extern "C"  void JsonReader_SetFinished_m1083004312 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonReader::GetTypeForCloseToken(Newtonsoft.Json.JsonToken)
extern "C"  int32_t JsonReader_GetTypeForCloseToken_m4196140201 (JsonReader_t1817561742 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::System.IDisposable.Dispose()
extern "C"  void JsonReader_System_IDisposable_Dispose_m1841672857 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Dispose(System.Boolean)
extern "C"  void JsonReader_Dispose_m2724109242 (JsonReader_t1817561742 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Close()
extern "C"  void JsonReader_Close_m67934684 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::ReadAndAssert()
extern "C"  void JsonReader_ReadAndAssert_m381103147 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonReader::ReadAndMoveToContent()
extern "C"  bool JsonReader_ReadAndMoveToContent_m37871476 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonReader::MoveToContent()
extern "C"  bool JsonReader_MoveToContent_m626975911 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::GetContentToken()
extern "C"  int32_t JsonReader_GetContentToken_m1063384675 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
