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

// SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdNotAvailableEvent
struct AdNotAvailableEvent_t1662598401;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_SpilGames_Unity_Utils_enumAdType3844448071.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdNotAvailableEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void AdNotAvailableEvent__ctor_m4198017710 (AdNotAvailableEvent_t1662598401 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdNotAvailableEvent::Invoke(SpilGames.Unity.Utils.enumAdType)
extern "C"  void AdNotAvailableEvent_Invoke_m2490446087 (AdNotAvailableEvent_t1662598401 * __this, int32_t ___adType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AdNotAvailableEvent_t1662598401(Il2CppObject* delegate, int32_t ___adType);
// System.IAsyncResult SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdNotAvailableEvent::BeginInvoke(SpilGames.Unity.Utils.enumAdType,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AdNotAvailableEvent_BeginInvoke_m3303615068 (AdNotAvailableEvent_t1662598401 * __this, int32_t ___adType, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdNotAvailableEvent::EndInvoke(System.IAsyncResult)
extern "C"  void AdNotAvailableEvent_EndInvoke_m16294846 (AdNotAvailableEvent_t1662598401 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
