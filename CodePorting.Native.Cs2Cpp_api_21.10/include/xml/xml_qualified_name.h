/// @file xml/xml_qualified_name.h
#pragma once

#include <xml/xml_name_table.h>
#include <xml/i_xml_namespace_resolver.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

namespace Microsoft { namespace Win32 { class RegistryKey; } }

namespace System {

namespace Xml {

/// Represents XML qualified name.
class ASPOSECPP_SHARED_CLASS XmlQualifiedName : public System::Object
{
    /// This type.
    typedef XmlQualifiedName ThisType;
    /// Base type.
    typedef System::Object BaseType;
    
    /// Base tyoe info.
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    /// RTTI.
    RTTI_INFO_DECL();
    
    /// Friend declaration.
    friend ASPOSECPP_SHARED_API bool operator ==(System::SharedPtr<XmlQualifiedName> a, System::SharedPtr<XmlQualifiedName> b);
    /// Friend declaration.
    friend ASPOSECPP_SHARED_API bool operator !=(System::SharedPtr<XmlQualifiedName> a, System::SharedPtr<XmlQualifiedName> b);
    
public:
    /// Empty value.
    ASPOSECPP_SHARED_API static const System::SharedPtr<XmlQualifiedName> Empty;
    
    /// Gets namespace part.
    /// @return Namespace part of XML qualified name.
    ASPOSECPP_SHARED_API String get_Namespace() const;
    /// Gets name part.
    /// @return Name part of XML qualified name.
    ASPOSECPP_SHARED_API String get_Name() const;
    /// Checks if XML qualified name is empty.
    /// @return True if empty, false otherwise.
    ASPOSECPP_SHARED_API bool get_IsEmpty();

    /// Constructs empty qualified name.
    ASPOSECPP_SHARED_API XmlQualifiedName();
    /// Constructor.
    /// @param name Name part of XML qualified name.
    ASPOSECPP_SHARED_API XmlQualifiedName(String name);
    /// Constructor.
    /// @param name Name part of XML qualified name.
    /// @param ns Namespace part of XML qualified name.
    ASPOSECPP_SHARED_API XmlQualifiedName(String name, String ns);

    /// Gets hash code.
    /// @return Hashcode.
    ASPOSECPP_SHARED_API int32_t GetHashCode() const override;
    /// Converts XML qualified name to string.
    /// @return String representation of XML qualified name.
    ASPOSECPP_SHARED_API String ToString() const override;

    /// Equality check.
    /// @param other Object to compare to.
    /// @return true if other is XmlQualifiedName holding same name as current object, false otherwise.
    ASPOSECPP_SHARED_API bool Equals(System::SharedPtr<Object> other) override;
    
    /// Joins name and namespace into qualified name.
    /// @param name Name part of XML qualified name.
    /// @param ns Namespace part of XML qualified name.
    /// @return XML qualified name in a string representation.
    ASPOSECPP_SHARED_API static String ToString(String name, String ns);
    /// Initializes object with new name.
    /// @param name Name part of XML qualified name.
    /// @param ns Namespace part of XML qualified name.
    ASPOSECPP_SHARED_API void Init(String name, String ns);
    /// Sets namespace.
    /// @param ns Namespace to set.
    ASPOSECPP_SHARED_API void SetNamespace(String ns);
    /// Checks the integrity of XML qualified name. Not implemented.
    ASPOSECPP_SHARED_API void Verify();
    /// Atomizes XML qualified name. Not implemented.
    ASPOSECPP_SHARED_API void Atomize(System::SharedPtr<XmlNameTable> nameTable);
    /// Parses XML qualified name. Not implemented.
    ASPOSECPP_SHARED_API static System::SharedPtr<XmlQualifiedName> Parse(String s, System::SharedPtr<IXmlNamespaceResolver> nsmgr, String& prefix);
    /// Clones XML qualified name. Not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<XmlQualifiedName> Clone();
    /// Compares names.
    /// @param a LHS name to compare.
    /// @param b RHS name to compare.
    /// @return Negative value if a is considered less than b; zero if they are considered equal; otherwise, positive value.
    ASPOSECPP_SHARED_API static int32_t Compare(System::SharedPtr<XmlQualifiedName> a, System::SharedPtr<XmlQualifiedName> b);
    
protected:
#ifdef ASPOSE_GET_SHARED_MEMBERS
    /// Pointer leakage lookup.
    System::Object::shared_members_type GetSharedMembers() override;
#endif
    
private:
    /// Name.
    String name;
    /// Namespace.
    String ns;
    /// Hash code.
    mutable int32_t hash;
};

/// Compares XML qualified names.
/// @param a LHS name to compare.
/// @param b RHS name to compare.
/// @return true if names match, false otherwise.
ASPOSECPP_SHARED_API bool operator ==(System::SharedPtr<XmlQualifiedName> a, System::SharedPtr<XmlQualifiedName> b);
/// Compares XML qualified names.
/// @param a LHS name to compare.
/// @param b RHS name to compare.
/// @return false if names match, true otherwise.
ASPOSECPP_SHARED_API bool operator !=(System::SharedPtr<XmlQualifiedName> a, System::SharedPtr<XmlQualifiedName> b);

} // namespace Xml
} // namespace System

