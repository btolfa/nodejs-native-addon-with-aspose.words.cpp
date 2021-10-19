//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Run.h
#pragma once

#include <Aspose.Words.Cpp/Inline.h>
#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
class DocumentVisitor;
class DocumentBase;

class RunPr;

}
}

namespace Aspose {

namespace Words {

/// Represents a run of characters with the same font formatting.
/// 
/// All text of the document is stored in runs of text.
/// 
/// <b>%Run</b> can only be a child of <b>%Paragraph</b> or inline <b>%StructuredDocumentTag</b>.
class ASPOSE_WORDS_SHARED_CLASS Run : public Aspose::Words::Inline
{
    typedef Run ThisType;
    typedef Aspose::Words::Inline BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Returns <b>%NodeType.Run</b>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const override;
    /// Gets the text of the run.
    ASPOSE_WORDS_SHARED_API System::String get_Text() const;
    /// Sets the text of the run.
    ASPOSE_WORDS_SHARED_API void set_Text(const System::String& value);

    /// Initializes a new instance of the <b>%Run</b> class.
    /// 
    /// When <b>%Run</b> is created, it belongs to the specified document, but is not
    /// yet part of the document and <b>%ParentNode</b> is null.
    /// 
    /// To append <b>%Run</b> to the document use InsertAfter or InsertBefore
    /// on the paragraph where you want the run inserted.
    /// 
    /// @param doc The owner document.
    ASPOSE_WORDS_SHARED_API Run(const System::SharedPtr<Aspose::Words::DocumentBase>& doc);
    /// Initializes a new instance of the <b>%Run</b> class.
    /// 
    /// When <b>%Run</b> is created, it belongs to the specified document, but is not
    /// yet part of the document and <b>%ParentNode</b> is null.
    /// 
    /// To append <b>%Run</b> to the document use InsertAfter or InsertBefore
    /// on the paragraph where you want the run inserted.
    /// 
    /// @param doc The owner document.
    /// @param text The text of the run.
    ASPOSE_WORDS_SHARED_API Run(const System::SharedPtr<Aspose::Words::DocumentBase>& doc, const System::String& text);

    /// Accepts a visitor.
    /// 
    /// Calls DocumentVisitor.VisitRun.
    /// 
    /// For more info see the Visitor design pattern.
    /// 
    /// @param visitor The visitor that will visit the node.
    /// 
    /// @return False if the visitor requested the enumeration to stop.
    ASPOSE_WORDS_SHARED_API bool Accept(System::SharedPtr<Aspose::Words::DocumentVisitor> visitor) override;
    /// Gets the text of the run.
    /// 
    /// @return The text of the run.
    ASPOSE_WORDS_SHARED_API System::String GetText() override;

protected:

    virtual ASPOSE_WORDS_SHARED_API ~Run();

private:

    System::String mField0;

    ThisType* CppMemberwiseClone() const override ;

};

}
}
