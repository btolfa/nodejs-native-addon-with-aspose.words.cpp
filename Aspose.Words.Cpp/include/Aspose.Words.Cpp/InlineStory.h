//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/InlineStory.h
#pragma once

#include <system/shared_ptr.h>

#include <Aspose.Words.Cpp/IInline.h>
#include <Aspose.Words.Cpp/StoryType.h>
#include <Aspose.Words.Cpp/CompositeNode.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
enum class RunPrExpandFlags;
class INodeCloningListener;
class Node;
class DocumentBase;
class RunPr;
class Font;
namespace Tables
{
class TableCollection;
}
class ParagraphCollection;
class Paragraph;

}
}

namespace Aspose {

namespace Words {

/// Base class for inline-level nodes that can contain paragraphs and tables.
/// 
/// <b>%InlineStory</b> is a container for block-level nodes <see cref="Aspose::Words::Paragraph">Paragraph</see> and <see cref="Aspose::Words::Tables::Table">Table</see>.
/// 
/// The classes that derive from <b>%InlineStory</b> are inline-level nodes that can contain
/// their own text (paragraphs and tables). For example, a <b>%Comment</b> node contains text of a comment
/// and a <b>%Footnote</b> contains text of a footnote.
class ASPOSE_WORDS_SHARED_CLASS InlineStory : public Aspose::Words::CompositeNode, public Aspose::Words::IInline
{
    typedef InlineStory ThisType;
    typedef Aspose::Words::CompositeNode BaseType;
    typedef Aspose::Words::IInline BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:
    using Aspose::Words::CompositeNode::Clone;

public:

    /// Returns the type of the story.
    virtual ASPOSE_WORDS_SHARED_API Aspose::Words::StoryType get_StoryType() = 0;
    /// Retrieves the parent <see cref="Aspose::Words::Paragraph">Paragraph</see> of this node.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Paragraph> get_ParentParagraph();
    /// Gets the first paragraph in the story.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Paragraph> get_FirstParagraph();
    /// Gets the last paragraph in the story.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Paragraph> get_LastParagraph();
    /// Gets a collection of paragraphs that are immediate children of the story.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::ParagraphCollection> get_Paragraphs();
    /// Gets a collection of tables that are immediate children of the story.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::TableCollection> get_Tables();
    /// Returns true if this object was inserted in %Microsoft Word while change tracking was enabled.
    ASPOSE_WORDS_SHARED_API bool get_IsInsertRevision();
    /// Returns true if this object was deleted in %Microsoft Word while change tracking was enabled.
    ASPOSE_WORDS_SHARED_API bool get_IsDeleteRevision();
    /// Returns <b>%true</b> if this object was moved (deleted) in %Microsoft Word while change tracking was enabled.
    ASPOSE_WORDS_SHARED_API bool get_IsMoveFromRevision();
    /// Returns <b>%true</b> if this object was moved (inserted) in %Microsoft Word while change tracking was enabled.
    ASPOSE_WORDS_SHARED_API bool get_IsMoveToRevision();
    /// Provides access to the font formatting of the anchor character of this object.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Font> get_Font();

    /// If the last child is not a paragraph, creates and appends one empty paragraph.
    ASPOSE_WORDS_SHARED_API void EnsureMinimum();

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> Clone(bool , System::SharedPtr<Aspose::Words::INodeCloningListener> ) override;
    ASPOSE_WORDS_SHARED_API bool CanInsert(System::SharedPtr<Aspose::Words::Node> ) override;

    virtual ASPOSE_WORDS_SHARED_API ~InlineStory();

private:

    System::SharedPtr<Aspose::Words::RunPr> get_RunPr_IInline() override;
    void set_RunPr_IInline(System::SharedPtr<Aspose::Words::RunPr> ) override;
    System::SharedPtr<Aspose::Words::Paragraph> get_ParentParagraph_IInline() override;
    System::SharedPtr<Aspose::Words::DocumentBase> get_Document_IInline() override;

    System::SharedPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;
    System::SharedPtr<System::Object> mField2;
    System::SharedPtr<System::Object> mField3;

    System::SharedPtr<Aspose::Words::RunPr> GetExpandedRunPr_IInline(Aspose::Words::RunPrExpandFlags ) override;
    System::SharedPtr<System::Object> GetDirectRunAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchInheritedRunAttr(int32_t ) override;
    void SetRunAttr(int32_t , System::SharedPtr<System::Object> ) override;
    void RemoveRunAttr(int32_t ) override;
    void ClearRunAttrs() override;

};

}
}
