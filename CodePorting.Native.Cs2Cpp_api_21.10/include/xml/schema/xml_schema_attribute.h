#pragma once

#include <xml/xml_qualified_name.h>

#include "xml_schema_annotated.h"
#include "xml_schema_simple_type.h"

namespace System { namespace Xml { namespace Schema {

namespace Details {

class XmlSchemaNativeParser;

}

class ASPOSECPP_SHARED_CLASS XmlSchemaAttribute : public XmlSchemaAnnotated
{
    using BaseType = XmlSchemaAnnotated;

    friend class Details::XmlSchemaNativeParser;

    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmlSchemaAttribute,
        CODEPORTING_ARGS(const SharedPtr<XmlQualifiedName>& qualified_name, const String& default_value, bool is_ref));

public:
    ASPOSECPP_SHARED_API XmlSchemaAttribute();

    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaSimpleType> get_AttributeSchemaType() const;

    ASPOSECPP_SHARED_API String get_DefaultValue() const;

    ASPOSECPP_SHARED_API String get_Name() const;

    ASPOSECPP_SHARED_API SharedPtr<XmlQualifiedName> get_QualifiedName() const;

    ASPOSECPP_SHARED_API SharedPtr<XmlQualifiedName> get_RefName() const;

    ASPOSECPP_SHARED_API SharedPtr<XmlQualifiedName> get_SchemaTypeName() const;

protected:
#ifdef ASPOSE_GET_SHARED_MEMBERS
    /// Pointer leakage lookup.
    ASPOSECPP_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
#endif

private:
    XmlSchemaAttribute(const SharedPtr<XmlQualifiedName>& qualified_name, const String& default_value, bool is_ref);

    void SetAttributeSchemaType(const SharedPtr<XmlSchemaSimpleType>& value);

private:
    WeakPtr<XmlSchemaSimpleType> m_attribute_schema_type;
    SharedPtr<XmlQualifiedName> m_qualified_name;
    const String m_default_value;
    // Indicates that the attribute is a reference attribute (<xs:attribute ref="m:myattribute"/>).
    const bool m_is_ref;
};

}}}
