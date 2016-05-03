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

// SpilGames.Unity.Helpers.GameConfig/Enemy
struct  Enemy_t67100520  : public Il2CppObject
{
public:
	// System.String SpilGames.Unity.Helpers.GameConfig/Enemy::Name
	String_t* ___Name_0;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Enemy::HitPoints
	int32_t ___HitPoints_1;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Enemy::Damage
	int32_t ___Damage_2;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Enemy::AttackSpeed
	int32_t ___AttackSpeed_3;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Enemy::WalkSpeed
	int32_t ___WalkSpeed_4;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Enemy::CoinDropMinimum
	int32_t ___CoinDropMinimum_5;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Enemy::CoinDropMaximum
	int32_t ___CoinDropMaximum_6;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Enemy::LootLevel
	int32_t ___LootLevel_7;
	// System.Int32 SpilGames.Unity.Helpers.GameConfig/Enemy::DropChance
	int32_t ___DropChance_8;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_HitPoints_1() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___HitPoints_1)); }
	inline int32_t get_HitPoints_1() const { return ___HitPoints_1; }
	inline int32_t* get_address_of_HitPoints_1() { return &___HitPoints_1; }
	inline void set_HitPoints_1(int32_t value)
	{
		___HitPoints_1 = value;
	}

	inline static int32_t get_offset_of_Damage_2() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___Damage_2)); }
	inline int32_t get_Damage_2() const { return ___Damage_2; }
	inline int32_t* get_address_of_Damage_2() { return &___Damage_2; }
	inline void set_Damage_2(int32_t value)
	{
		___Damage_2 = value;
	}

	inline static int32_t get_offset_of_AttackSpeed_3() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___AttackSpeed_3)); }
	inline int32_t get_AttackSpeed_3() const { return ___AttackSpeed_3; }
	inline int32_t* get_address_of_AttackSpeed_3() { return &___AttackSpeed_3; }
	inline void set_AttackSpeed_3(int32_t value)
	{
		___AttackSpeed_3 = value;
	}

	inline static int32_t get_offset_of_WalkSpeed_4() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___WalkSpeed_4)); }
	inline int32_t get_WalkSpeed_4() const { return ___WalkSpeed_4; }
	inline int32_t* get_address_of_WalkSpeed_4() { return &___WalkSpeed_4; }
	inline void set_WalkSpeed_4(int32_t value)
	{
		___WalkSpeed_4 = value;
	}

	inline static int32_t get_offset_of_CoinDropMinimum_5() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___CoinDropMinimum_5)); }
	inline int32_t get_CoinDropMinimum_5() const { return ___CoinDropMinimum_5; }
	inline int32_t* get_address_of_CoinDropMinimum_5() { return &___CoinDropMinimum_5; }
	inline void set_CoinDropMinimum_5(int32_t value)
	{
		___CoinDropMinimum_5 = value;
	}

	inline static int32_t get_offset_of_CoinDropMaximum_6() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___CoinDropMaximum_6)); }
	inline int32_t get_CoinDropMaximum_6() const { return ___CoinDropMaximum_6; }
	inline int32_t* get_address_of_CoinDropMaximum_6() { return &___CoinDropMaximum_6; }
	inline void set_CoinDropMaximum_6(int32_t value)
	{
		___CoinDropMaximum_6 = value;
	}

	inline static int32_t get_offset_of_LootLevel_7() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___LootLevel_7)); }
	inline int32_t get_LootLevel_7() const { return ___LootLevel_7; }
	inline int32_t* get_address_of_LootLevel_7() { return &___LootLevel_7; }
	inline void set_LootLevel_7(int32_t value)
	{
		___LootLevel_7 = value;
	}

	inline static int32_t get_offset_of_DropChance_8() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___DropChance_8)); }
	inline int32_t get_DropChance_8() const { return ___DropChance_8; }
	inline int32_t* get_address_of_DropChance_8() { return &___DropChance_8; }
	inline void set_DropChance_8(int32_t value)
	{
		___DropChance_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
