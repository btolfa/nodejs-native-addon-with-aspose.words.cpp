/// @file system/collections/ienumerable.h
#pragma once

#include <iterator>

#include <system/collections/ienumerator.h>
#include <system/func.h>
#include <system/linq/igrouping.h>

namespace System { namespace Linq {
}}

namespace System { namespace Collections { namespace Generic {

template<typename T> class ASPOSECPP_SHARED_CLASS List;
template<typename T> class EnumerableExt;

/// Interface of object providing enumerator on contained elements.
/// @tparam T Element type.
template<typename T>
class ASPOSECPP_SHARED_CLASS IEnumerable: virtual public Object
{
    /// RTTI information.
    RTTI_INFO_TEMPLATE_CLASS(System::Collections::Generic::IEnumerable<T>, System::BaseTypesInfo<System::Object>);

public:
    /// Enumerator type.
    typedef IEnumerator<T> IEnumeratorType;

    using ValueType = T;

    // There no need to define an empty virtual dtor, virtual dtor for inheritance already defined in the Object class
    /// Gets enumerator.
    /// @return Pointer to newly created enumerator object which can be used to iterate through interfaced object.
    virtual SharedPtr<IEnumerator<T> > GetEnumerator() = 0;

    // Implementation of some of LINQ extension methods as usual class methods
    // header <system/linq/enumerable.h> should be included in order to use

    /// Returns the element at a specified index in a sequence.
    /// @param index Index to get element at.
    /// @return Element at specified index or default-constructed value if not found.
    T LINQ_ElementAt(int index);

    /// Returns the first element of a sequence.
    /// @return First element in the sequence.
    /// @throws InvalidOperationException Source sequence is empty.
    T LINQ_First();

    /// Returns the first element of a sequence that satisfy the specified condition.
    /// @param predicate A function to test each element for a condition.
    /// @return First element in the sequence that satisfy the specified condition.
    /// @throws InvalidOperationException No element satisfy the specified condition.
    T LINQ_First(const Func<T, bool>& predicate);

    /// Returns the first element of a sequence, or a default value if the sequence is empty.
    /// @return First element in the sequence or default-constructed value if the sequence is empty.
    T LINQ_FirstOrDefault();

    /// Returns the first element of the sequence that satisfies a condition or a default value if no such element is
    /// found.
    /// @param predicate A function to test each element for a condition.
    /// @return default(T) if source is empty or if no element passes the test specified by predicate; otherwise,
    /// the first element in source that passes the test specified by predicate.
    T LINQ_FirstOrDefault(std::function<bool(T)> predicate);

    /// Returns the last element of a sequence.
    /// @return Last element in the sequence.
    /// @throws InvalidOperationException Source sequence is empty.
    T LINQ_Last();

    /// Returns the last element of a sequence, or a default value if the sequence is empty.
    /// @return Last element in the sequence or default-constructed value if the sequence is empty.
    T LINQ_LastOrDefault();

    /// Creates a List<T> from a sequence.
    /// @return The list containing all elements of specified sequence.
    SharedPtr<List<T>> LINQ_ToList();

    /// Returns the number of elements in the sequence (calculated via direct counting).
    /// @return Number of elements in the sequence.
    int LINQ_Count();

    /// Returns the number of elements in the sequence that satisfy the specified condition.
    /// @param predicate A function to test each element for a condition.
    /// @return Number of elements in the sequence that satisfy the specified condition.
    int LINQ_Count(const Func<T, bool>& predicate);

    /// Creates an array from a sequence.
    /// @return Array that contains all elements of current sequence.
    System::ArrayPtr<T> LINQ_ToArray();

    /// Determines whether all elements of a sequence satisfy a condition.
    /// @param predicate A function to test each element for a condition.
    /// @return true if every element of the source sequence passes the test in the specified predicate, or if the
    /// sequence is empty; otherwise, false.
    bool LINQ_All(std::function<bool(T)> predicate);

    /// Determines whether a sequence contains any elements.
    /// @return true if the source sequence contains any elements; otherwise, false.
    bool LINQ_Any();

    /// Determines whether any element of a sequence exists or satisfies a condition.
    /// @param predicate A function to test each element for a condition.
    /// @return true if the source sequence contains any elements; otherwise, false.
    bool LINQ_Any(std::function<bool(T)> predicate);

    /// Filters a sequence based on the specified predicate.
    /// @param predicate A function that test each elements for some condition.
    /// @return An IEnumerable that contains filtered elements.
    SharedPtr<IEnumerable<T>> LINQ_Where(std::function<bool(T)> predicate);

    /// Determines if a sequence contains a specified value.
    /// @param value The value to locate in the sequence.
    /// @return true if the sequence contains the specified value, otherwise false.
    bool LINQ_Contains(T value);

    /// Casts the elements to the specified type.
    /// @tparam ResultType The type to cast the elements of the sequence.
    /// @return An IEnumerable that contains elements of the sequence cast the ResultType.
    /// @throws InvalidCastException Element of the sequence cannot be cast to the ResultType.
    template <typename ResultType>
    SharedPtr<IEnumerable<ResultType>> LINQ_Cast();

    /// Sorts the elements of a sequence in ascending order according to the key values selected by keySelector
    /// @tparam keySelector A function to extract a key from an element.
    /// @return An IEnumerable whose elements are sorted according to a key
    template <typename Key>
    SharedPtr<IEnumerable<T>> LINQ_OrderBy(const Func<T, Key>& keySelector);

    /// Sorts the elements of a sequence in descending order according to the key values selected by keySelector
    /// @tparam keySelector A function to extract a key from an element.
    /// @return An IEnumerable whose elements are sorted to the descending order of the key
    template <typename Key>
    SharedPtr<IEnumerable<T>> LINQ_OrderByDescending(const Func<T, Key>& keySelector);

    /// Filters the elements of the sequence based on the specified type.
    /// @tparam ResultType The type to filter the elements of the sequence.
    /// @return An IEnumerable that contains elements from the sequence of the ResultType.
    template <typename ResultType>
    SharedPtr<IEnumerable<ResultType>> LINQ_OfType();

    /// Transforms elements of a sequence.
    /// @tparam ResultType The type of the value returned by the @p selector.
    /// @param selector A transform function.
    /// @return An IEnumerable that contains elements returned by the @p selector function.
    template <typename ResultType>
    SharedPtr<IEnumerable<ResultType>> LINQ_Select(const Func<T, ResultType>& selector);

    /// Transforms each element of a sequence into a new form by incorporating the element's index.
    /// @tparam ResultType The type of the value returned by the @p selector.
    /// @param selector A transform function.
    /// @return An IEnumerable that contains elements returned by the @p selector function.
    template <typename ResultType>
    SharedPtr<IEnumerable<ResultType>> LINQ_Select(const Func<T, int32_t, ResultType>& selector);


    /// Concatenates two sequences.
    /// @param sequence The sequence will be concatenated with the current one.
    /// @return An IEnumerable that contains the concatenated elements of the two input sequences.
    SharedPtr<IEnumerable<T>> LINQ_Concat(SharedPtr<IEnumerable<T>> sequence);

    /// Groups the elements of a sequence.
    /// @tparam Key The type of the key returned by keyPredicate
    /// @param keyPredicate A function to extract the key for each element.
    /// @return An IEnumerable that contains a sequence of objects and a key
    template <typename Key>
    System::SharedPtr<IEnumerable<System::SharedPtr<System::Linq::IGrouping<Key, T>>>>
        LINQ_GroupBy(System::Func<T, Key> keyPredicate);

    /// Projects each element of a sequence and combines the resulting sequences into one sequence.
    /// @tparam ResultType The type of the value returned by the @p selector.
    /// @param selector A transform function.
    /// @return An IEnumerable that contains the result of invoking a one-to-many projection function on each element of the input sequence.
    template <typename ResultType>
    SharedPtr<IEnumerable<ResultType>> LINQ_SelectMany(const Func<T, SharedPtr<IEnumerable<ResultType>>>& selector);


    /// Represents a base iterator implementation. For internal use only.
    /// @code
    /// #include <system/collections/list.h>
    /// #include <system/smart_ptr.h>
    /// #include <algorithm>
    /// #include <iterator>
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
    ///   // Iterate over the collection using EnumeratorBasedIterator and print items.
    ///   std::ostream_iterator<int> osi(std::cout, " ");
    ///   std::copy(collection->begin(), collection->end(), osi);
    ///
    ///   return 0;
    /// }
    /// /*
    /// This code example produces the following output:
    /// 1 2 3
    /// */
    /// @endcode
    /// @tparam Value The type of the iterated items.
    /// @tparam Enumerator The type of the enumerator.
    template <typename Value, typename Enumerator>
    class EnumeratorBasedIterator : public std::iterator<std::forward_iterator_tag, Value, std::ptrdiff_t, Value*, Value>
    {
    private:
        IEnumerable<Value> * m_enumerable;
        SharedPtr<Enumerator> m_enumerator;
        int m_position;

    public:
        // It is needed for GCC & Clang.
        using reference = Value;

        EnumeratorBasedIterator(const EnumeratorBasedIterator &) = delete;
        EnumeratorBasedIterator& operator = (const EnumeratorBasedIterator&) = delete;

        EnumeratorBasedIterator(EnumeratorBasedIterator && other) {
            m_position = other.m_position;
            m_enumerable = other.m_enumerable;
            m_enumerator = std::move(other.m_enumerator);
        }
        EnumeratorBasedIterator& operator = (EnumeratorBasedIterator && other) {
            m_position = other.m_position;
            m_enumerable = other.m_enumerable;
            m_enumerator = std::move(other.m_enumerator);
            return *this;
        }

        EnumeratorBasedIterator(IEnumerable<Value>* enumerable, int position = -1) : m_enumerable(enumerable), m_enumerator(nullptr), m_position(position)
        {
            m_enumerable = enumerable;
            if (m_position == 0) {
                m_enumerator = enumerable->GetEnumerator();
                // It is necessary to init enumerator.
                if (!m_enumerator->MoveNext())
                    m_position = -1;
            }
        }
        EnumeratorBasedIterator& operator ++ ()
        {
            if (m_position >= 0 && m_enumerator->MoveNext())
                ++m_position;
            else
                m_position = -1;
            return *this;
        }

        friend bool operator==(const EnumeratorBasedIterator& lhs, const EnumeratorBasedIterator& rhs)
        {
            assert(lhs.m_enumerable == rhs.m_enumerable);
            return lhs.m_position == rhs.m_position && lhs.m_enumerable == rhs.m_enumerable;
        }

        friend bool operator!=(const EnumeratorBasedIterator& lhs, const EnumeratorBasedIterator& rhs)
        {
            return (!(lhs == rhs));
        }
        reference operator * () const
        {
            assert(m_enumerator);
            return m_enumerator->get_Current();
        }
    };

    using iterator = EnumeratorBasedIterator<T, IEnumerator<T>>;
    using const_iterator = iterator;

    /// Gets iterator pointing to the first element (if any) of the collection.
    /// This iterator can't be used to change a referenced object because
    /// GetEnumerator() returns a copy-object of T.
    /// @return An iterator pointing to the first element (if any) of the collection
    iterator begin() noexcept
    {
        return iterator(this, 0);
    }
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// This iterator can't be used to change a referenced object because
    /// GetEnumerator() returns a copy-object of T.
    /// @return An iterator pointing right after the last element (if any) of the collection
    iterator end() noexcept
    {
        return iterator(this, -1);
    }

    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    const_iterator begin() const noexcept
    {
        return const_iterator(const_cast<IEnumerable<T>*>(this), 0);
    }
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the
    /// collection
    const_iterator end() const noexcept
    {
        return const_iterator(const_cast<IEnumerable<T>*>(this), -1);
    }

    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    const_iterator cbegin() const noexcept
    {
        return const_iterator(const_cast<IEnumerable<T>*>(this), 0);
    }
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    const_iterator cend() const noexcept
    {
        return const_iterator(const_cast<IEnumerable<T>*>(this), -1);
    }
    
protected:
    /// Destructor.
    ~IEnumerable() override {}
};

}}} // namespace System::Collections::Generic
