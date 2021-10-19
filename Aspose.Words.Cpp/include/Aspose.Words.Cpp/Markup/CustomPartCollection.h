//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Markup/CustomPartCollection.h
#pragma once

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
namespace Markup
{
class CustomPart;
}
}
}
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
}
}
}

namespace Aspose {

namespace Words {

namespace Markup {

/// Represents a collection of <see cref="Aspose::Words::Markup::CustomPart">CustomPart</see> objects.
/// 
/// You do not normally need to create instances of this class. You access custom parts
/// related to the OOXML package via the <see cref="Aspose::Words::Document::get_PackageCustomParts">PackageCustomParts</see> property.
/// 
/// @sa Aspose::Words::Markup::CustomPart
/// @sa Aspose::Words::Document::get_PackageCustomParts
class ASPOSE_WORDS_SHARED_CLASS CustomPartCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Words::Markup::CustomPart>>
{
    typedef CustomPartCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Words::Markup::CustomPart>> BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<Aspose::Words::Markup::CustomPart>>;

    using iterator = typename iterator_holder_type::iterator;

    using const_iterator = typename iterator_holder_type::const_iterator;

public:

    /// Gets the number of elements contained in the collection.
    ASPOSE_WORDS_SHARED_API int32_t get_Count();

    /// Gets or sets an item at the specified index.
    /// 
    /// @param index Zero-based index of the item.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Markup::CustomPart> idx_get(int32_t index);
    /// Gets or sets an item at the specified index.
    /// 
    /// @param index Zero-based index of the item.
    ASPOSE_WORDS_SHARED_API void idx_set(int32_t index, const System::SharedPtr<Aspose::Words::Markup::CustomPart>& value);

    /// Returns an enumerator object that can be used to iterate over all items in the collection.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Words::Markup::CustomPart>>> GetEnumerator() override;
    /// Adds an item to the collection.
    /// 
    /// @param part The item to add.
    ASPOSE_WORDS_SHARED_API void Add(const System::SharedPtr<Aspose::Words::Markup::CustomPart>& part);
    /// Removes an item at the specified index.
    /// 
    /// @param index The zero based index.
    ASPOSE_WORDS_SHARED_API void RemoveAt(int32_t index);
    /// Removes all elements from the collection.
    ASPOSE_WORDS_SHARED_API void Clear();
    /// Makes a deep copy of this collection and its items.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Markup::CustomPartCollection> Clone();

    ASPOSE_WORDS_SHARED_API CustomPartCollection();

    ASPOSE_WORDS_SHARED_API iterator begin() noexcept;

    ASPOSE_WORDS_SHARED_API iterator end() noexcept;

    ASPOSE_WORDS_SHARED_API const_iterator begin() const noexcept;

    ASPOSE_WORDS_SHARED_API const_iterator end() const noexcept;

    ASPOSE_WORDS_SHARED_API const_iterator cbegin() const noexcept;

    ASPOSE_WORDS_SHARED_API const_iterator cend() const noexcept;

protected:

    virtual ASPOSE_WORDS_SHARED_API ~CustomPartCollection();

private:

    System::SharedPtr<System::Object> mField0;

};

}
}
}
