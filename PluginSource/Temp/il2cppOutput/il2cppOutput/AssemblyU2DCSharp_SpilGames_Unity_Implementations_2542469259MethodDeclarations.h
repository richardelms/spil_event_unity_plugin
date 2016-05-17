#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SpilGames.Unity.Implementations.SpilUnityImplementationBase/RewardEvent
struct RewardEvent_t2542469259;
// System.Object
struct Il2CppObject;
// SpilGames.Unity.Utils.RewardData
struct RewardData_t903330946;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_SpilGames_Unity_Utils_RewardData903330946.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase/RewardEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void RewardEvent__ctor_m88293176 (RewardEvent_t2542469259 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase/RewardEvent::Invoke(SpilGames.Unity.Utils.RewardData)
extern "C"  void RewardEvent_Invoke_m334118966 (RewardEvent_t2542469259 * __this, RewardData_t903330946 * ___rewardResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_RewardEvent_t2542469259(Il2CppObject* delegate, RewardData_t903330946 * ___rewardResponse);
// System.IAsyncResult SpilGames.Unity.Implementations.SpilUnityImplementationBase/RewardEvent::BeginInvoke(SpilGames.Unity.Utils.RewardData,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RewardEvent_BeginInvoke_m3142415649 (RewardEvent_t2542469259 * __this, RewardData_t903330946 * ___rewardResponse, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase/RewardEvent::EndInvoke(System.IAsyncResult)
extern "C"  void RewardEvent_EndInvoke_m1405553992 (RewardEvent_t2542469259 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
