/// @file system/reflection/assembly_type_registration.h
#ifndef _system_reflection_assembly_type_registration_h_
#define _system_reflection_assembly_type_registration_h_

#include <system/type_info.h>

namespace System { namespace Reflection {

class Assembly;

/// Base type for singletons to register type in executing assembly.
class ASPOSECPP_SHARED_CLASS AssemblyTypeRegistrationBase
{
protected:
    /// Registers type in executing assembly.
    /// @param type TypeInfo describing type of interest.
    static ASPOSECPP_SHARED_API void RegisterType(const System::TypeInfo& type);
    /// Registers type in specified assembly.
    /// @param assembly An assembly to register a type in.
    /// @param type TypeInfo describing type of interest.
    static ASPOSECPP_SHARED_API void RegisterType(const SharedPtr<Assembly>& assembly, const System::TypeInfo& type);
};

/// Singleton to register type in executing assembly.
/// @tparam T Type to register.
template <typename T>
class AssemblyTypeRegistration : public AssemblyTypeRegistrationBase
{
public:
    /// Creates singleton, thus registering type in executing assembly.
    AssemblyTypeRegistration()
    {
        AssemblyTypeRegistrationBase::RegisterType(T::Type());
    }
    /// Creates singleton, thus registering type in the specified assembly.
    AssemblyTypeRegistration(const SharedPtr<Assembly>& assembly)
    {
        AssemblyTypeRegistrationBase::RegisterType(assembly, T::Type());
    }
};

}} // namespace System { namespace Reflection {

/// Declares static member called registration__ which registers type in current assembly.
#define ASSEMBLY_TYPE_DECL() static System::Reflection::AssemblyTypeRegistration<ThisType> registration__;
/// Defines static member called registration__ from given type to register the type in current assembly.
#define ASSEMBLY_TYPE_IMPL(type) System::Reflection::AssemblyTypeRegistration<type> type::registration__;
/// Defines static member called registration__ from given type to register the type in current assembly.
#define ASSEMBLY_TYPE_IMPL_SPEC(assembly, type) System::Reflection::AssemblyTypeRegistration<type> type::registration__(assembly);

#endif // _system_reflection_assembly_type_registration_h_
