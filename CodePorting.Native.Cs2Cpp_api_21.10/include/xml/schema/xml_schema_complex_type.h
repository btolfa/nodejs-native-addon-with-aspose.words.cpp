#pragma once

#include "xml_schema_type.h"
#include "xml_schema_object_collection.h"
#include "xml_schema_object_table.h"
#include "xml_schema_particle.h"

namespace System { namespace Xml { namespace Schema {

namespace Details {

class XmlSchemaNativeParser;

}

class ASPOSECPP_SHARED_CLASS XmlSchemaComplexType : public XmlSchemaType
{
    using BaseType = XmlSchemaType;

    friend class Details::XmlSchemaNativeParser;

    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmlSchemaComplexType,
        CODEPORTING_ARGS(const SharedPtr<XmlQualifiedName>& qualified_name));

public:
    ASPOSECPP_SHARED_API XmlSchemaComplexType();

    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaObjectCollection> get_Attributes() const;
    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaObjectTable> get_AttributeUses() const;
    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaParticle> get_ContentTypeParticle() const;

protected:
#ifdef ASPOSE_GET_SHARED_MEMBERS
    /// Pointer leakage lookup.
    ASPOSECPP_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
#endif

private:
    XmlSchemaComplexType(const SharedPtr<XmlQualifiedName>& qualified_name);

    void SetContentTypeParticle(const SharedPtr<XmlSchemaParticle>& particle);

private:
    SharedPtr<XmlSchemaObjectTable> m_attribute_uses = XmlSchemaObjectTable::MakeObject();
    SharedPtr<XmlSchemaParticle> m_particle;
};

}}}
