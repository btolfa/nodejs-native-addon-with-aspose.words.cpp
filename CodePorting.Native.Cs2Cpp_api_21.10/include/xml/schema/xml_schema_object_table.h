#pragma once

#include <system/collections/dictionary.h>
#include <xml/xml_qualified_name.h>

#include "xml_schema_object.h"

namespace System { namespace Xml { namespace Schema {

class ASPOSECPP_SHARED_CLASS XmlSchemaObjectTable : public Object
{
    using BaseType = Object;

    friend class XmlSchema;
    friend class XmlSchemaSet;
    friend class XmlSchemaComplexType;

    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmlSchemaObjectTable, CODEPORTING_ARGS());

public:
    ASPOSECPP_SHARED_API void Add(const SharedPtr<XmlQualifiedName>& name, const SharedPtr<XmlSchemaObject>& value);

    ASPOSECPP_SHARED_API bool Contains(const SharedPtr<XmlQualifiedName>& name) const;

    ASPOSECPP_SHARED_API int32_t get_Count() const;

    ASPOSECPP_SHARED_API SharedPtr<Collections::Generic::ICollection<SharedPtr<XmlSchemaObject>>> get_Values() const;

    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaObject> idx_get(const SharedPtr<XmlQualifiedName>& value) const;

protected:
#ifdef ASPOSE_GET_SHARED_MEMBERS
    /// Pointer leakage lookup.
    ASPOSECPP_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
#endif

private:
    XmlSchemaObjectTable();

    void Add(const SharedPtr<XmlSchemaObjectTable>& other);

private:
    using Table = Collections::Generic::Dictionary<SharedPtr<XmlQualifiedName>, SharedPtr<XmlSchemaObject>>;
    SharedPtr<Table> m_table;
};

}}}
