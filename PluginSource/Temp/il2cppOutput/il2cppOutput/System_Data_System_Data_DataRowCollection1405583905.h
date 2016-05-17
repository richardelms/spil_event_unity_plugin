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

#include "System_Data_System_Data_InternalDataCollectionBase2754805833.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowCollection
struct  DataRowCollection_t1405583905  : public InternalDataCollectionBase_t2754805833
{
public:
	// System.Data.DataTable System.Data.DataRowCollection::table
	DataTable_t2176726999 * ___table_1;

public:
	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(DataRowCollection_t1405583905, ___table_1)); }
	inline DataTable_t2176726999 * get_table_1() const { return ___table_1; }
	inline DataTable_t2176726999 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(DataTable_t2176726999 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier(&___table_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
