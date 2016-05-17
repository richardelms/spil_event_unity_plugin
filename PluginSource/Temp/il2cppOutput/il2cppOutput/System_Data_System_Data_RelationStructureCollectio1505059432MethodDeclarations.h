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

// System.Data.RelationStructureCollection
struct RelationStructureCollection_t1505059432;
// System.Data.RelationStructure
struct RelationStructure_t3039531114;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_RelationStructure3039531114.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Data.RelationStructureCollection::.ctor()
extern "C"  void RelationStructureCollection__ctor_m2201525120 (RelationStructureCollection_t1505059432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.RelationStructureCollection::Add(System.Data.RelationStructure)
extern "C"  void RelationStructureCollection_Add_m3781472769 (RelationStructureCollection_t1505059432 * __this, RelationStructure_t3039531114 * ___rel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.RelationStructure System.Data.RelationStructureCollection::get_Item(System.String,System.String)
extern "C"  RelationStructure_t3039531114 * RelationStructureCollection_get_Item_m3280176159 (RelationStructureCollection_t1505059432 * __this, String_t* ___parent, String_t* ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
