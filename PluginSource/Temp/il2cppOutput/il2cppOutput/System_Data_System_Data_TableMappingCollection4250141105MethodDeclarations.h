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

// System.Data.TableMappingCollection
struct TableMappingCollection_t4250141105;
// System.Data.TableMapping
struct TableMapping_t3011643123;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_TableMapping3011643123.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Data.TableMappingCollection::.ctor()
extern "C"  void TableMappingCollection__ctor_m858778355 (TableMappingCollection_t4250141105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.TableMappingCollection::Add(System.Data.TableMapping)
extern "C"  void TableMappingCollection_Add_m3664613133 (TableMappingCollection_t4250141105 * __this, TableMapping_t3011643123 * ___map, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.TableMapping System.Data.TableMappingCollection::get_Item(System.String)
extern "C"  TableMapping_t3011643123 * TableMappingCollection_get_Item_m2768450663 (TableMappingCollection_t4250141105 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
