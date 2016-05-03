#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "System_Data_System_Data_Common_DataContainer1942492167.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.SingleDataContainer
struct  SingleDataContainer_t832212127  : public DataContainer_t1942492167
{
public:
	// System.Single[] System.Data.Common.SingleDataContainer::_values
	SingleU5BU5D_t1219431280* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(SingleDataContainer_t832212127, ____values_3)); }
	inline SingleU5BU5D_t1219431280* get__values_3() const { return ____values_3; }
	inline SingleU5BU5D_t1219431280** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(SingleU5BU5D_t1219431280* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
