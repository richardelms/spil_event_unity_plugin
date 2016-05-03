#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "System_Data_System_Data_Common_DataContainer1942492167.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Int32DataContainer
struct  Int32DataContainer_t1686046809  : public DataContainer_t1942492167
{
public:
	// System.Int32[] System.Data.Common.Int32DataContainer::_values
	Int32U5BU5D_t1809983122* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(Int32DataContainer_t1686046809, ____values_3)); }
	inline Int32U5BU5D_t1809983122* get__values_3() const { return ____values_3; }
	inline Int32U5BU5D_t1809983122** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(Int32U5BU5D_t1809983122* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
