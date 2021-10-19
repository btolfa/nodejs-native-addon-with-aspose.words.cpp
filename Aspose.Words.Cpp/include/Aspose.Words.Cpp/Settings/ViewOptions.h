//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Settings/ViewOptions.h
#pragma once

#include <system/object.h>
#include <cstdint>

#include <Aspose.Words.Cpp/Settings/ZoomType.h>
#include <Aspose.Words.Cpp/Settings/ViewType.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Settings {

/// Provides various options that control how a document is shown in %Microsoft Word.
/// 
/// @sa Aspose::Words::Document
/// @sa Aspose::Words::Document::get_ViewOptions
class ASPOSE_WORDS_SHARED_CLASS ViewOptions : public System::Object
{
    typedef ViewOptions ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Controls the view mode in %Microsoft Word.
    /// 
    /// Although %Aspose.Words is able to read and write this option, its usage is application-specific.
    /// For example MS Word 2013 does not respect the value of this option.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Settings::ViewType get_ViewType() const;
    /// Setter for Aspose::Words::Settings::ViewOptions::get_ViewType
    ASPOSE_WORDS_SHARED_API void set_ViewType(Aspose::Words::Settings::ViewType value);
    /// Gets a zoom value based on the size of the window.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Settings::ZoomType get_ZoomType() const;
    /// Sets a zoom value based on the size of the window.
    ASPOSE_WORDS_SHARED_API void set_ZoomType(Aspose::Words::Settings::ZoomType value);
    /// Gets or sets the percentage (between 10 and 500) at which you want to view your document.
    /// 
    /// If value is 0 then this property uses 100 instead, else if value is less than 10 or greater
    /// than 500 this property throws.
    /// 
    /// Although %Aspose.Words is able to read and write this option, its usage is application-specific.
    /// For example MS Word 2013 does not respect the value of this option.
    ASPOSE_WORDS_SHARED_API int32_t get_ZoomPercent() const;
    /// Setter for Aspose::Words::Settings::ViewOptions::get_ZoomPercent
    ASPOSE_WORDS_SHARED_API void set_ZoomPercent(int32_t value);
    /// Turns off display of the space between the top of the text and the top edge of the page.
    ASPOSE_WORDS_SHARED_API bool get_DoNotDisplayPageBoundaries() const;
    /// Turns off display of the space between the top of the text and the top edge of the page.
    ASPOSE_WORDS_SHARED_API void set_DoNotDisplayPageBoundaries(bool value);
    /// Controls display of the background shape in print layout view.
    ASPOSE_WORDS_SHARED_API bool get_DisplayBackgroundShape() const;
    /// Controls display of the background shape in print layout view.
    ASPOSE_WORDS_SHARED_API void set_DisplayBackgroundShape(bool value);
    /// Specifies whether the document is in forms design mode.
    /// 
    /// Currently works only for documents in WordML format.
    ASPOSE_WORDS_SHARED_API bool get_FormsDesign() const;
    /// Specifies whether the document is in forms design mode.
    /// 
    /// Currently works only for documents in WordML format.
    ASPOSE_WORDS_SHARED_API void set_FormsDesign(bool value);

protected:

private:

    __TypeStub<4,4,4,4>::type mField0;
    __TypeStub<4,4,4,4>::type mField1;
    __TypeStub<4,4,4,4>::type mField2;
    __TypeStub<1,1,1,1>::type mField3;
    __TypeStub<1,1,1,1>::type mField4;
    __TypeStub<1,1,1,1>::type mField5;

};

}
}
}
