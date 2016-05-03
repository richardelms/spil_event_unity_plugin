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

// Newtonsoft.Json.Serialization.JsonSerializerInternalWriter
struct JsonSerializerInternalWriter_t1794357283;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t2629456141;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t2267638131;
// Newtonsoft.Json.Serialization.JsonPrimitiveContract
struct JsonPrimitiveContract_t1219024426;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t1841444406;
// Newtonsoft.Json.Serialization.JsonContainerContract
struct JsonContainerContract_t3892501444;
// System.String
struct String_t;
// Newtonsoft.Json.Serialization.JsonStringContract
struct JsonStringContract_t2937851556;
// Newtonsoft.Json.Serialization.JsonObjectContract
struct JsonObjectContract_t3651158994;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t757201947;
// System.Collections.IEnumerable
struct IEnumerable_t287189635;
// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t1632130460;
// System.Array
struct Il2CppArray;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Runtime.Serialization.ISerializable
struct ISerializable_t1415126241;
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t3363619915;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// Newtonsoft.Json.Serialization.JsonDictionaryContract
struct JsonDictionaryContract_t128316969;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json1219024426.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json1841444406.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json3892501444.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2267638131.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "mscorlib_System_String968488902.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2937851556.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json3651158994.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DefaultValueHandli3337232248.h"
#include "Newtonsoft_Json_Newtonsoft_Json_PreserveReferences1434533308.h"
#include "Newtonsoft_Json_Newtonsoft_Json_TypeNameHandling2373316525.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonConverter757201947.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json1632130460.h"
#include "mscorlib_System_Array2840145358.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json3363619915.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_JsonD128316969.h"

// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::.ctor(Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonSerializerInternalWriter__ctor_m3289379706 (JsonSerializerInternalWriter_t1794357283 * __this, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::Serialize(Newtonsoft.Json.JsonWriter,System.Object,System.Type)
extern "C"  void JsonSerializerInternalWriter_Serialize_m1845389304 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___jsonWriter, Il2CppObject * ___value, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonSerializerProxy Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetInternalSerializer()
extern "C"  JsonSerializerProxy_t2629456141 * JsonSerializerInternalWriter_GetInternalSerializer_m2545882106 (JsonSerializerInternalWriter_t1794357283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetContractSafe(System.Object)
extern "C"  JsonContract_t2267638131 * JsonSerializerInternalWriter_GetContractSafe_m2756520574 (JsonSerializerInternalWriter_t1794357283 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializePrimitive(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonPrimitiveContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializePrimitive_m3324378778 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonPrimitiveContract_t1219024426 * ___contract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___containerContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeValue(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializeValue_m3086581371 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonContract_t2267638131 * ___valueContract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___containerContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ResolveIsReference(Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  Nullable_1_t3097043249  JsonSerializerInternalWriter_ResolveIsReference_m927277784 (JsonSerializerInternalWriter_t1794357283 * __this, JsonContract_t2267638131 * ___contract, JsonProperty_t1841444406 * ___property, JsonContainerContract_t3892501444 * ___collectionContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ShouldWriteReference(System.Object,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  bool JsonSerializerInternalWriter_ShouldWriteReference_m277841359 (JsonSerializerInternalWriter_t1794357283 * __this, Il2CppObject * ___value, JsonProperty_t1841444406 * ___property, JsonContract_t2267638131 * ___valueContract, JsonContainerContract_t3892501444 * ___collectionContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ShouldWriteProperty(System.Object,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  bool JsonSerializerInternalWriter_ShouldWriteProperty_m4220097984 (JsonSerializerInternalWriter_t1794357283 * __this, Il2CppObject * ___memberValue, JsonProperty_t1841444406 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::CheckForCircularReference(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  bool JsonSerializerInternalWriter_CheckForCircularReference_m530015449 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonProperty_t1841444406 * ___property, JsonContract_t2267638131 * ___contract, JsonContainerContract_t3892501444 * ___containerContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteReference(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  void JsonSerializerInternalWriter_WriteReference_m4023339013 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetReference(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  String_t* JsonSerializerInternalWriter_GetReference_m1679016913 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::TryConvertToString(System.Object,System.Type,System.String&)
extern "C"  bool JsonSerializerInternalWriter_TryConvertToString_m531703410 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, Type_t * ___type, String_t** ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeString(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonStringContract)
extern "C"  void JsonSerializerInternalWriter_SerializeString_m1691835026 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonStringContract_t2937851556 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::OnSerializing(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Serialization.JsonContract,System.Object)
extern "C"  void JsonSerializerInternalWriter_OnSerializing_m2871776946 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, JsonContract_t2267638131 * ___contract, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::OnSerialized(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Serialization.JsonContract,System.Object)
extern "C"  void JsonSerializerInternalWriter_OnSerialized_m1924349401 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, JsonContract_t2267638131 * ___contract, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeObject(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializeObject_m33844258 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonObjectContract_t3651158994 * ___contract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___collectionContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::CalculatePropertyValues(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract&,System.Object&)
extern "C"  bool JsonSerializerInternalWriter_CalculatePropertyValues_m2719633823 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonContainerContract_t3892501444 * ___contract, JsonProperty_t1841444406 * ___member, JsonProperty_t1841444406 * ___property, JsonContract_t2267638131 ** ___memberContract, Il2CppObject ** ___memberValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteObjectStart(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_WriteObjectStart_m2317912584 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonContract_t2267638131 * ___contract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___collectionContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteReferenceIdProperty(Newtonsoft.Json.JsonWriter,System.Type,System.Object)
extern "C"  void JsonSerializerInternalWriter_WriteReferenceIdProperty_m2535982120 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Type_t * ___type, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteTypeProperty(Newtonsoft.Json.JsonWriter,System.Type)
extern "C"  void JsonSerializerInternalWriter_WriteTypeProperty_m2928298040 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HasFlag(Newtonsoft.Json.DefaultValueHandling,Newtonsoft.Json.DefaultValueHandling)
extern "C"  bool JsonSerializerInternalWriter_HasFlag_m1869668227 (JsonSerializerInternalWriter_t1794357283 * __this, int32_t ___value, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HasFlag(Newtonsoft.Json.PreserveReferencesHandling,Newtonsoft.Json.PreserveReferencesHandling)
extern "C"  bool JsonSerializerInternalWriter_HasFlag_m2077168259 (JsonSerializerInternalWriter_t1794357283 * __this, int32_t ___value, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HasFlag(Newtonsoft.Json.TypeNameHandling,Newtonsoft.Json.TypeNameHandling)
extern "C"  bool JsonSerializerInternalWriter_HasFlag_m1447652835 (JsonSerializerInternalWriter_t1794357283 * __this, int32_t ___value, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeConvertable(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter,System.Object,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializeConvertable_m2313093624 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, JsonConverter_t757201947 * ___converter, Il2CppObject * ___value, JsonContract_t2267638131 * ___contract, JsonContainerContract_t3892501444 * ___collectionContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeList(Newtonsoft.Json.JsonWriter,System.Collections.IEnumerable,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializeList_m3073154656 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___values, JsonArrayContract_t1632130460 * ___contract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___collectionContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeMultidimensionalArray(Newtonsoft.Json.JsonWriter,System.Array,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializeMultidimensionalArray_m2696129800 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppArray * ___values, JsonArrayContract_t1632130460 * ___contract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___collectionContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeMultidimensionalArray(Newtonsoft.Json.JsonWriter,System.Array,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,System.Int32,System.Int32[])
extern "C"  void JsonSerializerInternalWriter_SerializeMultidimensionalArray_m2117425432 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppArray * ___values, JsonArrayContract_t1632130460 * ___contract, JsonProperty_t1841444406 * ___member, int32_t ___initialDepth, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteStartArray(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  bool JsonSerializerInternalWriter_WriteStartArray_m942549305 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___values, JsonArrayContract_t1632130460 * ___contract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___containerContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeISerializable(Newtonsoft.Json.JsonWriter,System.Runtime.Serialization.ISerializable,Newtonsoft.Json.Serialization.JsonISerializableContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializeISerializable_m3925782039 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonISerializableContract_t3363619915 * ___contract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___collectionContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ShouldWriteType(Newtonsoft.Json.TypeNameHandling,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  bool JsonSerializerInternalWriter_ShouldWriteType_m1179267105 (JsonSerializerInternalWriter_t1794357283 * __this, int32_t ___typeNameHandlingFlag, JsonContract_t2267638131 * ___contract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___containerContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeDictionary(Newtonsoft.Json.JsonWriter,System.Collections.IDictionary,Newtonsoft.Json.Serialization.JsonDictionaryContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializeDictionary_m4132390941 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___values, JsonDictionaryContract_t128316969 * ___contract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___collectionContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetPropertyName(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonContract,System.Boolean&)
extern "C"  String_t* JsonSerializerInternalWriter_GetPropertyName_m120991536 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___name, JsonContract_t2267638131 * ___contract, bool* ___escape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HandleError(Newtonsoft.Json.JsonWriter,System.Int32)
extern "C"  void JsonSerializerInternalWriter_HandleError_m15457312 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, int32_t ___initialDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ShouldSerialize(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  bool JsonSerializerInternalWriter_ShouldSerialize_m2571314090 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, JsonProperty_t1841444406 * ___property, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::IsSpecified(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  bool JsonSerializerInternalWriter_IsSpecified_m4290078225 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, JsonProperty_t1841444406 * ___property, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
