#pragma once

#include "xml_schema_annotated.h"
#include "xml_schema_group_base.h"

namespace System { namespace Xml { namespace Schema {

class ASPOSECPP_SHARED_CLASS XmlSchemaGroup : public XmlSchemaAnnotated
{
public:
    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaGroupBase> get_Particle() const;
};

}}}
