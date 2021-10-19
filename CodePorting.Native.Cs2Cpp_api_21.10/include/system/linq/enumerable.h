/// @file system/linq/enumerable.h
#pragma once

#include <system/collections/ienumerable.h>
#include <system/collections/list.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <system/constraints.h>
#include <system/object_ext.h>
#include <system/exceptions.h>
#include <system/details/equality_helper.h>
#include <system/details/cast_rules.h>
#include <type_traits>

namespace System { namespace Linq {

namespace Details {

/// Implements the IEnumerator interface for an empty generic collection.
/// @tparam T The type of the element in a collection.
template <typename T>
class EmptyEnumerator final : public Collections::Generic::IEnumerator<T>
{
public:
    EmptyEnumerator() = default;

    T get_Current() const override
    {
        throw InvalidOperationException(u"Collection is empty");
    }

    bool MoveNext() override
    {
        return false;
    }

    void Reset() override
    {
    }
};

/// Implements the IEnumerable interface for an empty generic collection.
/// @tparam T The type of the element in a collection.
template <typename T>
class EmptyEnumerable final : public Collections::Generic::IEnumerable<T>
{
public:
    EmptyEnumerable() = default;

    SharedPtr<Collections::Generic::IEnumerator<T>> GetEnumerator() override
    {
        static const auto enumerator = MakeObject<EmptyEnumerator<T>>();
        return enumerator;
    }
};

/// Internal utility class
/// Implements IEnumerable over queue of items
/// @tparam TItem The type of the element in a queue.
template<typename TItem>
class CachedEnumerable : public virtual System::Collections::Generic::IEnumerable<TItem>
{
private:
    /// Implements iterator over CachedEnumerable
    /// @tparam TEnumeratorItem The type of the element in a queue.
    template<typename TEnumeratorItem>
    class CachedEnumerator final : public System::Collections::Generic::IEnumerator<TEnumeratorItem>
    {
    public:
        TEnumeratorItem get_Current() const override
        {
            return cachedEnumerable->items->idx_get(position);
        }

        CachedEnumerator(System::SharedPtr<CachedEnumerable<TEnumeratorItem>> cachedEnumerable) : position(-1)
        {
            this->cachedEnumerable = cachedEnumerable;
        }

        void Dispose() override
        {
            position = -1;
        }

        bool MoveNext() override
        {
            position++;
            return cachedEnumerable->items->get_Count() > position || cachedEnumerable->requestNext();
        }

        void Reset() override
        {
            position = -1;
        }

    private:
        System::SharedPtr<CachedEnumerable<TEnumeratorItem>> cachedEnumerable;
        int32_t position;
    };

public:
    /// @param requestNext callback which is called when next item is needed.
    /// callback should use Add method to insert next item of return false when no more items
    CachedEnumerable(System::Func<bool> requestNext) : requestNext(requestNext)
    {
        items = System::MakeObject<System::Collections::Generic::List<TItem>>();
    }

    System::SharedPtr<System::Collections::Generic::IEnumerator<TItem>> GetEnumerator() override
    {
        return System::MakeObject<CachedEnumerator<TItem>>(System::MakeSharedPtr(this));
    }

    void Add(TItem item)
    {
        items->Add(item);
    }

private:
    System::Func<bool> requestNext;
    System::SharedPtr<System::Collections::Generic::List<TItem>> items;
};



} // namespace Details

/// Provides static LINQ methods.
class Enumerable
{
public:
    /// Returns an empty IEnumerable object.
    template <typename T>
    static SharedPtr<Collections::Generic::IEnumerable<T>> Empty()
    {
        static const auto enumerable = MakeObject<Details::EmptyEnumerable<T>>();
        return enumerable;
    }
};

}} // namespace System::Linq

namespace System { namespace Collections { namespace Generic {

namespace Details {

/// Tries to get the first element of the collection.
/// @tparam T The type of the collection elements.
/// @param enumerable The collection from which an element is to be acquired.
/// @param found The output parameter. Returns true when the collection contains any element. Otherwise false is
/// returned.
/// @returns Returns the first collection element. The default value of the type will be returned when the collection is
/// empty.
template <typename T>
T TryGetFirst(IEnumerable<T>& enumerable, bool& found)
{
    if (IList<T>* list = dynamic_cast<IList<T>*>(&enumerable))
    {
        const auto count = list->get_Count();
        if (count > 0)
        {
            found = true;
            return list->idx_get(0);
        }
    }
    else
    {
        const auto enumerator = enumerable.GetEnumerator();
        if (enumerator->MoveNext())
        {
            found = true;
            return enumerator->get_Current();
        }
    }
    found = false;
    return T{};
}

/// Tries to get the first element of the collection, which satisfies to the predicate function.
/// @tparam T The type of the collection elements.
/// @param enumerable The collection from which an element is to be acquired.
/// @param predicate The predicate function.
/// @param found The output parameter. Returns true when the collection contains any element. Otherwise false is
/// returned.
/// @returns Returns the first collection element. The default value of the type will be returned when no element
/// satisfying the specified predicate function is found.
template <typename T>
T TryGetFirst(IEnumerable<T>& enumerable, const Func<T, bool>& predicate, bool& found)
{
    if (predicate == nullptr)
        throw ArgumentNullException(u"predicate");

    const auto enumerator = enumerable.GetEnumerator();
    while (enumerator->MoveNext())
    {
        T value = enumerator->get_Current();
        if (predicate(value))
        {
            found = true;
            return value;
        }
    }
    found = false;
    return T{};
}

/// Tries to get the last element of the collection.
/// @tparam T The type of the collection elements.
/// @param enumerable The collection from which an element is to be acquired.
/// @param found The output parameter. Returns true when the collection contains any element. Otherwise false is
/// returned.
/// @returns Returns the last collection element. The default value of the type will be returned when the collection is
/// empty.
template <typename T>
T TryGetLast(IEnumerable<T>& enumerable, bool& found)
{
    if (IList<T>* list = dynamic_cast<IList<T>*>(&enumerable))
    {
        const auto count = list->get_Count();
        if (count > 0)
        {
            found = true;
            return list->idx_get(count - 1);
        }
    }
    else
    {
        const auto enumerator = enumerable.GetEnumerator();
        if (enumerator->MoveNext())
        {
            T value;
            do
            {
                value = enumerator->get_Current();
            } while (enumerator->MoveNext());

            found = true;
            return value;
        }
    }
    found = false;
    return T{};
}

/// Enumerator used by the IEnumerable.Cast() extension method.
/// @tparam Source The source type of the collection elements.
/// @tparam Result The result type of the collection elements.
template <typename Source, typename Result>
class EnumeratorCastAdapter final : public IEnumerator<Result>
{
public:
    EnumeratorCastAdapter(SharedPtr<IEnumerator<Source>> sourceEnumerator)
        : m_sourceEnumerator(sourceEnumerator)
    {}

    Result get_Current() const override
    {
        return CastRules::Cast<Source, Result>(m_sourceEnumerator->get_Current());
    }

    bool MoveNext() override
    {
        return m_sourceEnumerator->MoveNext();
    }

    void Reset() override
    {
        m_sourceEnumerator->Reset();
    }

private:
    SharedPtr<IEnumerator<Source>> m_sourceEnumerator;
};

/// Enumerator used by the IEnumerable.OfType() extension method.
/// @tparam Source The source type of the collection elements.
/// @tparam Result The result type of the collection elements.
template <typename Source, typename Result>
class EnumeratorOfTypeAdapter final : public IEnumerator<Result>
{
public:
    EnumeratorOfTypeAdapter(SharedPtr<IEnumerator<Source>> sourceEnumerator)
        : m_sourceEnumerator(sourceEnumerator)
    {}

    Result get_Current() const override
    {
        return CastRules::Cast<Source, Result>(m_sourceEnumerator->get_Current());
    }

    bool MoveNext() override
    {
        while (m_sourceEnumerator->MoveNext())
        {
            if (CastRules::CanCast<Source, Result>(m_sourceEnumerator->get_Current()))
                return true;
        }
        return false;
    }

    void Reset() override
    {
        m_sourceEnumerator->Reset();
    }

private:
    SharedPtr<IEnumerator<Source>> m_sourceEnumerator;
};

/// Enumerator used by the IEnumerable.Select() extension method.
/// @tparam Source The source type of the collection elements.
/// @tparam Result The result type of the collection elements.
template <typename Source, typename Result>
class EnumeratorSelectAdapter final : public IEnumerator<Result>
{
public:
    EnumeratorSelectAdapter(SharedPtr<IEnumerator<Source>> sourceEnumerator, const Func<Source, Result>& selector)
        : m_sourceEnumerator(sourceEnumerator)
        , m_selector(selector)
    {}

    Result get_Current() const override
    {
        return m_selector(m_sourceEnumerator->get_Current());
    }

    bool MoveNext() override
    {
        return m_sourceEnumerator->MoveNext();
    }

    void Reset() override
    {
        m_sourceEnumerator->Reset();
    }

private:
    SharedPtr<IEnumerator<Source>> m_sourceEnumerator;
    Func<Source, Result> m_selector;
};

template <typename Source, typename Result>
class EnumeratorSelectIndexAdapter final : public IEnumerator<Result>
{
public:
    EnumeratorSelectIndexAdapter(SharedPtr<IEnumerator<Source>> sourceEnumerator, const Func<Source, int32_t, Result>& selector)
        : m_sourceEnumerator(sourceEnumerator), m_selector(selector), index(-1)
    {}

    Result get_Current() const override
    {
        return m_selector(m_sourceEnumerator->get_Current(), index);
    }

    bool MoveNext() override
    {
        index++;
        return m_sourceEnumerator->MoveNext();
    }

    void Reset() override
    {
        index = -1;
        m_sourceEnumerator->Reset();
    }

private:
    SharedPtr<IEnumerator<Source>> m_sourceEnumerator;
    Func<Source, int32_t, Result> m_selector;
    int index;
};


/// Enumerable used by the IEnumerable.Cast() and IEnumerable.OfType() extension methods.
/// @tparam Source The source type of the collection elements.
/// @tparam Result The result type of the collection elements.
/// @tparam EnumeratorAdapter The type of the enumerator adapter.
template <typename Source, typename Result, typename EnumeratorAdapter>
class EnumerableAdapter final : public IEnumerable<Result>
{
public:
    EnumerableAdapter(SharedPtr<IEnumerable<Source>> sourceEnumerable)
        : m_sourceEnumerable(sourceEnumerable)
    {}

    SharedPtr<IEnumerator<Result>> GetEnumerator() override
    {
        return MakeObject<EnumeratorAdapter>(m_sourceEnumerable->GetEnumerator());
    }

private:
    SharedPtr<IEnumerable<Source>> m_sourceEnumerable;
};

/// Enumerable used by the IEnumerable.Select() extension method.
/// @tparam Source The source type of the collection elements.
/// @tparam Result The result type of the collection elements.
template <typename Source, typename Result>
class EnumerableSelectAdapter final : public IEnumerable<Result>
{
public:
    EnumerableSelectAdapter(SharedPtr<IEnumerable<Source>> sourceEnumerable, const Func<Source, Result>& selector)
        : m_sourceEnumerable(sourceEnumerable)
        , m_selector(selector)
    {}

    SharedPtr<IEnumerator<Result>> GetEnumerator() override
    {
        return MakeObject<EnumeratorSelectAdapter<Source, Result>>(m_sourceEnumerable->GetEnumerator(), m_selector);
    }

private:
    SharedPtr<IEnumerable<Source>> m_sourceEnumerable;
    Func<Source, Result> m_selector;
};

template <typename Source, typename Result>
class EnumerableSelectIndexAdapter final : public IEnumerable<Result>
{
public:
    EnumerableSelectIndexAdapter(SharedPtr<IEnumerable<Source>> sourceEnumerable, const Func<Source, int32_t, Result>& selector)
        : m_sourceEnumerable(sourceEnumerable), m_selector(selector)
    {}

    SharedPtr<IEnumerator<Result>> GetEnumerator() override
    {
        return MakeObject<EnumeratorSelectIndexAdapter<Source, Result>>(m_sourceEnumerable->GetEnumerator(), m_selector);
    }

private:
    SharedPtr<IEnumerable<Source>> m_sourceEnumerable;
    Func<Source, int32_t, Result> m_selector;
};

template <typename Source, typename Result>
class EnumeratorSelectManyAdapter final : public IEnumerator<Result>
{
public:
    EnumeratorSelectManyAdapter(SharedPtr<IEnumerator<Source>> baseEnumerator,
                                const Func<Source, SharedPtr<IEnumerable<Result>>>& selector)
        : m_baseEnumerator(baseEnumerator), m_selector(selector)
    {}

    Result get_Current() const override
    {
        return m_nestedEnumerator->get_Current();
    }

    bool MoveNext() override
    {
        if (m_nestedEnumerator != nullptr)
        {
            if (m_nestedEnumerator->MoveNext())
            {
                return true;
            }
        }

        while (m_baseEnumerator->MoveNext())
        {
            Source currentSource = m_baseEnumerator->get_Current();

            m_nestedEnumerator = m_selector(currentSource)->GetEnumerator();

            if (m_nestedEnumerator->MoveNext())
            {
                return true;
            }
        }
        return false;

    }

    void Reset() override
    {
        m_baseEnumerator->Reset();
        DisposeNestedEnumerator();
    }

private:

    void DisposeNestedEnumerator()
    {
        if (m_nestedEnumerator == nullptr)
            return;
        m_nestedEnumerator->Dispose();
        m_nestedEnumerator = nullptr;
    }

    SharedPtr<IEnumerator<Source>> m_baseEnumerator;
    SharedPtr<IEnumerator<Result>> m_nestedEnumerator;
    Func<Source, SharedPtr<IEnumerable<Result>>> m_selector;
};


template <typename Source, typename Result>
class EnumerableSelectManyAdapter final : public IEnumerable<Result>
{
public:
    EnumerableSelectManyAdapter(SharedPtr<IEnumerable<Source>> sourceEnumerable,
                                const Func<Source, SharedPtr<IEnumerable<Result>>>& selector)
        : m_sourceEnumerable(sourceEnumerable), m_selector(selector)
    {}

    SharedPtr<IEnumerator<Result>> GetEnumerator() override
    {
        return MakeObject<EnumeratorSelectManyAdapter<Source, Result>>(m_sourceEnumerable->GetEnumerator(),
                                                                        m_selector);
    }

private:
    SharedPtr<IEnumerable<Source>> m_sourceEnumerable;
    Func<Source, SharedPtr<IEnumerable<Result>>> m_selector;
};


template <typename Key, typename Source>
class Grouping final : public System::Linq::IGrouping<Key, Source> 
{
public:
    Grouping(Key key, System::Func<bool> hasNext) : m_key(key)
    {
        groupCachedEnumerable = System::MakeObject<System::Linq::Details::CachedEnumerable<Source>>(hasNext);
    }

    virtual Key get_Key() override
    {
        return m_key;
    }

    SharedPtr<IEnumerator<Source>> GetEnumerator() override
    {
        return groupCachedEnumerable->GetEnumerator();
    }

    void Add(Source item)
    {
        groupCachedEnumerable->Add(item);
    }

private:
    Key m_key;
    System::SharedPtr<System::Linq::Details::CachedEnumerable<Source>> groupCachedEnumerable;

};

template <typename Source, typename Key>
class GroupEnumerable final : public IEnumerable<SharedPtr<System::Linq::IGrouping<Key, Source>>>
{
public:
    GroupEnumerable(SharedPtr<IEnumerable<Source>> sourceEnumerable, const Func<Source, Key>& keyPredicate)
        : m_sourceEnumerable(sourceEnumerable)
        , m_keyPredicate(keyPredicate)
    {
        groups = System::MakeObject<System::Collections::Generic::Dictionary<Key, System::SharedPtr<Grouping<Key, Source>>>>();
        m_sourceEnumerator = m_sourceEnumerable->GetEnumerator();

        System::Func<bool> hasNext = [&]() { return FindNextGroup(); };
        groupsCachedEnumerable = System::MakeObject<System::Linq::Details::CachedEnumerable<System::SharedPtr<System::Linq::IGrouping<Key, Source>>>>(hasNext);
    }

    SharedPtr<IEnumerator<SharedPtr<System::Linq::IGrouping<Key, Source>>>> GetEnumerator() override
    {
        return groupsCachedEnumerable->GetEnumerator();
    }

private:

    bool FindNextGroup()
    {
        while (true)
        {
            if (!m_sourceEnumerator->MoveNext())
            {
                return false;
            }
            auto current = m_sourceEnumerator->get_Current();
            auto key = m_keyPredicate(current);
            bool isNewGroup = !groups->ContainsKey(key);
            group = isNewGroup ? System::MakeObject<Grouping<Key, Source>>(key, [=]() { return FindNextForKey(key); }) : groups->idx_get(key);

            if (isNewGroup)
            {
                groups->Add(key, group);
                groupsCachedEnumerable->Add(group);
            }
            group->Add(current);
            if (isNewGroup)
            {
                return true;
            }
        }
        return false;
    }

    bool FindNextForKey(Key groupKey)
    {
        while (true)
        {
            if (!m_sourceEnumerator->MoveNext())
            {
                return false;
            }
            auto current = m_sourceEnumerator->get_Current();
            auto key = m_keyPredicate(current);
            bool isNewGroup = !groups->ContainsKey(key);
            group = isNewGroup ? System::MakeObject<Grouping<Key, Source>>(key, [=]() { return FindNextForKey(key); }) : groups->idx_get(key);

            if (isNewGroup)
            {
                groups->Add(key, group);
                groupsCachedEnumerable->Add(group);
            }
            group->Add(current);
            if (Equals(groupKey, key))
            {
                return true;
            }
        }
        return false;
    }

    System::SharedPtr<System::Linq::Details::CachedEnumerable<System::SharedPtr<System::Linq::IGrouping<Key, Source>>>> groupsCachedEnumerable;

    System::SharedPtr<System::Collections::Generic::Dictionary<Key, System::SharedPtr<Grouping<Key, Source>>>> groups;
    System::SharedPtr<Grouping<Key, Source>> group;
    SharedPtr<IEnumerable<Source>> m_sourceEnumerable;
    SharedPtr<IEnumerator<Source>> m_sourceEnumerator;
    Func<Source, Key> m_keyPredicate;
};


} // namespace Details

template<typename T>
T IEnumerable<T>::LINQ_ElementAt(int index)
{
    auto enumerator = GetEnumerator();
    while (enumerator->MoveNext())
    {
        if (index == 0)
        {
            return enumerator->Current();
        }
        index--;
    }
    return T();
}

template<typename T>
T IEnumerable<T>::LINQ_First()
{
    bool found = false;
    T first = Details::TryGetFirst(*this, found);
    if (!found)
        throw InvalidOperationException(u"The source sequence is empty");

    return first;
}

template<typename T>
T IEnumerable<T>::LINQ_First(const Func<T, bool>& predicate)
{
    bool found = false;
    T first = Details::TryGetFirst(*this, predicate, found);
    if (!found)
        throw InvalidOperationException(u"No element satisfies the specified condition");

    return first;
}

template<typename T>
T IEnumerable<T>::LINQ_FirstOrDefault()
{
    bool found = false;
    return Details::TryGetFirst(*this, found);
}

template<typename T>
T IEnumerable<T>::LINQ_Last()
{
    bool found = false;
    T last = Details::TryGetLast(*this, found);
    if (!found)
        throw InvalidOperationException(u"The source sequence is empty.");

    return last;
}

template<typename T>
T IEnumerable<T>::LINQ_LastOrDefault()
{
    bool found = false;
    return Details::TryGetLast(*this, found);
}

template<typename T>
System::SharedPtr<Collections::Generic::List<T>> IEnumerable<T>::LINQ_ToList()
{
    //return System::MakeObject<Collections::Generic::List<T>>(GetEnumerator());
    auto list = System::MakeObject<Collections::Generic::List<T>>();
    auto enumerator = GetEnumerator();
    while (enumerator->MoveNext())
    {
        list->Add(enumerator->Current());
    }
    return list;
}

template<typename T>
int IEnumerable<T>::LINQ_Count()
{
    int count = 0;
    auto enumerator = GetEnumerator();
    while (enumerator->MoveNext())
    {
        count++;
    }
    return count;
}

template<typename T>
int IEnumerable<T>::LINQ_Count(const Func<T, bool>& predicate)
{
    if (predicate == nullptr)
        throw ArgumentNullException(u"predicate");

    int count = 0;
    auto enumerator = GetEnumerator();
    while (enumerator->MoveNext())
    {
        if (predicate(enumerator->get_Current()))
        {
            count++;
        }
    }
    return count;
}

template<typename T>
System::ArrayPtr<T> IEnumerable<T>::LINQ_ToArray()
{
    return LINQ_ToList()->ToArray();
}

template <typename T>
bool IEnumerable<T>::LINQ_All(std::function<bool(T)> predicate)
{
    if (!predicate)
        throw ArgumentNullException(u"predicate");

    auto enumerator = GetEnumerator();
    while (enumerator->MoveNext())
        if (!predicate(enumerator->Current()))
            return false;
    return true;
}

template <typename T>
bool IEnumerable<T>::LINQ_Any()
{
    auto enumerator = GetEnumerator();
    if (enumerator->MoveNext())
        return true;
    return false;
}

template <typename T>
bool IEnumerable<T>::LINQ_Any(std::function<bool(T)> predicate)
{
    if (!predicate)
        throw ArgumentNullException(u"predicate");

    auto enumerator = GetEnumerator();
    while (enumerator->MoveNext())
        if (predicate(enumerator->Current()))
            return true;
    return false;
}

template <typename T>
T IEnumerable<T>::LINQ_FirstOrDefault(std::function<bool(T)> predicate)
{
    if (!predicate)
        throw ArgumentNullException(u"predicate");

    auto enumerator = GetEnumerator();
    while (enumerator->MoveNext())
    {
        T val = enumerator->Current();
        if (predicate(val))
            return val;
    }
    return T();
}

template <typename T>
SharedPtr<IEnumerable<T>> IEnumerable<T>::LINQ_Where(std::function<bool(T)> predicate)
{
    if (!predicate)
        throw ArgumentNullException(u"predicate");

    auto list = System::MakeObject<Collections::Generic::List<T>>();
    auto enumerator = GetEnumerator();
    while (enumerator->MoveNext())
    {
        T val = enumerator->Current();
        if (predicate(val))
            list->Add(val);
    }
    return static_cast<SharedPtr<IEnumerable<T>>>(list);
}

template <typename T>
bool IEnumerable<T>::LINQ_Contains(T value)
{
    const auto enumerator = GetEnumerator();
    while (enumerator->MoveNext())
    {
        if (System::Details::AreEqual(value, enumerator->get_Current()))
            return true;
    }
    return false;
}

template <typename Source>
template <typename Result>
SharedPtr<IEnumerable<Result>> IEnumerable<Source>::LINQ_Cast()
{
    using EnumeratorAdapter = Details::EnumeratorCastAdapter<Source, Result>;
    using EnumerableAdapter = Details::EnumerableAdapter<Source, Result, EnumeratorAdapter>;
    return MakeObject<EnumerableAdapter>(MakeSharedPtr(this));
}

template <typename Source>
template <typename Result>
SharedPtr<IEnumerable<Result>> IEnumerable<Source>::LINQ_OfType()
{
    using EnumeratorAdapter = Details::EnumeratorOfTypeAdapter<Source, Result>;
    using EnumerableAdapter = Details::EnumerableAdapter<Source, Result, EnumeratorAdapter>;
    return MakeObject<EnumerableAdapter>(MakeSharedPtr(this));
}

template <typename Source>
template <typename Result>
SharedPtr<IEnumerable<Result>> IEnumerable<Source>::LINQ_Select(const Func<Source, Result>& selector)
{
    if (selector == nullptr)
        throw ArgumentNullException(u"selector");

    using EnumerableAdapter = Details::EnumerableSelectAdapter<Source, Result>;
    return MakeObject<EnumerableAdapter>(MakeSharedPtr(this), selector);
}

template <typename Source>
template <typename Result>
SharedPtr<IEnumerable<Result>> IEnumerable<Source>::LINQ_Select(const Func<Source, int32_t, Result>& selector)
{
    if (selector == nullptr)
        throw ArgumentNullException(u"selector");

    using EnumerableAdapter = Details::EnumerableSelectIndexAdapter<Source, Result>;
    return MakeObject<EnumerableAdapter>(MakeSharedPtr(this), selector);
}


template <typename Source>
template <typename Key>
SharedPtr<IEnumerable<Source>> IEnumerable<Source>::LINQ_OrderBy(const Func<Source, Key>& keySelector)
{
    auto keys = LINQ_Select(keySelector)->LINQ_ToArray();
    auto items = LINQ_ToArray();
    items->Sort(keys, items);
    return items;
}

template <typename Source>
template <typename Key>
SharedPtr<IEnumerable<Source>> IEnumerable<Source>::LINQ_OrderByDescending(const Func<Source, Key>& keySelector)
{
    auto keys = LINQ_Select(keySelector)->LINQ_ToArray();
    auto items = LINQ_ToArray();
    items->Sort(keys, items);
    std::reverse(items->begin(), items->end());
    return items;
}

template <typename Source>
SharedPtr<IEnumerable<Source>> IEnumerable<Source>::LINQ_Concat(SharedPtr<IEnumerable<Source>> sequence)
{
    auto first = LINQ_ToList();
    auto second = sequence->LINQ_ToList();

    first->AddRange(second);

    return first;
}

template <typename Source>
template <typename Key>
SharedPtr<IEnumerable<SharedPtr<System::Linq::IGrouping<Key, Source>>>>
    IEnumerable<Source>::LINQ_GroupBy(System::Func<Source, Key> keyPredicate)
{
    if (keyPredicate == nullptr)
        throw ArgumentNullException(u"keyPredicate");

    using EnumerableAdapter = Details::GroupEnumerable<Source, Key>;
    return MakeObject<EnumerableAdapter>(MakeSharedPtr(this), keyPredicate);
}

template <typename Source>
template <typename Result>
SharedPtr<IEnumerable<Result>>
    IEnumerable<Source>::LINQ_SelectMany(const Func<Source, SharedPtr<IEnumerable<Result>>>& selector)
{
    if (selector == nullptr)
        throw ArgumentNullException(u"selector");

    using EnumerableAdapter = Details::EnumerableSelectManyAdapter<Source, Result>;
    return MakeObject<EnumerableAdapter>(MakeSharedPtr(this), selector);
}


}}} // namespace System::Collections::Generic
