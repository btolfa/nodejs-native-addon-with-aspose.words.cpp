#pragma once

#include <xml/xml_qualified_name.h>

#include "xml_schema_type.h"
#include "xml_schema_particle.h"

namespace System { namespace Xml { namespace Schema {

namespace Details {

class XmlSchemaNativeParser;

}

class ASPOSECPP_SHARED_CLASS XmlSchemaElement : public XmlSchemaParticle
{
    using BaseType = XmlSchemaParticle;

    friend class Details::XmlSchemaNativeParser;

    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmlSchemaElement,
        CODEPORTING_ARGS(const SharedPtr<XmlQualifiedName>& qualified_name));

public:
    ASPOSECPP_SHARED_API XmlSchemaElement();

    ASPOSECPP_SHARED_API String get_Name() const;

    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaType> get_ElementSchemaType() const;

    ASPOSECPP_SHARED_API SharedPtr<XmlQualifiedName> get_QualifiedName() const;

    ASPOSECPP_SHARED_API SharedPtr<XmlQualifiedName> get_SchemaTypeName() const;

protected:
#ifdef ASPOSE_GET_SHARED_MEMBERS
    /// Pointer leakage lookup.
    ASPOSECPP_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
#endif

private:
    XmlSchemaElement(const SharedPtr<XmlQualifiedName>& qualified_name);

    void SetElementSchemaType(const SharedPtr<XmlSchemaType>& value);

private:
    WeakPtr<XmlSchemaType> m_element_schema_type;
    SharedPtr<XmlQualifiedName> m_qualified_name;
};

}}}
