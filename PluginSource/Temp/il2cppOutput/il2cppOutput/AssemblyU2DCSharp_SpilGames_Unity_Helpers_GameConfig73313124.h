#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<SpilGames.Unity.Helpers.GameConfig/Level/EnemyLevelConfig>
struct List_1_t2539688023;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Helpers.GameConfig/Level
struct  Level_t73313124  : public Il2CppObject
{
public:
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Level::LevelNr
	int32_t ___LevelNr_0;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Level::TimeLimit
	int32_t ___TimeLimit_1;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Level::LevelCompleteReward
	int32_t ___LevelCompleteReward_2;
	// System.Collections.Generic.List`1<SpilGames.Unity.Helpers.GameConfig/Level/EnemyLevelConfig> SpilGames.Unity.Helpers.GameConfig/Level::Enemies
	List_1_t2539688023 * ___Enemies_3;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Level::LootContainerSpawnChance
	int32_t ___LootContainerSpawnChance_4;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Level::LootContainerMinimumLevel
	int32_t ___LootContainerMinimumLevel_5;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Level::LootContainerMaximumLevel
	int32_t ___LootContainerMaximumLevel_6;

public:
	inline static int32_t get_offset_of_LevelNr_0() { return static_cast<int32_t>(offsetof(Level_t73313124, ___LevelNr_0)); }
	inline int32_t get_LevelNr_0() const { return ___LevelNr_0; }
	inline int32_t* get_address_of_LevelNr_0() { return &___LevelNr_0; }
	inline void set_LevelNr_0(int32_t value)
	{
		___LevelNr_0 = value;
	}

	inline static int32_t get_offset_of_TimeLimit_1() { return static_cast<int32_t>(offsetof(Level_t73313124, ___TimeLimit_1)); }
	inline int32_t get_TimeLimit_1() const { return ___TimeLimit_1; }
	inline int32_t* get_address_of_TimeLimit_1() { return &___TimeLimit_1; }
	inline void set_TimeLimit_1(int32_t value)
	{
		___TimeLimit_1 = value;
	}

	inline static int32_t get_offset_of_LevelCompleteReward_2() { return static_cast<int32_t>(offsetof(Level_t73313124, ___LevelCompleteReward_2)); }
	inline int32_t get_LevelCompleteReward_2() const { return ___LevelCompleteReward_2; }
	inline int32_t* get_address_of_LevelCompleteReward_2() { return &___LevelCompleteReward_2; }
	inline void set_LevelCompleteReward_2(int32_t value)
	{
		___LevelCompleteReward_2 = value;
	}

	inline static int32_t get_offset_of_Enemies_3() { return static_cast<int32_t>(offsetof(Level_t73313124, ___Enemies_3)); }
	inline List_1_t2539688023 * get_Enemies_3() const { return ___Enemies_3; }
	inline List_1_t2539688023 ** get_address_of_Enemies_3() { return &___Enemies_3; }
	inline void set_Enemies_3(List_1_t2539688023 * value)
	{
		___Enemies_3 = value;
		Il2CppCodeGenWriteBarrier(&___Enemies_3, value);
	}

	inline static int32_t get_offset_of_LootContainerSpawnChance_4() { return static_cast<int32_t>(offsetof(Level_t73313124, ___LootContainerSpawnChance_4)); }
	inline int32_t get_LootContainerSpawnChance_4() const { return ___LootContainerSpawnChance_4; }
	inline int32_t* get_address_of_LootContainerSpawnChance_4() { return &___LootContainerSpawnChance_4; }
	inline void set_LootContainerSpawnChance_4(int32_t value)
	{
		___LootContainerSpawnChance_4 = value;
	}

	inline static int32_t get_offset_of_LootContainerMinimumLevel_5() { return static_cast<int32_t>(offsetof(Level_t73313124, ___LootContainerMinimumLevel_5)); }
	inline int32_t get_LootContainerMinimumLevel_5() const { return ___LootContainerMinimumLevel_5; }
	inline int32_t* get_address_of_LootContainerMinimumLevel_5() { return &___LootContainerMinimumLevel_5; }
	inline void set_LootContainerMinimumLevel_5(int32_t value)
	{
		___LootContainerMinimumLevel_5 = value;
	}

	inline static int32_t get_offset_of_LootContainerMaximumLevel_6() { return static_cast<int32_t>(offsetof(Level_t73313124, ___LootContainerMaximumLevel_6)); }
	inline int32_t get_LootContainerMaximumLevel_6() const { return ___LootContainerMaximumLevel_6; }
	inline int32_t* get_address_of_LootContainerMaximumLevel_6() { return &___LootContainerMaximumLevel_6; }
	inline void set_LootContainerMaximumLevel_6(int32_t value)
	{
		___LootContainerMaximumLevel_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
