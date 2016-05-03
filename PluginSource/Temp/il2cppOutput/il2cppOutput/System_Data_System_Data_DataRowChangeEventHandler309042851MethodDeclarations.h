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

// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t309042851;
// System.Object
struct Il2CppObject;
// System.Data.DataRowChangeEventArgs
struct DataRowChangeEventArgs_t116317866;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_Data_System_Data_DataRowChangeEventArgs116317866.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Data.DataRowChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DataRowChangeEventHandler__ctor_m382770909 (DataRowChangeEventHandler_t309042851 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowChangeEventHandler::Invoke(System.Object,System.Data.DataRowChangeEventArgs)
extern "C"  void DataRowChangeEventHandler_Invoke_m3395065261 (DataRowChangeEventHandler_t309042851 * __this, Il2CppObject * ___sender, DataRowChangeEventArgs_t116317866 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DataRowChangeEventHandler_t309042851(Il2CppObject* delegate, Il2CppObject * ___sender, DataRowChangeEventArgs_t116317866 * ___e);
// System.IAsyncResult System.Data.DataRowChangeEventHandler::BeginInvoke(System.Object,System.Data.DataRowChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DataRowChangeEventHandler_BeginInvoke_m2660406068 (DataRowChangeEventHandler_t309042851 * __this, Il2CppObject * ___sender, DataRowChangeEventArgs_t116317866 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DataRowChangeEventHandler_EndInvoke_m1750599533 (DataRowChangeEventHandler_t309042851 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
