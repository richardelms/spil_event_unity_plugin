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

// System.Data.XmlDiffLoader
struct XmlDiffLoader_t3888299394;
// System.Data.DataSet
struct DataSet_t3654702571;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.DataRow
struct DataRow_t3654701923;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3654702571.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "System_Data_System_Data_DataRow3654701923.h"
#include "System_Data_System_Data_DataRowVersion2975473339.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Data.XmlDiffLoader::.ctor(System.Data.DataSet)
extern "C"  void XmlDiffLoader__ctor_m3102433049 (XmlDiffLoader_t3888299394 * __this, DataSet_t3654702571 * ___DSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::Load(System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_Load_m3514910400 (XmlDiffLoader_t3888299394 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadCurrent(System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadCurrent_m1810173299 (XmlDiffLoader_t3888299394 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadBefore(System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadBefore_m4069417695 (XmlDiffLoader_t3888299394 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadErrors(System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadErrors_m3540359627 (XmlDiffLoader_t3888299394 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadColumns(System.Data.DataTable,System.Data.DataRow,System.Xml.XmlReader,System.Data.DataRowVersion)
extern "C"  void XmlDiffLoader_LoadColumns_m455932784 (XmlDiffLoader_t3888299394 * __this, DataTable_t2176726999 * ___Table, DataRow_t3654701923 * ___Row, XmlReader_t4229084514 * ___reader, int32_t ___loadType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadColumnAttributes(System.Data.DataTable,System.Data.DataRow,System.Xml.XmlReader,System.Data.DataRowVersion)
extern "C"  void XmlDiffLoader_LoadColumnAttributes_m3901174682 (XmlDiffLoader_t3888299394 * __this, DataTable_t2176726999 * ___Table, DataRow_t3654701923 * ___Row, XmlReader_t4229084514 * ___reader, int32_t ___loadType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadColumnChildren(System.Data.DataTable,System.Data.DataRow,System.Xml.XmlReader,System.Data.DataRowVersion)
extern "C"  void XmlDiffLoader_LoadColumnChildren_m2569100210 (XmlDiffLoader_t3888299394 * __this, DataTable_t2176726999 * ___Table, DataRow_t3654701923 * ___Row, XmlReader_t4229084514 * ___reader, int32_t ___loadType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadBeforeTable(System.Data.DataTable,System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadBeforeTable_m4046043676 (XmlDiffLoader_t3888299394 * __this, DataTable_t2176726999 * ___Table, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadCurrentTable(System.Data.DataTable,System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadCurrentTable_m1506874120 (XmlDiffLoader_t3888299394 * __this, DataTable_t2176726999 * ___Table, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.XmlDiffLoader::GetTable(System.String)
extern "C"  DataTable_t2176726999 * XmlDiffLoader_GetTable_m2626451904 (XmlDiffLoader_t3888299394 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
