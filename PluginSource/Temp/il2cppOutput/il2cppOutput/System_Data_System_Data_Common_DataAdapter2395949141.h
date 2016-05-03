#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.Common.DataTableMappingCollection
struct DataTableMappingCollection_t2256861304;

#include "System_System_ComponentModel_Component553679750.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataAdapter
struct  DataAdapter_t2395949141  : public Component_t553679750
{
public:
	// System.Data.Common.DataTableMappingCollection System.Data.Common.DataAdapter::tableMappings
	DataTableMappingCollection_t2256861304 * ___tableMappings_4;

public:
	inline static int32_t get_offset_of_tableMappings_4() { return static_cast<int32_t>(offsetof(DataAdapter_t2395949141, ___tableMappings_4)); }
	inline DataTableMappingCollection_t2256861304 * get_tableMappings_4() const { return ___tableMappings_4; }
	inline DataTableMappingCollection_t2256861304 ** get_address_of_tableMappings_4() { return &___tableMappings_4; }
	inline void set_tableMappings_4(DataTableMappingCollection_t2256861304 * value)
	{
		___tableMappings_4 = value;
		Il2CppCodeGenWriteBarrier(&___tableMappings_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
