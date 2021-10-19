/// @file system/default.h
/// Contains the definition of System::Defualt() function.
#ifndef _aspose_system_default_h_
#define _aspose_system_default_h_

#include "system/boxable_traits.h"
#include "system/shared_ptr.h"
#include "system/object.h"
#include <type_traits>

namespace System {

/// Returns the default-constructed instance of the specified type.
/// @tparam T The type whose instance is returned
template<typename T>
const typename std::enable_if<IsBoxable<T>::value && !IsExceptionWrapper<T>::value, T&>::type Default()
{
    static T value = T();
    return value;
}

/// Returns the default-constructed instance of the specified type.
/// @tparam T The type whose instance is returned
template<typename T>
const typename std::enable_if<IsExceptionWrapper<T>::value, T&>::type Default()
{
    static T value = T(nullptr);
    return value;
}

/// Returns the default-constructed instance of the specified type.
/// @tparam T The type whose instance is returned
template<typename T>
const typename std::enable_if<!IsBoxable<T>::value && !IsExceptionWrapper<T>::value && !IsSmartPtr<T>::value,
    T&>::type Default()
{ 
	static T value = T();
	return value;
}

/// Returns the default-constructed instance of the specified type.
/// @tparam T The type whose instance is returned
template<typename T>
const typename std::enable_if<!IsBoxable<T>::value && IsSmartPtr<T>::value,
	System::SharedPtr<typename T::Pointee_>&>::type Default()
{
	static System::SharedPtr<typename T::Pointee_> value = System::SharedPtr<typename T::Pointee_>();
	return value;
}

}
#endif
