#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t1994304730;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t1140441370;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.DefaultContractResolverState
struct DefaultContractResolverState_t3097453521;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.DefaultContractResolver
struct  DefaultContractResolver_t2164550322  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Serialization.DefaultContractResolverState Newtonsoft.Json.Serialization.DefaultContractResolver::_instanceState
	DefaultContractResolverState_t3097453521 * ____instanceState_4;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::_sharedCache
	bool ____sharedCache_5;
	// System.Reflection.BindingFlags Newtonsoft.Json.Serialization.DefaultContractResolver::<DefaultMembersSearchFlags>k__BackingField
	int32_t ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<SerializeCompilerGeneratedMembers>k__BackingField
	bool ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreSerializableInterface>k__BackingField
	bool ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreSerializableAttribute>k__BackingField
	bool ___U3CIgnoreSerializableAttributeU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of__instanceState_4() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322, ____instanceState_4)); }
	inline DefaultContractResolverState_t3097453521 * get__instanceState_4() const { return ____instanceState_4; }
	inline DefaultContractResolverState_t3097453521 ** get_address_of__instanceState_4() { return &____instanceState_4; }
	inline void set__instanceState_4(DefaultContractResolverState_t3097453521 * value)
	{
		____instanceState_4 = value;
		Il2CppCodeGenWriteBarrier(&____instanceState_4, value);
	}

	inline static int32_t get_offset_of__sharedCache_5() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322, ____sharedCache_5)); }
	inline bool get__sharedCache_5() const { return ____sharedCache_5; }
	inline bool* get_address_of__sharedCache_5() { return &____sharedCache_5; }
	inline void set__sharedCache_5(bool value)
	{
		____sharedCache_5 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultMembersSearchFlagsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322, ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6)); }
	inline int32_t get_U3CDefaultMembersSearchFlagsU3Ek__BackingField_6() const { return ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CDefaultMembersSearchFlagsU3Ek__BackingField_6() { return &___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6; }
	inline void set_U3CDefaultMembersSearchFlagsU3Ek__BackingField_6(int32_t value)
	{
		___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322, ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7)); }
	inline bool get_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7() const { return ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7() { return &___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7; }
	inline void set_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7(bool value)
	{
		___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIgnoreSerializableInterfaceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322, ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8)); }
	inline bool get_U3CIgnoreSerializableInterfaceU3Ek__BackingField_8() const { return ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIgnoreSerializableInterfaceU3Ek__BackingField_8() { return &___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8; }
	inline void set_U3CIgnoreSerializableInterfaceU3Ek__BackingField_8(bool value)
	{
		___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIgnoreSerializableAttributeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322, ___U3CIgnoreSerializableAttributeU3Ek__BackingField_9)); }
	inline bool get_U3CIgnoreSerializableAttributeU3Ek__BackingField_9() const { return ___U3CIgnoreSerializableAttributeU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIgnoreSerializableAttributeU3Ek__BackingField_9() { return &___U3CIgnoreSerializableAttributeU3Ek__BackingField_9; }
	inline void set_U3CIgnoreSerializableAttributeU3Ek__BackingField_9(bool value)
	{
		___U3CIgnoreSerializableAttributeU3Ek__BackingField_9 = value;
	}
};

struct DefaultContractResolver_t2164550322_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Serialization.DefaultContractResolver::_instance
	Il2CppObject * ____instance_0;
	// Newtonsoft.Json.JsonConverter[] Newtonsoft.Json.Serialization.DefaultContractResolver::BuiltInConverters
	JsonConverterU5BU5D_t1140441370* ___BuiltInConverters_1;
	// System.Object Newtonsoft.Json.Serialization.DefaultContractResolver::TypeContractCacheLock
	Il2CppObject * ___TypeContractCacheLock_2;
	// Newtonsoft.Json.Serialization.DefaultContractResolverState Newtonsoft.Json.Serialization.DefaultContractResolver::_sharedState
	DefaultContractResolverState_t3097453521 * ____sharedState_3;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322_StaticFields, ____instance_0)); }
	inline Il2CppObject * get__instance_0() const { return ____instance_0; }
	inline Il2CppObject ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(Il2CppObject * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____instance_0, value);
	}

	inline static int32_t get_offset_of_BuiltInConverters_1() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322_StaticFields, ___BuiltInConverters_1)); }
	inline JsonConverterU5BU5D_t1140441370* get_BuiltInConverters_1() const { return ___BuiltInConverters_1; }
	inline JsonConverterU5BU5D_t1140441370** get_address_of_BuiltInConverters_1() { return &___BuiltInConverters_1; }
	inline void set_BuiltInConverters_1(JsonConverterU5BU5D_t1140441370* value)
	{
		___BuiltInConverters_1 = value;
		Il2CppCodeGenWriteBarrier(&___BuiltInConverters_1, value);
	}

	inline static int32_t get_offset_of_TypeContractCacheLock_2() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322_StaticFields, ___TypeContractCacheLock_2)); }
	inline Il2CppObject * get_TypeContractCacheLock_2() const { return ___TypeContractCacheLock_2; }
	inline Il2CppObject ** get_address_of_TypeContractCacheLock_2() { return &___TypeContractCacheLock_2; }
	inline void set_TypeContractCacheLock_2(Il2CppObject * value)
	{
		___TypeContractCacheLock_2 = value;
		Il2CppCodeGenWriteBarrier(&___TypeContractCacheLock_2, value);
	}

	inline static int32_t get_offset_of__sharedState_3() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322_StaticFields, ____sharedState_3)); }
	inline DefaultContractResolverState_t3097453521 * get__sharedState_3() const { return ____sharedState_3; }
	inline DefaultContractResolverState_t3097453521 ** get_address_of__sharedState_3() { return &____sharedState_3; }
	inline void set__sharedState_3(DefaultContractResolverState_t3097453521 * value)
	{
		____sharedState_3 = value;
		Il2CppCodeGenWriteBarrier(&____sharedState_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
