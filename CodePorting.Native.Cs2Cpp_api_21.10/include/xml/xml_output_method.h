/// @file xml/xml_output_method.h
#pragma once

namespace System { namespace Xml {

/// Specifies the method of XmlWriter output serialization.
enum class XmlOutputMethod {
    /// Serialize according to the rules of XML 1.0.
    Xml = 0,
    /// Serialize according to the rules of HTML specified by XSLT.
    Html = 1,
    /// Serialize only text blocks.
    Text = 2,
    /// Follow the XSLT rules to choose between the Xml and Html output methods at runtime.
    AutoDetect = 3
};

}}
