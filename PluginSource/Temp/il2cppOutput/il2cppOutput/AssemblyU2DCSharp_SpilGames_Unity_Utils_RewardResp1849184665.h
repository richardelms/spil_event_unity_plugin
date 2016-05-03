#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpilGames.Unity.Utils.RewardEventData
struct RewardEventData_t1007780798;

#include "AssemblyU2DCSharp_SpilGames_Unity_Utils_SpilRespon2876629418.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Utils.RewardResponse
struct  RewardResponse_t1849184665  : public SpilResponse_t2876629418
{
public:
	// SpilGames.Unity.Utils.RewardEventData SpilGames.Unity.Utils.RewardResponse::data
	RewardEventData_t1007780798 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(RewardResponse_t1849184665, ___data_4)); }
	inline RewardEventData_t1007780798 * get_data_4() const { return ___data_4; }
	inline RewardEventData_t1007780798 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(RewardEventData_t1007780798 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier(&___data_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
