#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "mscorlib_System_Attribute498693649.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "mscorlib_System_Nullable_1_gen319467179.h"
#include "mscorlib_System_Nullable_1_gen964387137.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonContainerAttribute
struct  JsonContainerAttribute_t4246140134  : public Attribute_t498693649
{
public:
	// System.Type Newtonsoft.Json.JsonContainerAttribute::<ItemConverterType>k__BackingField
	Type_t * ___U3CItemConverterTypeU3Ek__BackingField_0;
	// System.Object[] Newtonsoft.Json.JsonContainerAttribute::<ItemConverterParameters>k__BackingField
	ObjectU5BU5D_t11523773* ___U3CItemConverterParametersU3Ek__BackingField_1;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonContainerAttribute::_isReference
	Nullable_1_t3097043249  ____isReference_2;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonContainerAttribute::_itemIsReference
	Nullable_1_t3097043249  ____itemIsReference_3;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonContainerAttribute::_itemReferenceLoopHandling
	Nullable_1_t319467179  ____itemReferenceLoopHandling_4;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonContainerAttribute::_itemTypeNameHandling
	Nullable_1_t964387137  ____itemTypeNameHandling_5;

public:
	inline static int32_t get_offset_of_U3CItemConverterTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t4246140134, ___U3CItemConverterTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CItemConverterTypeU3Ek__BackingField_0() const { return ___U3CItemConverterTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CItemConverterTypeU3Ek__BackingField_0() { return &___U3CItemConverterTypeU3Ek__BackingField_0; }
	inline void set_U3CItemConverterTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CItemConverterTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CItemConverterTypeU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CItemConverterParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t4246140134, ___U3CItemConverterParametersU3Ek__BackingField_1)); }
	inline ObjectU5BU5D_t11523773* get_U3CItemConverterParametersU3Ek__BackingField_1() const { return ___U3CItemConverterParametersU3Ek__BackingField_1; }
	inline ObjectU5BU5D_t11523773** get_address_of_U3CItemConverterParametersU3Ek__BackingField_1() { return &___U3CItemConverterParametersU3Ek__BackingField_1; }
	inline void set_U3CItemConverterParametersU3Ek__BackingField_1(ObjectU5BU5D_t11523773* value)
	{
		___U3CItemConverterParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CItemConverterParametersU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of__isReference_2() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t4246140134, ____isReference_2)); }
	inline Nullable_1_t3097043249  get__isReference_2() const { return ____isReference_2; }
	inline Nullable_1_t3097043249 * get_address_of__isReference_2() { return &____isReference_2; }
	inline void set__isReference_2(Nullable_1_t3097043249  value)
	{
		____isReference_2 = value;
	}

	inline static int32_t get_offset_of__itemIsReference_3() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t4246140134, ____itemIsReference_3)); }
	inline Nullable_1_t3097043249  get__itemIsReference_3() const { return ____itemIsReference_3; }
	inline Nullable_1_t3097043249 * get_address_of__itemIsReference_3() { return &____itemIsReference_3; }
	inline void set__itemIsReference_3(Nullable_1_t3097043249  value)
	{
		____itemIsReference_3 = value;
	}

	inline static int32_t get_offset_of__itemReferenceLoopHandling_4() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t4246140134, ____itemReferenceLoopHandling_4)); }
	inline Nullable_1_t319467179  get__itemReferenceLoopHandling_4() const { return ____itemReferenceLoopHandling_4; }
	inline Nullable_1_t319467179 * get_address_of__itemReferenceLoopHandling_4() { return &____itemReferenceLoopHandling_4; }
	inline void set__itemReferenceLoopHandling_4(Nullable_1_t319467179  value)
	{
		____itemReferenceLoopHandling_4 = value;
	}

	inline static int32_t get_offset_of__itemTypeNameHandling_5() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t4246140134, ____itemTypeNameHandling_5)); }
	inline Nullable_1_t964387137  get__itemTypeNameHandling_5() const { return ____itemTypeNameHandling_5; }
	inline Nullable_1_t964387137 * get_address_of__itemTypeNameHandling_5() { return &____itemTypeNameHandling_5; }
	inline void set__itemTypeNameHandling_5(Nullable_1_t964387137  value)
	{
		____itemTypeNameHandling_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
