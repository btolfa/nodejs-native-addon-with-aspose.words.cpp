//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/EditableRangeEnd.h
#pragma once

#include <cstdint>

#include <Aspose.Words.Cpp/Model/Text/INodeWithCommentId.h>
#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/Node.h>
#include <Aspose.Words.Cpp/IDisplaceableByCustomXml.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
class DocumentVisitor;
class DocumentBase;
namespace Revisions
{
enum class DisplacedByType;
}
class EditableRangeStart;

}
}

namespace Aspose {

namespace Words {

/// Represents an end of an editable range in a Word document.
/// 
/// A complete editable range  in a Word document consists of a <see cref="Aspose::Words::EditableRangeEnd::get_EditableRangeStart">EditableRangeStart</see>
/// and a matching <see cref="Aspose::Words::EditableRangeEnd">EditableRangeEnd</see> with the same Id.
/// 
/// <see cref="Aspose::Words::EditableRangeEnd::get_EditableRangeStart">EditableRangeStart</see> and <see cref="Aspose::Words::EditableRangeEnd">EditableRangeEnd</see> are just markers inside a document
/// that specify where the editable range starts and ends.
/// 
/// Use the <see cref="Aspose::Words::EditableRange">EditableRange</see> class as a "facade" to work with an editable range
/// as a single object.
/// 
/// @note Currently editable ranges are supported only at the inline-level, that is inside <see cref="Aspose::Words::Paragraph">Paragraph</see>,
/// but editable range start and editable range end can be in different paragraphs.
class ASPOSE_WORDS_SHARED_CLASS EditableRangeEnd final : public Aspose::Words::Node, public Aspose::Words::IDisplaceableByCustomXml, public Aspose::Words::INodeWithAnnotationId
{
    typedef EditableRangeEnd ThisType;
    typedef Aspose::Words::Node BaseType;
    typedef Aspose::Words::IDisplaceableByCustomXml BaseType1;
    typedef Aspose::Words::INodeWithAnnotationId BaseType2;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Corresponding EditableRangeStart, received by ID.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::EditableRangeStart> get_EditableRangeStart();
    /// Specifies the identifier of the editable range.
    ASPOSE_WORDS_SHARED_API int32_t get_Id() const;
    /// Specifies the identifier of the editable range.
    ASPOSE_WORDS_SHARED_API void set_Id(int32_t value);
    /// Returns <see cref="Aspose::Words::NodeType::EditableRangeEnd">EditableRangeEnd</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const override;

    /// Accepts a visitor.
    /// 
    /// Calls <see cref="Aspose::Words::DocumentVisitor::VisitEditableRangeEnd(System::SharedPtr<Aspose::Words::EditableRangeEnd>)">VisitEditableRangeEnd()</see>.
    /// 
    /// For more info see the Visitor design pattern.
    /// 
    /// @param visitor The visitor that will visit the node.
    /// 
    /// @return False if the visitor requested the enumeration to stop.
    ASPOSE_WORDS_SHARED_API bool Accept(System::SharedPtr<Aspose::Words::DocumentVisitor> visitor) override;

protected:

    virtual ASPOSE_WORDS_SHARED_API ~EditableRangeEnd();

private:

    Aspose::Words::Revisions::DisplacedByType get_DisplacedByCustomXml() override;
    void set_DisplacedByCustomXml(Aspose::Words::Revisions::DisplacedByType ) override;
    int32_t get_IdInternal() override;
    void set_IdInternal(int32_t ) override;
    int32_t get_ParentIdInternal() override;
    void set_ParentIdInternal(int32_t ) override;

    __TypeStub<4,4,4,4>::type mField0;
    __TypeStub<4,4,4,4>::type mField1;

    ThisType* CppMemberwiseClone() const override ;

};

}
}
