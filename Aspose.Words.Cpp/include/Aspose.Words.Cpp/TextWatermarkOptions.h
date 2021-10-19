//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/TextWatermarkOptions.h
#pragma once

#include <system/string.h>
#include <drawing/color.h>

#include <Aspose.Words.Cpp/WatermarkLayout.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

/// Contains options that can be specified when adding a watermark with text.
class ASPOSE_WORDS_SHARED_CLASS TextWatermarkOptions : public System::Object
{
    typedef TextWatermarkOptions ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets font family name. The default value is "Calibri".
    ASPOSE_WORDS_SHARED_API System::String get_FontFamily() const;
    /// Sets font family name. The default value is "Calibri".
    ASPOSE_WORDS_SHARED_API void set_FontFamily(const System::String& value);
    /// Gets font color. The default value is Color.Silver.
    ASPOSE_WORDS_SHARED_API System::Drawing::Color get_Color() const;
    /// Sets font color. The default value is Color.Silver.
    ASPOSE_WORDS_SHARED_API void set_Color(System::Drawing::Color value);
    /// Gets or sets a font size. The default value is 0 - auto.
    /// 
    /// Valid values range from 0 to 65.5 inclusive.
    /// 
    /// Auto font size means that the watermark will be scaled to its max width and max height relative to
    /// the page margins.
    /// 
    /// @exception System::ArgumentOutOfRangeException Throws when argument was out of the range of valid values.
    ASPOSE_WORDS_SHARED_API float get_FontSize() const;
    /// Setter for Aspose::Words::TextWatermarkOptions::get_FontSize
    ASPOSE_WORDS_SHARED_API void set_FontSize(float value);
    /// Gets a boolean value which is responsible for opacity of the watermark.
    /// The default value is True.
    ASPOSE_WORDS_SHARED_API bool get_IsSemitrasparent() const;
    /// Sets a boolean value which is responsible for opacity of the watermark.
    /// The default value is True.
    ASPOSE_WORDS_SHARED_API void set_IsSemitrasparent(bool value);
    /// Gets layout of the watermark. The default value is <see cref="Aspose::Words::WatermarkLayout::Diagonal">Diagonal</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::WatermarkLayout get_Layout() const;
    /// Sets layout of the watermark. The default value is <see cref="Aspose::Words::WatermarkLayout::Diagonal">Diagonal</see>.
    ASPOSE_WORDS_SHARED_API void set_Layout(Aspose::Words::WatermarkLayout value);

    ASPOSE_WORDS_SHARED_API TextWatermarkOptions();

protected:

private:

    System::String mField0;
    System::Drawing::Color mField1;
    __TypeStub<1,1,1,1>::type mField2;
    __TypeStub<4,4,4,4>::type mField3;
    __TypeStub<4,4,4,4>::type mField4;

};

}
}
