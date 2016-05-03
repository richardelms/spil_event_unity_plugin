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

// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t2267638131;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t757201947;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback>
struct IList_1_t3630954504;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationErrorCallback>
struct IList_1_t2666118224;
// Newtonsoft.Json.Serialization.Func`1<System.Object>
struct Func_1_t3187571767;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t957583840;
// Newtonsoft.Json.Serialization.SerializationCallback
struct SerializationCallback_t1464462190;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Newtonsoft.Json.Serialization.SerializationErrorCallback
struct SerializationErrorCallback_t499625910;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonConverter757201947.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Error957583840.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Type Newtonsoft.Json.Serialization.JsonContract::get_UnderlyingType()
extern "C"  Type_t * JsonContract_get_UnderlyingType_m2728982597 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_UnderlyingType(System.Type)
extern "C"  void JsonContract_set_UnderlyingType_m4081072250 (JsonContract_t2267638131 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonContract::get_CreatedType()
extern "C"  Type_t * JsonContract_get_CreatedType_m2486433046 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_CreatedType(System.Type)
extern "C"  void JsonContract_set_CreatedType_m557157373 (JsonContract_t2267638131 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonContract::get_IsReference()
extern "C"  Nullable_1_t3097043249  JsonContract_get_IsReference_m410027334 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_IsReference(System.Nullable`1<System.Boolean>)
extern "C"  void JsonContract_set_IsReference_m3901198925 (JsonContract_t2267638131 * __this, Nullable_1_t3097043249  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonContract::get_Converter()
extern "C"  JsonConverter_t757201947 * JsonContract_get_Converter_m2942459198 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_Converter(Newtonsoft.Json.JsonConverter)
extern "C"  void JsonContract_set_Converter_m2759170069 (JsonContract_t2267638131 * __this, JsonConverter_t757201947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonContract::get_InternalConverter()
extern "C"  JsonConverter_t757201947 * JsonContract_get_InternalConverter_m1583196481 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_InternalConverter(Newtonsoft.Json.JsonConverter)
extern "C"  void JsonContract_set_InternalConverter_m1982130930 (JsonContract_t2267638131 * __this, JsonConverter_t757201947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> Newtonsoft.Json.Serialization.JsonContract::get_OnDeserializedCallbacks()
extern "C"  Il2CppObject* JsonContract_get_OnDeserializedCallbacks_m630598068 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> Newtonsoft.Json.Serialization.JsonContract::get_OnDeserializingCallbacks()
extern "C"  Il2CppObject* JsonContract_get_OnDeserializingCallbacks_m3365923849 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> Newtonsoft.Json.Serialization.JsonContract::get_OnSerializedCallbacks()
extern "C"  Il2CppObject* JsonContract_get_OnSerializedCallbacks_m2039545365 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> Newtonsoft.Json.Serialization.JsonContract::get_OnSerializingCallbacks()
extern "C"  Il2CppObject* JsonContract_get_OnSerializingCallbacks_m4093617096 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationErrorCallback> Newtonsoft.Json.Serialization.JsonContract::get_OnErrorCallbacks()
extern "C"  Il2CppObject* JsonContract_get_OnErrorCallbacks_m1311984369 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.Func`1<System.Object> Newtonsoft.Json.Serialization.JsonContract::get_DefaultCreator()
extern "C"  Func_1_t3187571767 * JsonContract_get_DefaultCreator_m289615070 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_DefaultCreator(Newtonsoft.Json.Serialization.Func`1<System.Object>)
extern "C"  void JsonContract_set_DefaultCreator_m2048523179 (JsonContract_t2267638131 * __this, Func_1_t3187571767 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonContract::get_DefaultCreatorNonPublic()
extern "C"  bool JsonContract_get_DefaultCreatorNonPublic_m2373314799 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_DefaultCreatorNonPublic(System.Boolean)
extern "C"  void JsonContract_set_DefaultCreatorNonPublic_m2836349404 (JsonContract_t2267638131 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::.ctor(System.Type)
extern "C"  void JsonContract__ctor_m3668051488 (JsonContract_t2267638131 * __this, Type_t * ___underlyingType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnSerializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnSerializing_m2191248643 (JsonContract_t2267638131 * __this, Il2CppObject * ___o, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnSerialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnSerialized_m1511928666 (JsonContract_t2267638131 * __this, Il2CppObject * ___o, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnDeserializing_m2214241348 (JsonContract_t2267638131 * __this, Il2CppObject * ___o, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnDeserialized_m265744377 (JsonContract_t2267638131 * __this, Il2CppObject * ___o, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnError(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext)
extern "C"  void JsonContract_InvokeOnError_m2588704788 (JsonContract_t2267638131 * __this, Il2CppObject * ___o, StreamingContext_t986364934  ___context, ErrorContext_t957583840 * ___errorContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.SerializationCallback Newtonsoft.Json.Serialization.JsonContract::CreateSerializationCallback(System.Reflection.MethodInfo)
extern "C"  SerializationCallback_t1464462190 * JsonContract_CreateSerializationCallback_m633697804 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___callbackMethodInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.SerializationErrorCallback Newtonsoft.Json.Serialization.JsonContract::CreateSerializationErrorCallback(System.Reflection.MethodInfo)
extern "C"  SerializationErrorCallback_t499625910 * JsonContract_CreateSerializationErrorCallback_m2259177268 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___callbackMethodInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
