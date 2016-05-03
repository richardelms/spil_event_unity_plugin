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

// SpilGames.Unity.Utils.RewardData
struct  RewardData_t903330946  : public Il2CppObject
{
public:
	// System.String SpilGames.Unity.Utils.RewardData::currencyName
	String_t* ___currencyName_0;
	// System.String SpilGames.Unity.Utils.RewardData::currencyId
	String_t* ___currencyId_1;
	// System.Int32 SpilGames.Unity.Utils.RewardData::reward
	int32_t ___reward_2;

public:
	inline static int32_t get_offset_of_currencyName_0() { return static_cast<int32_t>(offsetof(RewardData_t903330946, ___currencyName_0)); }
	inline String_t* get_currencyName_0() const { return ___currencyName_0; }
	inline String_t** get_address_of_currencyName_0() { return &___currencyName_0; }
	inline void set_currencyName_0(String_t* value)
	{
		___currencyName_0 = value;
		Il2CppCodeGenWriteBarrier(&___currencyName_0, value);
	}

	inline static int32_t get_offset_of_currencyId_1() { return static_cast<int32_t>(offsetof(RewardData_t903330946, ___currencyId_1)); }
	inline String_t* get_currencyId_1() const { return ___currencyId_1; }
	inline String_t** get_address_of_currencyId_1() { return &___currencyId_1; }
	inline void set_currencyId_1(String_t* value)
	{
		___currencyId_1 = value;
		Il2CppCodeGenWriteBarrier(&___currencyId_1, value);
	}

	inline static int32_t get_offset_of_reward_2() { return static_cast<int32_t>(offsetof(RewardData_t903330946, ___reward_2)); }
	inline int32_t get_reward_2() const { return ___reward_2; }
	inline int32_t* get_address_of_reward_2() { return &___reward_2; }
	inline void set_reward_2(int32_t value)
	{
		___reward_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
