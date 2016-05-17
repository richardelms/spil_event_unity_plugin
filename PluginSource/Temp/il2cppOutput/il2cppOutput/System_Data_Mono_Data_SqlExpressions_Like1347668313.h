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

#include "System_Data_Mono_Data_SqlExpressions_UnaryExpressi1811781289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Like
struct  Like_t1347668313  : public UnaryExpression_t1811781289
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.Like::_pattern
	Il2CppObject * ____pattern_1;

public:
	inline static int32_t get_offset_of__pattern_1() { return static_cast<int32_t>(offsetof(Like_t1347668313, ____pattern_1)); }
	inline Il2CppObject * get__pattern_1() const { return ____pattern_1; }
	inline Il2CppObject ** get_address_of__pattern_1() { return &____pattern_1; }
	inline void set__pattern_1(Il2CppObject * value)
	{
		____pattern_1 = value;
		Il2CppCodeGenWriteBarrier(&____pattern_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
