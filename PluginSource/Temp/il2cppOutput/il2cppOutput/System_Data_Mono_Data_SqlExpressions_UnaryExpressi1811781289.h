#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;

#include "System_Data_Mono_Data_SqlExpressions_BaseExpression702043659.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.UnaryExpression
struct  UnaryExpression_t1811781289  : public BaseExpression_t702043659
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.UnaryExpression::expr
	Il2CppObject * ___expr_0;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(UnaryExpression_t1811781289, ___expr_0)); }
	inline Il2CppObject * get_expr_0() const { return ___expr_0; }
	inline Il2CppObject ** get_address_of_expr_0() { return &___expr_0; }
	inline void set_expr_0(Il2CppObject * value)
	{
		___expr_0 = value;
		Il2CppCodeGenWriteBarrier(&___expr_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
