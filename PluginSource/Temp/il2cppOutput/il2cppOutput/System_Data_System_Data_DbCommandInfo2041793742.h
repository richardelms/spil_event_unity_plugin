﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.Common.DbCommand
struct DbCommand_t2323745021;
// System.Data.DbSourceMethodInfo[]
struct DbSourceMethodInfoU5BU5D_t1609409306;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DbCommandInfo
struct  DbCommandInfo_t2041793742  : public Il2CppObject
{
public:
	// System.Data.Common.DbCommand System.Data.DbCommandInfo::Command
	DbCommand_t2323745021 * ___Command_0;
	// System.Data.DbSourceMethodInfo[] System.Data.DbCommandInfo::Methods
	DbSourceMethodInfoU5BU5D_t1609409306* ___Methods_1;

public:
	inline static int32_t get_offset_of_Command_0() { return static_cast<int32_t>(offsetof(DbCommandInfo_t2041793742, ___Command_0)); }
	inline DbCommand_t2323745021 * get_Command_0() const { return ___Command_0; }
	inline DbCommand_t2323745021 ** get_address_of_Command_0() { return &___Command_0; }
	inline void set_Command_0(DbCommand_t2323745021 * value)
	{
		___Command_0 = value;
		Il2CppCodeGenWriteBarrier(&___Command_0, value);
	}

	inline static int32_t get_offset_of_Methods_1() { return static_cast<int32_t>(offsetof(DbCommandInfo_t2041793742, ___Methods_1)); }
	inline DbSourceMethodInfoU5BU5D_t1609409306* get_Methods_1() const { return ___Methods_1; }
	inline DbSourceMethodInfoU5BU5D_t1609409306** get_address_of_Methods_1() { return &___Methods_1; }
	inline void set_Methods_1(DbSourceMethodInfoU5BU5D_t1609409306* value)
	{
		___Methods_1 = value;
		Il2CppCodeGenWriteBarrier(&___Methods_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
