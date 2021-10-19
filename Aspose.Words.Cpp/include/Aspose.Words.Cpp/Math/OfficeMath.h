//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Math/OfficeMath.h
#pragma once

#include <system/shared_ptr.h>
#include <system/enum_helpers.h>

#include <Aspose.Words.Cpp/IInline.h>
#include <Aspose.Words.Cpp/Revisions/ITrackableNode.h>
#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/CompositeNode.h>
#include <Aspose.Words.Cpp/Math/OfficeMathJustification.h>
#include <Aspose.Words.Cpp/Math/OfficeMathDisplayType.h>
#include <Aspose.Words.Cpp/Math/MathObjectType.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
namespace Text
{
class StringBuilder;
class Encoding;
}
class String;
}
namespace Aspose
{
namespace Words
{
enum class RunPrExpandFlags;
enum class VisitorAction;
class INodeCloningListener;
class Node;
namespace Rendering
{
class OfficeMathRenderer;
}
class DocumentVisitor;
namespace Revisions
{
class MoveRevision;
class EditRevision;
}
class DocumentBase;
class RunPr;
class Paragraph;

}
}

namespace Aspose {

namespace Words {

namespace Math {

/// Represents an Office Math object such as function, equation, matrix or alike. Can contain child elements
/// including runs of mathematical text, bookmarks, comments, other <see cref="Aspose::Words::Math::OfficeMath">OfficeMath</see> instances and some other nodes.
/// 
/// In this version of %Aspose.Words, <see cref="Aspose::Words::Math::OfficeMath">OfficeMath</see> nodes do not provide public methods
/// and properties to create or modify a OfficeMath object. In this version you are not able to instantiate
/// <see cref="Aspose::Words::Math">Math</see> nodes or modify existing except deleting them.
/// 
/// <see cref="Aspose::Words::Math::OfficeMath">OfficeMath</see> can only be a child of <see cref="Aspose::Words::Paragraph">Paragraph</see>.
class ASPOSE_WORDS_SHARED_CLASS OfficeMath : public Aspose::Words::CompositeNode, public Aspose::Words::IInline, public Aspose::Words::Revisions::ITrackableNode
{
    typedef OfficeMath ThisType;
    typedef Aspose::Words::CompositeNode BaseType;
    typedef Aspose::Words::IInline BaseType1;
    typedef Aspose::Words::Revisions::ITrackableNode BaseType2;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:
    using Aspose::Words::CompositeNode::Clone;

public:

    /// Returns <b>%NodeType.OfficeMath</b>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const override;
    /// Retrieves the parent <see cref="Aspose::Words::Paragraph">Paragraph</see> of this node.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Paragraph> get_ParentParagraph();
    /// Gets type <see cref="Aspose::Words::Math::OfficeMath::get_MathObjectType">MathObjectType</see> of this Office Math object.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Math::MathObjectType get_MathObjectType() const;
    /// Gets/sets an encoding that was used to encode equation XML, if this office math object is read from
    /// equation XML. We use the encoding on saving a document to write in same encoding that it was read.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<System::Text::Encoding> get_EquationXmlEncoding() const;
    /// Gets/sets an encoding that was used to encode equation XML, if this office math object is read from
    /// equation XML. We use the encoding on saving a document to write in same encoding that it was read.
    ASPOSE_WORDS_SHARED_API void set_EquationXmlEncoding(const System::SharedPtr<System::Text::Encoding>& value);
    /// Gets/sets Office Math justification.
    /// 
    /// Justification cannot be set to the Office Math with display format type <see cref="Aspose::Words::Math::OfficeMathDisplayType::Inline">Inline</see>.
    /// 
    /// Inline justification cannot be set to the Office Math with display format type <see cref="Aspose::Words::Math::OfficeMathDisplayType::Display">Display</see>.
    /// 
    /// Corresponding <see cref="Aspose::Words::Math::OfficeMath::get_DisplayType">DisplayType</see> has to be set before setting Office Math justification.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Math::OfficeMathJustification get_Justification();
    /// Setter for Aspose::Words::Math::OfficeMath::get_Justification
    ASPOSE_WORDS_SHARED_API void set_Justification(Aspose::Words::Math::OfficeMathJustification value);
    /// Gets/sets Office Math display format type which represents whether an equation is displayed inline with the text
    /// or displayed on its own line.
    /// 
    /// Display format type has effect for top level Office Math only.
    /// 
    /// Returned display format type is always <see cref="Aspose::Words::Math::OfficeMathDisplayType::Inline">Inline</see> for nested Office Math.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Math::OfficeMathDisplayType get_DisplayType();
    /// Setter for Aspose::Words::Math::OfficeMath::get_DisplayType
    ASPOSE_WORDS_SHARED_API void set_DisplayType(Aspose::Words::Math::OfficeMathDisplayType value);

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
    /// Creates and returns an object that can be used to render this equation into an image.
    /// 
    /// This method just invokes the <see cref="Aspose::Words::Rendering::OfficeMathRenderer">OfficeMathRenderer</see> constructor and passes
    /// this object as a parameter.
    /// 
    /// @return The renderer object for this equation.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Rendering::OfficeMathRenderer> GetMathRenderer();

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> Clone(bool , System::SharedPtr<Aspose::Words::INodeCloningListener> ) override;
    ASPOSE_WORDS_SHARED_API Aspose::Words::VisitorAction AcceptStart(System::SharedPtr<Aspose::Words::DocumentVisitor> ) override;
    ASPOSE_WORDS_SHARED_API Aspose::Words::VisitorAction AcceptEnd(System::SharedPtr<Aspose::Words::DocumentVisitor> ) override;
    ASPOSE_WORDS_SHARED_API bool CanInsert(System::SharedPtr<Aspose::Words::Node> ) override;

    virtual ASPOSE_WORDS_SHARED_API ~OfficeMath();

private:

    System::SharedPtr<Aspose::Words::Paragraph> get_ParentParagraph_IInline() override;
    System::SharedPtr<Aspose::Words::DocumentBase> get_Document_IInline() override;
    System::SharedPtr<Aspose::Words::RunPr> get_RunPr_IInline() override;
    void set_RunPr_IInline(System::SharedPtr<Aspose::Words::RunPr> ) override;

    System::SharedPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;
    System::SharedPtr<System::Object> mField2;
    __TypeStub<1,1,1,1>::type mField3;
    __TypeStub<1,1,1,1>::type mField4;

    System::SharedPtr<Aspose::Words::Revisions::EditRevision> get_InsertRevision() override;
    void set_InsertRevision(System::SharedPtr<Aspose::Words::Revisions::EditRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::EditRevision> get_DeleteRevision() override;
    void set_DeleteRevision(System::SharedPtr<Aspose::Words::Revisions::EditRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::MoveRevision> get_MoveFromRevision() override;
    void set_MoveFromRevision(System::SharedPtr<Aspose::Words::Revisions::MoveRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::MoveRevision> get_MoveToRevision() override;
    void set_MoveToRevision(System::SharedPtr<Aspose::Words::Revisions::MoveRevision> ) override;

    System::SharedPtr<System::Object> GetDirectRunAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchInheritedRunAttr(int32_t ) override;
    void SetRunAttr(int32_t , System::SharedPtr<System::Object> ) override;
    void RemoveRunAttr(int32_t ) override;
    void ClearRunAttrs() override;
    System::SharedPtr<Aspose::Words::RunPr> GetExpandedRunPr_IInline(Aspose::Words::RunPrExpandFlags ) override;
    void RemoveMoveRevisions() override;
    ThisType* CppMemberwiseClone() const override ;

};

}
}
}
