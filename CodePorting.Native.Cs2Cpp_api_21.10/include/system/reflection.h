/// @file system/reflection.h
/// Contains the declaration of some types, functions and macro definitions that provide run-time type information.
#ifndef _Reflection_h_
#define _Reflection_h_

#include <memory>
#include <typeinfo>
#include <mutex>
#include <type_traits>

#include <system/details/demangle.h>
#include "system/reflection_seprt.h"

namespace System
{

/// Singleton accessor function.
/// @return Singleton reference.
/// @tparam T Singleton type.
template <typename T>
T& static_holder()
{
    static T value;
    return value;
}

class TypeInfo;

template <typename ...BaseTypes> class BaseTypesInfo;


/// Checks if any of argument types match (via std::is_same).
/// @tparam AllTypes Types to look through.
template <typename ...AllTypes> struct AnyTypesMatch;

/// Checks if any of argument types match (via std::is_same).
/// @tparam FirstType First type to check.
/// @tparam SecondType Second type to check.
/// @tparam OtherTypes Other types to check.
template <typename FirstType, typename SecondType, typename ...OtherTypes>
struct AnyTypesMatch<FirstType, SecondType, OtherTypes...>
{
    /// True if any of the argument types match, false otherwise.
    static constexpr bool value =
        std::is_same<FirstType, SecondType>::value ||
        AnyTypesMatch<FirstType, OtherTypes...>::value ||
        AnyTypesMatch<SecondType, OtherTypes...>::value;
};

/// Specialization to terminate the recursion.
/// @tparam LastType Last type in the chain.
template <typename LastType>
struct AnyTypesMatch<LastType>
{
    /// Always false, as there's no other types to match.
    static constexpr bool value = false;
};


/// Provides a template static method that determines if the specified object is an instance of the specified type or of a type that is descendant of the specifid type.
/// @tparam FirstType The first type in the list of parent types of the object to check
/// @tparam BaseTypes The list without the first type of parent types of the object to check
template <typename FirstType, typename ...BaseTypes>
class BaseTypesInfo<FirstType, BaseTypes...>
{
    static_assert(!AnyTypesMatch<FirstType, BaseTypes...>::value, "Two or more of the direct basic types match");
public:
    typedef FirstType Type;
    /// Determines if the specified object is an instance of the specified type or of a type that is descendant of the specifid type.
    /// @param object A pointer to the object to check
    /// @param typeInfo A TypeInfo object representing a type to match the type of @p object or its parent types against.
    /// @returns True if @p object is an instance of a type represented by @p typeInfo or is descendant of that type, otherwise - false
    /// @tparam T The type of the object to check
    template <typename T>
    inline static bool CallIsForAll(T *object, const TypeInfo &typeInfo)
    {
        return object->FirstType::Is(typeInfo) || BaseTypesInfo<BaseTypes...>::CallIsForAll(object, typeInfo);
    }
};

/// Specialization of an instance of a type that has no parent types.
template <>
class BaseTypesInfo<>
{
public:
    /// Always returns false.
    template <typename T>
    inline static bool CallIsForAll(T*, const TypeInfo&)
    {
        return false;
    }
};

}


//-------------------------------------------------------
// definition of RTTI methonds inside a class declaration

/// Inserts an implementation of ThisTypeInfo struct's constructor that sets its pointer to a new instance of TypeInfo object containing the information about the current type.
/// The implementation uses only compile-time type information.
#define __ThisTypeInfo_Compiletime(thisType, hash) \
        struct ThisTypeInfo : System::TypeInfoPtr { \
            ThisTypeInfo() : System::TypeInfoPtr(ASPOSE_T(#thisType), hash) {

/// Inserts an implementation of ThisTypeInfo struct's constructor that sets its pointer to a new instance of TypeInfo object containing the information about the current type.
/// The implementation uses only compile-time type information and passed name instead of name generated by macro substitution.
#define __ThisTypeInfo_Compiletime_Named(thisType, name, hash) \
        struct ThisTypeInfo : System::TypeInfoPtr { \
            ThisTypeInfo() : System::TypeInfoPtr(ASPOSE_T(name), hash) {

/// Inserts an implementation of ThisTypeInfo struct's constructor that sets its pointer to a new instance of TypeInfo object containing the information about the current type.
/// The implementation uses only compile-time type information and passed name instead of name generated by macro substitution.
/// The implementation is exported.
#define __ThisTypeInfo_Compiletime_Named_Declare_Exported(method_api, thisType, name, hash) \
        struct ThisTypeInfo : System::TypeInfoPtr { \
            method_api ThisTypeInfo();

/// Inserts an implementation of ThisTypeInfo struct's constructor that sets its pointer to a new instance of TypeInfo object containing the information about the current type.
/// The implementation uses the run-time type information.
#define __ThisTypeInfo_Runtime(thisType) \
        struct ThisTypeInfo : System::TypeInfoPtr { \
            ThisTypeInfo() : System::TypeInfoPtr(typeid(thisType)) {

/// Inserts implementation or RTTI methods to the current class.
#define __RTTI_INFO_METHODS(thisType, baseTypes) \
    public: \
        /** Returns information about the current type. */ \
        /** @returns Information about the current type. */ \
        static const System::TypeInfo& Type() { \
            return *System::static_holder<ThisTypeInfo>(); \
        } \
        /** @copydoc System::Object::GetType */ \
        const System::TypeInfo& GetType() const override { \
            return thisType::Type(); \
        } \
        /** Check if object represents an instance of type described by targetType. Analog of C# 'is' operator. */ \
        /** @param target TypeInfo structure describing the type to test current object against. */ \
        /** @return True if object is of tagged type or its subclass, false otherwise. */ \
        bool Is(const System::TypeInfo &target) const override { \
            const System::TypeInfo& thisis = thisType::Type(); \
            return (thisis == target) ? true : baseTypes::CallIsForAll(this, target); \
        } \
    private:

/// Inserts implementation or RTTI methods to the current class with export macros.
#define __RTTI_INFO_METHODS_EXPORTED(method_api, thisType, baseTypes) \
    public: \
        /** Returns information about the current type. */ \
        /** @returns Information about the current type. */ \
        static method_api const System::TypeInfo& Type(); \
        /** @copydoc System::Object::GetType */ \
        method_api const System::TypeInfo& GetType() const override; \
        /** Check if object represents an instance of type described by targetType. Analog of C# 'is' operator. */ \
        /** @param target TypeInfo structure describing the type to test current object against. */ \
        /** @return True if object is of tagged type or its subclass, false otherwise. */ \
        method_api bool Is(const System::TypeInfo &target) const override; \
    private:

#define __RTTI_INFO_METHODS_BOXED(thisType, baseTypes) \
    public: \
        static const System::TypeInfo& Type() { \
            return *System::static_holder<ThisTypeInfo>(); \
        } \
        bool Is(const System::TypeInfo &target) const override { \
            const System::TypeInfo& thisis = thisType::GetType(); \
            return (thisis == target) ? true : baseTypes::CallIsForAll(this, target); \
        } \
    private:


/// Closes the curly brace.
#define RTTI_INFO_END() } };


// for class without attributes

// baseTypes: (TypeA)(TypeB)(TypeC)

/// Inserts definitions that implement the RTTI for the current type using only compile-time information:
///   - implementation of methods Type(), GetType() and Is() 
///   - a struct that keeps a pointer to the TypeInfo object that contains the information about the current type
#define RTTI_INFO(thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime(thisType, 0) \
    RTTI_INFO_END()

/// Inserts definitions that implement the RTTI for the current type using only compile-time information:
///   - implementation of methods Type(), GetType() and Is() 
///   - a struct that keeps a pointer to the TypeInfo object that contains the information about the current type
#define RTTI_INFO_NAMED(thisType, name, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime_Named(thisType, name, 0) \
    RTTI_INFO_END()

/// Inserts definitions that implement the RTTI for the current type using only compile-time information with exports:
///   - implementation of methods Type(), GetType() and Is() 
///   - a struct that keeps a pointer to the TypeInfo object that contains the information about the current type
#define RTTI_INFO_NAMED_DECLARE_EXPORTED(method_api, thisType, name, baseTypes) \
    __RTTI_INFO_METHODS_EXPORTED(method_api, thisType, baseTypes) \
    __ThisTypeInfo_Compiletime_Named_Declare_Exported(method_api, thisType, name, 0) \
    };

// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts definitions that implement the RTTI for the current type using only compile-time information:
///   - implementation of methods Type(), GetType() and Is() 
///   - a struct that keeps a pointer to the TypeInfo object that contains the information about the current type
/// Also associates the specified hash value with the current type.
#define RTTI_INFO_HASH(hash, thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime(thisType, hash) \
    RTTI_INFO_END()

#define __ThisTypeInfo_SetBaseType(baseTypes) \
    ptr->SetBaseType(&baseTypes::Type::Type);

#define __ThisTypeInfo_SetTemplParamType(templParamType) \
    ptr->SetTemplParamType(System::ObjectExt::GetType<templParamType>());

#define __ThisTypeInfo_SetDefaultConstructor(elementType) \
    ptr->AddDefaultConstructor<elementType>();


#define RTTI_INFO_TEMPLATE_CLASS_REFL(thisType, baseTypes, templParamType) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Runtime(thisType) \
    __ThisTypeInfo_SetBaseType(baseTypes) \
    __ThisTypeInfo_SetDefaultConstructor(thisType) \
    __ThisTypeInfo_SetTemplParamType(templParamType) \
    RTTI_INFO_END()


// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts definitions that implement the RTTI for the current type using the run-time information (C++ RTTI):
///   - implementation of methods Type(), GetType() and Is() 
///   - a struct that keeps a pointer to the TypeInfo object that contains the information about the current type
#define RTTI_INFO_TEMPLATE_CLASS(thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Runtime(thisType) \
    __ThisTypeInfo_SetBaseType(baseTypes) \
    RTTI_INFO_END()

// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts definitions that implement the RTTI for the current type using the run-time information (C++ RTTI):
///   - implementation of methods Type(), GetType() and Is() 
#define RTTI_INFO_CUSTOM(thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes)

#define RTTI_INFO_BOXED(thisType, baseTypes) \
    __RTTI_INFO_METHODS_BOXED(thisType, baseTypes) \
    __ThisTypeInfo_Runtime(thisType) \
    __ThisTypeInfo_SetBaseType(baseTypes) \
    RTTI_INFO_END()


// for class with attributes

// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts definitions that implement the RTTI for the current type using the run-time information (C++ RTTI):
///   - implementation of methods Type(), GetType() and Is() 
///   - TypeInfo holder type ThisTypeInfo with hash calculated in compiletime
#define RTTI_INFO_BEGIN(thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime(thisType, 0)

// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts definitions that implement the RTTI for the current type using the run-time information (C++ RTTI):
///   - implementation of methods Type(), GetType() and Is() 
#define RTTI_INFO_HASH_BEGIN(hash, thisType, baseTypes) \
    __RTTI_INFO_METHODS(hash, thisType, baseTypes)

/// Adds custom attribute of @p type type to @p ptr TypeInfo object initializing it with @p params parameters.
#define RTTI_ATTRIBUTE(type, params) \
    ptr->AddAttribute( System::static_pointer_cast<System::Object>( System::MakeObject<type> (params) ) );

// for value types
/// Inserts definitions that implement the RTTI for the current value type using the run-time information (C++ RTTI):
///   - implementation of methods Type() and GetType()
///   - TypeInfo holder type ThisTypeInfo with hash calculated in compiletime
#define RTTI_INFO_VALUE_TYPE(thisType) \
    public: \
        static const System::TypeInfo& Type() { \
            return *System::static_holder<ThisTypeInfo>(); \
        } \
        const System::TypeInfo& GetType() const { \
            return thisType::Type(); \
        } \
    private:\
    __ThisTypeInfo_Compiletime(thisType, 0) \
    ptr->SetBaseType(&System::Object::Type); \
    RTTI_INFO_END()

#endif // _Reflection_h_