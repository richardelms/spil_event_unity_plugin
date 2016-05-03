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

// Newtonsoft.Json.Converters.BinaryConverter
struct BinaryConverter_t3767851703;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_Object837106420.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void Newtonsoft.Json.Converters.BinaryConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void BinaryConverter_WriteJson_m1097649639 (BinaryConverter_t3767851703 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.Converters.BinaryConverter::GetByteArray(System.Object)
extern "C"  ByteU5BU5D_t58506160* BinaryConverter_GetByteArray_m611111640 (BinaryConverter_t3767851703 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.BinaryConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * BinaryConverter_ReadJson_m3151011276 (BinaryConverter_t3767851703 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, Il2CppObject * ___existingValue, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.Converters.BinaryConverter::ReadByteArray(Newtonsoft.Json.JsonReader)
extern "C"  ByteU5BU5D_t58506160* BinaryConverter_ReadByteArray_m1701803036 (BinaryConverter_t3767851703 * __this, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.BinaryConverter::CanConvert(System.Type)
extern "C"  bool BinaryConverter_CanConvert_m1197599413 (BinaryConverter_t3767851703 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.BinaryConverter::.ctor()
extern "C"  void BinaryConverter__ctor_m3331206989 (BinaryConverter_t3767851703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
