#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataSet
struct DataSet_t3654702571;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t609299751;

#include "System_Data_System_Data_InternalDataCollectionBase2754805833.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTableCollection
struct  DataTableCollection_t2915263893  : public InternalDataCollectionBase_t2754805833
{
public:
	// System.Data.DataSet System.Data.DataTableCollection::dataSet
	DataSet_t3654702571 * ___dataSet_1;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanged
	CollectionChangeEventHandler_t609299751 * ___CollectionChanged_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanging
	CollectionChangeEventHandler_t609299751 * ___CollectionChanging_3;

public:
	inline static int32_t get_offset_of_dataSet_1() { return static_cast<int32_t>(offsetof(DataTableCollection_t2915263893, ___dataSet_1)); }
	inline DataSet_t3654702571 * get_dataSet_1() const { return ___dataSet_1; }
	inline DataSet_t3654702571 ** get_address_of_dataSet_1() { return &___dataSet_1; }
	inline void set_dataSet_1(DataSet_t3654702571 * value)
	{
		___dataSet_1 = value;
		Il2CppCodeGenWriteBarrier(&___dataSet_1, value);
	}

	inline static int32_t get_offset_of_CollectionChanged_2() { return static_cast<int32_t>(offsetof(DataTableCollection_t2915263893, ___CollectionChanged_2)); }
	inline CollectionChangeEventHandler_t609299751 * get_CollectionChanged_2() const { return ___CollectionChanged_2; }
	inline CollectionChangeEventHandler_t609299751 ** get_address_of_CollectionChanged_2() { return &___CollectionChanged_2; }
	inline void set_CollectionChanged_2(CollectionChangeEventHandler_t609299751 * value)
	{
		___CollectionChanged_2 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionChanged_2, value);
	}

	inline static int32_t get_offset_of_CollectionChanging_3() { return static_cast<int32_t>(offsetof(DataTableCollection_t2915263893, ___CollectionChanging_3)); }
	inline CollectionChangeEventHandler_t609299751 * get_CollectionChanging_3() const { return ___CollectionChanging_3; }
	inline CollectionChangeEventHandler_t609299751 ** get_address_of_CollectionChanging_3() { return &___CollectionChanging_3; }
	inline void set_CollectionChanging_3(CollectionChangeEventHandler_t609299751 * value)
	{
		___CollectionChanging_3 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionChanging_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
