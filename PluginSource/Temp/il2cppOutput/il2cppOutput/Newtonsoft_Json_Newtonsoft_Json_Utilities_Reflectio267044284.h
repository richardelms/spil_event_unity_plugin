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
// Newtonsoft.Json.Serialization.Func`2<System.Object,System.Object>
struct Func_2_t381126436;
// Newtonsoft.Json.Serialization.Action`2<System.Object,System.Object>
struct Action_2_t2350803002;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionMember
struct  ReflectionMember_t267044284  : public Il2CppObject
{
public:
	// System.Type Newtonsoft.Json.Utilities.ReflectionMember::<MemberType>k__BackingField
	Type_t * ___U3CMemberTypeU3Ek__BackingField_0;
	// Newtonsoft.Json.Serialization.Func`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionMember::<Getter>k__BackingField
	Func_2_t381126436 * ___U3CGetterU3Ek__BackingField_1;
	// Newtonsoft.Json.Serialization.Action`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionMember::<Setter>k__BackingField
	Action_2_t2350803002 * ___U3CSetterU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMemberTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReflectionMember_t267044284, ___U3CMemberTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CMemberTypeU3Ek__BackingField_0() const { return ___U3CMemberTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CMemberTypeU3Ek__BackingField_0() { return &___U3CMemberTypeU3Ek__BackingField_0; }
	inline void set_U3CMemberTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CMemberTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMemberTypeU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CGetterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReflectionMember_t267044284, ___U3CGetterU3Ek__BackingField_1)); }
	inline Func_2_t381126436 * get_U3CGetterU3Ek__BackingField_1() const { return ___U3CGetterU3Ek__BackingField_1; }
	inline Func_2_t381126436 ** get_address_of_U3CGetterU3Ek__BackingField_1() { return &___U3CGetterU3Ek__BackingField_1; }
	inline void set_U3CGetterU3Ek__BackingField_1(Func_2_t381126436 * value)
	{
		___U3CGetterU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGetterU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CSetterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ReflectionMember_t267044284, ___U3CSetterU3Ek__BackingField_2)); }
	inline Action_2_t2350803002 * get_U3CSetterU3Ek__BackingField_2() const { return ___U3CSetterU3Ek__BackingField_2; }
	inline Action_2_t2350803002 ** get_address_of_U3CSetterU3Ek__BackingField_2() { return &___U3CSetterU3Ek__BackingField_2; }
	inline void set_U3CSetterU3Ek__BackingField_2(Action_2_t2350803002 * value)
	{
		___U3CSetterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSetterU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
