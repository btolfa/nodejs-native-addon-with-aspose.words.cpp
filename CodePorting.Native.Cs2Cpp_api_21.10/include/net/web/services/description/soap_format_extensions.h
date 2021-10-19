/// @file net/web/services/description/soap_format_extensions.h
#pragma once
#include <system/array.h>
#include <system/object.h>
#include <system/shared_ptr.h>
#include <system/string.h>
#include <xml/schema/xml_schema.h>
#include <xml/xml_qualified_name.h>

namespace System { namespace Web { namespace Services { namespace Description {

/// Specifies the action type in the XML Web service at the class hierarchy level to which this enumeration is applied.
enum class SoapBindingStyle
{
    /// The default action type.
    Default,
    /// The message is document oriented.
    Document,
    /// The message contains the parameters to call a procedure or the return values of that procedure.
    Rpc
};

/// Specifies the message encoding method.
enum class SoapBindingUse
{
    /// Specifies an empty string value for the corresponding XML 'use' attribute.
    Default,
    /// The message parts are encoded using the given encoding rules.
    Encoded,
    /// The message parts represent a specific schema.
    Literal
};

}}}} // namespace System::Web::Services::Description
