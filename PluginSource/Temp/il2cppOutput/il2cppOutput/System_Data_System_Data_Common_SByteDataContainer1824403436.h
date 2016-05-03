#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.SByte[]
struct SByteU5BU5D_t1084170289;

#include "System_Data_System_Data_Common_DataContainer1942492167.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.SByteDataContainer
struct  SByteDataContainer_t1824403436  : public DataContainer_t1942492167
{
public:
	// System.SByte[] System.Data.Common.SByteDataContainer::_values
	SByteU5BU5D_t1084170289* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(SByteDataContainer_t1824403436, ____values_3)); }
	inline SByteU5BU5D_t1084170289* get__values_3() const { return ____values_3; }
	inline SByteU5BU5D_t1084170289** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(SByteU5BU5D_t1084170289* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
