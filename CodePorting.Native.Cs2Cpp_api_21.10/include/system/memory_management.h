/// @file system/memory_management.h
#pragma once

#include <system/object.h>
#include <system/smart_ptr.h>
#include <system/exceptions.h>
#include <system/details/objects_bag.h>
#include <type_traits>

namespace CsToCppPorter {

namespace Details {

/// Used to hold multiple objects.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
template <size_t ObjectCount>
class ObjectsHolder final : public System::Object
{
public:
    template <typename ...Args, typename = std::enable_if_t<sizeof...(Args) == ObjectCount>>
    ObjectsHolder(const System::SmartPtr<Args>& ...args)
        : m_objects{ args... }
    {
    }

    ObjectsHolder(const ObjectsHolder&) = delete;
    ObjectsHolder& operator=(const ObjectsHolder&) = delete;

private:
    System::SmartPtr<System::Object> m_objects[ObjectCount];

#ifdef ASPOSE_GET_SHARED_MEMBERS
    System::Object::shared_members_type GetSharedMembers() override
    {
        auto result = System::Object::GetSharedMembers();
        for (auto& object : m_objects)
            result.Add("m_objects[]", object);
        return result;
    }
#endif

    RTTI_INFO_TEMPLATE_CLASS(CsToCppPorter::Details::ObjectsHolder<ObjectCount>, System::BaseTypesInfo<System::Object>);
};

} // namespace Details

/// @brief Defines a methods that changes the lifetime of objects.
class MemoryManagement
{
public:
    /// Highly optimized container designed to extend objects lifetime.
    using ObjectsBag = System::Details::ObjectsBag;

    /// @brief Creates a smart pointer using the aliasing constructor.
    /// Creates a pointer to the @p target object which controls lifetime of the @p owner object.
    /// This pointer's expiration is bound to expiration of the @p owner object,
    /// just like this of any other pointer that owns @p owner object.
    /// If converted to weak type, it is still consistent with other pointers to @p owner and
    /// does not expire while there is at least one shared pointer to @p owner object.
    /// Also, the returned pointer does not ensure that @p target object is alive, so some other
    /// means (e. g. shared pointer stored in the @p owner object) should do so.
    /// Should be used in the situations where @p owner owns the @p target, which effectively means that
    /// the @p target will be kept alive by @p owner even if the returned aliasing pointer no longer exists.
    /// Otherwise, doesn't guarantee that the resulting pointer will remain valid, because if @p owner
    /// doesn't actually hold shared reference to @p target, @p target can be deleted any time as the
    /// resulting pointer only owns @p owner but not the @p target.
    /// @tparam T1 Type of smart pointer to the object that the new smart pointer will refer to.
    /// @tparam T2 Type of smart pointer to an object whose ownership is shared with a new smart pointer.
    /// @param target Smart pointer to the object that the new smart pointer will refer to.
    /// @param owner Smart pointer to an object whose ownership is shared with a new smart pointer.
    /// @return New smart pointer.
    template<typename T1, typename T2>
    static System::SmartPtr<typename T1::Pointee_> BindLifetime(const T1& target, const T2& owner)
    {
        static_assert(System::IsSmartPtr<T1>::value && System::IsSmartPtr<T2>::value, "Trying to bind lifetime for non-pointers");
        return System::SmartPtr<typename T1::Pointee_>(owner, target.get());
    }

    /// @brief Creates a smart pointer using the aliasing constructor.
    /// Creates a pointer to the @p target object which controls lifetime of the @p owner object.
    /// This pointer's expiration is bound to expiration of the @p owner object,
    /// just like this of any other pointer that owns @p owner object.
    /// If converted to weak type, it is still consistent with other pointers to @p owner and
    /// does not expire while there is at least one shared pointer to @p owner object.
    /// Also, the returned pointer does not ensure that @p target object is alive, so some other
    /// means (e. g. shared pointer stored in the @p owner object) should do so.
    /// Should be used in the situations where @p owner owns the @p target, which effectively means that
    /// the @p target will be kept alive by @p owner even if the returned aliasing pointer no longer exists.
    /// Otherwise, doesn't guarantee that the returned pointer will remain valid, because if @p owner
    /// doesn't actually hold shared reference to @p target, @p target can be deleted any time as the
    /// returned pointer only owns @p owner but not the @p target.
    /// @tparam T1 Type of smart pointer to the object that the new smart pointer will refer to.
    /// @tparam T2 Type of smart pointer to an object whose ownership is shared with a new smart pointer.
    /// @param target Smart pointer to the object that the new smart pointer will refer to.
    /// @param owner Smart pointer to an object whose ownership is shared with a new smart pointer.
    /// @return New smart pointer.
    template<typename T1, typename T2>
    static typename std::enable_if<!std::is_reference<T1>::value, System::SmartPtr<typename T1::Pointee_>>::type BindLifetime(T1&& target, const T2& owner)
    {
        static_assert(System::IsSmartPtr<T1>::value && System::IsSmartPtr<T2>::value, "Trying to bind lifetime for non-pointers");

        if (target->SharedCount() == 1)
            throw System::InvalidOperationException(u"Can not bind lifetime for a temporary target object");

        return System::SmartPtr<typename T1::Pointee_>(owner, target.get());
    }

    /// Creates a smart pointer using the aliasing constructor and copies @p target and @p objects pointers to the
    /// "proxy" objects holder.
    /// Creates a pointer to the @p target and extends the lifetime of all objects to the lifetime of this pointer.
    /// The resulting pointer guarantees all parameters to remain alive, even if it is the only pointer that
    /// keeps track of them.
    /// The resulting pointer effectively owns all objects passed to this method, however, it has its own
    /// expiration track. This means, that converting its own copy to weak type will expire it, even if all objects
    /// it tracks are still alive.
    /// Should be used in the situations when there are several unrelated (not holding shared references to each
    /// other) objects that should be guaranteed to remain alive together. The returned pointer will own a
    /// temporary objects that keeps all of them alive, and this lifetime extension stops working once the returned
    /// pointer no longer exists (or all of its copies become weak).
    /// @tparam T Type of the object that the new smart pointer will refer to.
    /// @tparam Objects Types of the objects whose ownership is shared with a new smart pointer.
    /// @param target Smart pointer to the object that the new smart pointer will refer to.
    /// @param objects Smart pointers to the objects whose ownership is shared with a new smart pointer.
    /// @return New smart pointer.
    template<typename T, typename ...Objects>
    static System::SmartPtr<typename T::Pointee_> ExtendLifetime(const T& target, const Objects& ...objects)
    {
        static_assert(System::IsSmartPtr<T>::value, "Trying to bind lifetime for non-pointers");

        System::SmartPtr<System::Object> holder(
            new Details::ObjectsHolder<1 + sizeof...(objects)>(target, objects...));
        return System::SmartPtr<typename T::Pointee_>(holder, target.get());
    }
};

} // namespace CsToCppPorter
