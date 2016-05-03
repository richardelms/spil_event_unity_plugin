#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt16[]
struct UInt16U5BU5D_t3999484061;

#include "System_Data_System_Data_Common_DataContainer1942492167.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.UInt16DataContainer
struct  UInt16DataContainer_t2178010984  : public DataContainer_t1942492167
{
public:
	// System.UInt16[] System.Data.Common.UInt16DataContainer::_values
	UInt16U5BU5D_t3999484061* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(UInt16DataContainer_t2178010984, ____values_3)); }
	inline UInt16U5BU5D_t3999484061* get__values_3() const { return ____values_3; }
	inline UInt16U5BU5D_t3999484061** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(UInt16U5BU5D_t3999484061* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
