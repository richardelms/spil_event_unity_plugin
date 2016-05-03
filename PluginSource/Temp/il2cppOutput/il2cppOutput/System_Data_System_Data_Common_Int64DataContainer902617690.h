#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int64[]
struct Int64U5BU5D_t753178071;

#include "System_Data_System_Data_Common_DataContainer1942492167.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Int64DataContainer
struct  Int64DataContainer_t902617690  : public DataContainer_t1942492167
{
public:
	// System.Int64[] System.Data.Common.Int64DataContainer::_values
	Int64U5BU5D_t753178071* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(Int64DataContainer_t902617690, ____values_3)); }
	inline Int64U5BU5D_t753178071* get__values_3() const { return ____values_3; }
	inline Int64U5BU5D_t753178071** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(Int64U5BU5D_t753178071* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
