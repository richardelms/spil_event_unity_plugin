#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t957583840;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object>
struct BidirectionalDictionary_2_t2587161411;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t2431690056;
// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t2629456141;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonSerializerInternalBase
struct  JsonSerializerInternalBase_t1092275265  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Serialization.ErrorContext Newtonsoft.Json.Serialization.JsonSerializerInternalBase::_currentErrorContext
	ErrorContext_t957583840 * ____currentErrorContext_0;
	// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object> Newtonsoft.Json.Serialization.JsonSerializerInternalBase::_mappings
	BidirectionalDictionary_2_t2587161411 * ____mappings_1;
	// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.Serialization.JsonSerializerInternalBase::Serializer
	JsonSerializer_t4019458909 * ___Serializer_2;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.Serialization.JsonSerializerInternalBase::TraceWriter
	Il2CppObject * ___TraceWriter_3;
	// Newtonsoft.Json.Serialization.JsonSerializerProxy Newtonsoft.Json.Serialization.JsonSerializerInternalBase::InternalSerializer
	JsonSerializerProxy_t2629456141 * ___InternalSerializer_4;

public:
	inline static int32_t get_offset_of__currentErrorContext_0() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t1092275265, ____currentErrorContext_0)); }
	inline ErrorContext_t957583840 * get__currentErrorContext_0() const { return ____currentErrorContext_0; }
	inline ErrorContext_t957583840 ** get_address_of__currentErrorContext_0() { return &____currentErrorContext_0; }
	inline void set__currentErrorContext_0(ErrorContext_t957583840 * value)
	{
		____currentErrorContext_0 = value;
		Il2CppCodeGenWriteBarrier(&____currentErrorContext_0, value);
	}

	inline static int32_t get_offset_of__mappings_1() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t1092275265, ____mappings_1)); }
	inline BidirectionalDictionary_2_t2587161411 * get__mappings_1() const { return ____mappings_1; }
	inline BidirectionalDictionary_2_t2587161411 ** get_address_of__mappings_1() { return &____mappings_1; }
	inline void set__mappings_1(BidirectionalDictionary_2_t2587161411 * value)
	{
		____mappings_1 = value;
		Il2CppCodeGenWriteBarrier(&____mappings_1, value);
	}

	inline static int32_t get_offset_of_Serializer_2() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t1092275265, ___Serializer_2)); }
	inline JsonSerializer_t4019458909 * get_Serializer_2() const { return ___Serializer_2; }
	inline JsonSerializer_t4019458909 ** get_address_of_Serializer_2() { return &___Serializer_2; }
	inline void set_Serializer_2(JsonSerializer_t4019458909 * value)
	{
		___Serializer_2 = value;
		Il2CppCodeGenWriteBarrier(&___Serializer_2, value);
	}

	inline static int32_t get_offset_of_TraceWriter_3() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t1092275265, ___TraceWriter_3)); }
	inline Il2CppObject * get_TraceWriter_3() const { return ___TraceWriter_3; }
	inline Il2CppObject ** get_address_of_TraceWriter_3() { return &___TraceWriter_3; }
	inline void set_TraceWriter_3(Il2CppObject * value)
	{
		___TraceWriter_3 = value;
		Il2CppCodeGenWriteBarrier(&___TraceWriter_3, value);
	}

	inline static int32_t get_offset_of_InternalSerializer_4() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t1092275265, ___InternalSerializer_4)); }
	inline JsonSerializerProxy_t2629456141 * get_InternalSerializer_4() const { return ___InternalSerializer_4; }
	inline JsonSerializerProxy_t2629456141 ** get_address_of_InternalSerializer_4() { return &___InternalSerializer_4; }
	inline void set_InternalSerializer_4(JsonSerializerProxy_t2629456141 * value)
	{
		___InternalSerializer_4 = value;
		Il2CppCodeGenWriteBarrier(&___InternalSerializer_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
