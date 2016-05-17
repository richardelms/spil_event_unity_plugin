#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataTable
struct DataTable_t2176726999;

#include "System_Data_System_Data_DataRelationCollection267599063.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataTableRelationCollection
struct  DataTableRelationCollection_t3663063806  : public DataRelationCollection_t267599063
{
public:
	// System.Data.DataTable System.Data.DataRelationCollection/DataTableRelationCollection::dataTable
	DataTable_t2176726999 * ___dataTable_4;

public:
	inline static int32_t get_offset_of_dataTable_4() { return static_cast<int32_t>(offsetof(DataTableRelationCollection_t3663063806, ___dataTable_4)); }
	inline DataTable_t2176726999 * get_dataTable_4() const { return ___dataTable_4; }
	inline DataTable_t2176726999 ** get_address_of_dataTable_4() { return &___dataTable_4; }
	inline void set_dataTable_4(DataTable_t2176726999 * value)
	{
		___dataTable_4 = value;
		Il2CppCodeGenWriteBarrier(&___dataTable_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
