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
// System.String
struct String_t;

#include "mscorlib_System_EventArgs516466188.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MergeFailedEventArgs
struct  MergeFailedEventArgs_t3393563989  : public EventArgs_t516466188
{
public:
	// System.Data.DataTable System.Data.MergeFailedEventArgs::data_table
	DataTable_t2176726999 * ___data_table_1;
	// System.String System.Data.MergeFailedEventArgs::conflict
	String_t* ___conflict_2;

public:
	inline static int32_t get_offset_of_data_table_1() { return static_cast<int32_t>(offsetof(MergeFailedEventArgs_t3393563989, ___data_table_1)); }
	inline DataTable_t2176726999 * get_data_table_1() const { return ___data_table_1; }
	inline DataTable_t2176726999 ** get_address_of_data_table_1() { return &___data_table_1; }
	inline void set_data_table_1(DataTable_t2176726999 * value)
	{
		___data_table_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_table_1, value);
	}

	inline static int32_t get_offset_of_conflict_2() { return static_cast<int32_t>(offsetof(MergeFailedEventArgs_t3393563989, ___conflict_2)); }
	inline String_t* get_conflict_2() const { return ___conflict_2; }
	inline String_t** get_address_of_conflict_2() { return &___conflict_2; }
	inline void set_conflict_2(String_t* value)
	{
		___conflict_2 = value;
		Il2CppCodeGenWriteBarrier(&___conflict_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
