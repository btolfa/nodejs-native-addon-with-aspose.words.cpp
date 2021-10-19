/// @file xml/xml_node_reader.h
#pragma once

#include <xml/xml_text_reader.h>

namespace System { namespace Xml {

class XmlNode;

/// Provides non-cached forward-only access to data in an XML node.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlNodeReader : public XmlTextReader
{
    RTTI_INFO(XmlNodeReader, ::System::BaseTypesInfo<System::Xml::XmlTextReader>);

    friend class XmlReader;

public:
    /// Constructs an instance that provides access to the specified XML node.
    /// @param node an XmlNode object to be read
    explicit ASPOSECPP_SHARED_API XmlNodeReader(const System::SharedPtr<XmlNode>& node);
};

}} // namespace System::Xml
