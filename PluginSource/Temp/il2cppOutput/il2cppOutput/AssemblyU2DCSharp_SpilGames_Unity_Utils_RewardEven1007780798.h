#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpilGames.Unity.Utils.RewardData
struct RewardData_t903330946;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Utils.RewardEventData
struct  RewardEventData_t1007780798  : public Il2CppObject
{
public:
	// SpilGames.Unity.Utils.RewardData SpilGames.Unity.Utils.RewardEventData::eventData
	RewardData_t903330946 * ___eventData_0;

public:
	inline static int32_t get_offset_of_eventData_0() { return static_cast<int32_t>(offsetof(RewardEventData_t1007780798, ___eventData_0)); }
	inline RewardData_t903330946 * get_eventData_0() const { return ___eventData_0; }
	inline RewardData_t903330946 ** get_address_of_eventData_0() { return &___eventData_0; }
	inline void set_eventData_0(RewardData_t903330946 * value)
	{
		___eventData_0 = value;
		Il2CppCodeGenWriteBarrier(&___eventData_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
