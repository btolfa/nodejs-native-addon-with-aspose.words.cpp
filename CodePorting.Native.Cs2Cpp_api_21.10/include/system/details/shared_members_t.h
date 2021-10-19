/// @file system/details/shared_members_t.h
#ifndef _shared_members_t_h_
#define _shared_members_t_h_

#include "system/details/delegate_holding_variables.h"
#include <system/smart_ptr.h>

#include <list>
#include <memory>
#include <utility>
#include <type_traits>


namespace System
{
    class Object;
}


namespace System { namespace Details {


/// @brief structure to keep list of shared pointers contained in object.
struct SharedMembersType {
    /// @brief List of non-null shared pointers contained in object, with member names.
    std::list<std::pair<const char*, SmartPtrInfo>> m_sharedMembers;
    /// @brief List of value type Object subclasses contaned in object, with member names.
    std::list<std::pair<const char*, System::Object*>> m_valueMembers;
    /// @brief Adds object to list. Non-specific version which ignores its arguments,
    /// @tparam T Random type of field.
    template <class T>
    typename std::enable_if<!IsSmartPtr<T>::value && !std::is_base_of<Object, T>::value && !std::is_base_of<Details::DelegateHoldingVariables, T>::value, void>::type
        Add(const char*, T&)
    {}
    /// @brief Adds Object subclass to list.
    /// @tparam T Value type Object subclass.
    /// @param name Field name.
    /// @param member Field reference.
    template <class T>
    typename std::enable_if<!IsSmartPtr<T>::value && std::is_base_of<Object, T>::value, void>::type
        Add(const char* name, T &member)
    {
        m_valueMembers.emplace_back(name, static_cast<Object*>(&member));
    }
    /// @brief Adds smart pointer to list.
    /// @tparam T Pointee type.
    /// @param name Field name.
    /// @param member Field reference.
    template <class T>
    void Add(const char* name, const SmartPtr<T> &member)
    {
        if (member.get_Mode() == SmartPtrMode::Weak)
            return;
        Add(name, SmartPtrInfo(const_cast<SmartPtr<T>&>(member)));
    }
    /// @brief Adds smart pointer info to list.
    /// @param name Field name.
    /// @param info Smart pointer info.
    void Add(const char* name, const SmartPtrInfo &info)
    {
        if (info)
            m_sharedMembers.emplace_back(std::make_pair(name, info));
    }
    /// @brief Adds variables held by a delegate to the list.
    /// @param name A field name.
    /// @param member A field reference.
    template <typename T>
    typename std::enable_if<!IsSmartPtr<T>::value && !std::is_base_of<Object, T>::value && std::is_base_of<Details::DelegateHoldingVariables, T>::value, void>::type
        Add(const char* name, const T &member)
    {
#ifdef ASPOSE_GET_SHARED_MEMBERS
        AddHeldVariables(name, member.GetHeldVariables());
#endif
    }
    /// @brief Forms full list of contained references, both direct and indirect.
    /// @return Full list of smart pointers contained in collection.
    ASPOSECPP_SHARED_API std::list<std::pair<const char*, SmartPtrInfo>> GetDirectAndIndirectHolders() const;

    /// Populates contents of STL-style container to shared members data structure. This overload handles containers with no smart pointers in them.
    /// @tparam Container Container type
    /// @tparam Value Contained type
    template <class Container, typename Value = typename Container::value_type>
    typename std::enable_if<!System::IsSmartPtr<Value>::value && !System::detail::is_a<Value, std::pair>::value, void>::type
        PopulateSharedMembers(const char* /*name*/, Container& /*container*/)
    {
        /* Nothing to do here, see specialization below */
    }
    /// Populates contents of STL-style container to shared members data structure. This overload handles containers with smart pointers in them.
    /// @tparam Container Container type
    /// @tparam Value Contained type
    /// @param name Member name
    /// @param container Container to get elements from
    template <class Container, typename Value = typename Container::value_type>
    typename std::enable_if<System::IsSmartPtr<Value>::value, void>::type PopulateSharedMembers(const char* name, Container& container)
    {
        for (auto& item : container)
            Add(name, item);
    }
    /// Populates contents of STL-style container to shared members data structure. This overload handles containers of pairs with no smart pointers in them.
    /// @tparam Container Container type
    /// @tparam Value Contained type
    template <class Container, typename Value = typename Container::value_type>
    typename std::enable_if<System::detail::is_a<Value, std::pair>::value && !System::IsSmartPtr<typename Value::first_type>::value && !System::IsSmartPtr<typename Value::second_type>::value, void>::type
        PopulateSharedMembers(const char* /*name*/, Container& /*container*/)
    {
        /* Nothing to do here - we have map with neither key nor value being a shared ptr */
    }
    /// Populates contents of STL-style container to shared members data structure. This overload handles containers of pairs with first item being smart pointer.
    /// @tparam Container Container type
    /// @tparam Value Contained type
    /// @param name Member name
    /// @param container Container to get elements from
    template <class Container, typename Value = typename Container::value_type>
    typename std::enable_if<System::detail::is_a<Value, std::pair>::value && System::IsSmartPtr<typename Value::first_type>::value && !System::IsSmartPtr<typename Value::second_type>::value, void>::type
        PopulateSharedMembers(const char* name, Container& container)
    {
        for (auto& item : container)
        {
            Add(name, item.first);
        }
    }
    /// Populates contents of STL-style container to shared members data structure. This overload handles containers of pairs with second item being smart pointer.
    /// @tparam Container Container type
    /// @tparam Value Contained type
    /// @param name Member name
    /// @param container Container to get elements from
    template <class Container, typename Value = typename Container::value_type>
    typename std::enable_if<System::detail::is_a<Value, std::pair>::value && !System::IsSmartPtr<typename Value::first_type>::value && System::IsSmartPtr<typename Value::second_type>::value, void>::type
        PopulateSharedMembers(const char* name, Container& container)
    {
        for (auto& item : container)
        {
            Add(name, item.second);
        }
    }
    /// Populates contents of STL-style container to shared members data structure. This overload handles containers of pairs with both items being smart pointers.
    /// @tparam Container Container type
    /// @tparam Value Contained type
    /// @param name Member name
    /// @param container Container to get elements from
    template <class Container, typename Value = typename Container::value_type>
    typename std::enable_if<System::detail::is_a<Value, std::pair>::value && System::IsSmartPtr<typename Value::first_type>::value && System::IsSmartPtr<typename Value::second_type>::value, void>::type
        PopulateSharedMembers(const char* name, Container& container)
    {
        for (auto& item : container)
        {
            Add(name, item.first);
            Add(name, item.second);
        }
    }

private:
#ifdef ASPOSE_GET_SHARED_MEMBERS
    /// Adds variables held by a delegate to the list.
    /// @param name A field name.
    /// @param heldVariables A pointer to the collections of variables held by a delegate.
    void AddHeldVariables(const char* name, const std::shared_ptr<HeldVariables> &heldVariables)
    {
        static const std::string delimiter("::");

        if (heldVariables)
        {
            const std::string prefix(name);

            for (const auto& sharedPointer: heldVariables->sharedPointers)
            {
                auto fullName = std::make_shared<std::string>(prefix + delimiter + std::string(sharedPointer.first));
                Add(fullName->c_str(), sharedPointer.second);
                m_delegateCaptures.push_back(fullName);
            }

            for (const auto& value: heldVariables->values)
            {
                auto fullName = std::make_shared<std::string>(prefix + delimiter + std::string(value.first));
                Add(fullName->c_str(), value.second);
                m_delegateCaptures.push_back(fullName);
            }
        }
    }
#endif
    /// List of variables held by a delegate.
    /// @remarks shared_ptr is used to avoid copying of strings when adding strings to a container or when copying the
    /// SharedMembersType structure. It helps to avoid creating of dangling pointers when
    /// calling Add(fullName->c_str(), sharedPointer.second).
    std::list<std::shared_ptr<std::string>> m_delegateCaptures;
};

} } // namespace System::Details


#endif // _shared_members_t_h_
