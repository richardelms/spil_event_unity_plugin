#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.EventHandlerList
struct EventHandlerList_t120044247;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Data.PropertyCollection
struct PropertyCollection_t3599376422;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.Common.DataContainer
struct DataContainer_t1942492167;

#include "System_System_ComponentModel_MarshalByValueCompone2977475850.h"
#include "System_Data_System_Data_MappingType1033973435.h"
#include "System_Data_System_Data_DataSetDateTime3597676966.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumn
struct  DataColumn_t3354469747  : public MarshalByValueComponent_t2977475850
{
public:
	// System.ComponentModel.EventHandlerList System.Data.DataColumn::_eventHandlers
	EventHandlerList_t120044247 * ____eventHandlers_2;
	// System.Boolean System.Data.DataColumn::_allowDBNull
	bool ____allowDBNull_4;
	// System.Boolean System.Data.DataColumn::_autoIncrement
	bool ____autoIncrement_5;
	// System.Int64 System.Data.DataColumn::_autoIncrementSeed
	int64_t ____autoIncrementSeed_6;
	// System.Int64 System.Data.DataColumn::_autoIncrementStep
	int64_t ____autoIncrementStep_7;
	// System.Int64 System.Data.DataColumn::_nextAutoIncrementValue
	int64_t ____nextAutoIncrementValue_8;
	// System.String System.Data.DataColumn::_caption
	String_t* ____caption_9;
	// System.Data.MappingType System.Data.DataColumn::_columnMapping
	int32_t ____columnMapping_10;
	// System.String System.Data.DataColumn::_columnName
	String_t* ____columnName_11;
	// System.Object System.Data.DataColumn::_defaultValue
	Il2CppObject * ____defaultValue_12;
	// System.String System.Data.DataColumn::_expression
	String_t* ____expression_13;
	// Mono.Data.SqlExpressions.IExpression System.Data.DataColumn::_compiledExpression
	Il2CppObject * ____compiledExpression_14;
	// System.Data.PropertyCollection System.Data.DataColumn::_extendedProperties
	PropertyCollection_t3599376422 * ____extendedProperties_15;
	// System.Int32 System.Data.DataColumn::_maxLength
	int32_t ____maxLength_16;
	// System.String System.Data.DataColumn::_nameSpace
	String_t* ____nameSpace_17;
	// System.Int32 System.Data.DataColumn::_ordinal
	int32_t ____ordinal_18;
	// System.String System.Data.DataColumn::_prefix
	String_t* ____prefix_19;
	// System.Boolean System.Data.DataColumn::_readOnly
	bool ____readOnly_20;
	// System.Data.DataTable System.Data.DataColumn::_table
	DataTable_t2176726999 * ____table_21;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_22;
	// System.Data.Common.DataContainer System.Data.DataColumn::_dataContainer
	DataContainer_t1942492167 * ____dataContainer_23;
	// System.Data.DataSetDateTime System.Data.DataColumn::_datetimeMode
	int32_t ____datetimeMode_24;

public:
	inline static int32_t get_offset_of__eventHandlers_2() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____eventHandlers_2)); }
	inline EventHandlerList_t120044247 * get__eventHandlers_2() const { return ____eventHandlers_2; }
	inline EventHandlerList_t120044247 ** get_address_of__eventHandlers_2() { return &____eventHandlers_2; }
	inline void set__eventHandlers_2(EventHandlerList_t120044247 * value)
	{
		____eventHandlers_2 = value;
		Il2CppCodeGenWriteBarrier(&____eventHandlers_2, value);
	}

	inline static int32_t get_offset_of__allowDBNull_4() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____allowDBNull_4)); }
	inline bool get__allowDBNull_4() const { return ____allowDBNull_4; }
	inline bool* get_address_of__allowDBNull_4() { return &____allowDBNull_4; }
	inline void set__allowDBNull_4(bool value)
	{
		____allowDBNull_4 = value;
	}

	inline static int32_t get_offset_of__autoIncrement_5() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____autoIncrement_5)); }
	inline bool get__autoIncrement_5() const { return ____autoIncrement_5; }
	inline bool* get_address_of__autoIncrement_5() { return &____autoIncrement_5; }
	inline void set__autoIncrement_5(bool value)
	{
		____autoIncrement_5 = value;
	}

	inline static int32_t get_offset_of__autoIncrementSeed_6() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____autoIncrementSeed_6)); }
	inline int64_t get__autoIncrementSeed_6() const { return ____autoIncrementSeed_6; }
	inline int64_t* get_address_of__autoIncrementSeed_6() { return &____autoIncrementSeed_6; }
	inline void set__autoIncrementSeed_6(int64_t value)
	{
		____autoIncrementSeed_6 = value;
	}

	inline static int32_t get_offset_of__autoIncrementStep_7() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____autoIncrementStep_7)); }
	inline int64_t get__autoIncrementStep_7() const { return ____autoIncrementStep_7; }
	inline int64_t* get_address_of__autoIncrementStep_7() { return &____autoIncrementStep_7; }
	inline void set__autoIncrementStep_7(int64_t value)
	{
		____autoIncrementStep_7 = value;
	}

	inline static int32_t get_offset_of__nextAutoIncrementValue_8() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____nextAutoIncrementValue_8)); }
	inline int64_t get__nextAutoIncrementValue_8() const { return ____nextAutoIncrementValue_8; }
	inline int64_t* get_address_of__nextAutoIncrementValue_8() { return &____nextAutoIncrementValue_8; }
	inline void set__nextAutoIncrementValue_8(int64_t value)
	{
		____nextAutoIncrementValue_8 = value;
	}

	inline static int32_t get_offset_of__caption_9() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____caption_9)); }
	inline String_t* get__caption_9() const { return ____caption_9; }
	inline String_t** get_address_of__caption_9() { return &____caption_9; }
	inline void set__caption_9(String_t* value)
	{
		____caption_9 = value;
		Il2CppCodeGenWriteBarrier(&____caption_9, value);
	}

	inline static int32_t get_offset_of__columnMapping_10() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____columnMapping_10)); }
	inline int32_t get__columnMapping_10() const { return ____columnMapping_10; }
	inline int32_t* get_address_of__columnMapping_10() { return &____columnMapping_10; }
	inline void set__columnMapping_10(int32_t value)
	{
		____columnMapping_10 = value;
	}

	inline static int32_t get_offset_of__columnName_11() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____columnName_11)); }
	inline String_t* get__columnName_11() const { return ____columnName_11; }
	inline String_t** get_address_of__columnName_11() { return &____columnName_11; }
	inline void set__columnName_11(String_t* value)
	{
		____columnName_11 = value;
		Il2CppCodeGenWriteBarrier(&____columnName_11, value);
	}

	inline static int32_t get_offset_of__defaultValue_12() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____defaultValue_12)); }
	inline Il2CppObject * get__defaultValue_12() const { return ____defaultValue_12; }
	inline Il2CppObject ** get_address_of__defaultValue_12() { return &____defaultValue_12; }
	inline void set__defaultValue_12(Il2CppObject * value)
	{
		____defaultValue_12 = value;
		Il2CppCodeGenWriteBarrier(&____defaultValue_12, value);
	}

	inline static int32_t get_offset_of__expression_13() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____expression_13)); }
	inline String_t* get__expression_13() const { return ____expression_13; }
	inline String_t** get_address_of__expression_13() { return &____expression_13; }
	inline void set__expression_13(String_t* value)
	{
		____expression_13 = value;
		Il2CppCodeGenWriteBarrier(&____expression_13, value);
	}

	inline static int32_t get_offset_of__compiledExpression_14() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____compiledExpression_14)); }
	inline Il2CppObject * get__compiledExpression_14() const { return ____compiledExpression_14; }
	inline Il2CppObject ** get_address_of__compiledExpression_14() { return &____compiledExpression_14; }
	inline void set__compiledExpression_14(Il2CppObject * value)
	{
		____compiledExpression_14 = value;
		Il2CppCodeGenWriteBarrier(&____compiledExpression_14, value);
	}

	inline static int32_t get_offset_of__extendedProperties_15() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____extendedProperties_15)); }
	inline PropertyCollection_t3599376422 * get__extendedProperties_15() const { return ____extendedProperties_15; }
	inline PropertyCollection_t3599376422 ** get_address_of__extendedProperties_15() { return &____extendedProperties_15; }
	inline void set__extendedProperties_15(PropertyCollection_t3599376422 * value)
	{
		____extendedProperties_15 = value;
		Il2CppCodeGenWriteBarrier(&____extendedProperties_15, value);
	}

	inline static int32_t get_offset_of__maxLength_16() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____maxLength_16)); }
	inline int32_t get__maxLength_16() const { return ____maxLength_16; }
	inline int32_t* get_address_of__maxLength_16() { return &____maxLength_16; }
	inline void set__maxLength_16(int32_t value)
	{
		____maxLength_16 = value;
	}

	inline static int32_t get_offset_of__nameSpace_17() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____nameSpace_17)); }
	inline String_t* get__nameSpace_17() const { return ____nameSpace_17; }
	inline String_t** get_address_of__nameSpace_17() { return &____nameSpace_17; }
	inline void set__nameSpace_17(String_t* value)
	{
		____nameSpace_17 = value;
		Il2CppCodeGenWriteBarrier(&____nameSpace_17, value);
	}

	inline static int32_t get_offset_of__ordinal_18() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____ordinal_18)); }
	inline int32_t get__ordinal_18() const { return ____ordinal_18; }
	inline int32_t* get_address_of__ordinal_18() { return &____ordinal_18; }
	inline void set__ordinal_18(int32_t value)
	{
		____ordinal_18 = value;
	}

	inline static int32_t get_offset_of__prefix_19() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____prefix_19)); }
	inline String_t* get__prefix_19() const { return ____prefix_19; }
	inline String_t** get_address_of__prefix_19() { return &____prefix_19; }
	inline void set__prefix_19(String_t* value)
	{
		____prefix_19 = value;
		Il2CppCodeGenWriteBarrier(&____prefix_19, value);
	}

	inline static int32_t get_offset_of__readOnly_20() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____readOnly_20)); }
	inline bool get__readOnly_20() const { return ____readOnly_20; }
	inline bool* get_address_of__readOnly_20() { return &____readOnly_20; }
	inline void set__readOnly_20(bool value)
	{
		____readOnly_20 = value;
	}

	inline static int32_t get_offset_of__table_21() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____table_21)); }
	inline DataTable_t2176726999 * get__table_21() const { return ____table_21; }
	inline DataTable_t2176726999 ** get_address_of__table_21() { return &____table_21; }
	inline void set__table_21(DataTable_t2176726999 * value)
	{
		____table_21 = value;
		Il2CppCodeGenWriteBarrier(&____table_21, value);
	}

	inline static int32_t get_offset_of__unique_22() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____unique_22)); }
	inline bool get__unique_22() const { return ____unique_22; }
	inline bool* get_address_of__unique_22() { return &____unique_22; }
	inline void set__unique_22(bool value)
	{
		____unique_22 = value;
	}

	inline static int32_t get_offset_of__dataContainer_23() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____dataContainer_23)); }
	inline DataContainer_t1942492167 * get__dataContainer_23() const { return ____dataContainer_23; }
	inline DataContainer_t1942492167 ** get_address_of__dataContainer_23() { return &____dataContainer_23; }
	inline void set__dataContainer_23(DataContainer_t1942492167 * value)
	{
		____dataContainer_23 = value;
		Il2CppCodeGenWriteBarrier(&____dataContainer_23, value);
	}

	inline static int32_t get_offset_of__datetimeMode_24() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747, ____datetimeMode_24)); }
	inline int32_t get__datetimeMode_24() const { return ____datetimeMode_24; }
	inline int32_t* get_address_of__datetimeMode_24() { return &____datetimeMode_24; }
	inline void set__datetimeMode_24(int32_t value)
	{
		____datetimeMode_24 = value;
	}
};

struct DataColumn_t3354469747_StaticFields
{
public:
	// System.Object System.Data.DataColumn::_propertyChangedKey
	Il2CppObject * ____propertyChangedKey_3;

public:
	inline static int32_t get_offset_of__propertyChangedKey_3() { return static_cast<int32_t>(offsetof(DataColumn_t3354469747_StaticFields, ____propertyChangedKey_3)); }
	inline Il2CppObject * get__propertyChangedKey_3() const { return ____propertyChangedKey_3; }
	inline Il2CppObject ** get_address_of__propertyChangedKey_3() { return &____propertyChangedKey_3; }
	inline void set__propertyChangedKey_3(Il2CppObject * value)
	{
		____propertyChangedKey_3 = value;
		Il2CppCodeGenWriteBarrier(&____propertyChangedKey_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
