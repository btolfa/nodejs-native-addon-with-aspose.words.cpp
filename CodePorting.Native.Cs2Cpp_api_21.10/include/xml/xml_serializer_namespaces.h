/// @file xml/xml_serializer_namespaces.h
#ifndef _aspose_xml_xml_serializer_namespaces_h_
#define _aspose_xml_xml_serializer_namespaces_h_

#include "system/object.h"
#include "system/string.h"
#include "system/exceptions.h"
#include "system/collections/dictionary.h"
#include "system/collections/list.h"
#include "xml/xml_qualified_name.h"


namespace System { namespace Xml { namespace Serialization {
/// Contains the XML namespaces and prefixes that are used by the XmlSerializer to generate qualified names 
/// in an XML document
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlSerializerNamespaces : public System::Object
{
    /// RTTI information.
    RTTI_INFO(XmlSerializerNamespaces, ::System::BaseTypesInfo<System::Object>);
public:
    /// Constructor.
    ASPOSECPP_SHARED_API XmlSerializerNamespaces();
    /// Adds a prefix and the associated namespace to the XmlSerializerNamespaces object.
    /// @param prefix The prefix associated with namespace @p ns to add
    /// @param ns The namespace associated with prefix @p prefix to add
    ASPOSECPP_SHARED_API void Add(const System::String& prefix, const System::String& ns);
    /// Gets number of currenrly stored namespaces.
    /// @return Number of namespaces currently stored in the collection.
    ASPOSECPP_SHARED_API int32_t get_Count();
    /// Lists the namespaces stored.
    /// @return Array of stored namespaces.
    ASPOSECPP_SHARED_API System::ArrayPtr<System::SharedPtr<System::Xml::XmlQualifiedName>> ToArray();
    /// Lists the namespaces stored.
    /// @return List of namespaces actually stored.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Xml::XmlQualifiedName>>> get_NamespaceList();
    /// Returns internally used prefixes-to-namespaces map.
    /// @return Pointer to actually stored map. Modifying this map will have effect on XmlSerializerNamespaces used.
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> get_Namespaces();

private:
    /// Internal implementation of namespace adding.
    void AddInternal(System::String prefix, System::String ns);
    /// Prefix-to-namespace map.
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> namespaces;

};

}}} // System::Xml::Serialization

#endif
