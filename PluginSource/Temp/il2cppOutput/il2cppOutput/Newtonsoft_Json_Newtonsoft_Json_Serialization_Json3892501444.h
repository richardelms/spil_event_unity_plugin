#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t2267638131;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t757201947;

#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2267638131.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "mscorlib_System_Nullable_1_gen319467179.h"
#include "mscorlib_System_Nullable_1_gen964387137.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonContainerContract
struct  JsonContainerContract_t3892501444  : public JsonContract_t2267638131
{
public:
	// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonContainerContract::_itemContract
	JsonContract_t2267638131 * ____itemContract_21;
	// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonContainerContract::_finalItemContract
	JsonContract_t2267638131 * ____finalItemContract_22;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonContainerContract::<ItemConverter>k__BackingField
	JsonConverter_t757201947 * ___U3CItemConverterU3Ek__BackingField_23;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonContainerContract::<ItemIsReference>k__BackingField
	Nullable_1_t3097043249  ___U3CItemIsReferenceU3Ek__BackingField_24;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonContainerContract::<ItemReferenceLoopHandling>k__BackingField
	Nullable_1_t319467179  ___U3CItemReferenceLoopHandlingU3Ek__BackingField_25;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonContainerContract::<ItemTypeNameHandling>k__BackingField
	Nullable_1_t964387137  ___U3CItemTypeNameHandlingU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of__itemContract_21() { return static_cast<int32_t>(offsetof(JsonContainerContract_t3892501444, ____itemContract_21)); }
	inline JsonContract_t2267638131 * get__itemContract_21() const { return ____itemContract_21; }
	inline JsonContract_t2267638131 ** get_address_of__itemContract_21() { return &____itemContract_21; }
	inline void set__itemContract_21(JsonContract_t2267638131 * value)
	{
		____itemContract_21 = value;
		Il2CppCodeGenWriteBarrier(&____itemContract_21, value);
	}

	inline static int32_t get_offset_of__finalItemContract_22() { return static_cast<int32_t>(offsetof(JsonContainerContract_t3892501444, ____finalItemContract_22)); }
	inline JsonContract_t2267638131 * get__finalItemContract_22() const { return ____finalItemContract_22; }
	inline JsonContract_t2267638131 ** get_address_of__finalItemContract_22() { return &____finalItemContract_22; }
	inline void set__finalItemContract_22(JsonContract_t2267638131 * value)
	{
		____finalItemContract_22 = value;
		Il2CppCodeGenWriteBarrier(&____finalItemContract_22, value);
	}

	inline static int32_t get_offset_of_U3CItemConverterU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(JsonContainerContract_t3892501444, ___U3CItemConverterU3Ek__BackingField_23)); }
	inline JsonConverter_t757201947 * get_U3CItemConverterU3Ek__BackingField_23() const { return ___U3CItemConverterU3Ek__BackingField_23; }
	inline JsonConverter_t757201947 ** get_address_of_U3CItemConverterU3Ek__BackingField_23() { return &___U3CItemConverterU3Ek__BackingField_23; }
	inline void set_U3CItemConverterU3Ek__BackingField_23(JsonConverter_t757201947 * value)
	{
		___U3CItemConverterU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CItemConverterU3Ek__BackingField_23, value);
	}

	inline static int32_t get_offset_of_U3CItemIsReferenceU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(JsonContainerContract_t3892501444, ___U3CItemIsReferenceU3Ek__BackingField_24)); }
	inline Nullable_1_t3097043249  get_U3CItemIsReferenceU3Ek__BackingField_24() const { return ___U3CItemIsReferenceU3Ek__BackingField_24; }
	inline Nullable_1_t3097043249 * get_address_of_U3CItemIsReferenceU3Ek__BackingField_24() { return &___U3CItemIsReferenceU3Ek__BackingField_24; }
	inline void set_U3CItemIsReferenceU3Ek__BackingField_24(Nullable_1_t3097043249  value)
	{
		___U3CItemIsReferenceU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(JsonContainerContract_t3892501444, ___U3CItemReferenceLoopHandlingU3Ek__BackingField_25)); }
	inline Nullable_1_t319467179  get_U3CItemReferenceLoopHandlingU3Ek__BackingField_25() const { return ___U3CItemReferenceLoopHandlingU3Ek__BackingField_25; }
	inline Nullable_1_t319467179 * get_address_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_25() { return &___U3CItemReferenceLoopHandlingU3Ek__BackingField_25; }
	inline void set_U3CItemReferenceLoopHandlingU3Ek__BackingField_25(Nullable_1_t319467179  value)
	{
		___U3CItemReferenceLoopHandlingU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CItemTypeNameHandlingU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonContainerContract_t3892501444, ___U3CItemTypeNameHandlingU3Ek__BackingField_26)); }
	inline Nullable_1_t964387137  get_U3CItemTypeNameHandlingU3Ek__BackingField_26() const { return ___U3CItemTypeNameHandlingU3Ek__BackingField_26; }
	inline Nullable_1_t964387137 * get_address_of_U3CItemTypeNameHandlingU3Ek__BackingField_26() { return &___U3CItemTypeNameHandlingU3Ek__BackingField_26; }
	inline void set_U3CItemTypeNameHandlingU3Ek__BackingField_26(Nullable_1_t964387137  value)
	{
		___U3CItemTypeNameHandlingU3Ek__BackingField_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
