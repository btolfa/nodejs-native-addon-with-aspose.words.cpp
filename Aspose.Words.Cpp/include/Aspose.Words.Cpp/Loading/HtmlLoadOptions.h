//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Loading/HtmlLoadOptions.h
#pragma once

#include <cstdint>

#include <Aspose.Words.Cpp/Loading/LoadOptions.h>
#include <Aspose.Words.Cpp/Loading/HtmlControlType.h>
#include <Aspose.Words.Cpp/LoadFormat.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
class String;
}

namespace Aspose {

namespace Words {

namespace Loading {

/// Allows to specify additional options when loading HTML document into a <see cref="Aspose::Words::Document">Document</see> object.
class ASPOSE_WORDS_SHARED_CLASS HtmlLoadOptions : public Aspose::Words::Loading::LoadOptions
{
    typedef HtmlLoadOptions ThisType;
    typedef Aspose::Words::Loading::LoadOptions BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets a value indicating whether to support VML images.
    ASPOSE_WORDS_SHARED_API bool get_SupportVml() const;
    /// Sets a value indicating whether to support VML images.
    ASPOSE_WORDS_SHARED_API void set_SupportVml(bool value);
    /// The number of milliseconds to wait before the web request times out. The default value is 100000 milliseconds
    /// (100 seconds).
    ASPOSE_WORDS_SHARED_API int32_t get_WebRequestTimeout() const;
    /// The number of milliseconds to wait before the web request times out. The default value is 100000 milliseconds
    /// (100 seconds).
    ASPOSE_WORDS_SHARED_API void set_WebRequestTimeout(int32_t value);
    /// Gets preferred type of document nodes that will represent imported \<input\> and \<select\> elements.
    /// Default value is <see cref="Aspose::Words::Loading::HtmlControlType::FormField">FormField</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Loading::HtmlControlType get_PreferredControlType() const;
    /// Sets preferred type of document nodes that will represent imported \<input\> and \<select\> elements.
    /// Default value is <see cref="Aspose::Words::Loading::HtmlControlType::FormField">FormField</see>.
    ASPOSE_WORDS_SHARED_API void set_PreferredControlType(Aspose::Words::Loading::HtmlControlType value);
    /// Gets a value indicating whether to ignore \<noscript\> HTML elements.
    /// Default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API bool get_IgnoreNoscriptElements() const;
    /// Sets a value indicating whether to ignore \<noscript\> HTML elements.
    /// Default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API void set_IgnoreNoscriptElements(bool value);
    /// Gets or sets a value indicating whether to convert loaded SVG images to the EMF format.
    /// Default value is <c>%false</c> and, if possible, loaded SVG images are stored as is without conversion.
    /// 
    /// Newer versions of MS Word support SVG images natively. If the MS Word version specified in load options supports
    /// SVG, %Aspose.Words will store SVG images as is without conversion. If SVG is not supported, loaded SVG images will be
    /// converted to the EMF format.
    /// 
    /// If, however, this option is set to <c>%true</c>, %Aspose.Words will convert loaded SVG images to EMF even if SVG
    /// images are supported by the specified version of MS Word.
    ASPOSE_WORDS_SHARED_API bool get_ConvertSvgToEmf() const;
    /// Setter for Aspose::Words::Loading::HtmlLoadOptions::get_ConvertSvgToEmf
    ASPOSE_WORDS_SHARED_API void set_ConvertSvgToEmf(bool value);

    /// Initializes a new instance of this class with default values.
    ASPOSE_WORDS_SHARED_API HtmlLoadOptions();
    /// A shortcut to initialize a new instance of this class with the specified password to load an encrypted document.
    /// 
    /// @param password The password to open an encrypted document. Can be null or empty string.
    ASPOSE_WORDS_SHARED_API HtmlLoadOptions(const System::String& password);
    /// A shortcut to initialize a new instance of this class with properties set to the specified values.
    /// 
    /// @param loadFormat The format of the document to be loaded.
    /// @param password The password to open an encrypted document. Can be null or empty string.
    /// @param baseUri The string that will be used to resolve relative URIs to absolute. Can be null or empty string.
    ASPOSE_WORDS_SHARED_API HtmlLoadOptions(Aspose::Words::LoadFormat loadFormat, const System::String& password, const System::String& baseUri);

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Loading::LoadOptions> Clone() override;

    virtual ASPOSE_WORDS_SHARED_API ~HtmlLoadOptions();

private:

    __TypeStub<1,1,1,1>::type mField0;
    __TypeStub<4,4,4,4>::type mField1;
    __TypeStub<1,1,1,1>::type mField2;
    __TypeStub<4,4,4,4>::type mField3;
    __TypeStub<1,1,1,1>::type mField4;
    __TypeStub<1,1,1,1>::type mField5;

};

}
}
}
