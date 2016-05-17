#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.BitArray
struct BitArray_t2687322878;

#include "System_Data_System_Data_Common_DataContainer1942492167.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.BitDataContainer
struct  BitDataContainer_t3470866490  : public DataContainer_t1942492167
{
public:
	// System.Collections.BitArray System.Data.Common.BitDataContainer::_values
	BitArray_t2687322878 * ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(BitDataContainer_t3470866490, ____values_3)); }
	inline BitArray_t2687322878 * get__values_3() const { return ____values_3; }
	inline BitArray_t2687322878 ** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(BitArray_t2687322878 * value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
