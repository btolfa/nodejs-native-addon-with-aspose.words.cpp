#pragma once

#include "i_xml_schema_info.h"

namespace System { namespace Xml {

class XmlTextReader;

namespace Schema {

class XmlSchemaType;

class ASPOSECPP_SHARED_CLASS XmlSchemaInfo : public IXmlSchemaInfo
{
    using BaseType = IXmlSchemaInfo;

    friend class System::Xml::XmlTextReader;

    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmlSchemaInfo,
        CODEPORTING_ARGS(const SharedPtr<XmlSchemaType>& schema_type));

public:
    ASPOSECPP_SHARED_API XmlSchemaInfo();

    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaAttribute> get_SchemaAttribute() const override;

    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaType> get_SchemaType() const override;

protected:
#ifdef ASPOSE_GET_SHARED_MEMBERS
    /// Pointer leakage lookup.
    ASPOSECPP_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
#endif

private:
    XmlSchemaInfo(const SharedPtr<XmlSchemaType>& schema_type);

    void set_SchemaType(const SharedPtr<XmlSchemaType>& value);

private:
    SharedPtr<XmlSchemaType> m_schema_type;
};

}}}
