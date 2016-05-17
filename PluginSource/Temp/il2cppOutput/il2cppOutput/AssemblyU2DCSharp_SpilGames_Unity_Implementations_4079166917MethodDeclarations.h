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

// SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdFinishedEvent
struct AdFinishedEvent_t4079166917;
// System.Object
struct Il2CppObject;
// SpilGames.Unity.Utils.SpilAdFinishedResponse
struct SpilAdFinishedResponse_t1108704895;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_SpilGames_Unity_Utils_SpilAdFini1108704895.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdFinishedEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void AdFinishedEvent__ctor_m902424690 (AdFinishedEvent_t4079166917 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdFinishedEvent::Invoke(SpilGames.Unity.Utils.SpilAdFinishedResponse)
extern "C"  void AdFinishedEvent_Invoke_m3716199315 (AdFinishedEvent_t4079166917 * __this, SpilAdFinishedResponse_t1108704895 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AdFinishedEvent_t4079166917(Il2CppObject* delegate, SpilAdFinishedResponse_t1108704895 * ___response);
// System.IAsyncResult SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdFinishedEvent::BeginInvoke(SpilGames.Unity.Utils.SpilAdFinishedResponse,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AdFinishedEvent_BeginInvoke_m1449555160 (AdFinishedEvent_t4079166917 * __this, SpilAdFinishedResponse_t1108704895 * ___response, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Implementations.SpilUnityImplementationBase/AdFinishedEvent::EndInvoke(System.IAsyncResult)
extern "C"  void AdFinishedEvent_EndInvoke_m4248265602 (AdFinishedEvent_t4079166917 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
