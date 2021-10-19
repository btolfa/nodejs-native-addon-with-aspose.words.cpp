//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Saving/TxtSaveOptions.h
#pragma once

#include <system/shared_ptr.h>
#include <cstdint>

#include <Aspose.Words.Cpp/Saving/TxtSaveOptionsBase.h>
#include <Aspose.Words.Cpp/SaveFormat.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
namespace Saving
{
class TxtListIndentation;
}
}
}

namespace Aspose {

namespace Words {

namespace Saving {

/// Can be used to specify additional options when saving a document into the <see cref="Aspose::Words::SaveFormat::Text">Text</see> format.
class ASPOSE_WORDS_SHARED_CLASS TxtSaveOptions : public Aspose::Words::Saving::TxtSaveOptionsBase
{
    typedef TxtSaveOptions ThisType;
    typedef Aspose::Words::Saving::TxtSaveOptionsBase BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Specifies the format in which the document will be saved if this save options object is used.
    /// Can only be <see cref="Aspose::Words::SaveFormat::Text">Text</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::SaveFormat get_SaveFormat() override;
    /// Specifies the format in which the document will be saved if this save options object is used.
    /// Can only be <see cref="Aspose::Words::SaveFormat::Text">Text</see>.
    ASPOSE_WORDS_SHARED_API void set_SaveFormat(Aspose::Words::SaveFormat value) override;
    /// Specifies whether the program should simplify list labels in case of
    /// complex label formatting not being adequately represented by plain text.
    /// If set to <b>%true</b>, numbered list labels are written in simple numeric format
    /// and itemized list labels as simple ASCII characters. The default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API bool get_SimplifyListLabels() const;
    /// Setter for Aspose::Words::Saving::TxtSaveOptions::get_SimplifyListLabels
    ASPOSE_WORDS_SHARED_API void set_SimplifyListLabels(bool value);
    /// Specifies whether to add bi-directional marks before each BiDi run when exporting in plain text format.
    /// The default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API bool get_AddBidiMarks() const;
    /// Specifies whether to add bi-directional marks before each BiDi run when exporting in plain text format.
    /// The default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API void set_AddBidiMarks(bool value);
    /// Gets a ListIndentation object that specifies how many and which character to use for indentation of list levels.
    /// By default it is zero count of character '\\0', that means no indentation.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Saving::TxtListIndentation> get_ListIndentation() const;
    /// Specifies whether the program should attempt to preserve layout of tables when saving in the plain text format.
    /// The default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API bool get_PreserveTableLayout() const;
    /// Specifies whether the program should attempt to preserve layout of tables when saving in the plain text format.
    /// The default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API void set_PreserveTableLayout(bool value);
    /// Gets an integer value that specifies the maximum number of characters per one line.
    /// The default value is 0, that means no limit.
    ASPOSE_WORDS_SHARED_API int32_t get_MaxCharactersPerLine() const;
    /// Sets an integer value that specifies the maximum number of characters per one line.
    /// The default value is 0, that means no limit.
    ASPOSE_WORDS_SHARED_API void set_MaxCharactersPerLine(int32_t value);

    ASPOSE_WORDS_SHARED_API TxtSaveOptions();

private:

    __TypeStub<4,4,4,4>::type mField0;
    __TypeStub<1,1,1,1>::type mField1;
    __TypeStub<1,1,1,1>::type mField2;
    __TypeStub<1,1,1,1>::type mField3;
    System::SharedPtr<System::Object> mField4;

};

}
}
}
