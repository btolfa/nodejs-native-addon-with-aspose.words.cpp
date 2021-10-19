//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Loading/TxtLoadOptions.h
#pragma once

#include <Aspose.Words.Cpp/Loading/TxtTrailingSpacesOptions.h>
#include <Aspose.Words.Cpp/Loading/TxtLeadingSpacesOptions.h>
#include <Aspose.Words.Cpp/Loading/LoadOptions.h>
#include <Aspose.Words.Cpp/Loading/DocumentDirection.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Loading {

/// Allows to specify additional options when loading <see cref="Aspose::Words::LoadFormat::Text">Text</see> document into a <see cref="Aspose::Words::Document">Document</see> object.
class ASPOSE_WORDS_SHARED_CLASS TxtLoadOptions : public Aspose::Words::Loading::LoadOptions
{
    typedef TxtLoadOptions ThisType;
    typedef Aspose::Words::Loading::LoadOptions BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Allows to specify how numbered list items are recognized when document is imported from plain text format.
    /// The default value is true.
    /// 
    /// If this option is set to false, lists recognition algorithm detects list paragraphs, when list numbers ends with
    /// either dot, right bracket or bullet symbols (such as "•", "*", "-" or "o").
    /// 
    /// If this option is set to true, whitespaces are also used as list number delimiters:
    /// list recognition algorithm for Arabic style numbering (1., 1.1.2.) uses both whitespaces and dot (".") symbols.
    ASPOSE_WORDS_SHARED_API bool get_DetectNumberingWithWhitespaces() const;
    /// Setter for Aspose::Words::Loading::TxtLoadOptions::get_DetectNumberingWithWhitespaces
    ASPOSE_WORDS_SHARED_API void set_DetectNumberingWithWhitespaces(bool value);
    /// Gets preferred option of a trailing space handling.
    /// Default value is <see cref="Aspose::Words::Loading::TxtTrailingSpacesOptions::Trim">Trim</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Loading::TxtTrailingSpacesOptions get_TrailingSpacesOptions() const;
    /// Sets preferred option of a trailing space handling.
    /// Default value is <see cref="Aspose::Words::Loading::TxtTrailingSpacesOptions::Trim">Trim</see>.
    ASPOSE_WORDS_SHARED_API void set_TrailingSpacesOptions(Aspose::Words::Loading::TxtTrailingSpacesOptions value);
    /// Gets preferred option of a leading space handling.
    /// Default value is <see cref="Aspose::Words::Loading::TxtLeadingSpacesOptions::ConvertToIndent">ConvertToIndent</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Loading::TxtLeadingSpacesOptions get_LeadingSpacesOptions() const;
    /// Sets preferred option of a leading space handling.
    /// Default value is <see cref="Aspose::Words::Loading::TxtLeadingSpacesOptions::ConvertToIndent">ConvertToIndent</see>.
    ASPOSE_WORDS_SHARED_API void set_LeadingSpacesOptions(Aspose::Words::Loading::TxtLeadingSpacesOptions value);
    /// Gets a document direction.
    /// The default value is <see cref="Aspose::Words::Loading::DocumentDirection::LeftToRight">LeftToRight</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Loading::DocumentDirection get_DocumentDirection() const;
    /// Sets a document direction.
    /// The default value is <see cref="Aspose::Words::Loading::DocumentDirection::LeftToRight">LeftToRight</see>.
    ASPOSE_WORDS_SHARED_API void set_DocumentDirection(Aspose::Words::Loading::DocumentDirection value);

    /// Initializes a new instance of this class with default values.
    ASPOSE_WORDS_SHARED_API TxtLoadOptions();

protected:

private:

    __TypeStub<1,1,1,1>::type mField0;
    __TypeStub<4,4,4,4>::type mField1;
    __TypeStub<4,4,4,4>::type mField2;
    __TypeStub<4,4,4,4>::type mField3;

};

}
}
}
