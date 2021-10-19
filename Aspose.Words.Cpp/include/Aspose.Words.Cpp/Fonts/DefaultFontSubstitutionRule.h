//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fonts/DefaultFontSubstitutionRule.h
#pragma once

#include <system/string.h>
#include <system/enum_helpers.h>

#include <Aspose.Words.Cpp/Fonts/FontSubstitutionRule.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
namespace Drawing
{
enum class FontStyle;
}
}
namespace Aspose
{
namespace Fonts
{
class ExternalFontCache;
namespace TrueType
{
class TTFont;
}
}
namespace Words
{
namespace Fonts
{
class FontInfo;

}
}
}

namespace Aspose {

namespace Words {

namespace Fonts {

/// Default font substitution rule.
class ASPOSE_WORDS_SHARED_CLASS DefaultFontSubstitutionRule : public Aspose::Words::Fonts::FontSubstitutionRule
{
    typedef DefaultFontSubstitutionRule ThisType;
    typedef Aspose::Words::Fonts::FontSubstitutionRule BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets the default font name.
    /// 
    /// The default value is 'Times New Roman'.
    ASPOSE_WORDS_SHARED_API System::String get_DefaultFontName();
    /// Sets the default font name.
    /// 
    /// The default value is 'Times New Roman'.
    ASPOSE_WORDS_SHARED_API void set_DefaultFontName(const System::String& value);

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Fonts::TrueType::TTFont> PerformSubstitutionCore(System::String , System::Drawing::FontStyle , System::SharedPtr<Aspose::Words::Fonts::FontInfo> , System::SharedPtr<Aspose::Fonts::ExternalFontCache> ) override;

private:

    System::String mField0;

};

}
}
}
