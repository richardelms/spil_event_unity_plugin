#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.Data.DataRelation
struct DataRelation_t1483987353;

#include "System_Data_Mono_Data_SqlExpressions_BaseExpression702043659.h"
#include "System_Data_Mono_Data_SqlExpressions_ReferencedTab1691853399.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ColumnReference
struct  ColumnReference_t2222606871  : public BaseExpression_t702043659
{
public:
	// Mono.Data.SqlExpressions.ReferencedTable Mono.Data.SqlExpressions.ColumnReference::refTable
	int32_t ___refTable_0;
	// System.String Mono.Data.SqlExpressions.ColumnReference::relationName
	String_t* ___relationName_1;
	// System.String Mono.Data.SqlExpressions.ColumnReference::columnName
	String_t* ___columnName_2;
	// System.Data.DataColumn Mono.Data.SqlExpressions.ColumnReference::_cachedColumn
	DataColumn_t3354469747 * ____cachedColumn_3;
	// System.Data.DataRelation Mono.Data.SqlExpressions.ColumnReference::_cachedRelation
	DataRelation_t1483987353 * ____cachedRelation_4;

public:
	inline static int32_t get_offset_of_refTable_0() { return static_cast<int32_t>(offsetof(ColumnReference_t2222606871, ___refTable_0)); }
	inline int32_t get_refTable_0() const { return ___refTable_0; }
	inline int32_t* get_address_of_refTable_0() { return &___refTable_0; }
	inline void set_refTable_0(int32_t value)
	{
		___refTable_0 = value;
	}

	inline static int32_t get_offset_of_relationName_1() { return static_cast<int32_t>(offsetof(ColumnReference_t2222606871, ___relationName_1)); }
	inline String_t* get_relationName_1() const { return ___relationName_1; }
	inline String_t** get_address_of_relationName_1() { return &___relationName_1; }
	inline void set_relationName_1(String_t* value)
	{
		___relationName_1 = value;
		Il2CppCodeGenWriteBarrier(&___relationName_1, value);
	}

	inline static int32_t get_offset_of_columnName_2() { return static_cast<int32_t>(offsetof(ColumnReference_t2222606871, ___columnName_2)); }
	inline String_t* get_columnName_2() const { return ___columnName_2; }
	inline String_t** get_address_of_columnName_2() { return &___columnName_2; }
	inline void set_columnName_2(String_t* value)
	{
		___columnName_2 = value;
		Il2CppCodeGenWriteBarrier(&___columnName_2, value);
	}

	inline static int32_t get_offset_of__cachedColumn_3() { return static_cast<int32_t>(offsetof(ColumnReference_t2222606871, ____cachedColumn_3)); }
	inline DataColumn_t3354469747 * get__cachedColumn_3() const { return ____cachedColumn_3; }
	inline DataColumn_t3354469747 ** get_address_of__cachedColumn_3() { return &____cachedColumn_3; }
	inline void set__cachedColumn_3(DataColumn_t3354469747 * value)
	{
		____cachedColumn_3 = value;
		Il2CppCodeGenWriteBarrier(&____cachedColumn_3, value);
	}

	inline static int32_t get_offset_of__cachedRelation_4() { return static_cast<int32_t>(offsetof(ColumnReference_t2222606871, ____cachedRelation_4)); }
	inline DataRelation_t1483987353 * get__cachedRelation_4() const { return ____cachedRelation_4; }
	inline DataRelation_t1483987353 ** get_address_of__cachedRelation_4() { return &____cachedRelation_4; }
	inline void set__cachedRelation_4(DataRelation_t1483987353 * value)
	{
		____cachedRelation_4 = value;
		Il2CppCodeGenWriteBarrier(&____cachedRelation_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
