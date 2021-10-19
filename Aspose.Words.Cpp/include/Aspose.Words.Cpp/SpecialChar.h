//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/SpecialChar.h
#pragma once

#include <system/string.h>

#include <Aspose.Words.Cpp/Inline.h>
#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
class DocumentVisitor;
class RunPr;
class DocumentBase;

}
}

namespace Aspose {

namespace Words {

/// Base class for special characters in the document.
/// 
/// A %Microsoft Word document can include a number of special characters
/// that represent fields, form fields, shapes, OLE objects, footnotes etc. For the list
/// of special characters see <see cref="Aspose::Words::ControlChar">ControlChar</see>.
/// 
/// <b>%SpecialChar</b> is an inline-node and can only be a child of <b>%Paragraph</b>.
/// 
/// <b>%SpecialChar</b> char is used as a base class for more specific classes
/// that represent special characters that %Aspose.Words provides programmatic access for.
/// The <b>%SpecialChar</b> class is also used itself to represent special character for which
/// %Aspose.Words does not provide detailed programmatic access.
class ASPOSE_WORDS_SHARED_CLASS SpecialChar : public Aspose::Words::Inline
{
    typedef SpecialChar ThisType;
    typedef Aspose::Words::Inline BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Returns <b>%NodeType.SpecialChar</b>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const override;

    /// Accepts a visitor.
    /// 
    /// Calls DocumentVisitor.VisitSpecialChar.
    /// 
    /// For more info see the Visitor design pattern.
    /// 
    /// @param visitor The visitor that will visit the node.
    /// 
    /// @return False if the visitor requested the enumeration to stop.
    ASPOSE_WORDS_SHARED_API bool Accept(System::SharedPtr<Aspose::Words::DocumentVisitor> visitor) override;
    /// Gets the special character that this node represents.
    /// 
    /// @return The string that contains the character that this node represents.
    ASPOSE_WORDS_SHARED_API System::String GetText() override;

protected:

    virtual ASPOSE_WORDS_SHARED_API ~SpecialChar();

private:

    System::String mField0;

    ThisType* CppMemberwiseClone() const override ;

};

}
}
