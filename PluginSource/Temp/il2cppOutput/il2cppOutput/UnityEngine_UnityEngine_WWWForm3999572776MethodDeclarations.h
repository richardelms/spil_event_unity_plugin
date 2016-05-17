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

// UnityEngine.WWWForm
struct WWWForm_t3999572776;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t180559927;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_Encoding180559927.h"

// System.Void UnityEngine.WWWForm::.ctor()
extern "C"  void WWWForm__ctor_m1417930174 (WWWForm_t3999572776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C"  void WWWForm_AddField_m2890504319 (WWWForm_t3999572776 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C"  void WWWForm_AddField_m3426667506 (WWWForm_t3999572776 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t180559927 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
