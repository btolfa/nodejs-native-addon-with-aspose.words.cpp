#pragma once

#include "xml_schema_object_collection.h"
#include "xml_schema_particle.h"

namespace System { namespace Xml { namespace Schema {

class ASPOSECPP_SHARED_CLASS XmlSchemaGroupBase : public XmlSchemaParticle
{
public:
    virtual SharedPtr<XmlSchemaObjectCollection> get_Items() const = 0;
};

}}}
