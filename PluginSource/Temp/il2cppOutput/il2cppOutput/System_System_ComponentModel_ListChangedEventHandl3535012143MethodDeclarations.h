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

// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t3535012143;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t1321323978;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_ComponentModel_ListChangedEventArgs1321323978.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.ComponentModel.ListChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ListChangedEventHandler__ctor_m2016901307 (ListChangedEventHandler_t3535012143 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventHandler::Invoke(System.Object,System.ComponentModel.ListChangedEventArgs)
extern "C"  void ListChangedEventHandler_Invoke_m4014260515 (ListChangedEventHandler_t3535012143 * __this, Il2CppObject * ___sender, ListChangedEventArgs_t1321323978 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ListChangedEventHandler_t3535012143(Il2CppObject* delegate, Il2CppObject * ___sender, ListChangedEventArgs_t1321323978 * ___e);
// System.IAsyncResult System.ComponentModel.ListChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.ListChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ListChangedEventHandler_BeginInvoke_m1345887354 (ListChangedEventHandler_t3535012143 * __this, Il2CppObject * ___sender, ListChangedEventArgs_t1321323978 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ListChangedEventHandler_EndInvoke_m3347218507 (ListChangedEventHandler_t3535012143 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
