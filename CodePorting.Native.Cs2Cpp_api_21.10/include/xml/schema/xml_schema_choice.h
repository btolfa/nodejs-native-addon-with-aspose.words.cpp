#pragma once

#include "xml_schema_group_base.h"
#include "xml_schema_object_collection.h"

namespace System { namespace Xml { namespace Schema {

namespace Details {

class XmlSchemaNativeParser;

}

class ASPOSECPP_SHARED_CLASS XmlSchemaChoice : public XmlSchemaGroupBase
{
    using BaseType = XmlSchemaGroupBase;

    friend class Details::XmlSchemaNativeParser;

public:
    ASPOSECPP_SHARED_API XmlSchemaChoice();

    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaObjectCollection> get_Items() const override;

protected:
#ifdef ASPOSE_GET_SHARED_MEMBERS
    /// Pointer leakage lookup.
    ASPOSECPP_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
#endif

private:
    SharedPtr<XmlSchemaObjectCollection> m_items;
};

}}}
