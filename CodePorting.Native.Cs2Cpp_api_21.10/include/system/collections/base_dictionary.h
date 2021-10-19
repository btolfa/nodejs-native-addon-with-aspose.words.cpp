/// @file system/collections/base_dictionary.h
#pragma once

#include <system/collections/idictionary.h>
#include <system/cycles_detection.h>
#include <system/collections/base_enumerator.h>
#include <system/details/hash_quality_checker.h>

#include <algorithm>
#include <type_traits>

namespace System { namespace Collections { namespace Generic {

/// Implements common code for various dictionary-alike data structures (e. g. Dictionary, SortedDictionary).
/// Shouldn't be used directly, except for inheritance when defining containers.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam map_t Underlying map type.
template<typename map_t>
class ASPOSECPP_SHARED_CLASS BaseDictionary : public IDictionary<typename map_t::key_type, typename map_t::mapped_type>
{
    ASPOSE_MAP_POINTER_MODE_CONTROL(map_t)

public:
    void SetTemplateWeakPtr(unsigned int argument) override
    {
        static_assert(std::is_same<decltype(m_map.get_allocator()), typename pointer_mode_t::allocator_type>::value, "Container's allocator is not set to typename pointer_mode_t::allocator_type");
        m_pointer_mode.SetWeak(argument, m_map);
    }

protected:
    pointer_mode_t m_pointer_mode;

private:
    /// Key type name alias.
    typedef typename map_t::key_type key_t;
    /// Value type name alias.
    typedef typename map_t::mapped_type mapped_t;
    /// Iterator type name alias.
    typedef typename map_t::iterator mapIt_t;
    /// Const iterator type name alias
    typedef typename map_t::const_iterator stl_const_iterator;

    /// Make sure we use correct allocator with underlying storage type.
    static_assert(std::is_same<allocator_t, typename map_t::allocator_type>::value, "Using wrong map type with BaseDictionary");

public:
    /// Collection of keys.
    typedef ICollection<key_t>  KeyCollection;
    /// Collection of values.
    typedef ICollection<mapped_t> ValueCollection;
    /// Key-value pair type.
    typedef KeyValuePair<key_t, mapped_t> KVPair;

    /// Implemented interface.
    typedef IDictionary<typename map_t::key_type, typename map_t::mapped_type> BaseType;

    /// Iterator type.
    typedef KVPairIterator<KVPair, map_t> iterator;
    /// Const iterator type.
    typedef KVPairIterator<KVPair, map_t> const_iterator;

    /// Creates empty data structure.
    BaseDictionary() : ASPOSE_MAP_INIT_ALLOCATOR() {}

    /// Forwarding constructor to push arguments into underlying map constructor.
    /// @tparam Args Types of arguments to forward to map.
    /// @param args Arguments to forward to underlying map.
    template<class... Args>
    BaseDictionary(int, const Args&... args)
        : m_map(args..., ASPOSE_COLLECTION_ALLOCATOR)
    {}

    /// Copying constructor.
    /// @tparam Args Types of map constructor arguments.
    /// @param src Object to copy data from.
    /// @param args Arguments to forward to underlying map constructor.
    template<class... Args>
    BaseDictionary(BaseType* src, const Args&... args)
        : m_map(args..., ASPOSE_COLLECTION_ALLOCATOR)
    {
        CopyFrom(src);
    }

    /// Copying constructor.
    /// @param src Object to copy data from.
    BaseDictionary(BaseType* src) : ASPOSE_MAP_INIT_ALLOCATOR()
    {
        CopyFrom(src);
    }

    // IEnumerable
    /// Creates enumerator instance, should be implemented by subclass.
    /// @return Enumerator bound to this object.
    SharedPtr< IEnumerator<KeyValuePair<key_t, mapped_t> > > GetEnumerator() override = 0;

    // ICollection
    /// Gets elements count.
    /// @return Number of elements (key-value pairs) being held currently.
    int32_t get_Count() const override
    {
        return static_cast<int32_t>(m_map.size());
    }
    /// Deletes all elements.
    void Clear() override
    {
        m_map.clear();
    }

    // IDictionary interface
    /// Accessor function.
    /// @param key Dictionary key to access.
    /// @return Reference to existing (or created) value keyed by @p key.
    virtual mapped_t& operator[](const key_t& key)
    {
        return m_map[key];
    }
    /// Keyed getter function.
    /// @param key Key to get value at.
    /// @return Copy of element at @p key position.
    /// @throw KeyNotFoundException if element is not found.
    mapped_t idx_get(const key_t& key) const override
    {
        auto it = m_map.find(key);
        if (it == m_map.end())
        {
            throw KeyNotFoundException();
        }

        return it->second;
    }
    /// Keyed setter function. Alters or creates element.
    /// @param key Key to set value at.
    /// @param value Value to set.
    void idx_set(const key_t& key, mapped_t value) override
    {
        m_map[key] = value;
#if defined(ASPOSE_DETECT_BAD_QUALITY_HASH)
        System::Details::CheckHashFunctionQuality(m_map);
#endif
    }
    /// Adds key-value pair into dictionary.
    /// @param key Key to insert value for.
    /// @param value Value to insert.
    /// @throw ArgumentException If key already exists.
    void Add(const key_t& key, const mapped_t& value) override
    {
        // insert never replaces values
        auto op_result = m_map.insert(std::make_pair(key, value));
        if (! op_result.second)
        {
            throw System::ArgumentException(u"key");
        }
#if defined(ASPOSE_DETECT_BAD_QUALITY_HASH)
        System::Details::CheckHashFunctionQuality(m_map);
#endif
    }
    /// Checks if key is present in dictionary.
    /// @param key Key to look for.
    /// @return true if key is present, false otherwise.
    bool ContainsKey(const key_t& key) const override
    {
        return m_map.find(key) != m_map.end();
    }
    /// Removes specific key from dictionary.
    /// @param key Key to remove.
    /// @return true if key was found and removed, false otherwise.
    bool Remove(const key_t& key) override
    {
        auto it = m_map.find(key);

        if (it != m_map.end())
        {
            m_map.erase(it);
            return true;
        }

        return false;
    }
    /// Looks for keyed value and retreives it if found.
    /// @param key Key to look for.
    /// @param value Reference to store found value at.
    /// @return true if value is found and retreived, false otherwise.
    bool TryGetValue(const key_t& key, mapped_t& value) const override
    {
        auto it = m_map.find(key);

        if (it != m_map.end())
        {
            value = it->second;
            return true;
        }

        // There should be the System::Default<mapped_t>() call, but it has a lot of restrictions,
        // e.g. System::Default doesn't work with C# structures and delegates
        value = mapped_t();
        return false;
    }

    // BaseDictionary interface
    /// Checks if value is present in dictionary. Uses operator == to compare values.
    /// @param value Value to look for.
    /// @return true if value is found, false otherwise.
    bool ContainsValue(const mapped_t& value)
    {
        for (const auto& itr : m_map)
        {
            if (itr.second == value)
                return true;
        }
        return false;
    }

    /// Underlying data storage accessor.
    /// @return Reference to underlying data storage.
    map_t& data() { return m_map; }
    /// Underlying data storage accessor.
    /// @return Const reference to underlying data storage.
    const map_t& data() const { return m_map; }
    /// C++ specific
    /// @param list Range to insert into container.
    void _add_range(std::initializer_list<typename map_t::value_type> list)
    {
        std::for_each(list.begin(), list.end(), [this](const typename map_t::value_type &v) { m_map.insert(v); });
    }

    /// Returns value if found; or <c>Value()</c> otherwise
    mapped_t GetValueOrDefault(const key_t& key) const override
    {
        auto it = m_map.find(key);

        if (it != m_map.end())
        {
            return it->second;
        }

        return mapped_t();
    }

    /// Returns value if found; or <c>defaultValue</c> otherwise.
    mapped_t GetValueOrDefault(const key_t& key, const mapped_t& defaultValue) const override
    {
        auto it = m_map.find(key);

        if (it != m_map.end())
        {
            return it->second;
        }

        return defaultValue;
    }

    /// Returns value if found; or <c>null</c> otherwise. Make sense only for reference types
    mapped_t GetValueOrNull(const key_t& key) const override
    {
        auto it = m_map.find(key);

        if (it != m_map.end())
        {
            return it->second;
        }

        return mapped_t();
    }

    /// Returns an iterator to the KVPair-wrapper for key-value-element of the container. Implemented in C# style -
    /// iterator should be return the KVPair-object with get_Key() and get_Value() interface.
    /// If the container is empty, the returned iterator will be equal to end().
    /// @return An iterator pointing to the first element of collection.
    const_iterator begin() const noexcept
    {
        return m_map.begin();
    }

    /// Returns an iterator to the KVPair-wrapper for key-value-element following the last element of the container.
    /// Implemented in C# style - iterator should be return the KVPair-object with get_Key() and get_Value() interface.
    /// This element acts as a placeholder; attempting to access it results in undefined behavior.
    /// @return An iterator pointing to the theoretical element placed after the end element of collection.
    const_iterator end() const noexcept
    {
        return m_map.end();
    }

    /// Returns an iterator to the first element of the container. Implemented in STL-style.
    /// If the container is empty, the returned iterator will be equal to end().
    /// @return An iterator pointing to the first const-qualified element of collection.
    stl_const_iterator cbegin() const noexcept
    {
        return m_map.cbegin();
    }

    /// Returns an iterator to the element following the last element of the container. Implemented in STL-style.
    /// This element acts as a placeholder; attempting to access it results in undefined behavior.
    /// @return An iterator pointing to the theoretical const-qualified element placed after the end element of collection.
    stl_const_iterator cend() const noexcept
    {
        return m_map.cend();
    }

protected:
    /// Underlying C++ data structure.
    map_t m_map;

    // ICollection
    /// Checks if key-value pair is present in dictionary, comparing both keys and values.
    /// @param item Item to look for.
    /// @return true if item is found, false otherwise.
    bool Contains(const KeyValuePair<key_t, mapped_t>& item) const override
    {
        auto it = m_map.find(item.m_pair.first);

        return it != m_map.end() && it->second == item.m_pair.second;
    }
    /// Removes specified key-value pair from dictionary, compares both keys and values.
    /// @param item Item to remove.
    /// @return true if pair was found and deleted, false otherwise.
    bool Remove(const KeyValuePair<key_t, mapped_t>& item) override
    {
        auto it = m_map.find(item.m_pair.first);

        if (it != m_map.end() && it->second == item.m_pair.second)
        {
            m_map.erase(it);
            return true;
        }

        return false;
    }

#ifdef ASPOSE_GET_SHARED_MEMBERS
    /// Implements loop references detection mechanics for dictionary type.
    /// @return Data structure holding information on shared pointers owned by dictionary.
    virtual Object::shared_members_type GetSharedMembers() override
    {
        Object::shared_members_type result = Object::GetSharedMembers();
        result.PopulateSharedMembers("System::Collections::Generic::BaseDictionary<map_t>::m_map[]", m_map);
        return result;
    }
#endif

private:
    /// Copies data from another dictionary.
    /// @param src Source dictionary.
    void CopyFrom(BaseType* src)
    {
        if (nullptr == src)
            throw ArgumentNullException(u"Argument cannot be nullptr");

        SharedPtr<IEnumerator<KeyValuePair<key_t, mapped_t> > > enumerator = src->GetEnumerator();
        while (enumerator->MoveNext())
            BaseDictionary<map_t>::Add(enumerator->get_Current());
    }
    /// Inserts KeyValuePair into dictionary.
    /// @param item Pair to insert.
    void Add(const KeyValuePair<key_t, mapped_t>& item) override
    {
        m_map.insert(item.m_pair);
    }
    /// Returns exception being thrown read-only dictionaries' non-const methods.
    static NotSupportedException ReadOnlyException()
    {
        return NotSupportedException(u"The collection is readonly");
    }

protected:
    /// Destructor.
    ~BaseDictionary() override {}

#ifdef __DBG_FOR_EACH_MEMBER
    public:
        /// Applies visitor to collection and its elements.
        /// @param visitor Visitor to apply.
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            visitor.add_self(this);
            DBG::for_each_of_Object(this, m_map, visitor);
        }

        /// Gets class name.
        /// @return Current class name.
        const char* DBG_class_name() const override { return "BaseDictionary<T>"; }
#endif
};

}}} // namespace System::Collections::Generic
