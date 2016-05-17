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

// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t30154625;
// System.Object
struct Il2CppObject;
// System.Data.DataTableNewRowEventArgs
struct DataTableNewRowEventArgs_t2261990028;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_Data_System_Data_DataTableNewRowEventArgs2261990028.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Data.DataTableNewRowEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DataTableNewRowEventHandler__ctor_m1673737531 (DataTableNewRowEventHandler_t30154625 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableNewRowEventHandler::Invoke(System.Object,System.Data.DataTableNewRowEventArgs)
extern "C"  void DataTableNewRowEventHandler_Invoke_m1481250729 (DataTableNewRowEventHandler_t30154625 * __this, Il2CppObject * ___sender, DataTableNewRowEventArgs_t2261990028 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DataTableNewRowEventHandler_t30154625(Il2CppObject* delegate, Il2CppObject * ___sender, DataTableNewRowEventArgs_t2261990028 * ___e);
// System.IAsyncResult System.Data.DataTableNewRowEventHandler::BeginInvoke(System.Object,System.Data.DataTableNewRowEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DataTableNewRowEventHandler_BeginInvoke_m1710921844 (DataTableNewRowEventHandler_t30154625 * __this, Il2CppObject * ___sender, DataTableNewRowEventArgs_t2261990028 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableNewRowEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DataTableNewRowEventHandler_EndInvoke_m56655051 (DataTableNewRowEventHandler_t30154625 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
