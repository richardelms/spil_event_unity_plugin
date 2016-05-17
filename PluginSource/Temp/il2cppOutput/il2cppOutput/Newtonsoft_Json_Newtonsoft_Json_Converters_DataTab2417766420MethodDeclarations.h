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

// Newtonsoft.Json.Converters.DataTableConverter
struct DataTableConverter_t2417766420;
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
// System.Data.DataTable
struct DataTable_t2176726999;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_Object837106420.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_Data_System_Data_DataTable2176726999.h"

// System.Void Newtonsoft.Json.Converters.DataTableConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void DataTableConverter_WriteJson_m4167104374 (DataTableConverter_t2417766420 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.DataTableConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * DataTableConverter_ReadJson_m2261782695 (DataTableConverter_t2417766420 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, Il2CppObject * ___existingValue, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.DataTableConverter::CreateRow(Newtonsoft.Json.JsonReader,System.Data.DataTable,Newtonsoft.Json.JsonSerializer)
extern "C"  void DataTableConverter_CreateRow_m1892663152 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, DataTable_t2176726999 * ___dt, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Converters.DataTableConverter::GetColumnDataType(Newtonsoft.Json.JsonReader)
extern "C"  Type_t * DataTableConverter_GetColumnDataType_m786794854 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.DataTableConverter::CanConvert(System.Type)
extern "C"  bool DataTableConverter_CanConvert_m3123328538 (DataTableConverter_t2417766420 * __this, Type_t * ___valueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.DataTableConverter::.ctor()
extern "C"  void DataTableConverter__ctor_m3807080734 (DataTableConverter_t2417766420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
