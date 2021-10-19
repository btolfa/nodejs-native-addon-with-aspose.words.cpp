/// @file xml/new_line_handling.h
#pragma once

namespace System { namespace Xml {

/// Specifies how the line breaks are handled.
enum class NewLineHandling {
    /// The new line characetrs are replaced by the specified character.
    Replace = 0,
    /// The new line characters are entitized.
    Entitize = 1,
    /// The new line characters are not changed.
    None = 2
};

}}
