#pragma once

#include <system/object.h>

namespace System { namespace Xml { namespace Schema {

class XmlSchemaAttribute;
class XmlSchemaType;

class IXmlSchemaInfo : public Object
{
public:
    virtual SharedPtr<XmlSchemaAttribute> get_SchemaAttribute() const = 0;

    virtual SharedPtr<XmlSchemaType> get_SchemaType() const = 0;
};

}}}
