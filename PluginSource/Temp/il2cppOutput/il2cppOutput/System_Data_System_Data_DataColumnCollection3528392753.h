#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t609299751;

#include "System_Data_System_Data_InternalDataCollectionBase2754805833.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnCollection
struct  DataColumnCollection_t3528392753  : public InternalDataCollectionBase_t2754805833
{
public:
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnNameCount
	Hashtable_t3875263730 * ___columnNameCount_1;
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnFromName
	Hashtable_t3875263730 * ___columnFromName_2;
	// System.Collections.ArrayList System.Data.DataColumnCollection::autoIncrement
	ArrayList_t2121638921 * ___autoIncrement_3;
	// System.Int32 System.Data.DataColumnCollection::defaultColumnIndex
	int32_t ___defaultColumnIndex_4;
	// System.Data.DataTable System.Data.DataColumnCollection::parentTable
	DataTable_t2176726999 * ___parentTable_5;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanged
	CollectionChangeEventHandler_t609299751 * ___CollectionChanged_8;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionMetaDataChanged
	CollectionChangeEventHandler_t609299751 * ___CollectionMetaDataChanged_9;

public:
	inline static int32_t get_offset_of_columnNameCount_1() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3528392753, ___columnNameCount_1)); }
	inline Hashtable_t3875263730 * get_columnNameCount_1() const { return ___columnNameCount_1; }
	inline Hashtable_t3875263730 ** get_address_of_columnNameCount_1() { return &___columnNameCount_1; }
	inline void set_columnNameCount_1(Hashtable_t3875263730 * value)
	{
		___columnNameCount_1 = value;
		Il2CppCodeGenWriteBarrier(&___columnNameCount_1, value);
	}

	inline static int32_t get_offset_of_columnFromName_2() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3528392753, ___columnFromName_2)); }
	inline Hashtable_t3875263730 * get_columnFromName_2() const { return ___columnFromName_2; }
	inline Hashtable_t3875263730 ** get_address_of_columnFromName_2() { return &___columnFromName_2; }
	inline void set_columnFromName_2(Hashtable_t3875263730 * value)
	{
		___columnFromName_2 = value;
		Il2CppCodeGenWriteBarrier(&___columnFromName_2, value);
	}

	inline static int32_t get_offset_of_autoIncrement_3() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3528392753, ___autoIncrement_3)); }
	inline ArrayList_t2121638921 * get_autoIncrement_3() const { return ___autoIncrement_3; }
	inline ArrayList_t2121638921 ** get_address_of_autoIncrement_3() { return &___autoIncrement_3; }
	inline void set_autoIncrement_3(ArrayList_t2121638921 * value)
	{
		___autoIncrement_3 = value;
		Il2CppCodeGenWriteBarrier(&___autoIncrement_3, value);
	}

	inline static int32_t get_offset_of_defaultColumnIndex_4() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3528392753, ___defaultColumnIndex_4)); }
	inline int32_t get_defaultColumnIndex_4() const { return ___defaultColumnIndex_4; }
	inline int32_t* get_address_of_defaultColumnIndex_4() { return &___defaultColumnIndex_4; }
	inline void set_defaultColumnIndex_4(int32_t value)
	{
		___defaultColumnIndex_4 = value;
	}

	inline static int32_t get_offset_of_parentTable_5() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3528392753, ___parentTable_5)); }
	inline DataTable_t2176726999 * get_parentTable_5() const { return ___parentTable_5; }
	inline DataTable_t2176726999 ** get_address_of_parentTable_5() { return &___parentTable_5; }
	inline void set_parentTable_5(DataTable_t2176726999 * value)
	{
		___parentTable_5 = value;
		Il2CppCodeGenWriteBarrier(&___parentTable_5, value);
	}

	inline static int32_t get_offset_of_CollectionChanged_8() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3528392753, ___CollectionChanged_8)); }
	inline CollectionChangeEventHandler_t609299751 * get_CollectionChanged_8() const { return ___CollectionChanged_8; }
	inline CollectionChangeEventHandler_t609299751 ** get_address_of_CollectionChanged_8() { return &___CollectionChanged_8; }
	inline void set_CollectionChanged_8(CollectionChangeEventHandler_t609299751 * value)
	{
		___CollectionChanged_8 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionChanged_8, value);
	}

	inline static int32_t get_offset_of_CollectionMetaDataChanged_9() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3528392753, ___CollectionMetaDataChanged_9)); }
	inline CollectionChangeEventHandler_t609299751 * get_CollectionMetaDataChanged_9() const { return ___CollectionMetaDataChanged_9; }
	inline CollectionChangeEventHandler_t609299751 ** get_address_of_CollectionMetaDataChanged_9() { return &___CollectionMetaDataChanged_9; }
	inline void set_CollectionMetaDataChanged_9(CollectionChangeEventHandler_t609299751 * value)
	{
		___CollectionMetaDataChanged_9 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionMetaDataChanged_9, value);
	}
};

struct DataColumnCollection_t3528392753_StaticFields
{
public:
	// System.String System.Data.DataColumnCollection::ColumnPrefix
	String_t* ___ColumnPrefix_6;
	// System.String[] System.Data.DataColumnCollection::TenColumns
	StringU5BU5D_t2956870243* ___TenColumns_7;

public:
	inline static int32_t get_offset_of_ColumnPrefix_6() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3528392753_StaticFields, ___ColumnPrefix_6)); }
	inline String_t* get_ColumnPrefix_6() const { return ___ColumnPrefix_6; }
	inline String_t** get_address_of_ColumnPrefix_6() { return &___ColumnPrefix_6; }
	inline void set_ColumnPrefix_6(String_t* value)
	{
		___ColumnPrefix_6 = value;
		Il2CppCodeGenWriteBarrier(&___ColumnPrefix_6, value);
	}

	inline static int32_t get_offset_of_TenColumns_7() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3528392753_StaticFields, ___TenColumns_7)); }
	inline StringU5BU5D_t2956870243* get_TenColumns_7() const { return ___TenColumns_7; }
	inline StringU5BU5D_t2956870243** get_address_of_TenColumns_7() { return &___TenColumns_7; }
	inline void set_TenColumns_7(StringU5BU5D_t2956870243* value)
	{
		___TenColumns_7 = value;
		Il2CppCodeGenWriteBarrier(&___TenColumns_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
