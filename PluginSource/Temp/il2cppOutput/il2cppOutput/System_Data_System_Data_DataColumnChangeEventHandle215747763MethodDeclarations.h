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

// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t215747763;
// System.Object
struct Il2CppObject;
// System.Data.DataColumnChangeEventArgs
struct DataColumnChangeEventArgs_t2729683610;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_Data_System_Data_DataColumnChangeEventArgs2729683610.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Data.DataColumnChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DataColumnChangeEventHandler__ctor_m3056496081 (DataColumnChangeEventHandler_t215747763 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnChangeEventHandler::Invoke(System.Object,System.Data.DataColumnChangeEventArgs)
extern "C"  void DataColumnChangeEventHandler_Invoke_m4216152627 (DataColumnChangeEventHandler_t215747763 * __this, Il2CppObject * ___sender, DataColumnChangeEventArgs_t2729683610 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DataColumnChangeEventHandler_t215747763(Il2CppObject* delegate, Il2CppObject * ___sender, DataColumnChangeEventArgs_t2729683610 * ___e);
// System.IAsyncResult System.Data.DataColumnChangeEventHandler::BeginInvoke(System.Object,System.Data.DataColumnChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DataColumnChangeEventHandler_BeginInvoke_m2302985472 (DataColumnChangeEventHandler_t215747763 * __this, Il2CppObject * ___sender, DataColumnChangeEventArgs_t2729683610 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DataColumnChangeEventHandler_EndInvoke_m3929763937 (DataColumnChangeEventHandler_t215747763 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
