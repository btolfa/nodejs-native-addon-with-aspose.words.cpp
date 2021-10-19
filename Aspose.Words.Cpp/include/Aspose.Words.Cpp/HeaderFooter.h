//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/HeaderFooter.h
#pragma once

#include <Aspose.Words.Cpp/Story.h>
#include <Aspose.Words.Cpp/HeaderFooterType.h>
#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
enum class VisitorAction;
class DocumentVisitor;
class DocumentBase;
class Section;
}
}

namespace Aspose {

namespace Words {

/// Represents a container for the header or footer text of a section.
/// 
/// <b>%HeaderFooter</b> can contain <b>%Paragraph</b> and <b>%Table</b> child nodes.
/// 
/// <b>%HeaderFooter</b> is a section-level node and can only be a child of <b>%Section</b>.
/// There can only be one <b>%HeaderFooter</b> or each <see cref="Aspose::Words::HeaderFooter::get_HeaderFooterType">HeaderFooterType</see> in a <b>%Section</b>.
/// 
/// If <b>%Section</b> does not have a <b>%HeaderFooter</b> of a specific type or
/// the <b>%HeaderFooter</b> has no child nodes, this header/footer is considered linked to
/// the header/footer of the same type of the previous section in %Microsoft Word.
/// 
/// When <b>%HeaderFooter</b> contains at least one <b>%Paragraph</b>, it is no longer
/// considered linked to previous in %Microsoft Word.
class ASPOSE_WORDS_SHARED_CLASS HeaderFooter : public Aspose::Words::Story
{
    typedef HeaderFooter ThisType;
    typedef Aspose::Words::Story BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Returns <b>%NodeType.HeaderFooter</b>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const override;
    /// Gets the parent section of this story.
    /// 
    /// <b>%ParentSection</b> is equivalent to <c>%(Section)ParentNode</c>.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Section> get_ParentSection();
    /// Gets the type of this header/footer.
    ASPOSE_WORDS_SHARED_API Aspose::Words::HeaderFooterType get_HeaderFooterType();
    /// True if this <b>%HeaderFooter</b> object is a header.
    ASPOSE_WORDS_SHARED_API bool get_IsHeader();
    /// True if this header or footer is linked to the corresponding header or footer
    /// in the previous section.
    /// 
    /// Default is true.
    /// 
    /// Note, when your link a header or footer, its contents is cleared.
    ASPOSE_WORDS_SHARED_API bool get_IsLinkedToPrevious();
    /// Setter for Aspose::Words::HeaderFooter::get_IsLinkedToPrevious
    ASPOSE_WORDS_SHARED_API void set_IsLinkedToPrevious(bool value);

    /// Creates a new header or footer of the specified type.
    /// 
    /// When <b>%HeaderFooter</b> is created, it belongs to the specified document, but is not
    /// yet part of the document and <b>%ParentNode</b> is null.
    /// 
    /// To append <b>%HeaderFooter</b> to a <b>%Section</b> use Section.InsertAfter, Section.InsertBefore,
    /// HeadersFooters.Add or HeadersFooters.Insert.
    /// 
    /// @param doc The owner document.
    /// @param headerFooterType A <see cref="Aspose::Words::HeaderFooter::get_HeaderFooterType">HeaderFooterType</see> value
    ///     that specifies the type of the header or footer.
    ASPOSE_WORDS_SHARED_API HeaderFooter(const System::SharedPtr<Aspose::Words::DocumentBase>& doc, Aspose::Words::HeaderFooterType headerFooterType);

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

    virtual ASPOSE_WORDS_SHARED_API ~HeaderFooter();

private:

    ThisType* CppMemberwiseClone() const override ;

};

}
}
