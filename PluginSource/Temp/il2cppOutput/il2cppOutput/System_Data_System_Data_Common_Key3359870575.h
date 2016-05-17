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
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3410743138;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t3969845317;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataViewRowState3383768889.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Key
struct  Key_t3359870575  : public Il2CppObject
{
public:
	// System.Data.DataTable System.Data.Common.Key::_table
	DataTable_t2176726999 * ____table_0;
	// System.Data.DataColumn[] System.Data.Common.Key::_columns
	DataColumnU5BU5D_t3410743138* ____columns_1;
	// System.ComponentModel.ListSortDirection[] System.Data.Common.Key::_sortDirection
	ListSortDirectionU5BU5D_t3969845317* ____sortDirection_2;
	// System.Data.DataViewRowState System.Data.Common.Key::_rowStateFilter
	int32_t ____rowStateFilter_3;
	// Mono.Data.SqlExpressions.IExpression System.Data.Common.Key::_filter
	Il2CppObject * ____filter_4;
	// System.Data.DataRow System.Data.Common.Key::_tmpRow
	DataRow_t3654701923 * ____tmpRow_5;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(Key_t3359870575, ____table_0)); }
	inline DataTable_t2176726999 * get__table_0() const { return ____table_0; }
	inline DataTable_t2176726999 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t2176726999 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier(&____table_0, value);
	}

	inline static int32_t get_offset_of__columns_1() { return static_cast<int32_t>(offsetof(Key_t3359870575, ____columns_1)); }
	inline DataColumnU5BU5D_t3410743138* get__columns_1() const { return ____columns_1; }
	inline DataColumnU5BU5D_t3410743138** get_address_of__columns_1() { return &____columns_1; }
	inline void set__columns_1(DataColumnU5BU5D_t3410743138* value)
	{
		____columns_1 = value;
		Il2CppCodeGenWriteBarrier(&____columns_1, value);
	}

	inline static int32_t get_offset_of__sortDirection_2() { return static_cast<int32_t>(offsetof(Key_t3359870575, ____sortDirection_2)); }
	inline ListSortDirectionU5BU5D_t3969845317* get__sortDirection_2() const { return ____sortDirection_2; }
	inline ListSortDirectionU5BU5D_t3969845317** get_address_of__sortDirection_2() { return &____sortDirection_2; }
	inline void set__sortDirection_2(ListSortDirectionU5BU5D_t3969845317* value)
	{
		____sortDirection_2 = value;
		Il2CppCodeGenWriteBarrier(&____sortDirection_2, value);
	}

	inline static int32_t get_offset_of__rowStateFilter_3() { return static_cast<int32_t>(offsetof(Key_t3359870575, ____rowStateFilter_3)); }
	inline int32_t get__rowStateFilter_3() const { return ____rowStateFilter_3; }
	inline int32_t* get_address_of__rowStateFilter_3() { return &____rowStateFilter_3; }
	inline void set__rowStateFilter_3(int32_t value)
	{
		____rowStateFilter_3 = value;
	}

	inline static int32_t get_offset_of__filter_4() { return static_cast<int32_t>(offsetof(Key_t3359870575, ____filter_4)); }
	inline Il2CppObject * get__filter_4() const { return ____filter_4; }
	inline Il2CppObject ** get_address_of__filter_4() { return &____filter_4; }
	inline void set__filter_4(Il2CppObject * value)
	{
		____filter_4 = value;
		Il2CppCodeGenWriteBarrier(&____filter_4, value);
	}

	inline static int32_t get_offset_of__tmpRow_5() { return static_cast<int32_t>(offsetof(Key_t3359870575, ____tmpRow_5)); }
	inline DataRow_t3654701923 * get__tmpRow_5() const { return ____tmpRow_5; }
	inline DataRow_t3654701923 ** get_address_of__tmpRow_5() { return &____tmpRow_5; }
	inline void set__tmpRow_5(DataRow_t3654701923 * value)
	{
		____tmpRow_5 = value;
		Il2CppCodeGenWriteBarrier(&____tmpRow_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
