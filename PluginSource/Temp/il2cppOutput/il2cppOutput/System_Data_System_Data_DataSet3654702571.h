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
// System.Data.DataTableCollection
struct DataTableCollection_t2915263893;
// System.Data.DataRelationCollection
struct DataRelationCollection_t267599063;
// System.Data.PropertyCollection
struct PropertyCollection_t3599376422;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Data.TableAdapterSchemaInfo
struct TableAdapterSchemaInfo_t1131857475;
// System.Data.MergeFailedEventHandler
struct MergeFailedEventHandler_t3846687768;

#include "System_System_ComponentModel_MarshalByValueCompone2977475850.h"
#include "System_Data_System_Data_SerializationFormat3494733210.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSet
struct  DataSet_t3654702571  : public MarshalByValueComponent_t2977475850
{
public:
	// System.String System.Data.DataSet::dataSetName
	String_t* ___dataSetName_2;
	// System.String System.Data.DataSet::_namespace
	String_t* ____namespace_3;
	// System.String System.Data.DataSet::prefix
	String_t* ___prefix_4;
	// System.Boolean System.Data.DataSet::caseSensitive
	bool ___caseSensitive_5;
	// System.Boolean System.Data.DataSet::enforceConstraints
	bool ___enforceConstraints_6;
	// System.Data.DataTableCollection System.Data.DataSet::tableCollection
	DataTableCollection_t2915263893 * ___tableCollection_7;
	// System.Data.DataRelationCollection System.Data.DataSet::relationCollection
	DataRelationCollection_t267599063 * ___relationCollection_8;
	// System.Data.PropertyCollection System.Data.DataSet::properties
	PropertyCollection_t3599376422 * ___properties_9;
	// System.Globalization.CultureInfo System.Data.DataSet::locale
	CultureInfo_t3603717042 * ___locale_10;
	// System.Data.TableAdapterSchemaInfo System.Data.DataSet::tableAdapterSchemaInfo
	TableAdapterSchemaInfo_t1131857475 * ___tableAdapterSchemaInfo_11;
	// System.Boolean System.Data.DataSet::dataSetInitialized
	bool ___dataSetInitialized_12;
	// System.Data.SerializationFormat System.Data.DataSet::remotingFormat
	int32_t ___remotingFormat_13;
	// System.Data.MergeFailedEventHandler System.Data.DataSet::MergeFailed
	MergeFailedEventHandler_t3846687768 * ___MergeFailed_14;

public:
	inline static int32_t get_offset_of_dataSetName_2() { return static_cast<int32_t>(offsetof(DataSet_t3654702571, ___dataSetName_2)); }
	inline String_t* get_dataSetName_2() const { return ___dataSetName_2; }
	inline String_t** get_address_of_dataSetName_2() { return &___dataSetName_2; }
	inline void set_dataSetName_2(String_t* value)
	{
		___dataSetName_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetName_2, value);
	}

	inline static int32_t get_offset_of__namespace_3() { return static_cast<int32_t>(offsetof(DataSet_t3654702571, ____namespace_3)); }
	inline String_t* get__namespace_3() const { return ____namespace_3; }
	inline String_t** get_address_of__namespace_3() { return &____namespace_3; }
	inline void set__namespace_3(String_t* value)
	{
		____namespace_3 = value;
		Il2CppCodeGenWriteBarrier(&____namespace_3, value);
	}

	inline static int32_t get_offset_of_prefix_4() { return static_cast<int32_t>(offsetof(DataSet_t3654702571, ___prefix_4)); }
	inline String_t* get_prefix_4() const { return ___prefix_4; }
	inline String_t** get_address_of_prefix_4() { return &___prefix_4; }
	inline void set_prefix_4(String_t* value)
	{
		___prefix_4 = value;
		Il2CppCodeGenWriteBarrier(&___prefix_4, value);
	}

	inline static int32_t get_offset_of_caseSensitive_5() { return static_cast<int32_t>(offsetof(DataSet_t3654702571, ___caseSensitive_5)); }
	inline bool get_caseSensitive_5() const { return ___caseSensitive_5; }
	inline bool* get_address_of_caseSensitive_5() { return &___caseSensitive_5; }
	inline void set_caseSensitive_5(bool value)
	{
		___caseSensitive_5 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_6() { return static_cast<int32_t>(offsetof(DataSet_t3654702571, ___enforceConstraints_6)); }
	inline bool get_enforceConstraints_6() const { return ___enforceConstraints_6; }
	inline bool* get_address_of_enforceConstraints_6() { return &___enforceConstraints_6; }
	inline void set_enforceConstraints_6(bool value)
	{
		___enforceConstraints_6 = value;
	}

	inline static int32_t get_offset_of_tableCollection_7() { return static_cast<int32_t>(offsetof(DataSet_t3654702571, ___tableCollection_7)); }
	inline DataTableCollection_t2915263893 * get_tableCollection_7() const { return ___tableCollection_7; }
	inline DataTableCollection_t2915263893 ** get_address_of_tableCollection_7() { return &___tableCollection_7; }
	inline void set_tableCollection_7(DataTableCollection_t2915263893 * value)
	{
		___tableCollection_7 = value;
		Il2CppCodeGenWriteBarrier(&___tableCollection_7, value);
	}

	inline static int32_t get_offset_of_relationCollection_8() { return static_cast<int32_t>(offsetof(DataSet_t3654702571, ___relationCollection_8)); }
	inline DataRelationCollection_t267599063 * get_relationCollection_8() const { return ___relationCollection_8; }
	inline DataRelationCollection_t267599063 ** get_address_of_relationCollection_8() { return &___relationCollection_8; }
	inline void set_relationCollection_8(DataRelationCollection_t267599063 * value)
	{
		___relationCollection_8 = value;
		Il2CppCodeGenWriteBarrier(&___relationCollection_8, value);
	}

	inline static int32_t get_offset_of_properties_9() { return static_cast<int32_t>(offsetof(DataSet_t3654702571, ___properties_9)); }
	inline PropertyCollection_t3599376422 * get_properties_9() const { return ___properties_9; }
	inline PropertyCollection_t3599376422 ** get_address_of_properties_9() { return &___properties_9; }
	inline void set_properties_9(PropertyCollection_t3599376422 * value)
	{
		___properties_9 = value;
		Il2CppCodeGenWriteBarrier(&___properties_9, value);
	}

	inline static int32_t get_offset_of_locale_10() { return static_cast<int32_t>(offsetof(DataSet_t3654702571, ___locale_10)); }
	inline CultureInfo_t3603717042 * get_locale_10() const { return ___locale_10; }
	inline CultureInfo_t3603717042 ** get_address_of_locale_10() { return &___locale_10; }
	inline void set_locale_10(CultureInfo_t3603717042 * value)
	{
		___locale_10 = value;
		Il2CppCodeGenWriteBarrier(&___locale_10, value);
	}

	inline static int32_t get_offset_of_tableAdapterSchemaInfo_11() { return static_cast<int32_t>(offsetof(DataSet_t3654702571, ___tableAdapterSchemaInfo_11)); }
	inline TableAdapterSchemaInfo_t1131857475 * get_tableAdapterSchemaInfo_11() const { return ___tableAdapterSchemaInfo_11; }
	inline TableAdapterSchemaInfo_t1131857475 ** get_address_of_tableAdapterSchemaInfo_11() { return &___tableAdapterSchemaInfo_11; }
	inline void set_tableAdapterSchemaInfo_11(TableAdapterSchemaInfo_t1131857475 * value)
	{
		___tableAdapterSchemaInfo_11 = value;
		Il2CppCodeGenWriteBarrier(&___tableAdapterSchemaInfo_11, value);
	}

	inline static int32_t get_offset_of_dataSetInitialized_12() { return static_cast<int32_t>(offsetof(DataSet_t3654702571, ___dataSetInitialized_12)); }
	inline bool get_dataSetInitialized_12() const { return ___dataSetInitialized_12; }
	inline bool* get_address_of_dataSetInitialized_12() { return &___dataSetInitialized_12; }
	inline void set_dataSetInitialized_12(bool value)
	{
		___dataSetInitialized_12 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_13() { return static_cast<int32_t>(offsetof(DataSet_t3654702571, ___remotingFormat_13)); }
	inline int32_t get_remotingFormat_13() const { return ___remotingFormat_13; }
	inline int32_t* get_address_of_remotingFormat_13() { return &___remotingFormat_13; }
	inline void set_remotingFormat_13(int32_t value)
	{
		___remotingFormat_13 = value;
	}

	inline static int32_t get_offset_of_MergeFailed_14() { return static_cast<int32_t>(offsetof(DataSet_t3654702571, ___MergeFailed_14)); }
	inline MergeFailedEventHandler_t3846687768 * get_MergeFailed_14() const { return ___MergeFailed_14; }
	inline MergeFailedEventHandler_t3846687768 ** get_address_of_MergeFailed_14() { return &___MergeFailed_14; }
	inline void set_MergeFailed_14(MergeFailedEventHandler_t3846687768 * value)
	{
		___MergeFailed_14 = value;
		Il2CppCodeGenWriteBarrier(&___MergeFailed_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
