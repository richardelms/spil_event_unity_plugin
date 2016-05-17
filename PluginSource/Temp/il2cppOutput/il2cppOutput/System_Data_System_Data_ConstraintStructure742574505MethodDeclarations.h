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

// System.Data.ConstraintStructure
struct ConstraintStructure_t742574505;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Boolean[]
struct BooleanU5BU5D_t3804927312;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Data.ConstraintStructure::.ctor(System.String,System.String[],System.Boolean[],System.String,System.Boolean,System.String,System.Boolean,System.Boolean)
extern "C"  void ConstraintStructure__ctor_m2982708479 (ConstraintStructure_t742574505 * __this, String_t* ___tname, StringU5BU5D_t2956870243* ___cols, BooleanU5BU5D_t3804927312* ___isAttr, String_t* ___cname, bool ___isPK, String_t* ___refName, bool ___isNested, bool ___isConstraintOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
