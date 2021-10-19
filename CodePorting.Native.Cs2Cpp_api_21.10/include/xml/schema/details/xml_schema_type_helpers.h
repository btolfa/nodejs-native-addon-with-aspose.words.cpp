#pragma once

#include <map>

#include <system/shared_ptr.h>

#include <xml/detail/xml_3rd_party_types.h>

namespace System { namespace Xml { namespace Schema {

class XmlSchemaAttribute;
class XmlSchemaElement;
class XmlSchemaType;

namespace Details {

template<class NativeType, class SchemaType>
using NativeToSchemaMap = std::map<const NativeType*, SharedPtr<SchemaType>>;

using NativeAttributeMap = NativeToSchemaMap<xmlSchemaAttribute, XmlSchemaAttribute>;
using NativeElementMap = NativeToSchemaMap<xmlSchemaElement, XmlSchemaElement>;
using NativeTypeMap = NativeToSchemaMap<xmlSchemaType, XmlSchemaType>;

}}}}
