#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpilGames.Unity.Utils.PackagesData
struct PackagesData_t4113443648;

#include "AssemblyU2DCSharp_SpilGames_Unity_Utils_SpilRespon2876629418.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Utils.PackagesResponse
struct  PackagesResponse_t2870817111  : public SpilResponse_t2876629418
{
public:
	// SpilGames.Unity.Utils.PackagesData SpilGames.Unity.Utils.PackagesResponse::data
	PackagesData_t4113443648 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(PackagesResponse_t2870817111, ___data_4)); }
	inline PackagesData_t4113443648 * get_data_4() const { return ___data_4; }
	inline PackagesData_t4113443648 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(PackagesData_t4113443648 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier(&___data_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
