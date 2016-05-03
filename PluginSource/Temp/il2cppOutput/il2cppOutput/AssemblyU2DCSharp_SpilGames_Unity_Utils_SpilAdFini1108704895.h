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
// SpilGames.Unity.Utils.RewardData
struct RewardData_t903330946;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Utils.SpilAdFinishedResponse
struct  SpilAdFinishedResponse_t1108704895  : public Il2CppObject
{
public:
	// System.String SpilGames.Unity.Utils.SpilAdFinishedResponse::type
	String_t* ___type_0;
	// System.String SpilGames.Unity.Utils.SpilAdFinishedResponse::reason
	String_t* ___reason_1;
	// SpilGames.Unity.Utils.RewardData SpilGames.Unity.Utils.SpilAdFinishedResponse::reward
	RewardData_t903330946 * ___reward_2;
	// System.String SpilGames.Unity.Utils.SpilAdFinishedResponse::network
	String_t* ___network_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(SpilAdFinishedResponse_t1108704895, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(SpilAdFinishedResponse_t1108704895, ___reason_1)); }
	inline String_t* get_reason_1() const { return ___reason_1; }
	inline String_t** get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(String_t* value)
	{
		___reason_1 = value;
		Il2CppCodeGenWriteBarrier(&___reason_1, value);
	}

	inline static int32_t get_offset_of_reward_2() { return static_cast<int32_t>(offsetof(SpilAdFinishedResponse_t1108704895, ___reward_2)); }
	inline RewardData_t903330946 * get_reward_2() const { return ___reward_2; }
	inline RewardData_t903330946 ** get_address_of_reward_2() { return &___reward_2; }
	inline void set_reward_2(RewardData_t903330946 * value)
	{
		___reward_2 = value;
		Il2CppCodeGenWriteBarrier(&___reward_2, value);
	}

	inline static int32_t get_offset_of_network_3() { return static_cast<int32_t>(offsetof(SpilAdFinishedResponse_t1108704895, ___network_3)); }
	inline String_t* get_network_3() const { return ___network_3; }
	inline String_t** get_address_of_network_3() { return &___network_3; }
	inline void set_network_3(String_t* value)
	{
		___network_3 = value;
		Il2CppCodeGenWriteBarrier(&___network_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
