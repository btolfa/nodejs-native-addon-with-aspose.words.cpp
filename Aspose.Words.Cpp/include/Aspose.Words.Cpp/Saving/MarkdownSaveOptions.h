//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Saving/MarkdownSaveOptions.h
#pragma once

#include <system/string.h>

#include <Aspose.Words.Cpp/Saving/TxtSaveOptionsBase.h>
#include <Aspose.Words.Cpp/Saving/TableContentAlignment.h>
#include <Aspose.Words.Cpp/SaveFormat.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
namespace Saving
{
class IImageSavingCallback;
}

}
}

namespace Aspose {

namespace Words {

namespace Saving {

/// Class to specify additional options when saving a document into the <see cref="Aspose::Words::SaveFormat::Markdown">Markdown</see> format.
class ASPOSE_WORDS_SHARED_CLASS MarkdownSaveOptions : public Aspose::Words::Saving::TxtSaveOptionsBase
{
    typedef MarkdownSaveOptions ThisType;
    typedef Aspose::Words::Saving::TxtSaveOptionsBase BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Specifies the format in which the document will be saved if this save options object is used.
    /// Can only be <see cref="Aspose::Words::SaveFormat::Markdown">Markdown</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::SaveFormat get_SaveFormat() override;
    /// Specifies the format in which the document will be saved if this save options object is used.
    /// Can only be <see cref="Aspose::Words::SaveFormat::Markdown">Markdown</see>.
    ASPOSE_WORDS_SHARED_API void set_SaveFormat(Aspose::Words::SaveFormat value) override;
    /// Gets a value that specifies how to align contents in tables
    /// when exporting into the <see cref="Aspose::Words::SaveFormat::Markdown">Markdown</see> format.
    /// The default value is <see cref="Aspose::Words::Saving::TableContentAlignment::Auto">Auto</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Saving::TableContentAlignment get_TableContentAlignment() const;
    /// Sets a value that specifies how to align contents in tables
    /// when exporting into the <see cref="Aspose::Words::SaveFormat::Markdown">Markdown</see> format.
    /// The default value is <see cref="Aspose::Words::Saving::TableContentAlignment::Auto">Auto</see>.
    ASPOSE_WORDS_SHARED_API void set_TableContentAlignment(Aspose::Words::Saving::TableContentAlignment value);
    /// Specifies the physical folder where images are saved when exporting a document to
    /// the <see cref="Aspose::Words::SaveFormat::Markdown">Markdown</see> format. Default is an empty string.
    /// 
    /// When you save a <see cref="Aspose::Words::Document">Document</see> in <see cref="Aspose::Words::SaveFormat::Markdown">Markdown</see> format,
    /// %Aspose.Words needs to save all images embedded in the document as standalone files.
    /// <see cref="Aspose::Words::Saving::MarkdownSaveOptions::get_ImagesFolder">ImagesFolder</see> allows you to specify where the images will be saved.
    /// 
    /// If you save a document into a file and provide a file name, %Aspose.Words, by default, saves the images in
    /// the same folder where the document file is saved. Use <see cref="Aspose::Words::Saving::MarkdownSaveOptions::get_ImagesFolder">ImagesFolder</see> to override this behavior.
    /// 
    /// If you save a document into a stream, %Aspose.Words does not have a folder
    /// where to save the images, but still needs to save the images somewhere. In this case,
    /// you need to specify an accessible folder in the <see cref="Aspose::Words::Saving::MarkdownSaveOptions::get_ImagesFolder">ImagesFolder</see> property.
    /// 
    /// If the folder specified by <see cref="Aspose::Words::Saving::MarkdownSaveOptions::get_ImagesFolder">ImagesFolder</see> doesn't exist, it will be created automatically.
    ASPOSE_WORDS_SHARED_API System::String get_ImagesFolder() const;
    /// Setter for Aspose::Words::Saving::MarkdownSaveOptions::get_ImagesFolder
    ASPOSE_WORDS_SHARED_API void set_ImagesFolder(const System::String& value);
    /// Allows to control how images are saved when a document is saved to
    /// <see cref="Aspose::Words::SaveFormat::Markdown">Markdown</see> format.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Saving::IImageSavingCallback> get_ImageSavingCallback();
    /// Allows to control how images are saved when a document is saved to
    /// <see cref="Aspose::Words::SaveFormat::Markdown">Markdown</see> format.
    ASPOSE_WORDS_SHARED_API void set_ImageSavingCallback(const System::SharedPtr<Aspose::Words::Saving::IImageSavingCallback>& value);

    /// Initializes a new instance of this class that can be used to save a document
    /// in the <see cref="Aspose::Words::SaveFormat::Markdown">Markdown</see> format.
    ASPOSE_WORDS_SHARED_API MarkdownSaveOptions();

protected:

private:

    __TypeStub<4,4,4,4>::type mField0;
    System::SharedPtr<System::Object> mField1;
    System::String mField2;

};

}
}
}
