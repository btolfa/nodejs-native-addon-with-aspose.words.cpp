//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Notes/Footnote.h
#pragma once

#include <system/string.h>

#include <Aspose.Words.Cpp/InlineStory.h>
#include <Aspose.Words.Cpp/StoryType.h>
#include <Aspose.Words.Cpp/Revisions/ITrackableNode.h>
#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/Notes/FootnoteType.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
enum class VisitorAction;
class DocumentVisitor;
class RunPr;
class DocumentBase;
namespace Revisions
{
class MoveRevision;
class EditRevision;
}

}
}

namespace Aspose {

namespace Words {

namespace Notes {

/// Represents a container for text of a footnote or endnote.
/// 
/// The <b>%Footnote</b> class is used to represent both footnotes and endnotes in a Word document.
/// 
/// <b>%Footnote</b> is an inline-level node and can only be a child of <b>%Paragraph</b>.
/// 
/// <b>%Footnote</b> can contain <b>%Paragraph</b> and <b>%Table</b> child nodes.
/// 
/// @sa Aspose::Words::Notes::Footnote::get_FootnoteType
/// @sa Aspose::Words::DocumentBuilder::InsertFootnote(Aspose::Words::Notes::FootnoteType, System::String)
/// @sa Aspose::Words::Notes::FootnoteOptions
/// @sa Aspose::Words::Notes::EndnoteOptions
class ASPOSE_WORDS_SHARED_CLASS Footnote : public Aspose::Words::InlineStory, public Aspose::Words::Revisions::ITrackableNode
{
    typedef Footnote ThisType;
    typedef Aspose::Words::InlineStory BaseType;
    typedef Aspose::Words::Revisions::ITrackableNode BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Returns <b>%NodeType.Footnote</b>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const override;
    /// Returns <b>%StoryType.Footnotes</b> or <b>%StoryType.Endnotes</b>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::StoryType get_StoryType() override;
    /// Returns a value that specifies whether this is a footnote or endnote.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Notes::FootnoteType get_FootnoteType() const;
    /// Holds a value that specifies whether this is a auto-numbered footnote or
    /// footnote with user defined custom reference mark.
    ASPOSE_WORDS_SHARED_API bool get_IsAuto() const;
    /// Holds a value that specifies whether this is a auto-numbered footnote or
    /// footnote with user defined custom reference mark.
    ASPOSE_WORDS_SHARED_API void set_IsAuto(bool value);
    /// Gets/sets custom reference mark to be used for this footnote.
    /// Default value is <b>%empty string</b>, meaning auto-numbered footnotes are used.
    /// 
    /// If this property is set to <b>%empty string</b> or null, then <see cref="Aspose::Words::Notes::Footnote::get_IsAuto">IsAuto</see> property will automatically be set to true,
    /// if set to anything else then <see cref="Aspose::Words::Notes::Footnote::get_IsAuto">IsAuto</see> will be set to false.
    /// 
    /// RTF-format can only store 1 symbol as custom reference mark, so upon export only the first symbol will be written others will be discard.
    ASPOSE_WORDS_SHARED_API System::String get_ReferenceMark() const;
    /// Setter for Aspose::Words::Notes::Footnote::get_ReferenceMark
    ASPOSE_WORDS_SHARED_API void set_ReferenceMark(const System::String& value);

    /// Initializes an instance of the <b>%Footnote</b> class.
    /// 
    /// When <b>%Footnote</b> is created, it belongs to the specified document, but is not
    /// yet part of the document and <b>%ParentNode</b> is null.
    /// 
    /// To append <b>%Footnote</b> to the document use InsertAfter or InsertBefore
    /// on the paragraph where you want the footnote inserted.
    /// 
    /// @param doc The owner document.
    /// @param footnoteType A <see cref="Aspose::Words::Notes::Footnote::get_FootnoteType">FootnoteType</see> value
    ///     that specifies whether this is a footnote or endnote.
    ASPOSE_WORDS_SHARED_API Footnote(const System::SharedPtr<Aspose::Words::DocumentBase>& doc, Aspose::Words::Notes::FootnoteType footnoteType);

    /// Accepts a visitor.
    /// 
    /// Enumerates over this node and all of its children. Each node calls a corresponding method on DocumentVisitor.
    /// 
    /// For more info see the Visitor design pattern.
    /// 
    /// @param visitor The visitor that will visit the nodes.
    /// 
    /// @return True if all nodes were visited; false if DocumentVisitor stopped the operation before visiting all nodes.
    ASPOSE_WORDS_SHARED_API bool Accept(System::SharedPtr<Aspose::Words::DocumentVisitor> visitor) override;

protected:

    ASPOSE_WORDS_SHARED_API Aspose::Words::VisitorAction AcceptStart(System::SharedPtr<Aspose::Words::DocumentVisitor> ) override;
    ASPOSE_WORDS_SHARED_API Aspose::Words::VisitorAction AcceptEnd(System::SharedPtr<Aspose::Words::DocumentVisitor> ) override;

    virtual ASPOSE_WORDS_SHARED_API ~Footnote();

private:

    System::SharedPtr<Aspose::Words::Revisions::EditRevision> get_InsertRevision() override;
    void set_InsertRevision(System::SharedPtr<Aspose::Words::Revisions::EditRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::EditRevision> get_DeleteRevision() override;
    void set_DeleteRevision(System::SharedPtr<Aspose::Words::Revisions::EditRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::MoveRevision> get_MoveFromRevision() override;
    void set_MoveFromRevision(System::SharedPtr<Aspose::Words::Revisions::MoveRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::MoveRevision> get_MoveToRevision() override;
    void set_MoveToRevision(System::SharedPtr<Aspose::Words::Revisions::MoveRevision> ) override;

    __TypeStub<4,4,4,4>::type mField0;
    __TypeStub<1,1,1,1>::type mField1;
    System::String mField2;

    void RemoveMoveRevisions() override;
    ThisType* CppMemberwiseClone() const override ;

};

}
}
}
