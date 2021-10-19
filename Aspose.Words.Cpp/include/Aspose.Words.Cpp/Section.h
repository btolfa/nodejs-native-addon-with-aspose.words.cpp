//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Section.h
#pragma once

#include <system/shared_ptr.h>

#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/CompositeNode.h>
#include <Aspose.Words.Cpp/ISectionAttrSource.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{

enum class VisitorAction;
class DocumentVisitor;
class INodeCloningListener;
class Node;
class DocumentBase;

class PageSetup;
class HeaderFooterCollection;
class Body;

}
}

namespace Aspose {

namespace Words {

/// Represents a single section in a document.
/// 
/// <b>%Section</b> can have one <see cref="Aspose::Words::Section::get_Body">Body</see> and maximum one <see cref="Aspose::Words::HeaderFooter">HeaderFooter</see>
/// of each <see cref="Aspose::Words::HeaderFooterType">HeaderFooterType</see>. <b>%Body</b> and <b>%HeaderFooter</b> nodes
/// can be in any order inside <b>%Section</b>.
/// 
/// A minimal valid section needs to have <b>%Body</b> with one <b>%Paragraph</b>.
/// 
/// Each section has its own set of properties that specify page size, orientation, margins etc.
/// 
/// You can create a copy of a section using <see cref="Aspose::Words::Node::Clone(bool)">Clone()</see>. The copy can be inserted into
/// the same or different document.
/// 
/// To add, insert or remove a whole section including section break and
/// section properties use methods of the <b>%Sections</b> object.
/// 
/// To copy and insert just content of the section excluding the section break
/// and section properties use <b>%AppendContent</b> and <b>%PrependContent</b> methods.
class ASPOSE_WORDS_SHARED_CLASS Section final : public Aspose::Words::CompositeNode, public Aspose::Words::ISectionAttrSource
{
    typedef Section ThisType;
    typedef Aspose::Words::CompositeNode BaseType;
    typedef Aspose::Words::ISectionAttrSource BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:
    using Aspose::Words::CompositeNode::Clone;

private:

public:

    /// Returns <b>%NodeType.Section</b>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const override;
    /// Returns the <b>%Body</b> child node of the section.
    /// 
    /// <b>%Body</b> contains main text of the section.
    /// 
    /// Returns null if the section does not have a <b>%Body</b> node among its children.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Body> get_Body();
    /// Provides access to the headers and footers nodes of the section.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::HeaderFooterCollection> get_HeadersFooters();
    /// Returns an object that represents page setup and section properties.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::PageSetup> get_PageSetup();
    /// True if the section is protected for forms. When a section is protected for forms,
    /// users can select and modify text only in form fields in %Microsoft Word.
    ASPOSE_WORDS_SHARED_API bool get_ProtectedForForms();
    /// True if the section is protected for forms. When a section is protected for forms,
    /// users can select and modify text only in form fields in %Microsoft Word.
    ASPOSE_WORDS_SHARED_API void set_ProtectedForForms(bool value);

    /// Initializes a new instance of the Section class.
    /// 
    /// When the section is created, it belongs to the specified document, but is not
    /// yet part of the document and <b>%ParentNode</b> is null.
    /// 
    /// To include Section into a document use Document.InsertAfter, Document.InsertBefore
    /// or Sections.Add and Section.Insert methods.
    /// 
    /// @param doc The owner document.
    ASPOSE_WORDS_SHARED_API Section(const System::SharedPtr<Aspose::Words::DocumentBase>& doc);

    /// Creates a duplicate of this section.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Section> Clone();
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
    /// Inserts a copy of content of the source section at the beginning of this section.
    /// 
    /// Only content of <see cref="Aspose::Words::Section::get_Body">Body</see> of the source section is copied, page setup,
    /// headers and footers are not copied.
    /// 
    /// The nodes are automatically imported if the source section belongs to a different document.
    /// 
    /// No new section is created in the destination document.
    /// 
    /// @param sourceSection The section to copy content from.
    ASPOSE_WORDS_SHARED_API void PrependContent(const System::SharedPtr<Aspose::Words::Section>& sourceSection);
    /// Inserts a copy of content of the source section at the end of this section.
    /// 
    /// Only content of <see cref="Aspose::Words::Section::get_Body">Body</see> of the source section is copied, page setup,
    /// headers and footers are not copied.
    /// 
    /// The nodes are automatically imported if the source section belongs to a different document.
    /// 
    /// No new section is created in the destination document.
    /// 
    /// @param sourceSection The section to copy content from.
    ASPOSE_WORDS_SHARED_API void AppendContent(const System::SharedPtr<Aspose::Words::Section>& sourceSection);
    /// Clears the section.
    /// 
    /// The text of <see cref="Aspose::Words::Section::get_Body">Body</see> is cleared, only one empty paragraph is left that represents the section break.
    /// 
    /// The text of all headers and footers is cleared, but <see cref="Aspose::Words::HeaderFooter">HeaderFooter</see> objects themselves are not removed.
    ASPOSE_WORDS_SHARED_API void ClearContent();
    /// Clears the headers and footers of this section.
    /// 
    /// The text of all headers and footers is cleared, but <see cref="Aspose::Words::HeaderFooter">HeaderFooter</see> objects themselves are not removed.
    /// 
    /// This makes headers and footers of this section linked to headers and footers of the previous section.
    ASPOSE_WORDS_SHARED_API void ClearHeadersFooters();
    /// Deletes all shapes (drawing objects) from the headers and footers of this section.
    ASPOSE_WORDS_SHARED_API void DeleteHeaderFooterShapes();
    /// Ensures that the section has Body with one Paragraph.
    ASPOSE_WORDS_SHARED_API void EnsureMinimum();

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> Clone(bool , System::SharedPtr<Aspose::Words::INodeCloningListener> ) override;
    ASPOSE_WORDS_SHARED_API Aspose::Words::VisitorAction AcceptStart(System::SharedPtr<Aspose::Words::DocumentVisitor> ) override;
    ASPOSE_WORDS_SHARED_API Aspose::Words::VisitorAction AcceptEnd(System::SharedPtr<Aspose::Words::DocumentVisitor> ) override;

    ASPOSE_WORDS_SHARED_API bool CanInsert(System::SharedPtr<Aspose::Words::Node> ) override;

    virtual ASPOSE_WORDS_SHARED_API ~Section();

private:

    System::SharedPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;
    System::SharedPtr<System::Object> mField2;

    System::SharedPtr<System::Object> GetDirectSectionAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchInheritedSectionAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchSectionAttr(int32_t ) override;
    void SetSectionAttr(int32_t , System::SharedPtr<System::Object> ) override;
    void ClearSectionAttrs() override;
    ThisType* CppMemberwiseClone() const override ;

};

}
}
