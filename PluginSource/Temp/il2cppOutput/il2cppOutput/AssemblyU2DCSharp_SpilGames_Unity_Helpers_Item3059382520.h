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

// SpilGames.Unity.Helpers.Item
struct  Item_t3059382520  : public Il2CppObject
{
public:
	// System.String SpilGames.Unity.Helpers.Item::id
	String_t* ___id_0;
	// System.String SpilGames.Unity.Helpers.Item::originalValue
	String_t* ___originalValue_1;
	// System.String SpilGames.Unity.Helpers.Item::promotionValue
	String_t* ___promotionValue_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Item_t3059382520, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_originalValue_1() { return static_cast<int32_t>(offsetof(Item_t3059382520, ___originalValue_1)); }
	inline String_t* get_originalValue_1() const { return ___originalValue_1; }
	inline String_t** get_address_of_originalValue_1() { return &___originalValue_1; }
	inline void set_originalValue_1(String_t* value)
	{
		___originalValue_1 = value;
		Il2CppCodeGenWriteBarrier(&___originalValue_1, value);
	}

	inline static int32_t get_offset_of_promotionValue_2() { return static_cast<int32_t>(offsetof(Item_t3059382520, ___promotionValue_2)); }
	inline String_t* get_promotionValue_2() const { return ___promotionValue_2; }
	inline String_t** get_address_of_promotionValue_2() { return &___promotionValue_2; }
	inline void set_promotionValue_2(String_t* value)
	{
		___promotionValue_2 = value;
		Il2CppCodeGenWriteBarrier(&___promotionValue_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
