﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.SerializationCallback>
struct List_1_t2261421159;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback>
struct IList_1_t3630954504;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationErrorCallback>
struct IList_1_t2666118224;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t757201947;
// Newtonsoft.Json.Serialization.Func`1<System.Object>
struct Func_1_t3187571767;

#include "mscorlib_System_Object837106420.h"
#include "Newtonsoft_Json_Newtonsoft_Json_ReadType2907181235.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2603335629.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonContract
struct  JsonContract_t2267638131  : public Il2CppObject
{
public:
	// System.Boolean Newtonsoft.Json.Serialization.JsonContract::IsNullable
	bool ___IsNullable_0;
	// System.Boolean Newtonsoft.Json.Serialization.JsonContract::IsConvertable
	bool ___IsConvertable_1;
	// System.Boolean Newtonsoft.Json.Serialization.JsonContract::IsEnum
	bool ___IsEnum_2;
	// System.Type Newtonsoft.Json.Serialization.JsonContract::NonNullableUnderlyingType
	Type_t * ___NonNullableUnderlyingType_3;
	// Newtonsoft.Json.ReadType Newtonsoft.Json.Serialization.JsonContract::InternalReadType
	int32_t ___InternalReadType_4;
	// Newtonsoft.Json.Serialization.JsonContractType Newtonsoft.Json.Serialization.JsonContract::ContractType
	int32_t ___ContractType_5;
	// System.Boolean Newtonsoft.Json.Serialization.JsonContract::IsReadOnlyOrFixedSize
	bool ___IsReadOnlyOrFixedSize_6;
	// System.Boolean Newtonsoft.Json.Serialization.JsonContract::IsSealed
	bool ___IsSealed_7;
	// System.Boolean Newtonsoft.Json.Serialization.JsonContract::IsInstantiable
	bool ___IsInstantiable_8;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.SerializationCallback> Newtonsoft.Json.Serialization.JsonContract::_onDeserializedCallbacks
	List_1_t2261421159 * ____onDeserializedCallbacks_9;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> Newtonsoft.Json.Serialization.JsonContract::_onDeserializingCallbacks
	Il2CppObject* ____onDeserializingCallbacks_10;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> Newtonsoft.Json.Serialization.JsonContract::_onSerializedCallbacks
	Il2CppObject* ____onSerializedCallbacks_11;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> Newtonsoft.Json.Serialization.JsonContract::_onSerializingCallbacks
	Il2CppObject* ____onSerializingCallbacks_12;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationErrorCallback> Newtonsoft.Json.Serialization.JsonContract::_onErrorCallbacks
	Il2CppObject* ____onErrorCallbacks_13;
	// System.Type Newtonsoft.Json.Serialization.JsonContract::_createdType
	Type_t * ____createdType_14;
	// System.Type Newtonsoft.Json.Serialization.JsonContract::<UnderlyingType>k__BackingField
	Type_t * ___U3CUnderlyingTypeU3Ek__BackingField_15;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonContract::<IsReference>k__BackingField
	Nullable_1_t3097043249  ___U3CIsReferenceU3Ek__BackingField_16;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonContract::<Converter>k__BackingField
	JsonConverter_t757201947 * ___U3CConverterU3Ek__BackingField_17;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonContract::<InternalConverter>k__BackingField
	JsonConverter_t757201947 * ___U3CInternalConverterU3Ek__BackingField_18;
	// Newtonsoft.Json.Serialization.Func`1<System.Object> Newtonsoft.Json.Serialization.JsonContract::<DefaultCreator>k__BackingField
	Func_1_t3187571767 * ___U3CDefaultCreatorU3Ek__BackingField_19;
	// System.Boolean Newtonsoft.Json.Serialization.JsonContract::<DefaultCreatorNonPublic>k__BackingField
	bool ___U3CDefaultCreatorNonPublicU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_IsNullable_0() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___IsNullable_0)); }
	inline bool get_IsNullable_0() const { return ___IsNullable_0; }
	inline bool* get_address_of_IsNullable_0() { return &___IsNullable_0; }
	inline void set_IsNullable_0(bool value)
	{
		___IsNullable_0 = value;
	}

	inline static int32_t get_offset_of_IsConvertable_1() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___IsConvertable_1)); }
	inline bool get_IsConvertable_1() const { return ___IsConvertable_1; }
	inline bool* get_address_of_IsConvertable_1() { return &___IsConvertable_1; }
	inline void set_IsConvertable_1(bool value)
	{
		___IsConvertable_1 = value;
	}

	inline static int32_t get_offset_of_IsEnum_2() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___IsEnum_2)); }
	inline bool get_IsEnum_2() const { return ___IsEnum_2; }
	inline bool* get_address_of_IsEnum_2() { return &___IsEnum_2; }
	inline void set_IsEnum_2(bool value)
	{
		___IsEnum_2 = value;
	}

	inline static int32_t get_offset_of_NonNullableUnderlyingType_3() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___NonNullableUnderlyingType_3)); }
	inline Type_t * get_NonNullableUnderlyingType_3() const { return ___NonNullableUnderlyingType_3; }
	inline Type_t ** get_address_of_NonNullableUnderlyingType_3() { return &___NonNullableUnderlyingType_3; }
	inline void set_NonNullableUnderlyingType_3(Type_t * value)
	{
		___NonNullableUnderlyingType_3 = value;
		Il2CppCodeGenWriteBarrier(&___NonNullableUnderlyingType_3, value);
	}

	inline static int32_t get_offset_of_InternalReadType_4() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___InternalReadType_4)); }
	inline int32_t get_InternalReadType_4() const { return ___InternalReadType_4; }
	inline int32_t* get_address_of_InternalReadType_4() { return &___InternalReadType_4; }
	inline void set_InternalReadType_4(int32_t value)
	{
		___InternalReadType_4 = value;
	}

	inline static int32_t get_offset_of_ContractType_5() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___ContractType_5)); }
	inline int32_t get_ContractType_5() const { return ___ContractType_5; }
	inline int32_t* get_address_of_ContractType_5() { return &___ContractType_5; }
	inline void set_ContractType_5(int32_t value)
	{
		___ContractType_5 = value;
	}

	inline static int32_t get_offset_of_IsReadOnlyOrFixedSize_6() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___IsReadOnlyOrFixedSize_6)); }
	inline bool get_IsReadOnlyOrFixedSize_6() const { return ___IsReadOnlyOrFixedSize_6; }
	inline bool* get_address_of_IsReadOnlyOrFixedSize_6() { return &___IsReadOnlyOrFixedSize_6; }
	inline void set_IsReadOnlyOrFixedSize_6(bool value)
	{
		___IsReadOnlyOrFixedSize_6 = value;
	}

	inline static int32_t get_offset_of_IsSealed_7() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___IsSealed_7)); }
	inline bool get_IsSealed_7() const { return ___IsSealed_7; }
	inline bool* get_address_of_IsSealed_7() { return &___IsSealed_7; }
	inline void set_IsSealed_7(bool value)
	{
		___IsSealed_7 = value;
	}

	inline static int32_t get_offset_of_IsInstantiable_8() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___IsInstantiable_8)); }
	inline bool get_IsInstantiable_8() const { return ___IsInstantiable_8; }
	inline bool* get_address_of_IsInstantiable_8() { return &___IsInstantiable_8; }
	inline void set_IsInstantiable_8(bool value)
	{
		___IsInstantiable_8 = value;
	}

	inline static int32_t get_offset_of__onDeserializedCallbacks_9() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ____onDeserializedCallbacks_9)); }
	inline List_1_t2261421159 * get__onDeserializedCallbacks_9() const { return ____onDeserializedCallbacks_9; }
	inline List_1_t2261421159 ** get_address_of__onDeserializedCallbacks_9() { return &____onDeserializedCallbacks_9; }
	inline void set__onDeserializedCallbacks_9(List_1_t2261421159 * value)
	{
		____onDeserializedCallbacks_9 = value;
		Il2CppCodeGenWriteBarrier(&____onDeserializedCallbacks_9, value);
	}

	inline static int32_t get_offset_of__onDeserializingCallbacks_10() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ____onDeserializingCallbacks_10)); }
	inline Il2CppObject* get__onDeserializingCallbacks_10() const { return ____onDeserializingCallbacks_10; }
	inline Il2CppObject** get_address_of__onDeserializingCallbacks_10() { return &____onDeserializingCallbacks_10; }
	inline void set__onDeserializingCallbacks_10(Il2CppObject* value)
	{
		____onDeserializingCallbacks_10 = value;
		Il2CppCodeGenWriteBarrier(&____onDeserializingCallbacks_10, value);
	}

	inline static int32_t get_offset_of__onSerializedCallbacks_11() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ____onSerializedCallbacks_11)); }
	inline Il2CppObject* get__onSerializedCallbacks_11() const { return ____onSerializedCallbacks_11; }
	inline Il2CppObject** get_address_of__onSerializedCallbacks_11() { return &____onSerializedCallbacks_11; }
	inline void set__onSerializedCallbacks_11(Il2CppObject* value)
	{
		____onSerializedCallbacks_11 = value;
		Il2CppCodeGenWriteBarrier(&____onSerializedCallbacks_11, value);
	}

	inline static int32_t get_offset_of__onSerializingCallbacks_12() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ____onSerializingCallbacks_12)); }
	inline Il2CppObject* get__onSerializingCallbacks_12() const { return ____onSerializingCallbacks_12; }
	inline Il2CppObject** get_address_of__onSerializingCallbacks_12() { return &____onSerializingCallbacks_12; }
	inline void set__onSerializingCallbacks_12(Il2CppObject* value)
	{
		____onSerializingCallbacks_12 = value;
		Il2CppCodeGenWriteBarrier(&____onSerializingCallbacks_12, value);
	}

	inline static int32_t get_offset_of__onErrorCallbacks_13() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ____onErrorCallbacks_13)); }
	inline Il2CppObject* get__onErrorCallbacks_13() const { return ____onErrorCallbacks_13; }
	inline Il2CppObject** get_address_of__onErrorCallbacks_13() { return &____onErrorCallbacks_13; }
	inline void set__onErrorCallbacks_13(Il2CppObject* value)
	{
		____onErrorCallbacks_13 = value;
		Il2CppCodeGenWriteBarrier(&____onErrorCallbacks_13, value);
	}

	inline static int32_t get_offset_of__createdType_14() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ____createdType_14)); }
	inline Type_t * get__createdType_14() const { return ____createdType_14; }
	inline Type_t ** get_address_of__createdType_14() { return &____createdType_14; }
	inline void set__createdType_14(Type_t * value)
	{
		____createdType_14 = value;
		Il2CppCodeGenWriteBarrier(&____createdType_14, value);
	}

	inline static int32_t get_offset_of_U3CUnderlyingTypeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3CUnderlyingTypeU3Ek__BackingField_15)); }
	inline Type_t * get_U3CUnderlyingTypeU3Ek__BackingField_15() const { return ___U3CUnderlyingTypeU3Ek__BackingField_15; }
	inline Type_t ** get_address_of_U3CUnderlyingTypeU3Ek__BackingField_15() { return &___U3CUnderlyingTypeU3Ek__BackingField_15; }
	inline void set_U3CUnderlyingTypeU3Ek__BackingField_15(Type_t * value)
	{
		___U3CUnderlyingTypeU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUnderlyingTypeU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3CIsReferenceU3Ek__BackingField_16)); }
	inline Nullable_1_t3097043249  get_U3CIsReferenceU3Ek__BackingField_16() const { return ___U3CIsReferenceU3Ek__BackingField_16; }
	inline Nullable_1_t3097043249 * get_address_of_U3CIsReferenceU3Ek__BackingField_16() { return &___U3CIsReferenceU3Ek__BackingField_16; }
	inline void set_U3CIsReferenceU3Ek__BackingField_16(Nullable_1_t3097043249  value)
	{
		___U3CIsReferenceU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CConverterU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3CConverterU3Ek__BackingField_17)); }
	inline JsonConverter_t757201947 * get_U3CConverterU3Ek__BackingField_17() const { return ___U3CConverterU3Ek__BackingField_17; }
	inline JsonConverter_t757201947 ** get_address_of_U3CConverterU3Ek__BackingField_17() { return &___U3CConverterU3Ek__BackingField_17; }
	inline void set_U3CConverterU3Ek__BackingField_17(JsonConverter_t757201947 * value)
	{
		___U3CConverterU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConverterU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3CInternalConverterU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3CInternalConverterU3Ek__BackingField_18)); }
	inline JsonConverter_t757201947 * get_U3CInternalConverterU3Ek__BackingField_18() const { return ___U3CInternalConverterU3Ek__BackingField_18; }
	inline JsonConverter_t757201947 ** get_address_of_U3CInternalConverterU3Ek__BackingField_18() { return &___U3CInternalConverterU3Ek__BackingField_18; }
	inline void set_U3CInternalConverterU3Ek__BackingField_18(JsonConverter_t757201947 * value)
	{
		___U3CInternalConverterU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInternalConverterU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_U3CDefaultCreatorU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3CDefaultCreatorU3Ek__BackingField_19)); }
	inline Func_1_t3187571767 * get_U3CDefaultCreatorU3Ek__BackingField_19() const { return ___U3CDefaultCreatorU3Ek__BackingField_19; }
	inline Func_1_t3187571767 ** get_address_of_U3CDefaultCreatorU3Ek__BackingField_19() { return &___U3CDefaultCreatorU3Ek__BackingField_19; }
	inline void set_U3CDefaultCreatorU3Ek__BackingField_19(Func_1_t3187571767 * value)
	{
		___U3CDefaultCreatorU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDefaultCreatorU3Ek__BackingField_19, value);
	}

	inline static int32_t get_offset_of_U3CDefaultCreatorNonPublicU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3CDefaultCreatorNonPublicU3Ek__BackingField_20)); }
	inline bool get_U3CDefaultCreatorNonPublicU3Ek__BackingField_20() const { return ___U3CDefaultCreatorNonPublicU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CDefaultCreatorNonPublicU3Ek__BackingField_20() { return &___U3CDefaultCreatorNonPublicU3Ek__BackingField_20; }
	inline void set_U3CDefaultCreatorNonPublicU3Ek__BackingField_20(bool value)
	{
		___U3CDefaultCreatorNonPublicU3Ek__BackingField_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
