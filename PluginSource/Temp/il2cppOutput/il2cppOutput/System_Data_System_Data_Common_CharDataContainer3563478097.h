#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t3416858730;

#include "System_Data_System_Data_Common_DataContainer1942492167.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.CharDataContainer
struct  CharDataContainer_t3563478097  : public DataContainer_t1942492167
{
public:
	// System.Char[] System.Data.Common.CharDataContainer::_values
	CharU5BU5D_t3416858730* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(CharDataContainer_t3563478097, ____values_3)); }
	inline CharU5BU5D_t3416858730* get__values_3() const { return ____values_3; }
	inline CharU5BU5D_t3416858730** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(CharU5BU5D_t3416858730* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
