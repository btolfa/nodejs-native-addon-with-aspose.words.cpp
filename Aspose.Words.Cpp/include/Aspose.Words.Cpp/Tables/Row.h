//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Tables/Row.h
#pragma once

#include <system/shared_ptr.h>

#include <Aspose.Words.Cpp/Revisions/ITrackableNode.h>
#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/CompositeNode.h>
#include <Aspose.Words.Cpp/IRowAttrSource.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
class String;
}
namespace Aspose
{
namespace Words
{
enum class VisitorAction;
class DocumentVisitor;
class INodeCloningListener;
class Node;
class DocumentBase;

namespace Revisions
{
class MoveRevision;
class EditRevision;

}

namespace Tables
{

class RowFormat;
class CellCollection;

class Table;
class Cell;

}

}
}

namespace Aspose {

namespace Words {

namespace Tables {

/// Represents a table row.
/// 
/// <b>%Row</b> can only be a child of a <b>%Table</b>.
/// 
/// <b>%Row</b> can contain one or more <b>%Cell</b> nodes.
/// 
/// A minimal valid row needs to have at least one <b>%Cell</b>.
class ASPOSE_WORDS_SHARED_CLASS Row : public Aspose::Words::CompositeNode, public Aspose::Words::IRowAttrSource, public Aspose::Words::Revisions::ITrackableNode
{
    typedef Row ThisType;
    typedef Aspose::Words::CompositeNode BaseType;
    typedef Aspose::Words::IRowAttrSource BaseType1;
    typedef Aspose::Words::Revisions::ITrackableNode BaseType2;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:
    using Aspose::Words::CompositeNode::Clone;

public:

    /// Returns <b>%NodeType.Row</b>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const override;
    /// Returns the immediate parent table of the row.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::Table> get_ParentTable();
    /// True if this is the first row in a table; false otherwise.
    ASPOSE_WORDS_SHARED_API bool get_IsFirstRow();
    /// True if this is the last row in a table; false otherwise.
    ASPOSE_WORDS_SHARED_API bool get_IsLastRow();
    /// Returns the first <b>%Cell</b> in the row.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::Cell> get_FirstCell();
    /// Returns the last <b>%Cell</b> in the row.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::Cell> get_LastCell();
    /// Provides typed access to the <b>%Cell</b> child nodes of the row.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::CellCollection> get_Cells();
    /// Provides access to the formatting properties of the row.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::RowFormat> get_RowFormat();

    /// Initializes a new instance of the <b>%Row</b> class.
    /// 
    /// When <b>%Row</b> is created, it belongs to the specified document, but is not
    /// yet part of the document and <b>%ParentNode</b> is null.
    /// 
    /// To append <b>%Row</b> to the document use InsertAfter or InsertBefore
    /// on the table where you want the row inserted.
    /// 
    /// @param doc The owner document.
    ASPOSE_WORDS_SHARED_API Row(const System::SharedPtr<Aspose::Words::DocumentBase>& doc);

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
    /// Gets the text of all cells in this row including the end of row character.
    /// 
    /// Returns concatenated text of all child nodes with the end of row character
    /// <see cref="Aspose::Words::ControlChar::Cell">ControlChar.Cell</see> appended at the end.
    /// 
    /// The returned string includes all control and special characters as described in <see cref="Aspose::Words::ControlChar">ControlChar</see>.
    ASPOSE_WORDS_SHARED_API System::String GetText() override;
    /// If the <b>%Row</b> has no cells, creates and appends one <b>%Cell</b>.
    ASPOSE_WORDS_SHARED_API void EnsureMinimum();

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> Clone(bool , System::SharedPtr<Aspose::Words::INodeCloningListener> ) override;

    ASPOSE_WORDS_SHARED_API Aspose::Words::VisitorAction AcceptStart(System::SharedPtr<Aspose::Words::DocumentVisitor> ) override;
    ASPOSE_WORDS_SHARED_API Aspose::Words::VisitorAction AcceptEnd(System::SharedPtr<Aspose::Words::DocumentVisitor> ) override;
    ASPOSE_WORDS_SHARED_API System::String GetEndText() override;
    ASPOSE_WORDS_SHARED_API bool CanInsert(System::SharedPtr<Aspose::Words::Node> ) override;

    virtual ASPOSE_WORDS_SHARED_API ~Row();

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
    __TypeStub<4,4,4,4>::type mField1;
    System::SharedPtr<System::Object> mField2;
    System::SharedPtr<System::Object> mField3;
    System::SharedPtr<System::Object> mField4;

    System::SharedPtr<System::Object> GetDirectRowAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchRowAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchInheritedRowAttr(int32_t ) override;
    void SetRowAttr(int32_t , System::SharedPtr<System::Object> ) override;
    void ClearRowAttrs() override;
    void ResetToDefaultAttrs() override;
    void RemoveMoveRevisions() override;
    ThisType* CppMemberwiseClone() const override ;

};

}
}
}
