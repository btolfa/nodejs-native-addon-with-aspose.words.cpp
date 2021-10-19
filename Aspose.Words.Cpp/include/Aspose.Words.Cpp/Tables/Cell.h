//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Tables/Cell.h
#pragma once

#include <system/shared_ptr.h>

#include <Aspose.Words.Cpp/Revisions/ITrackableNode.h>
#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/CompositeNode.h>
#include <Aspose.Words.Cpp/ICellAttrSource.h>
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
class ParagraphCollection;
class Paragraph;

namespace Revisions
{
class MoveRevision;
class EditRevision;

}

namespace Tables
{

class TableCollection;
class CellFormat;

class Row;

}

}
}

namespace Aspose {

namespace Words {

namespace Tables {

/// Represents a table cell.
/// 
/// <b>%Cell</b> can only be a child of a <b>%Row</b>.
/// 
/// <b>%Cell</b> can contain block-level nodes <b>%Paragraph</b> and <b>%Table</b>.
/// 
/// A minimal valid cell needs to have at least one <b>%Paragraph</b>.
class ASPOSE_WORDS_SHARED_CLASS Cell : public Aspose::Words::CompositeNode, public Aspose::Words::ICellAttrSource, public Aspose::Words::Revisions::ITrackableNode
{
    typedef Cell ThisType;
    typedef Aspose::Words::CompositeNode BaseType;
    typedef Aspose::Words::ICellAttrSource BaseType1;
    typedef Aspose::Words::Revisions::ITrackableNode BaseType2;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:
    using Aspose::Words::CompositeNode::Clone;

public:

    /// Returns <b>%NodeType.Cell</b>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const override;
    /// Returns the parent row of the cell.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::Row> get_ParentRow();
    /// Gets the first paragraph among the immediate children.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Paragraph> get_FirstParagraph();
    /// Gets the last paragraph among the immediate children.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Paragraph> get_LastParagraph();
    /// True if this is the first cell inside a row; false otherwise.
    ASPOSE_WORDS_SHARED_API bool get_IsFirstCell();
    /// True if this is the last cell inside a row; false otherwise.
    ASPOSE_WORDS_SHARED_API bool get_IsLastCell();
    /// Provides access to the formatting properties of the cell.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::CellFormat> get_CellFormat();
    /// Gets a collection of paragraphs that are immediate children of the cell.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::ParagraphCollection> get_Paragraphs();
    /// Gets a collection of tables that are immediate children of the cell.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::TableCollection> get_Tables();

    /// Initializes a new instance of the <b>%Cell</b> class.
    /// 
    /// When <b>%Cell</b> is created, it belongs to the specified document, but is not
    /// yet part of the document and <b>%ParentNode</b> is null.
    /// 
    /// To append <b>%Cell</b> to the document use InsertAfter or InsertBefore
    /// on the row where you want the cell inserted.
    /// 
    /// @param doc The owner document.
    ASPOSE_WORDS_SHARED_API Cell(const System::SharedPtr<Aspose::Words::DocumentBase>& doc);

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

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> Clone(bool , System::SharedPtr<Aspose::Words::INodeCloningListener> ) override;
    ASPOSE_WORDS_SHARED_API Aspose::Words::VisitorAction AcceptStart(System::SharedPtr<Aspose::Words::DocumentVisitor> ) override;
    ASPOSE_WORDS_SHARED_API Aspose::Words::VisitorAction AcceptEnd(System::SharedPtr<Aspose::Words::DocumentVisitor> ) override;
    ASPOSE_WORDS_SHARED_API bool CanInsert(System::SharedPtr<Aspose::Words::Node> ) override;

    virtual ASPOSE_WORDS_SHARED_API ~Cell();

private:

    System::SharedPtr<Aspose::Words::Revisions::EditRevision> get_InsertRevision() override;
    void set_InsertRevision(System::SharedPtr<Aspose::Words::Revisions::EditRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::EditRevision> get_DeleteRevision() override;
    void set_DeleteRevision(System::SharedPtr<Aspose::Words::Revisions::EditRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::MoveRevision> get_MoveFromRevision() override;
    void set_MoveFromRevision(System::SharedPtr<Aspose::Words::Revisions::MoveRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::MoveRevision> get_MoveToRevision() override;
    void set_MoveToRevision(System::SharedPtr<Aspose::Words::Revisions::MoveRevision> ) override;

    System::SharedPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;
    System::SharedPtr<System::Object> mField2;
    System::SharedPtr<System::Object> mField3;

    System::SharedPtr<System::Object> GetDirectCellAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchCellAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchInheritedCellAttr(int32_t ) override;
    void SetCellAttr(int32_t , System::SharedPtr<System::Object> ) override;
    void ClearCellAttrs() override;
    void RemoveMoveRevisions() override;

    ThisType* CppMemberwiseClone() const override ;

};

}
}
}
