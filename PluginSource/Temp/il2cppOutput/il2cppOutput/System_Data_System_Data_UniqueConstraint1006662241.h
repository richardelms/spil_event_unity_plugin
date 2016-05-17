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
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t1848099579;

#include "System_Data_System_Data_Constraint2349953968.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.UniqueConstraint
struct  UniqueConstraint_t1006662241  : public Constraint_t2349953968
{
public:
	// System.Boolean System.Data.UniqueConstraint::_isPrimaryKey
	bool ____isPrimaryKey_8;
	// System.Boolean System.Data.UniqueConstraint::_belongsToCollection
	bool ____belongsToCollection_9;
	// System.Data.DataTable System.Data.UniqueConstraint::_dataTable
	DataTable_t2176726999 * ____dataTable_10;
	// System.Data.DataColumn[] System.Data.UniqueConstraint::_dataColumns
	DataColumnU5BU5D_t3410743138* ____dataColumns_11;
	// System.Data.ForeignKeyConstraint System.Data.UniqueConstraint::_childConstraint
	ForeignKeyConstraint_t1848099579 * ____childConstraint_12;

public:
	inline static int32_t get_offset_of__isPrimaryKey_8() { return static_cast<int32_t>(offsetof(UniqueConstraint_t1006662241, ____isPrimaryKey_8)); }
	inline bool get__isPrimaryKey_8() const { return ____isPrimaryKey_8; }
	inline bool* get_address_of__isPrimaryKey_8() { return &____isPrimaryKey_8; }
	inline void set__isPrimaryKey_8(bool value)
	{
		____isPrimaryKey_8 = value;
	}

	inline static int32_t get_offset_of__belongsToCollection_9() { return static_cast<int32_t>(offsetof(UniqueConstraint_t1006662241, ____belongsToCollection_9)); }
	inline bool get__belongsToCollection_9() const { return ____belongsToCollection_9; }
	inline bool* get_address_of__belongsToCollection_9() { return &____belongsToCollection_9; }
	inline void set__belongsToCollection_9(bool value)
	{
		____belongsToCollection_9 = value;
	}

	inline static int32_t get_offset_of__dataTable_10() { return static_cast<int32_t>(offsetof(UniqueConstraint_t1006662241, ____dataTable_10)); }
	inline DataTable_t2176726999 * get__dataTable_10() const { return ____dataTable_10; }
	inline DataTable_t2176726999 ** get_address_of__dataTable_10() { return &____dataTable_10; }
	inline void set__dataTable_10(DataTable_t2176726999 * value)
	{
		____dataTable_10 = value;
		Il2CppCodeGenWriteBarrier(&____dataTable_10, value);
	}

	inline static int32_t get_offset_of__dataColumns_11() { return static_cast<int32_t>(offsetof(UniqueConstraint_t1006662241, ____dataColumns_11)); }
	inline DataColumnU5BU5D_t3410743138* get__dataColumns_11() const { return ____dataColumns_11; }
	inline DataColumnU5BU5D_t3410743138** get_address_of__dataColumns_11() { return &____dataColumns_11; }
	inline void set__dataColumns_11(DataColumnU5BU5D_t3410743138* value)
	{
		____dataColumns_11 = value;
		Il2CppCodeGenWriteBarrier(&____dataColumns_11, value);
	}

	inline static int32_t get_offset_of__childConstraint_12() { return static_cast<int32_t>(offsetof(UniqueConstraint_t1006662241, ____childConstraint_12)); }
	inline ForeignKeyConstraint_t1848099579 * get__childConstraint_12() const { return ____childConstraint_12; }
	inline ForeignKeyConstraint_t1848099579 ** get_address_of__childConstraint_12() { return &____childConstraint_12; }
	inline void set__childConstraint_12(ForeignKeyConstraint_t1848099579 * value)
	{
		____childConstraint_12 = value;
		Il2CppCodeGenWriteBarrier(&____childConstraint_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
