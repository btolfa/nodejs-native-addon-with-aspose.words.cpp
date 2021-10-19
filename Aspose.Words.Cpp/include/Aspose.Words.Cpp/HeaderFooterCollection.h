//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/HeaderFooterCollection.h
#pragma once

#include <Aspose.Words.Cpp/HeaderFooterType.h>
#include <Aspose.Words.Cpp/NodeCollection.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
class HeaderFooter;
class CompositeNode;

}
}

namespace Aspose {

namespace Words {

/// Provides typed access to <see cref="Aspose::Words::HeaderFooter">HeaderFooter</see> nodes of a <b>%Section</b>.
/// 
/// There can be maximum of one <b>%HeaderFooter</b>
/// 
/// of each <see cref="Aspose::Words::HeaderFooterType">HeaderFooterType</see> per
/// <b>%Section</b>.
/// 
/// <b>%HeaderFooter</b> objects can occur in any order in the collection.
class ASPOSE_WORDS_SHARED_CLASS HeaderFooterCollection : public Aspose::Words::NodeCollection
{
    typedef HeaderFooterCollection ThisType;
    typedef Aspose::Words::NodeCollection BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Retrieves a <b>%HeaderFooter</b> at the given index.
    /// 
    /// The index is zero-based.
    /// 
    /// Negative indexes are allowed and indicate access from the back of the collection.
    /// For example -1 means the last item, -2 means the second before last and so on.
    /// 
    /// If index is greater than or equal to the number of items in the list, this returns a null reference.
    /// 
    /// If index is negative and its absolute value is greater than the number of items in the list, this returns a null reference.
    /// 
    /// @param index An index into the collection.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::HeaderFooter> idx_get(int32_t index);
    /// Retrieves a <b>%HeaderFooter</b> of the specified type.
    /// 
    /// @param headerFooterType A <see cref="Aspose::Words::HeaderFooterType">HeaderFooterType</see> value
    ///     that specifies the type of the header/footer to retrieve.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::HeaderFooter> idx_get(Aspose::Words::HeaderFooterType headerFooterType);

    /// Links or unlinks all headers and footers to the corresponding
    /// headers and footers in the previous section.
    /// 
    /// If any of the headers or footers do not exist, creates them automatically.
    /// 
    /// @param isLinkToPrevious True to link the headers and footers to the previous section;
    ///     false to unlink them.
    ASPOSE_WORDS_SHARED_API void LinkToPrevious(bool isLinkToPrevious);
    /// Links or unlinks the specified header or footer to the corresponding
    /// header or footer in the previous section.
    /// 
    /// If the header or footer of the specified type does not exist, creates it automatically.
    /// 
    /// @param headerFooterType A <see cref="Aspose::Words::HeaderFooterType">HeaderFooterType</see> value
    ///     that specifies the header or footer to link/unlink.
    /// @param isLinkToPrevious True to link the header or footer to the previous section;
    ///     false to unlink.
    ASPOSE_WORDS_SHARED_API void LinkToPrevious(Aspose::Words::HeaderFooterType headerFooterType, bool isLinkToPrevious);
    /// Copies all <c>%HeaderFoorter</c>s from the collection to a new array of <c>%HeaderFoorter</c>s.
    /// 
    /// @return An array of <c>%HeaderFoorter</c>s.
    ASPOSE_WORDS_SHARED_API System::ArrayPtr<System::SharedPtr<Aspose::Words::HeaderFooter>> ToArray();

protected:

    virtual ASPOSE_WORDS_SHARED_API ~HeaderFooterCollection();

};

}
}
