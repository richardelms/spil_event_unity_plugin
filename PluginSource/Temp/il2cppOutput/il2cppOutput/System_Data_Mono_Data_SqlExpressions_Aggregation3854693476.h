#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataRow[]
struct DataRowU5BU5D_t1036778418;
// Mono.Data.SqlExpressions.ColumnReference
struct ColumnReference_t2222606871;
// System.IConvertible
struct IConvertible_t4194222097;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t309042851;
// System.Data.DataTable
struct DataTable_t2176726999;

#include "System_Data_Mono_Data_SqlExpressions_BaseExpression702043659.h"
#include "System_Data_Mono_Data_SqlExpressions_AggregationFu3214535260.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Aggregation
struct  Aggregation_t3854693476  : public BaseExpression_t702043659
{
public:
	// System.Boolean Mono.Data.SqlExpressions.Aggregation::cacheResults
	bool ___cacheResults_0;
	// System.Data.DataRow[] Mono.Data.SqlExpressions.Aggregation::rows
	DataRowU5BU5D_t1036778418* ___rows_1;
	// Mono.Data.SqlExpressions.ColumnReference Mono.Data.SqlExpressions.Aggregation::column
	ColumnReference_t2222606871 * ___column_2;
	// Mono.Data.SqlExpressions.AggregationFunction Mono.Data.SqlExpressions.Aggregation::function
	int32_t ___function_3;
	// System.Int32 Mono.Data.SqlExpressions.Aggregation::count
	int32_t ___count_4;
	// System.IConvertible Mono.Data.SqlExpressions.Aggregation::result
	Il2CppObject * ___result_5;
	// System.Data.DataRowChangeEventHandler Mono.Data.SqlExpressions.Aggregation::RowChangeHandler
	DataRowChangeEventHandler_t309042851 * ___RowChangeHandler_6;
	// System.Data.DataTable Mono.Data.SqlExpressions.Aggregation::table
	DataTable_t2176726999 * ___table_7;

public:
	inline static int32_t get_offset_of_cacheResults_0() { return static_cast<int32_t>(offsetof(Aggregation_t3854693476, ___cacheResults_0)); }
	inline bool get_cacheResults_0() const { return ___cacheResults_0; }
	inline bool* get_address_of_cacheResults_0() { return &___cacheResults_0; }
	inline void set_cacheResults_0(bool value)
	{
		___cacheResults_0 = value;
	}

	inline static int32_t get_offset_of_rows_1() { return static_cast<int32_t>(offsetof(Aggregation_t3854693476, ___rows_1)); }
	inline DataRowU5BU5D_t1036778418* get_rows_1() const { return ___rows_1; }
	inline DataRowU5BU5D_t1036778418** get_address_of_rows_1() { return &___rows_1; }
	inline void set_rows_1(DataRowU5BU5D_t1036778418* value)
	{
		___rows_1 = value;
		Il2CppCodeGenWriteBarrier(&___rows_1, value);
	}

	inline static int32_t get_offset_of_column_2() { return static_cast<int32_t>(offsetof(Aggregation_t3854693476, ___column_2)); }
	inline ColumnReference_t2222606871 * get_column_2() const { return ___column_2; }
	inline ColumnReference_t2222606871 ** get_address_of_column_2() { return &___column_2; }
	inline void set_column_2(ColumnReference_t2222606871 * value)
	{
		___column_2 = value;
		Il2CppCodeGenWriteBarrier(&___column_2, value);
	}

	inline static int32_t get_offset_of_function_3() { return static_cast<int32_t>(offsetof(Aggregation_t3854693476, ___function_3)); }
	inline int32_t get_function_3() const { return ___function_3; }
	inline int32_t* get_address_of_function_3() { return &___function_3; }
	inline void set_function_3(int32_t value)
	{
		___function_3 = value;
	}

	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(Aggregation_t3854693476, ___count_4)); }
	inline int32_t get_count_4() const { return ___count_4; }
	inline int32_t* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(int32_t value)
	{
		___count_4 = value;
	}

	inline static int32_t get_offset_of_result_5() { return static_cast<int32_t>(offsetof(Aggregation_t3854693476, ___result_5)); }
	inline Il2CppObject * get_result_5() const { return ___result_5; }
	inline Il2CppObject ** get_address_of_result_5() { return &___result_5; }
	inline void set_result_5(Il2CppObject * value)
	{
		___result_5 = value;
		Il2CppCodeGenWriteBarrier(&___result_5, value);
	}

	inline static int32_t get_offset_of_RowChangeHandler_6() { return static_cast<int32_t>(offsetof(Aggregation_t3854693476, ___RowChangeHandler_6)); }
	inline DataRowChangeEventHandler_t309042851 * get_RowChangeHandler_6() const { return ___RowChangeHandler_6; }
	inline DataRowChangeEventHandler_t309042851 ** get_address_of_RowChangeHandler_6() { return &___RowChangeHandler_6; }
	inline void set_RowChangeHandler_6(DataRowChangeEventHandler_t309042851 * value)
	{
		___RowChangeHandler_6 = value;
		Il2CppCodeGenWriteBarrier(&___RowChangeHandler_6, value);
	}

	inline static int32_t get_offset_of_table_7() { return static_cast<int32_t>(offsetof(Aggregation_t3854693476, ___table_7)); }
	inline DataTable_t2176726999 * get_table_7() const { return ___table_7; }
	inline DataTable_t2176726999 ** get_address_of_table_7() { return &___table_7; }
	inline void set_table_7(DataTable_t2176726999 * value)
	{
		___table_7 = value;
		Il2CppCodeGenWriteBarrier(&___table_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
