//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Body.h
#pragma once

#include <Aspose.Words.Cpp/Story.h>
#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
enum class VisitorAction;
class Node;
class DocumentVisitor;
class DocumentBase;
class Section;
}
}

namespace Aspose {

namespace Words {

/// Represents a container for the main text of a section.
/// 
/// <b>%Body</b> can contain <b>%Paragraph</b> and <b>%Table</b> child nodes.
/// 
/// <b>%Body</b> is a section-level node and can only be a child of <b>%Section</b>.
/// There can only be one <b>%Body</b> in a <b>%Section</b>.
/// 
/// A minimal valid <b>%Body</b> needs to contain at least one <b>%Paragraph</b>.
class ASPOSE_WORDS_SHARED_CLASS Body : public Aspose::Words::Story
{
    typedef Body ThisType;
    typedef Aspose::Words::Story BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Returns <b>%NodeType.Body</b>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const override;
    /// Gets the parent section of this story.
    /// 
    /// <b>%ParentSection</b> is equivalent to <c>%(Section)ParentNode</c>.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Section> get_ParentSection();

    /// Initializes a new instance of the <b>%Body</b> class.
    /// 
    /// When <b>%Body</b> is created, it belongs to the specified document, but is not
    /// yet part of the document and <b>%ParentNode</b> is null.
    /// 
    /// To append <b>%Body</b> to a <b>%Section</b> use Section.InsertAfter or Section.InsertBefore.
    /// 
    /// @param doc The owner document.
    ASPOSE_WORDS_SHARED_API Body(const System::SharedPtr<Aspose::Words::DocumentBase>& doc);

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
    /// If the last child is not a paragraph, creates and appends one empty paragraph.
    ASPOSE_WORDS_SHARED_API void EnsureMinimum();

protected:

    ASPOSE_WORDS_SHARED_API bool CanInsert(System::SharedPtr<Aspose::Words::Node> ) override;
    ASPOSE_WORDS_SHARED_API Aspose::Words::VisitorAction AcceptStart(System::SharedPtr<Aspose::Words::DocumentVisitor> ) override;
    ASPOSE_WORDS_SHARED_API Aspose::Words::VisitorAction AcceptEnd(System::SharedPtr<Aspose::Words::DocumentVisitor> ) override;

    virtual ASPOSE_WORDS_SHARED_API ~Body();

private:

    ThisType* CppMemberwiseClone() const override ;

};

}
}
