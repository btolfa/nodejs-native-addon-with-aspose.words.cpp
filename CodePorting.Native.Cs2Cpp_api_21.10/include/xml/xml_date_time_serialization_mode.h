/// @file xml/xml_date_time_serialization_mode.h
#ifndef _aspose_xml_xml_date_time_serialization_mode_h_
#define _aspose_xml_xml_date_time_serialization_mode_h_

#include <array>
#include "fwd.h"
#include "system/details/enum_meta_info.h"

namespace System { namespace Xml {

/// Specifies how to treat the time value when converting between string and System::DateTime.
enum class XmlDateTimeSerializationMode
{
    /// The time value represents a local time.
    Local = 0,
    /// The time value represents a UTC time.
    Utc = 1,
    /// The time value represents a local time if a System::DateTime object is being converted to a string.
    Unspecified = 2,
    /// Preserve the time zone information when converting.
    RoundtripKind = 3
};

}}

/// Declares reflection (string representations of enum values) for XmlDateTimeSerializationMode structure.
template<>
struct EnumMetaInfo<System::Xml::XmlDateTimeSerializationMode>
{
    /// Returns a array of pairs that associate System::Xml::XmlDateTimeSerializationMode enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Xml::XmlDateTimeSerializationMode, const char_t*>, 4>& values();
};

#endif // _aspose_xml_xml_date_time_serialization_mode_h_
