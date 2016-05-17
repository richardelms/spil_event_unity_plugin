#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t2923694261;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t1994304730;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1661793090;
// Newtonsoft.Json.Serialization.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t1626733476;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t2431690056;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3161036435;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t1868533683;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Nullable_1_gen324390844.h"
#include "mscorlib_System_Nullable_1_gen3165651361.h"
#include "mscorlib_System_Nullable_1_gen3304415299.h"
#include "mscorlib_System_Nullable_1_gen1133126593.h"
#include "mscorlib_System_Nullable_1_gen2674128783.h"
#include "mscorlib_System_Nullable_1_gen2225649683.h"
#include "mscorlib_System_Nullable_1_gen1401315150.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "mscorlib_System_Nullable_1_gen2443658601.h"
#include "mscorlib_System_Nullable_1_gen1928302860.h"
#include "mscorlib_System_Nullable_1_gen25603920.h"
#include "mscorlib_System_Nullable_1_gen1779445574.h"
#include "mscorlib_System_Nullable_1_gen975689370.h"
#include "mscorlib_System_Nullable_1_gen3930260668.h"
#include "mscorlib_System_Nullable_1_gen319467179.h"
#include "mscorlib_System_Nullable_1_gen3872402842.h"
#include "mscorlib_System_Nullable_1_gen1261864726.h"
#include "mscorlib_System_Nullable_1_gen964387137.h"
#include "mscorlib_System_Nullable_1_gen1263361920.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonSerializerSettings
struct  JsonSerializerSettings_t622975392  : public Il2CppObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_t324390844  ____formatting_2;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t3165651361  ____dateFormatHandling_3;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_t3304415299  ____dateTimeZoneHandling_4;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_t1133126593  ____dateParseHandling_5;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_t2674128783  ____floatFormatHandling_6;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_t2225649683  ____floatParseHandling_7;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_t1401315150  ____stringEscapeHandling_8;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t3603717042 * ____culture_9;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t3097043249  ____checkAdditionalContent_10;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_t1438485399  ____maxDepth_11;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_12;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_13;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_14;
	// System.Nullable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormat
	Nullable_1_t2443658601  ____typeNameAssemblyFormat_15;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_t1928302860  ____defaultValueHandling_16;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_t25603920  ____preserveReferencesHandling_17;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_t1779445574  ____nullValueHandling_18;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t975689370  ____objectCreationHandling_19;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t3930260668  ____missingMemberHandling_20;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t319467179  ____referenceLoopHandling_21;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_t3872402842  ____context_22;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_t1261864726  ____constructorHandling_23;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_t964387137  ____typeNameHandling_24;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t1263361920  ____metadataPropertyHandling_25;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	Il2CppObject* ___U3CConvertersU3Ek__BackingField_26;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	Il2CppObject * ___U3CContractResolverU3Ek__BackingField_27;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	Il2CppObject * ___U3CEqualityComparerU3Ek__BackingField_28;
	// Newtonsoft.Json.Serialization.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t1626733476 * ___U3CReferenceResolverProviderU3Ek__BackingField_29;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	Il2CppObject * ___U3CTraceWriterU3Ek__BackingField_30;
	// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializerSettings::<Binder>k__BackingField
	SerializationBinder_t3161036435 * ___U3CBinderU3Ek__BackingField_31;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t1868533683 * ___U3CErrorU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of__formatting_2() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____formatting_2)); }
	inline Nullable_1_t324390844  get__formatting_2() const { return ____formatting_2; }
	inline Nullable_1_t324390844 * get_address_of__formatting_2() { return &____formatting_2; }
	inline void set__formatting_2(Nullable_1_t324390844  value)
	{
		____formatting_2 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_3() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____dateFormatHandling_3)); }
	inline Nullable_1_t3165651361  get__dateFormatHandling_3() const { return ____dateFormatHandling_3; }
	inline Nullable_1_t3165651361 * get_address_of__dateFormatHandling_3() { return &____dateFormatHandling_3; }
	inline void set__dateFormatHandling_3(Nullable_1_t3165651361  value)
	{
		____dateFormatHandling_3 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_4() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____dateTimeZoneHandling_4)); }
	inline Nullable_1_t3304415299  get__dateTimeZoneHandling_4() const { return ____dateTimeZoneHandling_4; }
	inline Nullable_1_t3304415299 * get_address_of__dateTimeZoneHandling_4() { return &____dateTimeZoneHandling_4; }
	inline void set__dateTimeZoneHandling_4(Nullable_1_t3304415299  value)
	{
		____dateTimeZoneHandling_4 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_5() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____dateParseHandling_5)); }
	inline Nullable_1_t1133126593  get__dateParseHandling_5() const { return ____dateParseHandling_5; }
	inline Nullable_1_t1133126593 * get_address_of__dateParseHandling_5() { return &____dateParseHandling_5; }
	inline void set__dateParseHandling_5(Nullable_1_t1133126593  value)
	{
		____dateParseHandling_5 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_6() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____floatFormatHandling_6)); }
	inline Nullable_1_t2674128783  get__floatFormatHandling_6() const { return ____floatFormatHandling_6; }
	inline Nullable_1_t2674128783 * get_address_of__floatFormatHandling_6() { return &____floatFormatHandling_6; }
	inline void set__floatFormatHandling_6(Nullable_1_t2674128783  value)
	{
		____floatFormatHandling_6 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_7() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____floatParseHandling_7)); }
	inline Nullable_1_t2225649683  get__floatParseHandling_7() const { return ____floatParseHandling_7; }
	inline Nullable_1_t2225649683 * get_address_of__floatParseHandling_7() { return &____floatParseHandling_7; }
	inline void set__floatParseHandling_7(Nullable_1_t2225649683  value)
	{
		____floatParseHandling_7 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_8() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____stringEscapeHandling_8)); }
	inline Nullable_1_t1401315150  get__stringEscapeHandling_8() const { return ____stringEscapeHandling_8; }
	inline Nullable_1_t1401315150 * get_address_of__stringEscapeHandling_8() { return &____stringEscapeHandling_8; }
	inline void set__stringEscapeHandling_8(Nullable_1_t1401315150  value)
	{
		____stringEscapeHandling_8 = value;
	}

	inline static int32_t get_offset_of__culture_9() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____culture_9)); }
	inline CultureInfo_t3603717042 * get__culture_9() const { return ____culture_9; }
	inline CultureInfo_t3603717042 ** get_address_of__culture_9() { return &____culture_9; }
	inline void set__culture_9(CultureInfo_t3603717042 * value)
	{
		____culture_9 = value;
		Il2CppCodeGenWriteBarrier(&____culture_9, value);
	}

	inline static int32_t get_offset_of__checkAdditionalContent_10() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____checkAdditionalContent_10)); }
	inline Nullable_1_t3097043249  get__checkAdditionalContent_10() const { return ____checkAdditionalContent_10; }
	inline Nullable_1_t3097043249 * get_address_of__checkAdditionalContent_10() { return &____checkAdditionalContent_10; }
	inline void set__checkAdditionalContent_10(Nullable_1_t3097043249  value)
	{
		____checkAdditionalContent_10 = value;
	}

	inline static int32_t get_offset_of__maxDepth_11() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____maxDepth_11)); }
	inline Nullable_1_t1438485399  get__maxDepth_11() const { return ____maxDepth_11; }
	inline Nullable_1_t1438485399 * get_address_of__maxDepth_11() { return &____maxDepth_11; }
	inline void set__maxDepth_11(Nullable_1_t1438485399  value)
	{
		____maxDepth_11 = value;
	}

	inline static int32_t get_offset_of__maxDepthSet_12() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____maxDepthSet_12)); }
	inline bool get__maxDepthSet_12() const { return ____maxDepthSet_12; }
	inline bool* get_address_of__maxDepthSet_12() { return &____maxDepthSet_12; }
	inline void set__maxDepthSet_12(bool value)
	{
		____maxDepthSet_12 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_13() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____dateFormatString_13)); }
	inline String_t* get__dateFormatString_13() const { return ____dateFormatString_13; }
	inline String_t** get_address_of__dateFormatString_13() { return &____dateFormatString_13; }
	inline void set__dateFormatString_13(String_t* value)
	{
		____dateFormatString_13 = value;
		Il2CppCodeGenWriteBarrier(&____dateFormatString_13, value);
	}

	inline static int32_t get_offset_of__dateFormatStringSet_14() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____dateFormatStringSet_14)); }
	inline bool get__dateFormatStringSet_14() const { return ____dateFormatStringSet_14; }
	inline bool* get_address_of__dateFormatStringSet_14() { return &____dateFormatStringSet_14; }
	inline void set__dateFormatStringSet_14(bool value)
	{
		____dateFormatStringSet_14 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormat_15() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____typeNameAssemblyFormat_15)); }
	inline Nullable_1_t2443658601  get__typeNameAssemblyFormat_15() const { return ____typeNameAssemblyFormat_15; }
	inline Nullable_1_t2443658601 * get_address_of__typeNameAssemblyFormat_15() { return &____typeNameAssemblyFormat_15; }
	inline void set__typeNameAssemblyFormat_15(Nullable_1_t2443658601  value)
	{
		____typeNameAssemblyFormat_15 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_16() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____defaultValueHandling_16)); }
	inline Nullable_1_t1928302860  get__defaultValueHandling_16() const { return ____defaultValueHandling_16; }
	inline Nullable_1_t1928302860 * get_address_of__defaultValueHandling_16() { return &____defaultValueHandling_16; }
	inline void set__defaultValueHandling_16(Nullable_1_t1928302860  value)
	{
		____defaultValueHandling_16 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_17() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____preserveReferencesHandling_17)); }
	inline Nullable_1_t25603920  get__preserveReferencesHandling_17() const { return ____preserveReferencesHandling_17; }
	inline Nullable_1_t25603920 * get_address_of__preserveReferencesHandling_17() { return &____preserveReferencesHandling_17; }
	inline void set__preserveReferencesHandling_17(Nullable_1_t25603920  value)
	{
		____preserveReferencesHandling_17 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_18() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____nullValueHandling_18)); }
	inline Nullable_1_t1779445574  get__nullValueHandling_18() const { return ____nullValueHandling_18; }
	inline Nullable_1_t1779445574 * get_address_of__nullValueHandling_18() { return &____nullValueHandling_18; }
	inline void set__nullValueHandling_18(Nullable_1_t1779445574  value)
	{
		____nullValueHandling_18 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_19() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____objectCreationHandling_19)); }
	inline Nullable_1_t975689370  get__objectCreationHandling_19() const { return ____objectCreationHandling_19; }
	inline Nullable_1_t975689370 * get_address_of__objectCreationHandling_19() { return &____objectCreationHandling_19; }
	inline void set__objectCreationHandling_19(Nullable_1_t975689370  value)
	{
		____objectCreationHandling_19 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_20() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____missingMemberHandling_20)); }
	inline Nullable_1_t3930260668  get__missingMemberHandling_20() const { return ____missingMemberHandling_20; }
	inline Nullable_1_t3930260668 * get_address_of__missingMemberHandling_20() { return &____missingMemberHandling_20; }
	inline void set__missingMemberHandling_20(Nullable_1_t3930260668  value)
	{
		____missingMemberHandling_20 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_21() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____referenceLoopHandling_21)); }
	inline Nullable_1_t319467179  get__referenceLoopHandling_21() const { return ____referenceLoopHandling_21; }
	inline Nullable_1_t319467179 * get_address_of__referenceLoopHandling_21() { return &____referenceLoopHandling_21; }
	inline void set__referenceLoopHandling_21(Nullable_1_t319467179  value)
	{
		____referenceLoopHandling_21 = value;
	}

	inline static int32_t get_offset_of__context_22() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____context_22)); }
	inline Nullable_1_t3872402842  get__context_22() const { return ____context_22; }
	inline Nullable_1_t3872402842 * get_address_of__context_22() { return &____context_22; }
	inline void set__context_22(Nullable_1_t3872402842  value)
	{
		____context_22 = value;
	}

	inline static int32_t get_offset_of__constructorHandling_23() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____constructorHandling_23)); }
	inline Nullable_1_t1261864726  get__constructorHandling_23() const { return ____constructorHandling_23; }
	inline Nullable_1_t1261864726 * get_address_of__constructorHandling_23() { return &____constructorHandling_23; }
	inline void set__constructorHandling_23(Nullable_1_t1261864726  value)
	{
		____constructorHandling_23 = value;
	}

	inline static int32_t get_offset_of__typeNameHandling_24() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____typeNameHandling_24)); }
	inline Nullable_1_t964387137  get__typeNameHandling_24() const { return ____typeNameHandling_24; }
	inline Nullable_1_t964387137 * get_address_of__typeNameHandling_24() { return &____typeNameHandling_24; }
	inline void set__typeNameHandling_24(Nullable_1_t964387137  value)
	{
		____typeNameHandling_24 = value;
	}

	inline static int32_t get_offset_of__metadataPropertyHandling_25() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ____metadataPropertyHandling_25)); }
	inline Nullable_1_t1263361920  get__metadataPropertyHandling_25() const { return ____metadataPropertyHandling_25; }
	inline Nullable_1_t1263361920 * get_address_of__metadataPropertyHandling_25() { return &____metadataPropertyHandling_25; }
	inline void set__metadataPropertyHandling_25(Nullable_1_t1263361920  value)
	{
		____metadataPropertyHandling_25 = value;
	}

	inline static int32_t get_offset_of_U3CConvertersU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ___U3CConvertersU3Ek__BackingField_26)); }
	inline Il2CppObject* get_U3CConvertersU3Ek__BackingField_26() const { return ___U3CConvertersU3Ek__BackingField_26; }
	inline Il2CppObject** get_address_of_U3CConvertersU3Ek__BackingField_26() { return &___U3CConvertersU3Ek__BackingField_26; }
	inline void set_U3CConvertersU3Ek__BackingField_26(Il2CppObject* value)
	{
		___U3CConvertersU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConvertersU3Ek__BackingField_26, value);
	}

	inline static int32_t get_offset_of_U3CContractResolverU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ___U3CContractResolverU3Ek__BackingField_27)); }
	inline Il2CppObject * get_U3CContractResolverU3Ek__BackingField_27() const { return ___U3CContractResolverU3Ek__BackingField_27; }
	inline Il2CppObject ** get_address_of_U3CContractResolverU3Ek__BackingField_27() { return &___U3CContractResolverU3Ek__BackingField_27; }
	inline void set_U3CContractResolverU3Ek__BackingField_27(Il2CppObject * value)
	{
		___U3CContractResolverU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CContractResolverU3Ek__BackingField_27, value);
	}

	inline static int32_t get_offset_of_U3CEqualityComparerU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ___U3CEqualityComparerU3Ek__BackingField_28)); }
	inline Il2CppObject * get_U3CEqualityComparerU3Ek__BackingField_28() const { return ___U3CEqualityComparerU3Ek__BackingField_28; }
	inline Il2CppObject ** get_address_of_U3CEqualityComparerU3Ek__BackingField_28() { return &___U3CEqualityComparerU3Ek__BackingField_28; }
	inline void set_U3CEqualityComparerU3Ek__BackingField_28(Il2CppObject * value)
	{
		___U3CEqualityComparerU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEqualityComparerU3Ek__BackingField_28, value);
	}

	inline static int32_t get_offset_of_U3CReferenceResolverProviderU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ___U3CReferenceResolverProviderU3Ek__BackingField_29)); }
	inline Func_1_t1626733476 * get_U3CReferenceResolverProviderU3Ek__BackingField_29() const { return ___U3CReferenceResolverProviderU3Ek__BackingField_29; }
	inline Func_1_t1626733476 ** get_address_of_U3CReferenceResolverProviderU3Ek__BackingField_29() { return &___U3CReferenceResolverProviderU3Ek__BackingField_29; }
	inline void set_U3CReferenceResolverProviderU3Ek__BackingField_29(Func_1_t1626733476 * value)
	{
		___U3CReferenceResolverProviderU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CReferenceResolverProviderU3Ek__BackingField_29, value);
	}

	inline static int32_t get_offset_of_U3CTraceWriterU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ___U3CTraceWriterU3Ek__BackingField_30)); }
	inline Il2CppObject * get_U3CTraceWriterU3Ek__BackingField_30() const { return ___U3CTraceWriterU3Ek__BackingField_30; }
	inline Il2CppObject ** get_address_of_U3CTraceWriterU3Ek__BackingField_30() { return &___U3CTraceWriterU3Ek__BackingField_30; }
	inline void set_U3CTraceWriterU3Ek__BackingField_30(Il2CppObject * value)
	{
		___U3CTraceWriterU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTraceWriterU3Ek__BackingField_30, value);
	}

	inline static int32_t get_offset_of_U3CBinderU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ___U3CBinderU3Ek__BackingField_31)); }
	inline SerializationBinder_t3161036435 * get_U3CBinderU3Ek__BackingField_31() const { return ___U3CBinderU3Ek__BackingField_31; }
	inline SerializationBinder_t3161036435 ** get_address_of_U3CBinderU3Ek__BackingField_31() { return &___U3CBinderU3Ek__BackingField_31; }
	inline void set_U3CBinderU3Ek__BackingField_31(SerializationBinder_t3161036435 * value)
	{
		___U3CBinderU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBinderU3Ek__BackingField_31, value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392, ___U3CErrorU3Ek__BackingField_32)); }
	inline EventHandler_1_t1868533683 * get_U3CErrorU3Ek__BackingField_32() const { return ___U3CErrorU3Ek__BackingField_32; }
	inline EventHandler_1_t1868533683 ** get_address_of_U3CErrorU3Ek__BackingField_32() { return &___U3CErrorU3Ek__BackingField_32; }
	inline void set_U3CErrorU3Ek__BackingField_32(EventHandler_1_t1868533683 * value)
	{
		___U3CErrorU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CErrorU3Ek__BackingField_32, value);
	}
};

struct JsonSerializerSettings_t622975392_StaticFields
{
public:
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t986364934  ___DefaultContext_0;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t3603717042 * ___DefaultCulture_1;

public:
	inline static int32_t get_offset_of_DefaultContext_0() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392_StaticFields, ___DefaultContext_0)); }
	inline StreamingContext_t986364934  get_DefaultContext_0() const { return ___DefaultContext_0; }
	inline StreamingContext_t986364934 * get_address_of_DefaultContext_0() { return &___DefaultContext_0; }
	inline void set_DefaultContext_0(StreamingContext_t986364934  value)
	{
		___DefaultContext_0 = value;
	}

	inline static int32_t get_offset_of_DefaultCulture_1() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t622975392_StaticFields, ___DefaultCulture_1)); }
	inline CultureInfo_t3603717042 * get_DefaultCulture_1() const { return ___DefaultCulture_1; }
	inline CultureInfo_t3603717042 ** get_address_of_DefaultCulture_1() { return &___DefaultCulture_1; }
	inline void set_DefaultCulture_1(CultureInfo_t3603717042 * value)
	{
		___DefaultCulture_1 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultCulture_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
