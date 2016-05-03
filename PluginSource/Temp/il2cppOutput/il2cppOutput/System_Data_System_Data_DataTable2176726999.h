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
// System.Data.DataColumnCollection
struct DataColumnCollection_t3528392753;
// System.Data.ConstraintCollection
struct ConstraintCollection_t392455726;
// System.String
struct String_t;
// System.Data.PropertyCollection
struct PropertyCollection_t3599376422;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Data.DataRelationCollection
struct DataRelationCollection_t267599063;
// System.Data.UniqueConstraint
struct UniqueConstraint_t1006662241;
// System.Data.DataRowCollection
struct DataRowCollection_t1405583905;
// System.ComponentModel.ISite
struct ISite_t19613145;
// System.Data.DataRowBuilder
struct DataRowBuilder_t2854809982;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Data.Common.RecordCache
struct RecordCache_t2023714241;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3591325611;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3410743138;
// System.Text.RegularExpressions.Regex
struct Regex_t3802381858;
// System.Data.DataRow[]
struct DataRowU5BU5D_t1036778418;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t215747763;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t309042851;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t30154625;

#include "System_System_ComponentModel_MarshalByValueCompone2977475850.h"
#include "System_Data_System_Data_SerializationFormat3494733210.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTable
struct  DataTable_t2176726999  : public MarshalByValueComponent_t2977475850
{
public:
	// System.Data.DataSet System.Data.DataTable::dataSet
	DataSet_t3654702571 * ___dataSet_2;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_3;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t3528392753 * ____columnCollection_4;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_t392455726 * ____constraintCollection_5;
	// System.String System.Data.DataTable::_displayExpression
	String_t* ____displayExpression_6;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_t3599376422 * ____extendedProperties_7;
	// System.Globalization.CultureInfo System.Data.DataTable::_locale
	CultureInfo_t3603717042 * ____locale_8;
	// System.Int32 System.Data.DataTable::_minimumCapacity
	int32_t ____minimumCapacity_9;
	// System.String System.Data.DataTable::_nameSpace
	String_t* ____nameSpace_10;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelations
	DataRelationCollection_t267599063 * ____childRelations_11;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelations
	DataRelationCollection_t267599063 * ____parentRelations_12;
	// System.String System.Data.DataTable::_prefix
	String_t* ____prefix_13;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKeyConstraint
	UniqueConstraint_t1006662241 * ____primaryKeyConstraint_14;
	// System.Data.DataRowCollection System.Data.DataTable::_rows
	DataRowCollection_t1405583905 * ____rows_15;
	// System.ComponentModel.ISite System.Data.DataTable::_site
	Il2CppObject * ____site_16;
	// System.String System.Data.DataTable::_tableName
	String_t* ____tableName_17;
	// System.Boolean System.Data.DataTable::_duringDataLoad
	bool ____duringDataLoad_18;
	// System.Boolean System.Data.DataTable::_nullConstraintViolationDuringDataLoad
	bool ____nullConstraintViolationDuringDataLoad_19;
	// System.Boolean System.Data.DataTable::enforceConstraints
	bool ___enforceConstraints_20;
	// System.Data.DataRowBuilder System.Data.DataTable::_rowBuilder
	DataRowBuilder_t2854809982 * ____rowBuilder_21;
	// System.Collections.ArrayList System.Data.DataTable::_indexes
	ArrayList_t2121638921 * ____indexes_22;
	// System.Data.Common.RecordCache System.Data.DataTable::_recordCache
	RecordCache_t2023714241 * ____recordCache_23;
	// System.Int32 System.Data.DataTable::_defaultValuesRowIndex
	int32_t ____defaultValuesRowIndex_24;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_25;
	// System.Boolean System.Data.DataTable::_virginCaseSensitive
	bool ____virginCaseSensitive_26;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorsCache
	PropertyDescriptorCollection_t3591325611 * ____propertyDescriptorsCache_27;
	// System.Data.DataColumn[] System.Data.DataTable::_latestPrimaryKeyCols
	DataColumnU5BU5D_t3410743138* ____latestPrimaryKeyCols_30;
	// System.Data.DataRow[] System.Data.DataTable::empty_rows
	DataRowU5BU5D_t1036778418* ___empty_rows_31;
	// System.Boolean System.Data.DataTable::tableInitialized
	bool ___tableInitialized_32;
	// System.Data.SerializationFormat System.Data.DataTable::remotingFormat
	int32_t ___remotingFormat_33;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanged
	DataColumnChangeEventHandler_t215747763 * ___ColumnChanged_34;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanging
	DataColumnChangeEventHandler_t215747763 * ___ColumnChanging_35;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanged
	DataRowChangeEventHandler_t309042851 * ___RowChanged_36;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanging
	DataRowChangeEventHandler_t309042851 * ___RowChanging_37;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleted
	DataRowChangeEventHandler_t309042851 * ___RowDeleted_38;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleting
	DataRowChangeEventHandler_t309042851 * ___RowDeleting_39;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::TableNewRow
	DataTableNewRowEventHandler_t30154625 * ___TableNewRow_40;

public:
	inline static int32_t get_offset_of_dataSet_2() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ___dataSet_2)); }
	inline DataSet_t3654702571 * get_dataSet_2() const { return ___dataSet_2; }
	inline DataSet_t3654702571 ** get_address_of_dataSet_2() { return &___dataSet_2; }
	inline void set_dataSet_2(DataSet_t3654702571 * value)
	{
		___dataSet_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataSet_2, value);
	}

	inline static int32_t get_offset_of__caseSensitive_3() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____caseSensitive_3)); }
	inline bool get__caseSensitive_3() const { return ____caseSensitive_3; }
	inline bool* get_address_of__caseSensitive_3() { return &____caseSensitive_3; }
	inline void set__caseSensitive_3(bool value)
	{
		____caseSensitive_3 = value;
	}

	inline static int32_t get_offset_of__columnCollection_4() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____columnCollection_4)); }
	inline DataColumnCollection_t3528392753 * get__columnCollection_4() const { return ____columnCollection_4; }
	inline DataColumnCollection_t3528392753 ** get_address_of__columnCollection_4() { return &____columnCollection_4; }
	inline void set__columnCollection_4(DataColumnCollection_t3528392753 * value)
	{
		____columnCollection_4 = value;
		Il2CppCodeGenWriteBarrier(&____columnCollection_4, value);
	}

	inline static int32_t get_offset_of__constraintCollection_5() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____constraintCollection_5)); }
	inline ConstraintCollection_t392455726 * get__constraintCollection_5() const { return ____constraintCollection_5; }
	inline ConstraintCollection_t392455726 ** get_address_of__constraintCollection_5() { return &____constraintCollection_5; }
	inline void set__constraintCollection_5(ConstraintCollection_t392455726 * value)
	{
		____constraintCollection_5 = value;
		Il2CppCodeGenWriteBarrier(&____constraintCollection_5, value);
	}

	inline static int32_t get_offset_of__displayExpression_6() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____displayExpression_6)); }
	inline String_t* get__displayExpression_6() const { return ____displayExpression_6; }
	inline String_t** get_address_of__displayExpression_6() { return &____displayExpression_6; }
	inline void set__displayExpression_6(String_t* value)
	{
		____displayExpression_6 = value;
		Il2CppCodeGenWriteBarrier(&____displayExpression_6, value);
	}

	inline static int32_t get_offset_of__extendedProperties_7() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____extendedProperties_7)); }
	inline PropertyCollection_t3599376422 * get__extendedProperties_7() const { return ____extendedProperties_7; }
	inline PropertyCollection_t3599376422 ** get_address_of__extendedProperties_7() { return &____extendedProperties_7; }
	inline void set__extendedProperties_7(PropertyCollection_t3599376422 * value)
	{
		____extendedProperties_7 = value;
		Il2CppCodeGenWriteBarrier(&____extendedProperties_7, value);
	}

	inline static int32_t get_offset_of__locale_8() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____locale_8)); }
	inline CultureInfo_t3603717042 * get__locale_8() const { return ____locale_8; }
	inline CultureInfo_t3603717042 ** get_address_of__locale_8() { return &____locale_8; }
	inline void set__locale_8(CultureInfo_t3603717042 * value)
	{
		____locale_8 = value;
		Il2CppCodeGenWriteBarrier(&____locale_8, value);
	}

	inline static int32_t get_offset_of__minimumCapacity_9() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____minimumCapacity_9)); }
	inline int32_t get__minimumCapacity_9() const { return ____minimumCapacity_9; }
	inline int32_t* get_address_of__minimumCapacity_9() { return &____minimumCapacity_9; }
	inline void set__minimumCapacity_9(int32_t value)
	{
		____minimumCapacity_9 = value;
	}

	inline static int32_t get_offset_of__nameSpace_10() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____nameSpace_10)); }
	inline String_t* get__nameSpace_10() const { return ____nameSpace_10; }
	inline String_t** get_address_of__nameSpace_10() { return &____nameSpace_10; }
	inline void set__nameSpace_10(String_t* value)
	{
		____nameSpace_10 = value;
		Il2CppCodeGenWriteBarrier(&____nameSpace_10, value);
	}

	inline static int32_t get_offset_of__childRelations_11() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____childRelations_11)); }
	inline DataRelationCollection_t267599063 * get__childRelations_11() const { return ____childRelations_11; }
	inline DataRelationCollection_t267599063 ** get_address_of__childRelations_11() { return &____childRelations_11; }
	inline void set__childRelations_11(DataRelationCollection_t267599063 * value)
	{
		____childRelations_11 = value;
		Il2CppCodeGenWriteBarrier(&____childRelations_11, value);
	}

	inline static int32_t get_offset_of__parentRelations_12() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____parentRelations_12)); }
	inline DataRelationCollection_t267599063 * get__parentRelations_12() const { return ____parentRelations_12; }
	inline DataRelationCollection_t267599063 ** get_address_of__parentRelations_12() { return &____parentRelations_12; }
	inline void set__parentRelations_12(DataRelationCollection_t267599063 * value)
	{
		____parentRelations_12 = value;
		Il2CppCodeGenWriteBarrier(&____parentRelations_12, value);
	}

	inline static int32_t get_offset_of__prefix_13() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____prefix_13)); }
	inline String_t* get__prefix_13() const { return ____prefix_13; }
	inline String_t** get_address_of__prefix_13() { return &____prefix_13; }
	inline void set__prefix_13(String_t* value)
	{
		____prefix_13 = value;
		Il2CppCodeGenWriteBarrier(&____prefix_13, value);
	}

	inline static int32_t get_offset_of__primaryKeyConstraint_14() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____primaryKeyConstraint_14)); }
	inline UniqueConstraint_t1006662241 * get__primaryKeyConstraint_14() const { return ____primaryKeyConstraint_14; }
	inline UniqueConstraint_t1006662241 ** get_address_of__primaryKeyConstraint_14() { return &____primaryKeyConstraint_14; }
	inline void set__primaryKeyConstraint_14(UniqueConstraint_t1006662241 * value)
	{
		____primaryKeyConstraint_14 = value;
		Il2CppCodeGenWriteBarrier(&____primaryKeyConstraint_14, value);
	}

	inline static int32_t get_offset_of__rows_15() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____rows_15)); }
	inline DataRowCollection_t1405583905 * get__rows_15() const { return ____rows_15; }
	inline DataRowCollection_t1405583905 ** get_address_of__rows_15() { return &____rows_15; }
	inline void set__rows_15(DataRowCollection_t1405583905 * value)
	{
		____rows_15 = value;
		Il2CppCodeGenWriteBarrier(&____rows_15, value);
	}

	inline static int32_t get_offset_of__site_16() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____site_16)); }
	inline Il2CppObject * get__site_16() const { return ____site_16; }
	inline Il2CppObject ** get_address_of__site_16() { return &____site_16; }
	inline void set__site_16(Il2CppObject * value)
	{
		____site_16 = value;
		Il2CppCodeGenWriteBarrier(&____site_16, value);
	}

	inline static int32_t get_offset_of__tableName_17() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____tableName_17)); }
	inline String_t* get__tableName_17() const { return ____tableName_17; }
	inline String_t** get_address_of__tableName_17() { return &____tableName_17; }
	inline void set__tableName_17(String_t* value)
	{
		____tableName_17 = value;
		Il2CppCodeGenWriteBarrier(&____tableName_17, value);
	}

	inline static int32_t get_offset_of__duringDataLoad_18() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____duringDataLoad_18)); }
	inline bool get__duringDataLoad_18() const { return ____duringDataLoad_18; }
	inline bool* get_address_of__duringDataLoad_18() { return &____duringDataLoad_18; }
	inline void set__duringDataLoad_18(bool value)
	{
		____duringDataLoad_18 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolationDuringDataLoad_19() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____nullConstraintViolationDuringDataLoad_19)); }
	inline bool get__nullConstraintViolationDuringDataLoad_19() const { return ____nullConstraintViolationDuringDataLoad_19; }
	inline bool* get_address_of__nullConstraintViolationDuringDataLoad_19() { return &____nullConstraintViolationDuringDataLoad_19; }
	inline void set__nullConstraintViolationDuringDataLoad_19(bool value)
	{
		____nullConstraintViolationDuringDataLoad_19 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_20() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ___enforceConstraints_20)); }
	inline bool get_enforceConstraints_20() const { return ___enforceConstraints_20; }
	inline bool* get_address_of_enforceConstraints_20() { return &___enforceConstraints_20; }
	inline void set_enforceConstraints_20(bool value)
	{
		___enforceConstraints_20 = value;
	}

	inline static int32_t get_offset_of__rowBuilder_21() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____rowBuilder_21)); }
	inline DataRowBuilder_t2854809982 * get__rowBuilder_21() const { return ____rowBuilder_21; }
	inline DataRowBuilder_t2854809982 ** get_address_of__rowBuilder_21() { return &____rowBuilder_21; }
	inline void set__rowBuilder_21(DataRowBuilder_t2854809982 * value)
	{
		____rowBuilder_21 = value;
		Il2CppCodeGenWriteBarrier(&____rowBuilder_21, value);
	}

	inline static int32_t get_offset_of__indexes_22() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____indexes_22)); }
	inline ArrayList_t2121638921 * get__indexes_22() const { return ____indexes_22; }
	inline ArrayList_t2121638921 ** get_address_of__indexes_22() { return &____indexes_22; }
	inline void set__indexes_22(ArrayList_t2121638921 * value)
	{
		____indexes_22 = value;
		Il2CppCodeGenWriteBarrier(&____indexes_22, value);
	}

	inline static int32_t get_offset_of__recordCache_23() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____recordCache_23)); }
	inline RecordCache_t2023714241 * get__recordCache_23() const { return ____recordCache_23; }
	inline RecordCache_t2023714241 ** get_address_of__recordCache_23() { return &____recordCache_23; }
	inline void set__recordCache_23(RecordCache_t2023714241 * value)
	{
		____recordCache_23 = value;
		Il2CppCodeGenWriteBarrier(&____recordCache_23, value);
	}

	inline static int32_t get_offset_of__defaultValuesRowIndex_24() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____defaultValuesRowIndex_24)); }
	inline int32_t get__defaultValuesRowIndex_24() const { return ____defaultValuesRowIndex_24; }
	inline int32_t* get_address_of__defaultValuesRowIndex_24() { return &____defaultValuesRowIndex_24; }
	inline void set__defaultValuesRowIndex_24(int32_t value)
	{
		____defaultValuesRowIndex_24 = value;
	}

	inline static int32_t get_offset_of_fInitInProgress_25() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ___fInitInProgress_25)); }
	inline bool get_fInitInProgress_25() const { return ___fInitInProgress_25; }
	inline bool* get_address_of_fInitInProgress_25() { return &___fInitInProgress_25; }
	inline void set_fInitInProgress_25(bool value)
	{
		___fInitInProgress_25 = value;
	}

	inline static int32_t get_offset_of__virginCaseSensitive_26() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____virginCaseSensitive_26)); }
	inline bool get__virginCaseSensitive_26() const { return ____virginCaseSensitive_26; }
	inline bool* get_address_of__virginCaseSensitive_26() { return &____virginCaseSensitive_26; }
	inline void set__virginCaseSensitive_26(bool value)
	{
		____virginCaseSensitive_26 = value;
	}

	inline static int32_t get_offset_of__propertyDescriptorsCache_27() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____propertyDescriptorsCache_27)); }
	inline PropertyDescriptorCollection_t3591325611 * get__propertyDescriptorsCache_27() const { return ____propertyDescriptorsCache_27; }
	inline PropertyDescriptorCollection_t3591325611 ** get_address_of__propertyDescriptorsCache_27() { return &____propertyDescriptorsCache_27; }
	inline void set__propertyDescriptorsCache_27(PropertyDescriptorCollection_t3591325611 * value)
	{
		____propertyDescriptorsCache_27 = value;
		Il2CppCodeGenWriteBarrier(&____propertyDescriptorsCache_27, value);
	}

	inline static int32_t get_offset_of__latestPrimaryKeyCols_30() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ____latestPrimaryKeyCols_30)); }
	inline DataColumnU5BU5D_t3410743138* get__latestPrimaryKeyCols_30() const { return ____latestPrimaryKeyCols_30; }
	inline DataColumnU5BU5D_t3410743138** get_address_of__latestPrimaryKeyCols_30() { return &____latestPrimaryKeyCols_30; }
	inline void set__latestPrimaryKeyCols_30(DataColumnU5BU5D_t3410743138* value)
	{
		____latestPrimaryKeyCols_30 = value;
		Il2CppCodeGenWriteBarrier(&____latestPrimaryKeyCols_30, value);
	}

	inline static int32_t get_offset_of_empty_rows_31() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ___empty_rows_31)); }
	inline DataRowU5BU5D_t1036778418* get_empty_rows_31() const { return ___empty_rows_31; }
	inline DataRowU5BU5D_t1036778418** get_address_of_empty_rows_31() { return &___empty_rows_31; }
	inline void set_empty_rows_31(DataRowU5BU5D_t1036778418* value)
	{
		___empty_rows_31 = value;
		Il2CppCodeGenWriteBarrier(&___empty_rows_31, value);
	}

	inline static int32_t get_offset_of_tableInitialized_32() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ___tableInitialized_32)); }
	inline bool get_tableInitialized_32() const { return ___tableInitialized_32; }
	inline bool* get_address_of_tableInitialized_32() { return &___tableInitialized_32; }
	inline void set_tableInitialized_32(bool value)
	{
		___tableInitialized_32 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_33() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ___remotingFormat_33)); }
	inline int32_t get_remotingFormat_33() const { return ___remotingFormat_33; }
	inline int32_t* get_address_of_remotingFormat_33() { return &___remotingFormat_33; }
	inline void set_remotingFormat_33(int32_t value)
	{
		___remotingFormat_33 = value;
	}

	inline static int32_t get_offset_of_ColumnChanged_34() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ___ColumnChanged_34)); }
	inline DataColumnChangeEventHandler_t215747763 * get_ColumnChanged_34() const { return ___ColumnChanged_34; }
	inline DataColumnChangeEventHandler_t215747763 ** get_address_of_ColumnChanged_34() { return &___ColumnChanged_34; }
	inline void set_ColumnChanged_34(DataColumnChangeEventHandler_t215747763 * value)
	{
		___ColumnChanged_34 = value;
		Il2CppCodeGenWriteBarrier(&___ColumnChanged_34, value);
	}

	inline static int32_t get_offset_of_ColumnChanging_35() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ___ColumnChanging_35)); }
	inline DataColumnChangeEventHandler_t215747763 * get_ColumnChanging_35() const { return ___ColumnChanging_35; }
	inline DataColumnChangeEventHandler_t215747763 ** get_address_of_ColumnChanging_35() { return &___ColumnChanging_35; }
	inline void set_ColumnChanging_35(DataColumnChangeEventHandler_t215747763 * value)
	{
		___ColumnChanging_35 = value;
		Il2CppCodeGenWriteBarrier(&___ColumnChanging_35, value);
	}

	inline static int32_t get_offset_of_RowChanged_36() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ___RowChanged_36)); }
	inline DataRowChangeEventHandler_t309042851 * get_RowChanged_36() const { return ___RowChanged_36; }
	inline DataRowChangeEventHandler_t309042851 ** get_address_of_RowChanged_36() { return &___RowChanged_36; }
	inline void set_RowChanged_36(DataRowChangeEventHandler_t309042851 * value)
	{
		___RowChanged_36 = value;
		Il2CppCodeGenWriteBarrier(&___RowChanged_36, value);
	}

	inline static int32_t get_offset_of_RowChanging_37() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ___RowChanging_37)); }
	inline DataRowChangeEventHandler_t309042851 * get_RowChanging_37() const { return ___RowChanging_37; }
	inline DataRowChangeEventHandler_t309042851 ** get_address_of_RowChanging_37() { return &___RowChanging_37; }
	inline void set_RowChanging_37(DataRowChangeEventHandler_t309042851 * value)
	{
		___RowChanging_37 = value;
		Il2CppCodeGenWriteBarrier(&___RowChanging_37, value);
	}

	inline static int32_t get_offset_of_RowDeleted_38() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ___RowDeleted_38)); }
	inline DataRowChangeEventHandler_t309042851 * get_RowDeleted_38() const { return ___RowDeleted_38; }
	inline DataRowChangeEventHandler_t309042851 ** get_address_of_RowDeleted_38() { return &___RowDeleted_38; }
	inline void set_RowDeleted_38(DataRowChangeEventHandler_t309042851 * value)
	{
		___RowDeleted_38 = value;
		Il2CppCodeGenWriteBarrier(&___RowDeleted_38, value);
	}

	inline static int32_t get_offset_of_RowDeleting_39() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ___RowDeleting_39)); }
	inline DataRowChangeEventHandler_t309042851 * get_RowDeleting_39() const { return ___RowDeleting_39; }
	inline DataRowChangeEventHandler_t309042851 ** get_address_of_RowDeleting_39() { return &___RowDeleting_39; }
	inline void set_RowDeleting_39(DataRowChangeEventHandler_t309042851 * value)
	{
		___RowDeleting_39 = value;
		Il2CppCodeGenWriteBarrier(&___RowDeleting_39, value);
	}

	inline static int32_t get_offset_of_TableNewRow_40() { return static_cast<int32_t>(offsetof(DataTable_t2176726999, ___TableNewRow_40)); }
	inline DataTableNewRowEventHandler_t30154625 * get_TableNewRow_40() const { return ___TableNewRow_40; }
	inline DataTableNewRowEventHandler_t30154625 ** get_address_of_TableNewRow_40() { return &___TableNewRow_40; }
	inline void set_TableNewRow_40(DataTableNewRowEventHandler_t30154625 * value)
	{
		___TableNewRow_40 = value;
		Il2CppCodeGenWriteBarrier(&___TableNewRow_40, value);
	}
};

struct DataTable_t2176726999_StaticFields
{
public:
	// System.Data.DataColumn[] System.Data.DataTable::_emptyColumnArray
	DataColumnU5BU5D_t3410743138* ____emptyColumnArray_28;
	// System.Text.RegularExpressions.Regex System.Data.DataTable::SortRegex
	Regex_t3802381858 * ___SortRegex_29;

public:
	inline static int32_t get_offset_of__emptyColumnArray_28() { return static_cast<int32_t>(offsetof(DataTable_t2176726999_StaticFields, ____emptyColumnArray_28)); }
	inline DataColumnU5BU5D_t3410743138* get__emptyColumnArray_28() const { return ____emptyColumnArray_28; }
	inline DataColumnU5BU5D_t3410743138** get_address_of__emptyColumnArray_28() { return &____emptyColumnArray_28; }
	inline void set__emptyColumnArray_28(DataColumnU5BU5D_t3410743138* value)
	{
		____emptyColumnArray_28 = value;
		Il2CppCodeGenWriteBarrier(&____emptyColumnArray_28, value);
	}

	inline static int32_t get_offset_of_SortRegex_29() { return static_cast<int32_t>(offsetof(DataTable_t2176726999_StaticFields, ___SortRegex_29)); }
	inline Regex_t3802381858 * get_SortRegex_29() const { return ___SortRegex_29; }
	inline Regex_t3802381858 ** get_address_of_SortRegex_29() { return &___SortRegex_29; }
	inline void set_SortRegex_29(Regex_t3802381858 * value)
	{
		___SortRegex_29 = value;
		Il2CppCodeGenWriteBarrier(&___SortRegex_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
