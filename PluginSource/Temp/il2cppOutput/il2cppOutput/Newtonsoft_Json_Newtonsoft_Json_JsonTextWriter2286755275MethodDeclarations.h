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

// Newtonsoft.Json.JsonTextWriter
struct JsonTextWriter_t2286755275;
// Newtonsoft.Json.Utilities.Base64Encoder
struct Base64Encoder_t1606947748;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Uri
struct Uri_t2776692961;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "mscorlib_System_String968488902.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonToken326031476.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"
#include "mscorlib_System_Nullable_1_gen3420554522.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "System_System_Uri2776692961.h"

// Newtonsoft.Json.Utilities.Base64Encoder Newtonsoft.Json.JsonTextWriter::get_Base64Encoder()
extern "C"  Base64Encoder_t1606947748 * JsonTextWriter_get_Base64Encoder_m586159372 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonTextWriter::get_QuoteChar()
extern "C"  uint16_t JsonTextWriter_get_QuoteChar_m1240798226 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::.ctor(System.IO.TextWriter)
extern "C"  void JsonTextWriter__ctor_m3496914880 (JsonTextWriter_t2286755275 * __this, TextWriter_t1689927879 * ___textWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::Close()
extern "C"  void JsonTextWriter_Close_m1183319103 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteStartObject()
extern "C"  void JsonTextWriter_WriteStartObject_m2353098333 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteStartArray()
extern "C"  void JsonTextWriter_WriteStartArray_m446921629 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteStartConstructor(System.String)
extern "C"  void JsonTextWriter_WriteStartConstructor_m2412066052 (JsonTextWriter_t2286755275 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JsonTextWriter_WriteEnd_m3045432863 (JsonTextWriter_t2286755275 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WritePropertyName(System.String)
extern "C"  void JsonTextWriter_WritePropertyName_m3073171900 (JsonTextWriter_t2286755275 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WritePropertyName(System.String,System.Boolean)
extern "C"  void JsonTextWriter_WritePropertyName_m1907638849 (JsonTextWriter_t2286755275 * __this, String_t* ___name, bool ___escape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::OnStringEscapeHandlingChanged()
extern "C"  void JsonTextWriter_OnStringEscapeHandlingChanged_m3087315237 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::UpdateCharEscapeFlags()
extern "C"  void JsonTextWriter_UpdateCharEscapeFlags_m2139578318 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteIndent()
extern "C"  void JsonTextWriter_WriteIndent_m2079169138 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValueDelimiter()
extern "C"  void JsonTextWriter_WriteValueDelimiter_m4193912284 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteIndentSpace()
extern "C"  void JsonTextWriter_WriteIndentSpace_m3731131798 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValueInternal(System.String,Newtonsoft.Json.JsonToken)
extern "C"  void JsonTextWriter_WriteValueInternal_m1038224840 (JsonTextWriter_t2286755275 * __this, String_t* ___value, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteNull()
extern "C"  void JsonTextWriter_WriteNull_m2373243341 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteUndefined()
extern "C"  void JsonTextWriter_WriteUndefined_m3957350508 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteRaw(System.String)
extern "C"  void JsonTextWriter_WriteRaw_m334586878 (JsonTextWriter_t2286755275 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.String)
extern "C"  void JsonTextWriter_WriteValue_m1936482901 (JsonTextWriter_t2286755275 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteEscapedString(System.String,System.Boolean)
extern "C"  void JsonTextWriter_WriteEscapedString_m3446834891 (JsonTextWriter_t2286755275 * __this, String_t* ___value, bool ___quote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Int32)
extern "C"  void JsonTextWriter_WriteValue_m2957228958 (JsonTextWriter_t2286755275 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.UInt32)
extern "C"  void JsonTextWriter_WriteValue_m2477012045 (JsonTextWriter_t2286755275 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Int64)
extern "C"  void JsonTextWriter_WriteValue_m2957231903 (JsonTextWriter_t2286755275 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.UInt64)
extern "C"  void JsonTextWriter_WriteValue_m2477014990 (JsonTextWriter_t2286755275 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Single)
extern "C"  void JsonTextWriter_WriteValue_m1617806590 (JsonTextWriter_t2286755275 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Nullable`1<System.Single>)
extern "C"  void JsonTextWriter_WriteValue_m766744267 (JsonTextWriter_t2286755275 * __this, Nullable_1_t3844246929  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Double)
extern "C"  void JsonTextWriter_WriteValue_m1368243861 (JsonTextWriter_t2286755275 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Nullable`1<System.Double>)
extern "C"  void JsonTextWriter_WriteValue_m1620234260 (JsonTextWriter_t2286755275 * __this, Nullable_1_t3420554522  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Boolean)
extern "C"  void JsonTextWriter_WriteValue_m112483460 (JsonTextWriter_t2286755275 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Int16)
extern "C"  void JsonTextWriter_WriteValue_m2957227160 (JsonTextWriter_t2286755275 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.UInt16)
extern "C"  void JsonTextWriter_WriteValue_m2477010247 (JsonTextWriter_t2286755275 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Char)
extern "C"  void JsonTextWriter_WriteValue_m2029320944 (JsonTextWriter_t2286755275 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Byte)
extern "C"  void JsonTextWriter_WriteValue_m2028921726 (JsonTextWriter_t2286755275 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.SByte)
extern "C"  void JsonTextWriter_WriteValue_m3203098545 (JsonTextWriter_t2286755275 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Decimal)
extern "C"  void JsonTextWriter_WriteValue_m2966919803 (JsonTextWriter_t2286755275 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.DateTime)
extern "C"  void JsonTextWriter_WriteValue_m1169223883 (JsonTextWriter_t2286755275 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Byte[])
extern "C"  void JsonTextWriter_WriteValue_m4173644572 (JsonTextWriter_t2286755275 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Guid)
extern "C"  void JsonTextWriter_WriteValue_m2033409565 (JsonTextWriter_t2286755275 * __this, Guid_t2778838590  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.TimeSpan)
extern "C"  void JsonTextWriter_WriteValue_m1454019631 (JsonTextWriter_t2286755275 * __this, TimeSpan_t763862892  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Uri)
extern "C"  void JsonTextWriter_WriteValue_m481649984 (JsonTextWriter_t2286755275 * __this, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteComment(System.String)
extern "C"  void JsonTextWriter_WriteComment_m3850686055 (JsonTextWriter_t2286755275 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::EnsureWriteBuffer()
extern "C"  void JsonTextWriter_EnsureWriteBuffer_m956228840 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteIntegerValue(System.Int64)
extern "C"  void JsonTextWriter_WriteIntegerValue_m1659711083 (JsonTextWriter_t2286755275 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteIntegerValue(System.UInt64)
extern "C"  void JsonTextWriter_WriteIntegerValue_m908575234 (JsonTextWriter_t2286755275 * __this, uint64_t ___uvalue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
