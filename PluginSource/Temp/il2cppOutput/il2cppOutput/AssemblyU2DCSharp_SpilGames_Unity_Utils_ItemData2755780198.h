#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Utils.ItemData
struct  ItemData_t2755780198  : public Il2CppObject
{
public:
	// System.Int32 SpilGames.Unity.Utils.ItemData::id
	int32_t ___id_0;
	// System.String SpilGames.Unity.Utils.ItemData::type
	String_t* ___type_1;
	// System.String SpilGames.Unity.Utils.ItemData::value
	String_t* ___value_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ItemData_t2755780198, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ItemData_t2755780198, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(ItemData_t2755780198, ___value_2)); }
	inline String_t* get_value_2() const { return ___value_2; }
	inline String_t** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(String_t* value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier(&___value_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
