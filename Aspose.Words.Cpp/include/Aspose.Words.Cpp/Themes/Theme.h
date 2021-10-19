//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Themes/Theme.h
#pragma once

#include <system/string.h>
#include <system/enum_helpers.h>
#include <cstdint>

#include <Aspose.Words.Cpp/Drawing/Core/Dml/Themes/IThemeProvider.h>
#include <Aspose.Words.Cpp/Drawing/Core/Dml/IDmlExtensionListSource.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{

namespace Collections
{
template <typename> class StringToObjDictionary;
}

namespace Words
{

namespace Themes
{
class EffectStyle;
enum class ThemeColor;

class ThemeColors;
class ThemeFonts;
}

namespace Drawing
{
namespace Core
{
namespace Dml
{
namespace Outlines
{
class DmlOutline;
}
namespace Fills
{
class DmlFill;
}
namespace Colors
{
class DmlColor;
}
namespace Themes
{
enum class ThemeFontCore;
}
class DmlExtension;
}
}

}
}
}

namespace Aspose {

namespace Words {

namespace Themes {

/// Represents document Theme, and provides access to main theme parts including <see cref="Aspose::Words::Themes::Theme::get_MajorFonts">MajorFonts</see>, <see cref="Aspose::Words::Themes::Theme::get_MinorFonts">MinorFonts</see> and <see cref="Aspose::Words::Themes::Theme::get_Colors">Colors</see>
class ASPOSE_WORDS_SHARED_CLASS Theme : public Aspose::Words::Drawing::Core::Dml::Themes::IThemeProvider, public Aspose::Words::Drawing::Core::Dml::IDmlExtensionListSource
{
    typedef Theme ThisType;
    typedef Aspose::Words::Drawing::Core::Dml::Themes::IThemeProvider BaseType;
    typedef Aspose::Words::Drawing::Core::Dml::IDmlExtensionListSource BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Allows to specify the set of major fonts for different languages.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Themes::ThemeFonts> get_MajorFonts() const;
    /// Allows to specify the set of minor fonts for different languages.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Themes::ThemeFonts> get_MinorFonts() const;
    /// Allows to specify the set of theme colors for the document.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Themes::ThemeColors> get_Colors() const;

    ASPOSE_WORDS_SHARED_API Theme();

protected:

    virtual ASPOSE_WORDS_SHARED_API ~Theme();

private:

    System::SharedPtr<Aspose::Collections::StringToObjDictionary<System::SharedPtr<Aspose::Words::Drawing::Core::Dml::DmlExtension>>> get_Extensions() override;
    void set_Extensions(System::SharedPtr<Aspose::Collections::StringToObjDictionary<System::SharedPtr<Aspose::Words::Drawing::Core::Dml::DmlExtension>>> ) override;

    System::SharedPtr<System::Object> mField0;
    System::String mField1;
    System::SharedPtr<System::Object> mField2;
    System::SharedPtr<System::Object> mField3;
    System::SharedPtr<System::Object> mField4;
    System::String mField5;
    System::SharedPtr<System::Object> mField6;
    System::SharedPtr<System::Object> mField7;
    System::SharedPtr<System::Object> mField8;
    System::SharedPtr<System::Object> mField9;
    System::SharedPtr<System::Object> mField10;
    System::WeakPtr<System::Object> mField11;
    System::String mField12;

    System::String GetFontName(Aspose::Words::Drawing::Core::Dml::Themes::ThemeFontCore ) override;
    System::SharedPtr<Aspose::Words::Drawing::Core::Dml::Colors::DmlColor> GetThemeColor(Aspose::Words::Themes::ThemeColor ) override;
    System::SharedPtr<Aspose::Words::Drawing::Core::Dml::Fills::DmlFill> GetBackgroundFillStyle(int32_t ) override;
    System::SharedPtr<Aspose::Words::Drawing::Core::Dml::Fills::DmlFill> GetFillStyle(int32_t ) override;
    System::SharedPtr<Aspose::Words::Drawing::Core::Dml::Outlines::DmlOutline> GetLineStyle(int32_t ) override;
    System::SharedPtr<Aspose::Words::Themes::EffectStyle> GetEffectStyle(int32_t ) override;
    void OnChange() override;

};

}
}
}
