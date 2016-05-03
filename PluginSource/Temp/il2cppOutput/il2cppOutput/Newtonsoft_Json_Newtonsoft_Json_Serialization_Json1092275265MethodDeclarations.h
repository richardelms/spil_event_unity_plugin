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

// Newtonsoft.Json.Serialization.JsonSerializerInternalBase
struct JsonSerializerInternalBase_t1092275265;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object>
struct BidirectionalDictionary_2_t2587161411;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t957583840;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t2267638131;
// Newtonsoft.Json.IJsonLineInfo
struct IJsonLineInfo_t3901002070;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2267638131.h"

// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalBase::.ctor(Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonSerializerInternalBase__ctor_m1880745372 (JsonSerializerInternalBase_t1092275265 * __this, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object> Newtonsoft.Json.Serialization.JsonSerializerInternalBase::get_DefaultReferenceMappings()
extern "C"  BidirectionalDictionary_2_t2587161411 * JsonSerializerInternalBase_get_DefaultReferenceMappings_m159315198 (JsonSerializerInternalBase_t1092275265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.ErrorContext Newtonsoft.Json.Serialization.JsonSerializerInternalBase::GetErrorContext(System.Object,System.Object,System.String,System.Exception)
extern "C"  ErrorContext_t957583840 * JsonSerializerInternalBase_GetErrorContext_m3309051589 (JsonSerializerInternalBase_t1092275265 * __this, Il2CppObject * ___currentObject, Il2CppObject * ___member, String_t* ___path, Exception_t1967233988 * ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalBase::ClearErrorContext()
extern "C"  void JsonSerializerInternalBase_ClearErrorContext_m476412477 (JsonSerializerInternalBase_t1092275265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalBase::IsErrorHandled(System.Object,Newtonsoft.Json.Serialization.JsonContract,System.Object,Newtonsoft.Json.IJsonLineInfo,System.String,System.Exception)
extern "C"  bool JsonSerializerInternalBase_IsErrorHandled_m499582104 (JsonSerializerInternalBase_t1092275265 * __this, Il2CppObject * ___currentObject, JsonContract_t2267638131 * ___contract, Il2CppObject * ___keyValue, Il2CppObject * ___lineInfo, String_t* ___path, Exception_t1967233988 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
