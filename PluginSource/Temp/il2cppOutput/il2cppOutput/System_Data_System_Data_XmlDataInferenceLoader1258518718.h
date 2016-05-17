#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataSet
struct DataSet_t3654702571;
// System.Xml.XmlDocument
struct XmlDocument_t3705263098;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Data.TableMappingCollection
struct TableMappingCollection_t4250141105;
// System.Data.RelationStructureCollection
struct RelationStructureCollection_t1505059432;

#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_XmlReadMode2944115491.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlDataInferenceLoader
struct  XmlDataInferenceLoader_t1258518718  : public Il2CppObject
{
public:
	// System.Data.DataSet System.Data.XmlDataInferenceLoader::dataset
	DataSet_t3654702571 * ___dataset_0;
	// System.Xml.XmlDocument System.Data.XmlDataInferenceLoader::document
	XmlDocument_t3705263098 * ___document_1;
	// System.Data.XmlReadMode System.Data.XmlDataInferenceLoader::mode
	int32_t ___mode_2;
	// System.Collections.ArrayList System.Data.XmlDataInferenceLoader::ignoredNamespaces
	ArrayList_t2121638921 * ___ignoredNamespaces_3;
	// System.Data.TableMappingCollection System.Data.XmlDataInferenceLoader::tables
	TableMappingCollection_t4250141105 * ___tables_4;
	// System.Data.RelationStructureCollection System.Data.XmlDataInferenceLoader::relations
	RelationStructureCollection_t1505059432 * ___relations_5;

public:
	inline static int32_t get_offset_of_dataset_0() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t1258518718, ___dataset_0)); }
	inline DataSet_t3654702571 * get_dataset_0() const { return ___dataset_0; }
	inline DataSet_t3654702571 ** get_address_of_dataset_0() { return &___dataset_0; }
	inline void set_dataset_0(DataSet_t3654702571 * value)
	{
		___dataset_0 = value;
		Il2CppCodeGenWriteBarrier(&___dataset_0, value);
	}

	inline static int32_t get_offset_of_document_1() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t1258518718, ___document_1)); }
	inline XmlDocument_t3705263098 * get_document_1() const { return ___document_1; }
	inline XmlDocument_t3705263098 ** get_address_of_document_1() { return &___document_1; }
	inline void set_document_1(XmlDocument_t3705263098 * value)
	{
		___document_1 = value;
		Il2CppCodeGenWriteBarrier(&___document_1, value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t1258518718, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_ignoredNamespaces_3() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t1258518718, ___ignoredNamespaces_3)); }
	inline ArrayList_t2121638921 * get_ignoredNamespaces_3() const { return ___ignoredNamespaces_3; }
	inline ArrayList_t2121638921 ** get_address_of_ignoredNamespaces_3() { return &___ignoredNamespaces_3; }
	inline void set_ignoredNamespaces_3(ArrayList_t2121638921 * value)
	{
		___ignoredNamespaces_3 = value;
		Il2CppCodeGenWriteBarrier(&___ignoredNamespaces_3, value);
	}

	inline static int32_t get_offset_of_tables_4() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t1258518718, ___tables_4)); }
	inline TableMappingCollection_t4250141105 * get_tables_4() const { return ___tables_4; }
	inline TableMappingCollection_t4250141105 ** get_address_of_tables_4() { return &___tables_4; }
	inline void set_tables_4(TableMappingCollection_t4250141105 * value)
	{
		___tables_4 = value;
		Il2CppCodeGenWriteBarrier(&___tables_4, value);
	}

	inline static int32_t get_offset_of_relations_5() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t1258518718, ___relations_5)); }
	inline RelationStructureCollection_t1505059432 * get_relations_5() const { return ___relations_5; }
	inline RelationStructureCollection_t1505059432 ** get_address_of_relations_5() { return &___relations_5; }
	inline void set_relations_5(RelationStructureCollection_t1505059432 * value)
	{
		___relations_5 = value;
		Il2CppCodeGenWriteBarrier(&___relations_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
