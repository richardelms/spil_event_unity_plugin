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

// Newtonsoft.Json.Converters.DataSetConverter
struct DataSetConverter_t2214766720;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
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

// System.Void Newtonsoft.Json.Converters.DataSetConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void DataSetConverter_WriteJson_m479344674 (DataSetConverter_t2214766720 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.DataSetConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * DataSetConverter_ReadJson_m1269327291 (DataSetConverter_t2214766720 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, Il2CppObject * ___existingValue, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.DataSetConverter::CanConvert(System.Type)
extern "C"  bool DataSetConverter_CanConvert_m2933035886 (DataSetConverter_t2214766720 * __this, Type_t * ___valueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.DataSetConverter::.ctor()
extern "C"  void DataSetConverter__ctor_m4001137650 (DataSetConverter_t2214766720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
