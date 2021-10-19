#pragma once

#include "xml_schema_type.h"

namespace System { namespace Xml { namespace Schema {

class XmlSchema;

namespace Details { class XmlSchemaNativeParser; }

class ASPOSECPP_SHARED_CLASS XmlSchemaSimpleType : public XmlSchemaType
{
    friend class Details::XmlSchemaNativeParser;

    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmlSchemaSimpleType,
        CODEPORTING_ARGS(const SharedPtr<XmlQualifiedName>& qualified_name));

public:
    ASPOSECPP_SHARED_API XmlSchemaSimpleType();

private:
    XmlSchemaSimpleType(const SharedPtr<XmlQualifiedName>& qualified_name);
};

}}}
