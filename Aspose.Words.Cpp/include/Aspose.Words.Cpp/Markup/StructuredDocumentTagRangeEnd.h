//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Markup/StructuredDocumentTagRangeEnd.h
#pragma once

#include <cstdint>

#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/Node.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
class DocumentVisitor;
class DocumentBase;

}
}

namespace Aspose {

namespace Words {

namespace Markup {

/// Represents an end of <b>%ranged</b> structured document tag which accepts multi-sections content.
/// See also <see cref="Aspose::Words::Markup::StructuredDocumentTagRangeStart">StructuredDocumentTagRangeStart</see> node.
class ASPOSE_WORDS_SHARED_CLASS StructuredDocumentTagRangeEnd : public Aspose::Words::Node
{
    typedef StructuredDocumentTagRangeEnd ThisType;
    typedef Aspose::Words::Node BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const override;
    /// Specifies a unique read-only persistent numerical Id for this <b>%StructuredDocumentTagRange</b> node.
    /// Corresponding <see cref="Aspose::Words::Markup::StructuredDocumentTagRangeStart">StructuredDocumentTagRangeStart</see> node has the same <see cref="Aspose::Words::Markup::StructuredDocumentTagRangeStart::get_Id">Id</see>.
    ASPOSE_WORDS_SHARED_API int32_t get_Id() const;

    /// Initializes a new instance of the <b>%Structured document tag range end</b> class.
    /// 
    /// @param doc The owner document.
    /// @param id Identifier of the corresponding structured document tag range start.
    ASPOSE_WORDS_SHARED_API StructuredDocumentTagRangeEnd(const System::SharedPtr<Aspose::Words::DocumentBase>& doc, int32_t id);

    ASPOSE_WORDS_SHARED_API bool Accept(System::SharedPtr<Aspose::Words::DocumentVisitor> visitor) override;

protected:

    virtual ASPOSE_WORDS_SHARED_API ~StructuredDocumentTagRangeEnd();

private:

    __TypeStub<4,4,4,4>::type mField0;

    ThisType* CppMemberwiseClone() const override ;

};

}
}
}
