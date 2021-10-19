/// @file system/collections/duck_typed_iterator.h
#pragma once

#include <iterator>
#include <type_traits>

#include <system/collections/ienumerator.h>

namespace System { namespace Collections { namespace Generic {

/// Iterator which is used with ported duck-typed collections.
/// @tparam DuckTypedCollection The collection which is implemented using duck-typing, without implementing IEnumerable interface.
/// @tparam ValueType Element type.
template <typename DuckTypedCollection, typename ValueType>
class DuckTypedIterator : public std::iterator<std::forward_iterator_tag, ValueType, std::ptrdiff_t, ValueType*, ValueType>
{
private:
    /// Collection being iterated over.
    DuckTypedCollection* m_collection;
    /// Proxied enumerator.
    SharedPtr<IEnumerator<ValueType>> m_enumerator;
    /// Index of the element the iterator is currently over. -1 means end.
    int m_position;
public:
    /// Reference type.
    using reference = ValueType;

    /// Copy constructor.
    DuckTypedIterator(const DuckTypedIterator &) = delete;
    /// Copy assignment operator.
    DuckTypedIterator& operator = (const DuckTypedIterator&) = delete;

    /// Move constructor.
    /// @param other Iterator to move from.
    DuckTypedIterator(DuckTypedIterator && other)
        : m_position(other.m_position)
        , m_collection(other.m_collection)
        , m_enumerator(std::move(other.m_enumerator))
    {}
    /// Move assignment operator.
    /// @param other Iterator to move from.
    /// @return This reference.
    DuckTypedIterator& operator = (DuckTypedIterator && other)
    {
        m_position = other.m_position;
        m_collection = other.m_collection;
        m_enumerator = std::move(other.m_enumerator);
        return *this;
    }

    /// Constructor.
    /// @param enumerable Collection to iterate over.
    /// @param position 0 to point at collection's beginning, -1 to point at its end.
    DuckTypedIterator(DuckTypedCollection* enumerable, int position = -1) : m_collection(enumerable), m_enumerator(nullptr), m_position(position)
    {
        if (m_position == 0) {
            m_enumerator = enumerable->GetEnumerator();
            // It is necessary to init enumerator.
            if (!m_enumerator->MoveNext())
                m_position = -1;
        }
    }
    /// Moves to the next element.
    /// @return This reference.
    DuckTypedIterator& operator ++ ()
    {
        if (m_position >= 0 && m_enumerator->MoveNext())
            ++m_position;
        else
            m_position = -1;
        return *this;
    }

    /// Equality comparison operator.
    /// @param lhs Iterator 1.
    /// @param rhs Iterator 2.
    /// @return True if iterators point at the same element of the same collection, false otherwise.
    friend bool operator==(const DuckTypedIterator& lhs, const DuckTypedIterator& rhs)
    {
        assert(lhs.m_collection == rhs.m_collection);
        return lhs.m_position == rhs.m_position && lhs.m_collection == rhs.m_collection;
    }
    /// Unequality comparison operator.
    /// @param lhs Iterator 1.
    /// @param rhs Iterator 2.
    /// @return False if iterators point at the same element of the same collection, True otherwise.
    friend bool operator!=(const DuckTypedIterator& lhs, const DuckTypedIterator& rhs)
    {
        return (!(lhs == rhs));
    }
    /// Dereference operator.
    /// @return Element being currently pointed to.
    reference operator * () const
    {
        assert(m_enumerator);
        return m_enumerator->get_Current();
    }
};


}}} // namespace System::Collections::Generic
