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

// System.Data.XmlDataReader
struct XmlDataReader_t4112562711;
// System.Data.DataSet
struct DataSet_t3654702571;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Data.DataRow
struct DataRow_t3654701923;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3654702571.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Data_System_Data_XmlReadMode2944115491.h"
#include "System_Data_System_Data_DataRow3654701923.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Data.XmlDataReader::.ctor(System.Data.DataSet,System.Xml.XmlReader,System.Data.XmlReadMode)
extern "C"  void XmlDataReader__ctor_m2922173333 (XmlDataReader_t4112562711 * __this, DataSet_t3654702571 * ___ds, XmlReader_t4229084514 * ___xr, int32_t ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadXml(System.Data.DataSet,System.Xml.XmlReader,System.Data.XmlReadMode)
extern "C"  void XmlDataReader_ReadXml_m4139667348 (Il2CppObject * __this /* static, unused */, DataSet_t3654702571 * ___dataset, XmlReader_t4229084514 * ___reader, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::Process()
extern "C"  void XmlDataReader_Process_m3840338046 (XmlDataReader_t4112562711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlDataReader::IsTopLevelDataSet()
extern "C"  bool XmlDataReader_IsTopLevelDataSet_m1625390712 (XmlDataReader_t4112562711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadTopLevelElement()
extern "C"  void XmlDataReader_ReadTopLevelElement_m896075622 (XmlDataReader_t4112562711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadDataSetContent()
extern "C"  void XmlDataReader_ReadDataSetContent_m2392319466 (XmlDataReader_t4112562711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElement(System.Data.DataRow)
extern "C"  void XmlDataReader_ReadElement_m2762657682 (XmlDataReader_t4112562711 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElementAttribute(System.Data.DataRow)
extern "C"  void XmlDataReader_ReadElementAttribute_m507573950 (XmlDataReader_t4112562711 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElementContent(System.Data.DataRow)
extern "C"  void XmlDataReader_ReadElementContent_m1908626945 (XmlDataReader_t4112562711 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElementElement(System.Data.DataRow)
extern "C"  void XmlDataReader_ReadElementElement_m4185664350 (XmlDataReader_t4112562711 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.XmlDataReader::StringToObject(System.Type,System.String)
extern "C"  Il2CppObject * XmlDataReader_StringToObject_m140544044 (Il2CppObject * __this /* static, unused */, Type_t * ___type, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
