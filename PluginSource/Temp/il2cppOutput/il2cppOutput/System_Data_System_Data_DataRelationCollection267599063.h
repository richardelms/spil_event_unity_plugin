#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataRelation
struct DataRelation_t1483987353;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t609299751;

#include "System_Data_System_Data_InternalDataCollectionBase2754805833.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection
struct  DataRelationCollection_t267599063  : public InternalDataCollectionBase_t2754805833
{
public:
	// System.Data.DataRelation System.Data.DataRelationCollection::inTransition
	DataRelation_t1483987353 * ___inTransition_1;
	// System.Int32 System.Data.DataRelationCollection::index
	int32_t ___index_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataRelationCollection::CollectionChanged
	CollectionChangeEventHandler_t609299751 * ___CollectionChanged_3;

public:
	inline static int32_t get_offset_of_inTransition_1() { return static_cast<int32_t>(offsetof(DataRelationCollection_t267599063, ___inTransition_1)); }
	inline DataRelation_t1483987353 * get_inTransition_1() const { return ___inTransition_1; }
	inline DataRelation_t1483987353 ** get_address_of_inTransition_1() { return &___inTransition_1; }
	inline void set_inTransition_1(DataRelation_t1483987353 * value)
	{
		___inTransition_1 = value;
		Il2CppCodeGenWriteBarrier(&___inTransition_1, value);
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(DataRelationCollection_t267599063, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_CollectionChanged_3() { return static_cast<int32_t>(offsetof(DataRelationCollection_t267599063, ___CollectionChanged_3)); }
	inline CollectionChangeEventHandler_t609299751 * get_CollectionChanged_3() const { return ___CollectionChanged_3; }
	inline CollectionChangeEventHandler_t609299751 ** get_address_of_CollectionChanged_3() { return &___CollectionChanged_3; }
	inline void set_CollectionChanged_3(CollectionChangeEventHandler_t609299751 * value)
	{
		___CollectionChanged_3 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionChanged_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
