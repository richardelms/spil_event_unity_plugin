#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<SpilGames.Unity.Helpers.GameConfig/Enemy>
struct List_1_t864059489;
// System.Collections.Generic.List`1<SpilGames.Unity.Helpers.GameConfig/Level>
struct List_1_t870272093;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Helpers.GameConfig
struct  GameConfig_t920511417  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<SpilGames.Unity.Helpers.GameConfig/Enemy> SpilGames.Unity.Helpers.GameConfig::Enemies
	List_1_t864059489 * ___Enemies_0;
	// System.Collections.Generic.List`1<SpilGames.Unity.Helpers.GameConfig/Level> SpilGames.Unity.Helpers.GameConfig::Levels
	List_1_t870272093 * ___Levels_1;

public:
	inline static int32_t get_offset_of_Enemies_0() { return static_cast<int32_t>(offsetof(GameConfig_t920511417, ___Enemies_0)); }
	inline List_1_t864059489 * get_Enemies_0() const { return ___Enemies_0; }
	inline List_1_t864059489 ** get_address_of_Enemies_0() { return &___Enemies_0; }
	inline void set_Enemies_0(List_1_t864059489 * value)
	{
		___Enemies_0 = value;
		Il2CppCodeGenWriteBarrier(&___Enemies_0, value);
	}

	inline static int32_t get_offset_of_Levels_1() { return static_cast<int32_t>(offsetof(GameConfig_t920511417, ___Levels_1)); }
	inline List_1_t870272093 * get_Levels_1() const { return ___Levels_1; }
	inline List_1_t870272093 ** get_address_of_Levels_1() { return &___Levels_1; }
	inline void set_Levels_1(List_1_t870272093 * value)
	{
		___Levels_1 = value;
		Il2CppCodeGenWriteBarrier(&___Levels_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
