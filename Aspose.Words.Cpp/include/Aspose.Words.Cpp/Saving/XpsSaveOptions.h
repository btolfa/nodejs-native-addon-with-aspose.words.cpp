//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Saving/XpsSaveOptions.h
#pragma once

#include <Aspose.Words.Cpp/Saving/FixedPageSaveOptions.h>
#include <Aspose.Words.Cpp/SaveFormat.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{

namespace Words
{

namespace Saving
{
class OutlineOptions;
}

}
}

namespace Aspose {

namespace Words {

namespace Saving {

/// Can be used to specify additional options when saving a document into the <see cref="Aspose::Words::SaveFormat::Xps">Xps</see> format.
class ASPOSE_WORDS_SHARED_CLASS XpsSaveOptions : public Aspose::Words::Saving::FixedPageSaveOptions
{
    typedef XpsSaveOptions ThisType;
    typedef Aspose::Words::Saving::FixedPageSaveOptions BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Specifies the format in which the document will be saved if this save options object is used.
    /// Can only be <see cref="Aspose::Words::SaveFormat::Xps">Xps</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::SaveFormat get_SaveFormat() override;
    /// Specifies the format in which the document will be saved if this save options object is used.
    /// Can only be <see cref="Aspose::Words::SaveFormat::Xps">Xps</see>.
    ASPOSE_WORDS_SHARED_API void set_SaveFormat(Aspose::Words::SaveFormat value) override;
    /// Allows to specify outline options.
    /// 
    /// Note that ExpandedOutlineLevels option will not work when saving to XPS.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Saving::OutlineOptions> get_OutlineOptions() const;
    /// Gets or sets a boolean value indicating whether the document should be saved using a booklet printing layout,
    /// if it is specified via <see cref="Aspose::Words::PageSetup::get_MultiplePages">MultiplePages</see>.
    /// 
    /// If this option is specified, <see cref="Aspose::Words::Saving::FixedPageSaveOptions::get_PageSet">PageSet</see> is ignored when saving.
    /// This behavior matches MS Word.
    /// If book fold printing settings are not specified in page setup, this option will have no effect.
    ASPOSE_WORDS_SHARED_API bool get_UseBookFoldPrintingSettings() const;
    /// Setter for Aspose::Words::Saving::XpsSaveOptions::get_UseBookFoldPrintingSettings
    ASPOSE_WORDS_SHARED_API void set_UseBookFoldPrintingSettings(bool value);

    /// Initializes a new instance of this class that can be used to save a document
    /// in the <see cref="Aspose::Words::SaveFormat::Xps">Xps</see> format.
    ASPOSE_WORDS_SHARED_API XpsSaveOptions();
    /// Initializes a new instance of this class that can be used to save a document
    /// in the <see cref="Aspose::Words::SaveFormat::Xps">Xps</see> or <see cref="Aspose::Words::SaveFormat::OpenXps">OpenXps</see> format.
    ASPOSE_WORDS_SHARED_API XpsSaveOptions(Aspose::Words::SaveFormat saveFormat);

protected:

    ASPOSE_WORDS_SHARED_API bool get_CreateOutlinesForHeadingsInTables() override;
    ASPOSE_WORDS_SHARED_API bool get_IsShapingSupported() override;

private:

    __TypeStub<4,4,4,4>::type mField0;
    System::SharedPtr<System::Object> mField1;
    __TypeStub<1,1,1,1>::type mField2;

};

}
}
}
