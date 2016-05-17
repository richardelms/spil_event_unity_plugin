#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Serialization.Func`2<System.Object[],Newtonsoft.Json.JsonConverter>>
struct ThreadSafeStore_2_t3821669011;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonTypeReflector
struct  JsonTypeReflector_t1197019735  : public Il2CppObject
{
public:

public:
};

struct JsonTypeReflector_t1197019735_StaticFields
{
public:
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonTypeReflector::_dynamicCodeGeneration
	Nullable_1_t3097043249  ____dynamicCodeGeneration_0;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonTypeReflector::_fullyTrusted
	Nullable_1_t3097043249  ____fullyTrusted_1;
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Serialization.Func`2<System.Object[],Newtonsoft.Json.JsonConverter>> Newtonsoft.Json.Serialization.JsonTypeReflector::JsonConverterCreatorCache
	ThreadSafeStore_2_t3821669011 * ___JsonConverterCreatorCache_2;

public:
	inline static int32_t get_offset_of__dynamicCodeGeneration_0() { return static_cast<int32_t>(offsetof(JsonTypeReflector_t1197019735_StaticFields, ____dynamicCodeGeneration_0)); }
	inline Nullable_1_t3097043249  get__dynamicCodeGeneration_0() const { return ____dynamicCodeGeneration_0; }
	inline Nullable_1_t3097043249 * get_address_of__dynamicCodeGeneration_0() { return &____dynamicCodeGeneration_0; }
	inline void set__dynamicCodeGeneration_0(Nullable_1_t3097043249  value)
	{
		____dynamicCodeGeneration_0 = value;
	}

	inline static int32_t get_offset_of__fullyTrusted_1() { return static_cast<int32_t>(offsetof(JsonTypeReflector_t1197019735_StaticFields, ____fullyTrusted_1)); }
	inline Nullable_1_t3097043249  get__fullyTrusted_1() const { return ____fullyTrusted_1; }
	inline Nullable_1_t3097043249 * get_address_of__fullyTrusted_1() { return &____fullyTrusted_1; }
	inline void set__fullyTrusted_1(Nullable_1_t3097043249  value)
	{
		____fullyTrusted_1 = value;
	}

	inline static int32_t get_offset_of_JsonConverterCreatorCache_2() { return static_cast<int32_t>(offsetof(JsonTypeReflector_t1197019735_StaticFields, ___JsonConverterCreatorCache_2)); }
	inline ThreadSafeStore_2_t3821669011 * get_JsonConverterCreatorCache_2() const { return ___JsonConverterCreatorCache_2; }
	inline ThreadSafeStore_2_t3821669011 ** get_address_of_JsonConverterCreatorCache_2() { return &___JsonConverterCreatorCache_2; }
	inline void set_JsonConverterCreatorCache_2(ThreadSafeStore_2_t3821669011 * value)
	{
		___JsonConverterCreatorCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___JsonConverterCreatorCache_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
