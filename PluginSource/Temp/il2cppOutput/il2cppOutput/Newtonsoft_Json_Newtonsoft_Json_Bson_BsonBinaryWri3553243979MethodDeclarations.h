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

// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t3553243979;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t1714632464;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeKind3550648708.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Bson_BsonToken1714632464.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"

// System.DateTimeKind Newtonsoft.Json.Bson.BsonBinaryWriter::get_DateTimeKindHandling()
extern "C"  int32_t BsonBinaryWriter_get_DateTimeKindHandling_m2959215401 (BsonBinaryWriter_t3553243979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Close()
extern "C"  void BsonBinaryWriter_Close_m2913392937 (BsonBinaryWriter_t3553243979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteToken(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonBinaryWriter_WriteToken_m213330443 (BsonBinaryWriter_t3553243979 * __this, BsonToken_t1714632464 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteTokenInternal(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonBinaryWriter_WriteTokenInternal_m2408961768 (BsonBinaryWriter_t3553243979 * __this, BsonToken_t1714632464 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteString(System.String,System.Int32,System.Nullable`1<System.Int32>)
extern "C"  void BsonBinaryWriter_WriteString_m2316937438 (BsonBinaryWriter_t3553243979 * __this, String_t* ___s, int32_t ___byteCount, Nullable_1_t1438485399  ___calculatedlengthPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteUtf8Bytes(System.String,System.Int32)
extern "C"  void BsonBinaryWriter_WriteUtf8Bytes_m498405505 (BsonBinaryWriter_t3553243979 * __this, String_t* ___s, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(System.Int32)
extern "C"  int32_t BsonBinaryWriter_CalculateSize_m3369946061 (BsonBinaryWriter_t3553243979 * __this, int32_t ___stringByteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSizeWithLength(System.Int32,System.Boolean)
extern "C"  int32_t BsonBinaryWriter_CalculateSizeWithLength_m29755876 (BsonBinaryWriter_t3553243979 * __this, int32_t ___stringByteCount, bool ___includeSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(Newtonsoft.Json.Bson.BsonToken)
extern "C"  int32_t BsonBinaryWriter_CalculateSize_m1372877084 (BsonBinaryWriter_t3553243979 * __this, BsonToken_t1714632464 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.cctor()
extern "C"  void BsonBinaryWriter__cctor_m2436700666 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
