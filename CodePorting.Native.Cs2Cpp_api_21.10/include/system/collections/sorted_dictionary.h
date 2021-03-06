/// @file system/collections/sorted_dictionary.h
#ifndef _aspose_system_collections_sorted_dictionary_h_
#define _aspose_system_collections_sorted_dictionary_h_

#include "system/object.h"
#include "system/collections/base_dictionary.h"
#include "system/collections/keyvalue_collection.h"
#include "system/cycles_detection.h"

#include <map>

namespace System {
namespace Collections {
namespace Generic {

/// Sorted dictionary type forward declaration.
template<typename T, typename V> class SortedDictionary;

/// Sorted dictionary pointer with access operators.
/// This type is a pointer to manage other object's deletion.
/// It should be allocated on stack and passed to functions either by value or by const reference.
template<typename T, typename V>
class ASPOSECPP_SHARED_CLASS SortedDictionaryPtr : public SharedPtr<SortedDictionary<T, V> >
{
public:
    /// Constructs null pointer.
    SortedDictionaryPtr() 
    { }
    /// Constructs pointer to specified sorted dictionary.
    /// @param obj Dictionary to point to.
    SortedDictionaryPtr(const SharedPtr<SortedDictionary<T, V> >& obj) : SharedPtr<SortedDictionary<T, V> >(obj)
    { }

    /// Accessor function.
    /// @param key Key to access element at.
    /// @return Reference to element at specified key.
    V& operator[] (const T& key) const
    {
        return (*(this->GetPointer()))[key];
    }
};

/// Sorted dictionary class wrapping STL map.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam TKey Key type.
/// @tparam TValue Value type.
template<typename TKey, typename TValue>
class ASPOSECPP_SHARED_CLASS SortedDictionary
    : public BaseDictionary<std::map<TKey, TValue, ComparerAdapter<typename BasePointerType<TKey>::type>, ASPOSE_MAP_ALLOCATOR_TYPE(TKey, TValue)> >
{
    /// This type.
    typedef SortedDictionary<TKey, TValue> _ThisType;
    /// Implementation type.
    typedef BaseDictionary<std::map<TKey, TValue, ComparerAdapter<typename BasePointerType<TKey>::type>, ASPOSE_MAP_ALLOCATOR_TYPE(TKey, TValue)> > _BaseType;
    /// RTTI information.
    RTTI_INFO_TEMPLATE_CLASS(_ThisType, System::BaseTypesInfo<_BaseType>);

protected:
    /// Underlying C++ data structure.
    using _BaseType::m_map;

public:
    /// Key collection type.
    typedef ICollection<TKey>   KeyCollection;
    /// Value collection type.
    typedef ICollection<TValue> ValueCollection;
    /// Underlying data type.
    typedef std::map<TKey, TValue, ComparerAdapter<typename BasePointerType<TKey>::type>, ASPOSE_MAP_ALLOCATOR_TYPE(TKey, TValue)> map_t;
    /// Self type.
    typedef SortedDictionary<TKey, TValue> this_t;
    /// Pointer type.
    typedef SharedPtr<this_t> Ptr;
    /// Key-value pair type.
    typedef KeyValuePair<TKey, TValue> KVPair;
    /// Collection of same elements.
    typedef SharedPtr< IEnumerable<KVPair> > IEnumerablePtr;
    /// Enumerator type.
    typedef SharedPtr< IEnumerator<KVPair> > IEnumeratorPtr;

    /// Iterator type.
    typedef typename _BaseType::iterator iterator;
    /// Const iterator type.
    typedef typename _BaseType::const_iterator const_iterator;
    /// Reverse iterator type.
    typedef typename map_t::reverse_iterator reverse_iterator;
    /// Const reverse iterator type.
    typedef typename map_t::const_reverse_iterator const_reverse_iterator;

    /// Singleton accessor function.
    /// @return key default comparer.
    static SharedPtr<IComparer<typename BasePointerType<TKey>::type>> GetDefaultKeyComparer()
    {
        static SharedPtr<IComparer<typename BasePointerType<TKey>::type>> value;
        static std::once_flag once;
        std::call_once(once, [] { value = MakeObject<DefaultComparer<typename BasePointerType<TKey>::type>>(); });
        return value;
    }

    /// Constructs empty dictionary.
    SortedDictionary()
    {
        m_comparer = SortedDictionary::GetDefaultKeyComparer();
    }
    /// Constructs empty dictionary.
    /// @param comparer Comparer to use.
    SortedDictionary(const SharedPtr<IComparer<typename BasePointerType<TKey>::type> >& comparer)
        : _BaseType(0, ComparerAdapter<typename BasePointerType<TKey>::type>(comparer))
    {
        m_comparer = comparer;
    }
    /// Copy constructor.
    /// @param src Source dictionary to copy data from.
    SortedDictionary(const SharedPtr<IDictionary<TKey, TValue>>& src)
        : _BaseType(src.get())
    {
        m_comparer = SortedDictionary::GetDefaultKeyComparer();
    }

    /// Copy constructor.
    /// @param src Source dictionary to copy data from.
    /// @param comparer Comparer to use.
    SortedDictionary(const SharedPtr<IDictionary<TKey, TValue>>& src,
                     const SharedPtr<IComparer<typename BasePointerType<TKey>::type>>& comparer)
        : _BaseType(src.get(), comparer)
    {
        m_comparer = comparer;
    }

    /// Gets the IComparer<TKey> used to order the elements of the SortedDictionary<TKey,TValue>.
    SharedPtr<System::Collections::Generic::IComparer<TKey>> get_Comparer() const
    {
        return m_comparer;
    }

    /// Enumerator type to iterate through dictionary.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class Enumerator : public SimpleEnumerator<map_t, KVPair>
    {
    public:
        /// Constructs enumerator over specific dictionary.
        /// @param dict Dictionary to iterate through.
        Enumerator(const Ptr& dict) : SimpleEnumerator<map_t, KVPair>(dict, dict->m_map) { }
        /// Enumerator type alias.
        typedef typename SortedDictionary<TKey, TValue>::Enumerator EnumeratorType;
        /// RTTI information.
        RTTI_INFO_TEMPLATE_CLASS(Enumerator, System::BaseTypesInfo<System::Object>);
    };
    /// Gets enumerator to iterate through current dictionary.
    /// @return Pointer to newly created enumerator.
    IEnumeratorPtr GetEnumerator() override
    {
        return MakeObject<Enumerator>(MakeSharedPtr(this));
    }

    /// Gets a reverse iterator to the last element of collection (first in reverse).
    /// @return A reverse iterator pointing to the last element in the map (first in reverse).
    reverse_iterator rbegin() noexcept
    {
        return m_map.rbegin();
    }
    /// Gets a reverse iterator for a non-existent element before the start of the collection.
    /// @return A reverse iterator pointing to the theoretical element preceeding the first element in the map (last in
    /// reverse).
    reverse_iterator rend() noexcept
    {
        return m_map.rend();
    }

    /// Gets a reverse iterator to the last element of the const-qualified collection (first in reverse).
    /// @return A reverse iterator pointing to the last element in the const-qualified map (first in reverse).
    const_reverse_iterator rbegin() const noexcept
    {
        return m_map.rbegin();
    }
    /// Gets a reverse iterator for a non-existent element before the start of the const-qualified collection.
    /// @return A reverse iterator pointing to the theoretical element preceeding the first element in the
    /// const-qualified map (last in reverse).
    const_reverse_iterator rend() const noexcept
    {
        return m_map.rend();
    }

    /// Gets a reverse iterator to the last const-qualified element of collection (first in reverse).
    /// @return A reverse iterator pointing to the last const-qualified element in the map (first in reverse).
    const_reverse_iterator crbegin() const noexcept
    {
        return rbegin();
    }
    /// Gets a reverse iterator for a non-existent const-qualified element before the start of the collection.
    /// @return A reverse iterator pointing to the theoretical const-qualified element preceeding the first element in
    /// the map (last in reverse).
    const_reverse_iterator crend() const noexcept
    {
        return rend();
    }

protected:
    /// Destructor.
    ~SortedDictionary() override {}

    /// Implementation of get_KeysInternal() method.
    /// @return Created key collection wrapper.
    SharedPtr<KeyCollection> get_KeysInternal() const override
    {
        return MakeObject<_KeyCollection<SortedDictionary<TKey, TValue>>>(MakeSharedPtr(this));
    }
    /// Implementation of get_ValuesInternal() method.
    /// @return Created value collection wrapper.
    SharedPtr<ValueCollection> get_ValuesInternal() const override
    {
        return MakeObject<_ValueCollection<SortedDictionary<TKey, TValue>>>(MakeSharedPtr(this));
    }
#ifdef ASPOSE_GET_SHARED_MEMBERS
    /// Implements loop refernces lookup for sorted dictionary type.
    DEFINE_GET_SHARED_MEMBERS(_BaseType::m_map)
#endif

private:
    SharedPtr<IComparer<typename BasePointerType<TKey>::type>> m_comparer;
};

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_sorted_dictionary_h_
