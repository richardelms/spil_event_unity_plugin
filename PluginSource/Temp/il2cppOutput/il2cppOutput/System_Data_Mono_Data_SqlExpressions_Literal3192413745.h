#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "System_Data_Mono_Data_SqlExpressions_BaseExpression702043659.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Literal
struct  Literal_t3192413745  : public BaseExpression_t702043659
{
public:
	// System.Object Mono.Data.SqlExpressions.Literal::val
	Il2CppObject * ___val_0;

public:
	inline static int32_t get_offset_of_val_0() { return static_cast<int32_t>(offsetof(Literal_t3192413745, ___val_0)); }
	inline Il2CppObject * get_val_0() const { return ___val_0; }
	inline Il2CppObject ** get_address_of_val_0() { return &___val_0; }
	inline void set_val_0(Il2CppObject * value)
	{
		___val_0 = value;
		Il2CppCodeGenWriteBarrier(&___val_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
