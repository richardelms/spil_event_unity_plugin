#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpilGames.Unity.Implementations.SpilUnityImplementationBase/RewardEvent
struct RewardEvent_t2542469259;
// SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdAvailableEvent
struct AdAvailableEvent_t2821451892;
// SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdNotAvailableEvent
struct AdNotAvailableEvent_t1662598401;
// SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdStartedEvent
struct AdStartedEvent_t2961930876;
// SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdFinishedEvent
struct AdFinishedEvent_t4079166917;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Implementations.SpilUnityImplementationBase
struct  SpilUnityImplementationBase_t3224770385  : public Il2CppObject
{
public:
	// SpilGames.Unity.Implementations.SpilUnityImplementationBase/RewardEvent SpilGames.Unity.Implementations.SpilUnityImplementationBase::OnReward
	RewardEvent_t2542469259 * ___OnReward_0;
	// SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdAvailableEvent SpilGames.Unity.Implementations.SpilUnityImplementationBase::OnAdAvailable
	AdAvailableEvent_t2821451892 * ___OnAdAvailable_1;
	// SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdNotAvailableEvent SpilGames.Unity.Implementations.SpilUnityImplementationBase::OnAdNotAvailable
	AdNotAvailableEvent_t1662598401 * ___OnAdNotAvailable_2;
	// SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdStartedEvent SpilGames.Unity.Implementations.SpilUnityImplementationBase::OnAdStarted
	AdStartedEvent_t2961930876 * ___OnAdStarted_3;
	// SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdFinishedEvent SpilGames.Unity.Implementations.SpilUnityImplementationBase::OnAdFinished
	AdFinishedEvent_t4079166917 * ___OnAdFinished_4;

public:
	inline static int32_t get_offset_of_OnReward_0() { return static_cast<int32_t>(offsetof(SpilUnityImplementationBase_t3224770385, ___OnReward_0)); }
	inline RewardEvent_t2542469259 * get_OnReward_0() const { return ___OnReward_0; }
	inline RewardEvent_t2542469259 ** get_address_of_OnReward_0() { return &___OnReward_0; }
	inline void set_OnReward_0(RewardEvent_t2542469259 * value)
	{
		___OnReward_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnReward_0, value);
	}

	inline static int32_t get_offset_of_OnAdAvailable_1() { return static_cast<int32_t>(offsetof(SpilUnityImplementationBase_t3224770385, ___OnAdAvailable_1)); }
	inline AdAvailableEvent_t2821451892 * get_OnAdAvailable_1() const { return ___OnAdAvailable_1; }
	inline AdAvailableEvent_t2821451892 ** get_address_of_OnAdAvailable_1() { return &___OnAdAvailable_1; }
	inline void set_OnAdAvailable_1(AdAvailableEvent_t2821451892 * value)
	{
		___OnAdAvailable_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdAvailable_1, value);
	}

	inline static int32_t get_offset_of_OnAdNotAvailable_2() { return static_cast<int32_t>(offsetof(SpilUnityImplementationBase_t3224770385, ___OnAdNotAvailable_2)); }
	inline AdNotAvailableEvent_t1662598401 * get_OnAdNotAvailable_2() const { return ___OnAdNotAvailable_2; }
	inline AdNotAvailableEvent_t1662598401 ** get_address_of_OnAdNotAvailable_2() { return &___OnAdNotAvailable_2; }
	inline void set_OnAdNotAvailable_2(AdNotAvailableEvent_t1662598401 * value)
	{
		___OnAdNotAvailable_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdNotAvailable_2, value);
	}

	inline static int32_t get_offset_of_OnAdStarted_3() { return static_cast<int32_t>(offsetof(SpilUnityImplementationBase_t3224770385, ___OnAdStarted_3)); }
	inline AdStartedEvent_t2961930876 * get_OnAdStarted_3() const { return ___OnAdStarted_3; }
	inline AdStartedEvent_t2961930876 ** get_address_of_OnAdStarted_3() { return &___OnAdStarted_3; }
	inline void set_OnAdStarted_3(AdStartedEvent_t2961930876 * value)
	{
		___OnAdStarted_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdStarted_3, value);
	}

	inline static int32_t get_offset_of_OnAdFinished_4() { return static_cast<int32_t>(offsetof(SpilUnityImplementationBase_t3224770385, ___OnAdFinished_4)); }
	inline AdFinishedEvent_t4079166917 * get_OnAdFinished_4() const { return ___OnAdFinished_4; }
	inline AdFinishedEvent_t4079166917 ** get_address_of_OnAdFinished_4() { return &___OnAdFinished_4; }
	inline void set_OnAdFinished_4(AdFinishedEvent_t4079166917 * value)
	{
		___OnAdFinished_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdFinished_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
