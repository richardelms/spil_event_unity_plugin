﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataTable
struct DataTable_t2176726999;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.Data.TableMapping
struct TableMapping_t3011643123;
// System.Data.TableMappingCollection
struct TableMappingCollection_t4250141105;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.TableMapping
struct  TableMapping_t3011643123  : public Il2CppObject
{
public:
	// System.Boolean System.Data.TableMapping::existsInDataSet
	bool ___existsInDataSet_0;
	// System.Data.DataTable System.Data.TableMapping::Table
	DataTable_t2176726999 * ___Table_1;
	// System.Collections.ArrayList System.Data.TableMapping::Elements
	ArrayList_t2121638921 * ___Elements_2;
	// System.Collections.ArrayList System.Data.TableMapping::Attributes
	ArrayList_t2121638921 * ___Attributes_3;
	// System.Data.DataColumn System.Data.TableMapping::SimpleContent
	DataColumn_t3354469747 * ___SimpleContent_4;
	// System.Data.DataColumn System.Data.TableMapping::PrimaryKey
	DataColumn_t3354469747 * ___PrimaryKey_5;
	// System.Data.DataColumn System.Data.TableMapping::ReferenceKey
	DataColumn_t3354469747 * ___ReferenceKey_6;
	// System.Int32 System.Data.TableMapping::lastElementIndex
	int32_t ___lastElementIndex_7;
	// System.Data.TableMapping System.Data.TableMapping::ParentTable
	TableMapping_t3011643123 * ___ParentTable_8;
	// System.Data.TableMappingCollection System.Data.TableMapping::ChildTables
	TableMappingCollection_t4250141105 * ___ChildTables_9;

public:
	inline static int32_t get_offset_of_existsInDataSet_0() { return static_cast<int32_t>(offsetof(TableMapping_t3011643123, ___existsInDataSet_0)); }
	inline bool get_existsInDataSet_0() const { return ___existsInDataSet_0; }
	inline bool* get_address_of_existsInDataSet_0() { return &___existsInDataSet_0; }
	inline void set_existsInDataSet_0(bool value)
	{
		___existsInDataSet_0 = value;
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(TableMapping_t3011643123, ___Table_1)); }
	inline DataTable_t2176726999 * get_Table_1() const { return ___Table_1; }
	inline DataTable_t2176726999 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(DataTable_t2176726999 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier(&___Table_1, value);
	}

	inline static int32_t get_offset_of_Elements_2() { return static_cast<int32_t>(offsetof(TableMapping_t3011643123, ___Elements_2)); }
	inline ArrayList_t2121638921 * get_Elements_2() const { return ___Elements_2; }
	inline ArrayList_t2121638921 ** get_address_of_Elements_2() { return &___Elements_2; }
	inline void set_Elements_2(ArrayList_t2121638921 * value)
	{
		___Elements_2 = value;
		Il2CppCodeGenWriteBarrier(&___Elements_2, value);
	}

	inline static int32_t get_offset_of_Attributes_3() { return static_cast<int32_t>(offsetof(TableMapping_t3011643123, ___Attributes_3)); }
	inline ArrayList_t2121638921 * get_Attributes_3() const { return ___Attributes_3; }
	inline ArrayList_t2121638921 ** get_address_of_Attributes_3() { return &___Attributes_3; }
	inline void set_Attributes_3(ArrayList_t2121638921 * value)
	{
		___Attributes_3 = value;
		Il2CppCodeGenWriteBarrier(&___Attributes_3, value);
	}

	inline static int32_t get_offset_of_SimpleContent_4() { return static_cast<int32_t>(offsetof(TableMapping_t3011643123, ___SimpleContent_4)); }
	inline DataColumn_t3354469747 * get_SimpleContent_4() const { return ___SimpleContent_4; }
	inline DataColumn_t3354469747 ** get_address_of_SimpleContent_4() { return &___SimpleContent_4; }
	inline void set_SimpleContent_4(DataColumn_t3354469747 * value)
	{
		___SimpleContent_4 = value;
		Il2CppCodeGenWriteBarrier(&___SimpleContent_4, value);
	}

	inline static int32_t get_offset_of_PrimaryKey_5() { return static_cast<int32_t>(offsetof(TableMapping_t3011643123, ___PrimaryKey_5)); }
	inline DataColumn_t3354469747 * get_PrimaryKey_5() const { return ___PrimaryKey_5; }
	inline DataColumn_t3354469747 ** get_address_of_PrimaryKey_5() { return &___PrimaryKey_5; }
	inline void set_PrimaryKey_5(DataColumn_t3354469747 * value)
	{
		___PrimaryKey_5 = value;
		Il2CppCodeGenWriteBarrier(&___PrimaryKey_5, value);
	}

	inline static int32_t get_offset_of_ReferenceKey_6() { return static_cast<int32_t>(offsetof(TableMapping_t3011643123, ___ReferenceKey_6)); }
	inline DataColumn_t3354469747 * get_ReferenceKey_6() const { return ___ReferenceKey_6; }
	inline DataColumn_t3354469747 ** get_address_of_ReferenceKey_6() { return &___ReferenceKey_6; }
	inline void set_ReferenceKey_6(DataColumn_t3354469747 * value)
	{
		___ReferenceKey_6 = value;
		Il2CppCodeGenWriteBarrier(&___ReferenceKey_6, value);
	}

	inline static int32_t get_offset_of_lastElementIndex_7() { return static_cast<int32_t>(offsetof(TableMapping_t3011643123, ___lastElementIndex_7)); }
	inline int32_t get_lastElementIndex_7() const { return ___lastElementIndex_7; }
	inline int32_t* get_address_of_lastElementIndex_7() { return &___lastElementIndex_7; }
	inline void set_lastElementIndex_7(int32_t value)
	{
		___lastElementIndex_7 = value;
	}

	inline static int32_t get_offset_of_ParentTable_8() { return static_cast<int32_t>(offsetof(TableMapping_t3011643123, ___ParentTable_8)); }
	inline TableMapping_t3011643123 * get_ParentTable_8() const { return ___ParentTable_8; }
	inline TableMapping_t3011643123 ** get_address_of_ParentTable_8() { return &___ParentTable_8; }
	inline void set_ParentTable_8(TableMapping_t3011643123 * value)
	{
		___ParentTable_8 = value;
		Il2CppCodeGenWriteBarrier(&___ParentTable_8, value);
	}

	inline static int32_t get_offset_of_ChildTables_9() { return static_cast<int32_t>(offsetof(TableMapping_t3011643123, ___ChildTables_9)); }
	inline TableMappingCollection_t4250141105 * get_ChildTables_9() const { return ___ChildTables_9; }
	inline TableMappingCollection_t4250141105 ** get_address_of_ChildTables_9() { return &___ChildTables_9; }
	inline void set_ChildTables_9(TableMappingCollection_t4250141105 * value)
	{
		___ChildTables_9 = value;
		Il2CppCodeGenWriteBarrier(&___ChildTables_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
