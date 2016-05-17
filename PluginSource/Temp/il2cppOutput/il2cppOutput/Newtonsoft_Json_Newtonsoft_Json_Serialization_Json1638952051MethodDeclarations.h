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

// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t1638952051;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t2267638131;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t2629456141;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t1841444406;
// Newtonsoft.Json.Serialization.JsonContainerContract
struct JsonContainerContract_t3892501444;
// System.String
struct String_t;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t757201947;
// Newtonsoft.Json.Linq.JTokenReader
struct JTokenReader_t1263117929;
// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t1632130460;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Collections.IList
struct IList_t1612618265;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// Newtonsoft.Json.Serialization.JsonDictionaryContract
struct JsonDictionaryContract_t128316969;
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t3363619915;
// Newtonsoft.Json.Serialization.JsonObjectContract
struct JsonObjectContract_t3651158994;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t602487958;
// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext>
struct List_1_t2900970855;
// System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Dictionary_2_t4087681360;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "mscorlib_System_Type2779229935.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2267638131.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json1841444406.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json3892501444.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonConverter757201947.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JTokenReader1263117929.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DefaultValueHandli3337232248.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json1632130460.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_JsonD128316969.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json3363619915.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2367600838.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json3651158994.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2652339728.h"

// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::.ctor(Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonSerializerInternalReader__ctor_m948700458 (JsonSerializerInternalReader_t1638952051 * __this, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetContractSafe(System.Type)
extern "C"  JsonContract_t2267638131 * JsonSerializerInternalReader_GetContractSafe_m1273160499 (JsonSerializerInternalReader_t1638952051 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::Deserialize(Newtonsoft.Json.JsonReader,System.Type,System.Boolean)
extern "C"  Il2CppObject * JsonSerializerInternalReader_Deserialize_m4218677033 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, bool ___checkAdditionalContent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonSerializerProxy Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetInternalSerializer()
extern "C"  JsonSerializerProxy_t2629456141 * JsonSerializerInternalReader_GetInternalSerializer_m3470711210 (JsonSerializerInternalReader_t1638952051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateJToken(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  JToken_t2367600838 * JsonSerializerInternalReader_CreateJToken_m864232728 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonContract_t2267638131 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateJObject(Newtonsoft.Json.JsonReader)
extern "C"  JToken_t2367600838 * JsonSerializerInternalReader_CreateJObject_m3929757817 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateValueInternal(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateValueInternal_m1494398188 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, JsonContract_t2267638131 * ___contract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___containerContract, JsonProperty_t1841444406 * ___containerMember, Il2CppObject * ___existingValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CoerceEmptyStringToNull(System.Type,Newtonsoft.Json.Serialization.JsonContract,System.String)
extern "C"  bool JsonSerializerInternalReader_CoerceEmptyStringToNull_m1610978350 (Il2CppObject * __this /* static, unused */, Type_t * ___objectType, JsonContract_t2267638131 * ___contract, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetExpectedDescription(Newtonsoft.Json.Serialization.JsonContract)
extern "C"  String_t* JsonSerializerInternalReader_GetExpectedDescription_m4032814287 (JsonSerializerInternalReader_t1638952051 * __this, JsonContract_t2267638131 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetConverter(Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.JsonConverter,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  JsonConverter_t757201947 * JsonSerializerInternalReader_GetConverter_m543681313 (JsonSerializerInternalReader_t1638952051 * __this, JsonContract_t2267638131 * ___contract, JsonConverter_t757201947 * ___memberConverter, JsonContainerContract_t3892501444 * ___containerContract, JsonProperty_t1841444406 * ___containerProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateObject(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateObject_m2983839557 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, JsonContract_t2267638131 * ___contract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___containerContract, JsonProperty_t1841444406 * ___containerMember, Il2CppObject * ___existingValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ReadMetadataPropertiesToken(Newtonsoft.Json.Linq.JTokenReader,System.Type&,Newtonsoft.Json.Serialization.JsonContract&,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object,System.Object&,System.String&)
extern "C"  bool JsonSerializerInternalReader_ReadMetadataPropertiesToken_m822882719 (JsonSerializerInternalReader_t1638952051 * __this, JTokenReader_t1263117929 * ___reader, Type_t ** ___objectType, JsonContract_t2267638131 ** ___contract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___containerContract, JsonProperty_t1841444406 * ___containerMember, Il2CppObject * ___existingValue, Il2CppObject ** ___newValue, String_t** ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ReadMetadataProperties(Newtonsoft.Json.JsonReader,System.Type&,Newtonsoft.Json.Serialization.JsonContract&,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object,System.Object&,System.String&)
extern "C"  bool JsonSerializerInternalReader_ReadMetadataProperties_m4259176651 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Type_t ** ___objectType, JsonContract_t2267638131 ** ___contract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___containerContract, JsonProperty_t1841444406 * ___containerMember, Il2CppObject * ___existingValue, Il2CppObject ** ___newValue, String_t** ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ResolveTypeName(Newtonsoft.Json.JsonReader,System.Type&,Newtonsoft.Json.Serialization.JsonContract&,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,System.String)
extern "C"  void JsonSerializerInternalReader_ResolveTypeName_m1455871692 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Type_t ** ___objectType, JsonContract_t2267638131 ** ___contract, JsonProperty_t1841444406 * ___member, JsonContainerContract_t3892501444 * ___containerContract, JsonProperty_t1841444406 * ___containerMember, String_t* ___qualifiedTypeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonArrayContract Newtonsoft.Json.Serialization.JsonSerializerInternalReader::EnsureArrayContract(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  JsonArrayContract_t1632130460 * JsonSerializerInternalReader_EnsureArrayContract_m2714306693 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, JsonContract_t2267638131 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateList(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateList_m3670290740 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, JsonContract_t2267638131 * ___contract, JsonProperty_t1841444406 * ___member, Il2CppObject * ___existingValue, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::HasNoDefinedType(Newtonsoft.Json.Serialization.JsonContract)
extern "C"  bool JsonSerializerInternalReader_HasNoDefinedType_m459585552 (JsonSerializerInternalReader_t1638952051 * __this, JsonContract_t2267638131 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::EnsureType(Newtonsoft.Json.JsonReader,System.Object,System.Globalization.CultureInfo,Newtonsoft.Json.Serialization.JsonContract,System.Type)
extern "C"  Il2CppObject * JsonSerializerInternalReader_EnsureType_m3849890492 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___value, CultureInfo_t3603717042 * ___culture, JsonContract_t2267638131 * ___contract, Type_t * ___targetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::SetPropertyValue(Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonConverter,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonReader,System.Object)
extern "C"  bool JsonSerializerInternalReader_SetPropertyValue_m3480906970 (JsonSerializerInternalReader_t1638952051 * __this, JsonProperty_t1841444406 * ___property, JsonConverter_t757201947 * ___propertyConverter, JsonContainerContract_t3892501444 * ___containerContract, JsonProperty_t1841444406 * ___containerProperty, JsonReader_t1817561742 * ___reader, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CalculatePropertyDetails(Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonConverter&,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonReader,System.Object,System.Boolean&,System.Object&,Newtonsoft.Json.Serialization.JsonContract&,System.Boolean&)
extern "C"  bool JsonSerializerInternalReader_CalculatePropertyDetails_m1307870504 (JsonSerializerInternalReader_t1638952051 * __this, JsonProperty_t1841444406 * ___property, JsonConverter_t757201947 ** ___propertyConverter, JsonContainerContract_t3892501444 * ___containerContract, JsonProperty_t1841444406 * ___containerProperty, JsonReader_t1817561742 * ___reader, Il2CppObject * ___target, bool* ___useExistingValue, Il2CppObject ** ___currentValue, JsonContract_t2267638131 ** ___propertyContract, bool* ___gottenCurrentValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::AddReference(Newtonsoft.Json.JsonReader,System.String,System.Object)
extern "C"  void JsonSerializerInternalReader_AddReference_m2338248447 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, String_t* ___id, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::HasFlag(Newtonsoft.Json.DefaultValueHandling,Newtonsoft.Json.DefaultValueHandling)
extern "C"  bool JsonSerializerInternalReader_HasFlag_m2265828307 (JsonSerializerInternalReader_t1638952051 * __this, int32_t ___value, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ShouldSetPropertyValue(Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  bool JsonSerializerInternalReader_ShouldSetPropertyValue_m1219481536 (JsonSerializerInternalReader_t1638952051 * __this, JsonProperty_t1841444406 * ___property, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateNewList(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonArrayContract,System.Boolean&)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateNewList_m359174208 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonArrayContract_t1632130460 * ___contract, bool* ___createdFromNonDefaultCreator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateNewDictionary(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonDictionaryContract,System.Boolean&)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateNewDictionary_m454890797 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonDictionaryContract_t128316969 * ___contract, bool* ___createdFromNonDefaultCreator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::OnDeserializing(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonContract,System.Object)
extern "C"  void JsonSerializerInternalReader_OnDeserializing_m3728268691 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonContract_t2267638131 * ___contract, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::OnDeserialized(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonContract,System.Object)
extern "C"  void JsonSerializerInternalReader_OnDeserialized_m332398968 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonContract_t2267638131 * ___contract, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateDictionary(System.Collections.IDictionary,Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonDictionaryContract,Newtonsoft.Json.Serialization.JsonProperty,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateDictionary_m3098187004 (JsonSerializerInternalReader_t1638952051 * __this, Il2CppObject * ___dictionary, JsonReader_t1817561742 * ___reader, JsonDictionaryContract_t128316969 * ___contract, JsonProperty_t1841444406 * ___containerProperty, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateMultidimensionalArray(System.Collections.IList,Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateMultidimensionalArray_m2818336698 (JsonSerializerInternalReader_t1638952051 * __this, Il2CppObject * ___list, JsonReader_t1817561742 * ___reader, JsonArrayContract_t1632130460 * ___contract, JsonProperty_t1841444406 * ___containerProperty, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ThrowUnexpectedEndException(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonContract,System.Object,System.String)
extern "C"  void JsonSerializerInternalReader_ThrowUnexpectedEndException_m2978189441 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonContract_t2267638131 * ___contract, Il2CppObject * ___currentObject, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateList(System.Collections.IList,Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateList_m1279953865 (JsonSerializerInternalReader_t1638952051 * __this, Il2CppObject * ___list, JsonReader_t1817561742 * ___reader, JsonArrayContract_t1632130460 * ___contract, JsonProperty_t1841444406 * ___containerProperty, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateISerializable(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonISerializableContract,Newtonsoft.Json.Serialization.JsonProperty,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateISerializable_m1086567575 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonISerializableContract_t3363619915 * ___contract, JsonProperty_t1841444406 * ___member, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateISerializableItem(Newtonsoft.Json.Linq.JToken,System.Type,Newtonsoft.Json.Serialization.JsonISerializableContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateISerializableItem_m2509667853 (JsonSerializerInternalReader_t1638952051 * __this, JToken_t2367600838 * ___token, Type_t * ___type, JsonISerializableContract_t3363619915 * ___contract, JsonProperty_t1841444406 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateObjectUsingCreatorWithParameters(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateObjectUsingCreatorWithParameters_m1682256240 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonObjectContract_t3651158994 * ___contract, JsonProperty_t1841444406 * ___containerProperty, ObjectConstructor_1_t602487958 * ___creator, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::DeserializeConvertable(Newtonsoft.Json.JsonConverter,Newtonsoft.Json.JsonReader,System.Type,System.Object)
extern "C"  Il2CppObject * JsonSerializerInternalReader_DeserializeConvertable_m2891136326 (JsonSerializerInternalReader_t1638952051 * __this, JsonConverter_t757201947 * ___converter, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, Il2CppObject * ___existingValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext> Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ResolvePropertyAndCreatorValues(Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonReader,System.Type)
extern "C"  List_1_t2900970855 * JsonSerializerInternalReader_ResolvePropertyAndCreatorValues_m3506870239 (JsonSerializerInternalReader_t1638952051 * __this, JsonObjectContract_t3651158994 * ___contract, JsonProperty_t1841444406 * ___containerProperty, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ReadForType(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonContract,System.Boolean)
extern "C"  bool JsonSerializerInternalReader_ReadForType_m2347582334 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonContract_t2267638131 * ___contract, bool ___hasConverter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateNewObject(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty,System.String,System.Boolean&)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateNewObject_m1393220128 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonObjectContract_t3651158994 * ___objectContract, JsonProperty_t1841444406 * ___containerMember, JsonProperty_t1841444406 * ___containerProperty, String_t* ___id, bool* ___createdFromNonDefaultCreator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateObject(System.Object,Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateObject_m3983230547 (JsonSerializerInternalReader_t1638952051 * __this, Il2CppObject * ___newObject, JsonReader_t1817561742 * ___reader, JsonObjectContract_t3651158994 * ___contract, JsonProperty_t1841444406 * ___member, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ShouldDeserialize(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  bool JsonSerializerInternalReader_ShouldDeserialize_m1680907083 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonProperty_t1841444406 * ___property, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CheckPropertyName(Newtonsoft.Json.JsonReader,System.String)
extern "C"  bool JsonSerializerInternalReader_CheckPropertyName_m2210507953 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, String_t* ___memberName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::SetExtensionData(Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonReader,System.String,System.Object)
extern "C"  void JsonSerializerInternalReader_SetExtensionData_m2470256576 (JsonSerializerInternalReader_t1638952051 * __this, JsonObjectContract_t3651158994 * ___contract, JsonProperty_t1841444406 * ___member, JsonReader_t1817561742 * ___reader, String_t* ___memberName, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ReadExtensionDataValue(Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonReader)
extern "C"  Il2CppObject * JsonSerializerInternalReader_ReadExtensionDataValue_m1951731394 (JsonSerializerInternalReader_t1638952051 * __this, JsonObjectContract_t3651158994 * ___contract, JsonProperty_t1841444406 * ___member, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::EndProcessProperty(System.Object,Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonObjectContract,System.Int32,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence,System.Boolean)
extern "C"  void JsonSerializerInternalReader_EndProcessProperty_m92185328 (JsonSerializerInternalReader_t1638952051 * __this, Il2CppObject * ___newObject, JsonReader_t1817561742 * ___reader, JsonObjectContract_t3651158994 * ___contract, int32_t ___initialDepth, JsonProperty_t1841444406 * ___property, int32_t ___presence, bool ___setDefaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::SetPropertyPresence(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonProperty,System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>)
extern "C"  void JsonSerializerInternalReader_SetPropertyPresence_m2573427894 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonProperty_t1841444406 * ___property, Dictionary_2_t4087681360 * ___requiredProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::HandleError(Newtonsoft.Json.JsonReader,System.Boolean,System.Int32)
extern "C"  void JsonSerializerInternalReader_HandleError_m1679699313 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, bool ___readPastError, int32_t ___initialDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
