//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Saving/OoxmlSaveOptions.h
#pragma once

#include <system/string.h>

#include <Aspose.Words.Cpp/Saving/SaveOptions.h>
#include <Aspose.Words.Cpp/Saving/OoxmlCompliance.h>
#include <Aspose.Words.Cpp/Saving/CompressionLevel.h>
#include <Aspose.Words.Cpp/SaveFormat.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Saving {

/// Can be used to specify additional options when saving a document into the <see cref="Aspose::Words::SaveFormat::Docx">Docx</see>,
/// <see cref="Aspose::Words::SaveFormat::Docm">Docm</see>, <see cref="Aspose::Words::SaveFormat::Dotx">Dotx</see>, <see cref="Aspose::Words::SaveFormat::Dotm">Dotm</see> or
/// <see cref="Aspose::Words::SaveFormat::FlatOpc">FlatOpc</see> format.
class ASPOSE_WORDS_SHARED_CLASS OoxmlSaveOptions : public Aspose::Words::Saving::SaveOptions
{
    typedef OoxmlSaveOptions ThisType;
    typedef Aspose::Words::Saving::SaveOptions BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Specifies the format in which the document will be saved if this save options object is used.
    /// Can be <see cref="Aspose::Words::SaveFormat::Docx">Docx</see>, <see cref="Aspose::Words::SaveFormat::Docm">Docm</see>,
    /// <see cref="Aspose::Words::SaveFormat::Dotx">Dotx</see>, <see cref="Aspose::Words::SaveFormat::Dotm">Dotm</see> or <see cref="Aspose::Words::SaveFormat::FlatOpc">FlatOpc</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::SaveFormat get_SaveFormat() override;
    /// Specifies the format in which the document will be saved if this save options object is used.
    /// Can be <see cref="Aspose::Words::SaveFormat::Docx">Docx</see>, <see cref="Aspose::Words::SaveFormat::Docm">Docm</see>,
    /// <see cref="Aspose::Words::SaveFormat::Dotx">Dotx</see>, <see cref="Aspose::Words::SaveFormat::Dotm">Dotm</see> or <see cref="Aspose::Words::SaveFormat::FlatOpc">FlatOpc</see>.
    ASPOSE_WORDS_SHARED_API void set_SaveFormat(Aspose::Words::SaveFormat value) override;
    /// Gets/sets a password to encrypt document using ECMA376 Standard encryption algorithm.
    /// 
    /// In order to save document without encryption this property should be null or empty string.
    ASPOSE_WORDS_SHARED_API System::String get_Password() const;
    /// Gets/sets a password to encrypt document using ECMA376 Standard encryption algorithm.
    /// 
    /// In order to save document without encryption this property should be null or empty string.
    ASPOSE_WORDS_SHARED_API void set_Password(const System::String& value);
    /// Specifies the OOXML version for the output document.
    /// The default value is <see cref="Aspose::Words::Saving::OoxmlCompliance::Ecma376_2006">Ecma376_2006</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Saving::OoxmlCompliance get_Compliance();
    /// Specifies the OOXML version for the output document.
    /// The default value is <see cref="Aspose::Words::Saving::OoxmlCompliance::Ecma376_2006">Ecma376_2006</see>.
    ASPOSE_WORDS_SHARED_API void set_Compliance(Aspose::Words::Saving::OoxmlCompliance value);
    /// Keeps original representation of legacy control characters.
    ASPOSE_WORDS_SHARED_API bool get_KeepLegacyControlChars() const;
    /// Keeps original representation of legacy control characters.
    ASPOSE_WORDS_SHARED_API void set_KeepLegacyControlChars(bool value);
    /// Specifies the compression level used to save document.
    /// The default value is <see cref="Aspose::Words::Saving::CompressionLevel::Normal">Normal</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Saving::CompressionLevel get_CompressionLevel() const;
    /// Specifies the compression level used to save document.
    /// The default value is <see cref="Aspose::Words::Saving::CompressionLevel::Normal">Normal</see>.
    ASPOSE_WORDS_SHARED_API void set_CompressionLevel(Aspose::Words::Saving::CompressionLevel value);

    /// Initializes a new instance of this class that can be used to save a document in the <see cref="Aspose::Words::SaveFormat::Docx">Docx</see> format.
    ASPOSE_WORDS_SHARED_API OoxmlSaveOptions();
    /// Initializes a new instance of this class that can be used to save a document in the <see cref="Aspose::Words::SaveFormat::Docx">Docx</see>,
    /// <see cref="Aspose::Words::SaveFormat::Docm">Docm</see>, <see cref="Aspose::Words::SaveFormat::Dotx">Dotx</see>, <see cref="Aspose::Words::SaveFormat::Dotm">Dotm</see> or
    /// <see cref="Aspose::Words::SaveFormat::FlatOpc">FlatOpc</see> format.
    /// 
    /// @param saveFormat Can be <see cref="Aspose::Words::SaveFormat::Docx">Docx</see>, <see cref="Aspose::Words::SaveFormat::Docm">Docm</see>,
    ///     <see cref="Aspose::Words::SaveFormat::Dotx">Dotx</see>, <see cref="Aspose::Words::SaveFormat::Dotm">Dotm</see> or <see cref="Aspose::Words::SaveFormat::FlatOpc">FlatOpc</see>.
    ASPOSE_WORDS_SHARED_API OoxmlSaveOptions(Aspose::Words::SaveFormat saveFormat);

protected:

    ASPOSE_WORDS_SHARED_API void SetTestMode() override;

private:

    __TypeStub<1,1,1,1>::type mField0;
    __TypeStub<4,4,4,4>::type mField1;
    __TypeStub<4,4,4,4>::type mField2;
    __TypeStub<1,1,1,1>::type mField3;
    __TypeStub<1,1,1,1>::type mField4;
    __TypeStub<1,1,1,1>::type mField5;
    __TypeStub<1,1,1,1>::type mField6;
    __TypeStub<1,1,1,1>::type mField7;
    __TypeStub<1,1,1,1>::type mField8;
    __TypeStub<4,4,4,4>::type mField9;
    System::String mField10;

};

}
}
}
