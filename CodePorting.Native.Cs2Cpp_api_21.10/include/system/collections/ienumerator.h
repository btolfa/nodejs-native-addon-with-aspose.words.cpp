/// @file system/collections/ienumerator.h
#ifndef _aspose_system_collections_ienumerator_h_
#define _aspose_system_collections_ienumerator_h_

#include <system/object.h>
#include <system/shared_ptr.h>
#include <defines.h>
#include <system/exceptions.h>
#include <system/idisposable.h>

namespace System {
namespace Collections {
namespace Generic {

/// Interface of enumerator which can be used to iterate through some elements.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @code
/// #include <system/collections/list.h>
/// #include <system/smart_ptr.h>
///
/// using namespace System;
/// using namespace System::Collections::Generic;
///
/// int main() {
///   // Create the List-class instance.
///   auto collection = MakeObject<List<int>>();
///
///   // Fill the list.
///   collection->Add(1);
///   collection->Add(2);
///   collection->Add(3);
///
///   // Get the enumerator of the list.
///   auto enumerator = collection->GetEnumerator();
///
///   while(enumerator->MoveNext()) {
///     // Get the current element and print it.
///     std::cout << enumerator->get_Current() << ' ';
///   }
///
///   // Reset the enumerator.
///   enumerator->Reset();
///
///   return 0;
/// }
/// /*
/// This code example produces the following output:
/// 1 2 3
/// */
/// @endcode
/// @tparam T Element type.
template<typename T>
class ASPOSECPP_SHARED_CLASS IEnumerator: virtual public IDisposable
{
    /// RTTI information.
    RTTI_INFO_TEMPLATE_CLASS(System::Collections::Generic::IEnumerator<T>, System::BaseTypesInfo<System::IDisposable>);

public:
    /// Value type.
    typedef T ValueType;

    // There no need to define an empty virtual dtor, virtual dtor for inheritance already defined in the Object class
    /// Gets current element.
    /// @return Currently referenced element copy.
    virtual T Current() const { return get_Current(); }
    /// Gets current element.
    /// @return Currently referenced element copy.
    virtual T get_Current() const = 0;
    /// Moves enumerator to the next element. If no element was referenced before, sets reference to the first element available.
    /// If container end was hit, does nothing.
    /// @return True if some element is available after call, false otherwise.
    virtual bool MoveNext() = 0;
    /// Resets enumerator to position before first element.
    virtual void Reset() { throw System::NotImplementedException(); }
};

} // namespace Generic
} // namespace Collections
} // namespace System
#endif // _aspose_system_collections_ienumerator_h_
