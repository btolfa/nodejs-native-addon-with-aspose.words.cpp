#pragma once

#include <xml/xml_qualified_name.h>

#include "xml_type_code.h"
#include "xml_schema_annotated.h"

namespace System { namespace Xml { namespace Schema {

namespace Details {

class XmlSchemaNativeParser;

}

class ASPOSECPP_SHARED_CLASS XmlSchemaType : public XmlSchemaAnnotated
{
    using BaseType = XmlSchemaAnnotated;

    friend class Details::XmlSchemaNativeParser;

public:
    ASPOSECPP_SHARED_API SharedPtr<XmlQualifiedName> get_QualifiedName() const;

    ASPOSECPP_SHARED_API XmlTypeCode get_TypeCode() const;

    ASPOSECPP_SHARED_API XmlSchemaType();

protected:
    XmlSchemaType(const SharedPtr<XmlQualifiedName>& qualified_name);

protected:
#ifdef ASPOSE_GET_SHARED_MEMBERS
    /// Pointer leakage lookup.
    ASPOSECPP_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
#endif

private:
    void SetTypeCode(XmlTypeCode value);

private:
    SharedPtr<XmlQualifiedName> m_qualified_name;
    XmlTypeCode m_type_code = XmlTypeCode::None;
};

}}}
