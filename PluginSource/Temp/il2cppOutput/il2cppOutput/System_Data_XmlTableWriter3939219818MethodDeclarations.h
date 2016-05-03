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

// System.Xml.XmlWriter
struct XmlWriter_t89522450;
// System.Collections.Generic.List`1<System.Data.DataTable>
struct List_1_t2973685968;
// System.Collections.Generic.List`1<System.Data.DataRelation>
struct List_1_t2280946322;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "System_Data_System_Data_XmlWriteMode1570852254.h"
#include "mscorlib_System_String968488902.h"
#include "System_Data_System_Data_DataRowVersion2975473339.h"

// System.Void XmlTableWriter::WriteTables(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Collections.Generic.List`1<System.Data.DataTable>,System.Collections.Generic.List`1<System.Data.DataRelation>,System.String,System.String)
extern "C"  void XmlTableWriter_WriteTables_m900695868 (Il2CppObject * __this /* static, unused */, XmlWriter_t89522450 * ___writer, int32_t ___mode, List_1_t2973685968 * ___tables, List_1_t2280946322 * ___relations, String_t* ___mainDataTable, String_t* ___dataSetName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XmlTableWriter::WriteTableList(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Collections.Generic.List`1<System.Data.DataTable>,System.Data.DataRowVersion)
extern "C"  void XmlTableWriter_WriteTableList_m3825143765 (Il2CppObject * __this /* static, unused */, XmlWriter_t89522450 * ___writer, int32_t ___mode, List_1_t2973685968 * ___tables, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
