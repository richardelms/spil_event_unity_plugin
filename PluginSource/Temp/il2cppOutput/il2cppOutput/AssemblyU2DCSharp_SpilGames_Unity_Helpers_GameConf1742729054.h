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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Helpers.GameConfig/Level/EnemyLevelConfig
struct  EnemyLevelConfig_t1742729054  : public Il2CppObject
{
public:
	// System.String SpilGames.Unity.Helpers.GameConfig/Level/EnemyLevelConfig::Name
	String_t* ___Name_0;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Level/EnemyLevelConfig::AmountSpawnedMinimum
	int32_t ___AmountSpawnedMinimum_1;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Level/EnemyLevelConfig::AmountSpawnedMaximum
	int32_t ___AmountSpawnedMaximum_2;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Level/EnemyLevelConfig::SpawnChance
	int32_t ___SpawnChance_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(EnemyLevelConfig_t1742729054, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_AmountSpawnedMinimum_1() { return static_cast<int32_t>(offsetof(EnemyLevelConfig_t1742729054, ___AmountSpawnedMinimum_1)); }
	inline int32_t get_AmountSpawnedMinimum_1() const { return ___AmountSpawnedMinimum_1; }
	inline int32_t* get_address_of_AmountSpawnedMinimum_1() { return &___AmountSpawnedMinimum_1; }
	inline void set_AmountSpawnedMinimum_1(int32_t value)
	{
		___AmountSpawnedMinimum_1 = value;
	}

	inline static int32_t get_offset_of_AmountSpawnedMaximum_2() { return static_cast<int32_t>(offsetof(EnemyLevelConfig_t1742729054, ___AmountSpawnedMaximum_2)); }
	inline int32_t get_AmountSpawnedMaximum_2() const { return ___AmountSpawnedMaximum_2; }
	inline int32_t* get_address_of_AmountSpawnedMaximum_2() { return &___AmountSpawnedMaximum_2; }
	inline void set_AmountSpawnedMaximum_2(int32_t value)
	{
		___AmountSpawnedMaximum_2 = value;
	}

	inline static int32_t get_offset_of_SpawnChance_3() { return static_cast<int32_t>(offsetof(EnemyLevelConfig_t1742729054, ___SpawnChance_3)); }
	inline int32_t get_SpawnChance_3() const { return ___SpawnChance_3; }
	inline int32_t* get_address_of_SpawnChance_3() { return &___SpawnChance_3; }
	inline void set_SpawnChance_3(int32_t value)
	{
		___SpawnChance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
