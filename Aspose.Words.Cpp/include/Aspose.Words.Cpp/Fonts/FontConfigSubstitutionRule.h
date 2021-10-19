//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fonts/FontConfigSubstitutionRule.h
#pragma once

#include <system/shared_ptr.h>
#include <system/enum_helpers.h>

#include <Aspose.Words.Cpp/Fonts/FontSubstitutionRule.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
namespace Drawing
{
enum class FontStyle;
}
class String;
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

/// Font config substitution rule.
/// 
/// This rule uses fontconfig utility on Linux (and other Unix-like) platforms to get the substitution
/// if the original font is not available.
/// 
/// If fontconfig utility is not available then this rule will be ignored.
class ASPOSE_WORDS_SHARED_CLASS FontConfigSubstitutionRule : public Aspose::Words::Fonts::FontSubstitutionRule
{
    typedef FontConfigSubstitutionRule ThisType;
    typedef Aspose::Words::Fonts::FontSubstitutionRule BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Specifies whether the rule is enabled or not.
    ASPOSE_WORDS_SHARED_API void set_Enabled(bool value) override;

    /// Check if fontconfig utility is available or not.
    ASPOSE_WORDS_SHARED_API bool IsFontConfigAvailable();
    /// Resets the cache of fontconfig calling results.
    ASPOSE_WORDS_SHARED_API void ResetCache();

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Fonts::TrueType::TTFont> PerformSubstitutionCore(System::String , System::Drawing::FontStyle , System::SharedPtr<Aspose::Words::Fonts::FontInfo> , System::SharedPtr<Aspose::Fonts::ExternalFontCache> ) override;

private:

    System::SharedPtr<System::Object> mField0;

};

}
}
}
