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

// System.Data.MergeFailedEventHandler
struct MergeFailedEventHandler_t3846687768;
// System.Object
struct Il2CppObject;
// System.Data.MergeFailedEventArgs
struct MergeFailedEventArgs_t3393563989;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_Data_System_Data_MergeFailedEventArgs3393563989.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Data.MergeFailedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void MergeFailedEventHandler__ctor_m3557042514 (MergeFailedEventHandler_t3846687768 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeFailedEventHandler::Invoke(System.Object,System.Data.MergeFailedEventArgs)
extern "C"  void MergeFailedEventHandler_Invoke_m1798866199 (MergeFailedEventHandler_t3846687768 * __this, Il2CppObject * ___sender, MergeFailedEventArgs_t3393563989 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MergeFailedEventHandler_t3846687768(Il2CppObject* delegate, Il2CppObject * ___sender, MergeFailedEventArgs_t3393563989 * ___e);
// System.IAsyncResult System.Data.MergeFailedEventHandler::BeginInvoke(System.Object,System.Data.MergeFailedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MergeFailedEventHandler_BeginInvoke_m2056274260 (MergeFailedEventHandler_t3846687768 * __this, Il2CppObject * ___sender, MergeFailedEventArgs_t3393563989 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeFailedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void MergeFailedEventHandler_EndInvoke_m1165300834 (MergeFailedEventHandler_t3846687768 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
