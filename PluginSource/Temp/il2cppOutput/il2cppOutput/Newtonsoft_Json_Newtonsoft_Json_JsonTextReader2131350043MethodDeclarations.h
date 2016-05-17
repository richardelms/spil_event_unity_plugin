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

// Newtonsoft.Json.JsonTextReader
struct JsonTextReader_t2131350043;
// System.IO.TextReader
struct TextReader_t1534522647;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t549712711;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1534522647.h"
#include "Newtonsoft_Json_Newtonsoft_Json_ReadType2907181235.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "mscorlib_System_Nullable_1_gen279627866.h"
#include "mscorlib_System_Nullable_1_gen3420554522.h"
#include "mscorlib_System_String968488902.h"

// System.Void Newtonsoft.Json.JsonTextReader::.ctor(System.IO.TextReader)
extern "C"  void JsonTextReader__ctor_m581825312 (JsonTextReader_t2131350043 * __this, TextReader_t1534522647 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::EnsureBufferNotEmpty()
extern "C"  void JsonTextReader_EnsureBufferNotEmpty_m1096067523 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::OnNewLine(System.Int32)
extern "C"  void JsonTextReader_OnNewLine_m1696620509 (JsonTextReader_t2131350043 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseString(System.Char,Newtonsoft.Json.ReadType)
extern "C"  void JsonTextReader_ParseString_m1501651711 (JsonTextReader_t2131350043 * __this, uint16_t ___quote, int32_t ___readType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::BlockCopyChars(System.Char[],System.Int32,System.Char[],System.Int32,System.Int32)
extern "C"  void JsonTextReader_BlockCopyChars_m358767351 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___src, int32_t ___srcOffset, CharU5BU5D_t3416858730* ___dst, int32_t ___dstOffset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ShiftBufferIfNeeded()
extern "C"  void JsonTextReader_ShiftBufferIfNeeded_m3500163883 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextReader::ReadData(System.Boolean)
extern "C"  int32_t JsonTextReader_ReadData_m248927334 (JsonTextReader_t2131350043 * __this, bool ___append, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextReader::ReadData(System.Boolean,System.Int32)
extern "C"  int32_t JsonTextReader_ReadData_m4036206129 (JsonTextReader_t2131350043 * __this, bool ___append, int32_t ___charsRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::EnsureChars(System.Int32,System.Boolean)
extern "C"  bool JsonTextReader_EnsureChars_m3647643584 (JsonTextReader_t2131350043 * __this, int32_t ___relativePosition, bool ___append, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ReadChars(System.Int32,System.Boolean)
extern "C"  bool JsonTextReader_ReadChars_m2543830040 (JsonTextReader_t2131350043 * __this, int32_t ___relativePosition, bool ___append, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::Read()
extern "C"  bool JsonTextReader_Read_m1608855371 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonTextReader::ReadAsInt32()
extern "C"  Nullable_1_t1438485399  JsonTextReader_ReadAsInt32_m678430446 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Newtonsoft.Json.JsonTextReader::ReadAsDateTime()
extern "C"  Nullable_1_t3225071844  JsonTextReader_ReadAsDateTime_m600994418 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonTextReader::ReadAsString()
extern "C"  String_t* JsonTextReader_ReadAsString_m1220281159 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.JsonTextReader::ReadAsBytes()
extern "C"  ByteU5BU5D_t58506160* JsonTextReader_ReadAsBytes_m2421394480 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonTextReader::ReadStringValue(Newtonsoft.Json.ReadType)
extern "C"  Il2CppObject * JsonTextReader_ReadStringValue_m2215280295 (JsonTextReader_t2131350043 * __this, int32_t ___readType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonTextReader::CreateUnexpectedCharacterException(System.Char)
extern "C"  JsonReaderException_t549712711 * JsonTextReader_CreateUnexpectedCharacterException_m3928575931 (JsonTextReader_t2131350043 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonTextReader::ReadAsBoolean()
extern "C"  Nullable_1_t3097043249  JsonTextReader_ReadAsBoolean_m1030593262 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ProcessValueComma()
extern "C"  void JsonTextReader_ProcessValueComma_m3703698410 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonTextReader::ReadNumberValue(Newtonsoft.Json.ReadType)
extern "C"  Il2CppObject * JsonTextReader_ReadNumberValue_m1432722543 (JsonTextReader_t2131350043 * __this, int32_t ___readType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.JsonTextReader::ReadAsDecimal()
extern "C"  Nullable_1_t279627866  JsonTextReader_ReadAsDecimal_m3880447950 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.JsonTextReader::ReadAsDouble()
extern "C"  Nullable_1_t3420554522  JsonTextReader_ReadAsDouble_m355680222 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::HandleNull()
extern "C"  void JsonTextReader_HandleNull_m2055366106 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ReadFinished()
extern "C"  void JsonTextReader_ReadFinished_m2811026803 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ReadNullChar()
extern "C"  bool JsonTextReader_ReadNullChar_m2397464488 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::EnsureBuffer()
extern "C"  void JsonTextReader_EnsureBuffer_m887891433 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ReadStringIntoBuffer(System.Char)
extern "C"  void JsonTextReader_ReadStringIntoBuffer_m3266023595 (JsonTextReader_t2131350043 * __this, uint16_t ___quote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::WriteCharToBuffer(System.Char,System.Int32,System.Int32)
extern "C"  void JsonTextReader_WriteCharToBuffer_m1372291030 (JsonTextReader_t2131350043 * __this, uint16_t ___writeChar, int32_t ___lastWritePosition, int32_t ___writeToPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonTextReader::ParseUnicode()
extern "C"  uint16_t JsonTextReader_ParseUnicode_m3630800755 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ReadNumberIntoBuffer()
extern "C"  void JsonTextReader_ReadNumberIntoBuffer_m1245014570 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ClearRecentString()
extern "C"  void JsonTextReader_ClearRecentString_m810934256 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParsePostValue()
extern "C"  bool JsonTextReader_ParsePostValue_m2115872243 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParseObject()
extern "C"  bool JsonTextReader_ParseObject_m2631823263 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParseProperty()
extern "C"  bool JsonTextReader_ParseProperty_m1749881077 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ValidIdentifierChar(System.Char)
extern "C"  bool JsonTextReader_ValidIdentifierChar_m1915380117 (JsonTextReader_t2131350043 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseUnquotedProperty()
extern "C"  void JsonTextReader_ParseUnquotedProperty_m1948988096 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParseValue()
extern "C"  bool JsonTextReader_ParseValue_m590676787 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ProcessLineFeed()
extern "C"  void JsonTextReader_ProcessLineFeed_m3165287800 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ProcessCarriageReturn(System.Boolean)
extern "C"  void JsonTextReader_ProcessCarriageReturn_m852699105 (JsonTextReader_t2131350043 * __this, bool ___append, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::EatWhitespace(System.Boolean)
extern "C"  bool JsonTextReader_EatWhitespace_m543010297 (JsonTextReader_t2131350043 * __this, bool ___oneOrMore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseConstructor()
extern "C"  void JsonTextReader_ParseConstructor_m2909641682 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNumber(Newtonsoft.Json.ReadType)
extern "C"  void JsonTextReader_ParseNumber_m225822318 (JsonTextReader_t2131350043 * __this, int32_t ___readType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseComment(System.Boolean)
extern "C"  void JsonTextReader_ParseComment_m3142322606 (JsonTextReader_t2131350043 * __this, bool ___setToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::EndComment(System.Boolean,System.Int32,System.Int32)
extern "C"  void JsonTextReader_EndComment_m2720649958 (JsonTextReader_t2131350043 * __this, bool ___setToken, int32_t ___initialPosition, int32_t ___endPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::MatchValue(System.String)
extern "C"  bool JsonTextReader_MatchValue_m2937727169 (JsonTextReader_t2131350043 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::MatchValueWithTrailingSeparator(System.String)
extern "C"  bool JsonTextReader_MatchValueWithTrailingSeparator_m2596366910 (JsonTextReader_t2131350043 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::IsSeparator(System.Char)
extern "C"  bool JsonTextReader_IsSeparator_m1576537973 (JsonTextReader_t2131350043 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseTrue()
extern "C"  void JsonTextReader_ParseTrue_m2093464984 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNull()
extern "C"  void JsonTextReader_ParseNull_m1924199249 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseUndefined()
extern "C"  void JsonTextReader_ParseUndefined_m491819368 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseFalse()
extern "C"  void JsonTextReader_ParseFalse_m438223867 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNumberNegativeInfinity()
extern "C"  void JsonTextReader_ParseNumberNegativeInfinity_m99378352 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNumberPositiveInfinity()
extern "C"  void JsonTextReader_ParseNumberPositiveInfinity_m392465780 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNumberNaN()
extern "C"  void JsonTextReader_ParseNumberNaN_m2424730762 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::Close()
extern "C"  void JsonTextReader_Close_m499722735 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::HasLineInfo()
extern "C"  bool JsonTextReader_HasLineInfo_m3534995657 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextReader::get_LineNumber()
extern "C"  int32_t JsonTextReader_get_LineNumber_m1310585781 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextReader::get_LinePosition()
extern "C"  int32_t JsonTextReader_get_LinePosition_m2822109909 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
