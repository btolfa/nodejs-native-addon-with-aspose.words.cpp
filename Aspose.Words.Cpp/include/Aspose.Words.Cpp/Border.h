//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Border.h
#pragma once

#include <system/array.h>
#include <mutex>
#include <memory>
#include <cstdint>

#include <Aspose.Words.Cpp/InternableComplexAttr.h>
#include <Aspose.Words.Cpp/IComplexAttr.h>
#include <Aspose.Words.Cpp/LineStyle.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
namespace Drawing
{
class Color;
}
}

namespace Aspose {

namespace Words {

/// Represents a border of an object.
/// 
/// Borders can be applied to various document elements including paragraph,
/// run of text inside a paragraph or a table cell.
class ASPOSE_WORDS_SHARED_CLASS Border : public Aspose::Words::InternableComplexAttr, public Aspose::Words::IComplexAttr
{
    typedef Border ThisType;
    typedef Aspose::Words::InternableComplexAttr BaseType;
    typedef Aspose::Words::IComplexAttr BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets the border style.
    /// 
    /// If you set line style to none, then line width is automatically changed to zero.
    ASPOSE_WORDS_SHARED_API Aspose::Words::LineStyle get_LineStyle();
    /// Sets the border style.
    /// 
    /// If you set line style to none, then line width is automatically changed to zero.
    ASPOSE_WORDS_SHARED_API void set_LineStyle(Aspose::Words::LineStyle value);
    /// Gets or sets the border width in points.
    /// 
    /// If you set line width greater than zero when line style is none, the line style is
    /// automatically changed to single line.
    ASPOSE_WORDS_SHARED_API double get_LineWidth();
    /// Setter for Aspose::Words::Border::get_LineWidth
    ASPOSE_WORDS_SHARED_API void set_LineWidth(double value);
    /// Returns true if the LineStyle is not LineStyle.None.
    ASPOSE_WORDS_SHARED_API bool get_IsVisible();
    /// Gets the border color.
    ASPOSE_WORDS_SHARED_API System::Drawing::Color get_Color();
    /// Sets the border color.
    ASPOSE_WORDS_SHARED_API void set_Color(System::Drawing::Color value);
    /// Gets distance of the border from text or from the page edge in points.
    /// 
    /// @sa Aspose::Words::PageSetup::get_BorderDistanceFrom
    ASPOSE_WORDS_SHARED_API double get_DistanceFromText();
    /// Sets distance of the border from text or from the page edge in points.
    /// 
    /// @sa Aspose::Words::PageSetup::get_BorderDistanceFrom
    ASPOSE_WORDS_SHARED_API void set_DistanceFromText(double value);
    /// Gets or sets a value indicating whether the border has a shadow.
    /// 
    /// In %Microsoft Word, for a border to have a shadow, the borders on all four sides
    /// (left, top, right and bottom) should be of the same type, width, color and all should have
    /// the Shadow property set to true.
    ASPOSE_WORDS_SHARED_API bool get_Shadow();
    /// Setter for Aspose::Words::Border::get_Shadow
    ASPOSE_WORDS_SHARED_API void set_Shadow(bool value);

    /// Resets border properties to default values.
    ASPOSE_WORDS_SHARED_API void ClearFormatting();
    /// Determines whether the specified border is equal in value to the current border.
    ASPOSE_WORDS_SHARED_API bool Equals(const System::SharedPtr<Aspose::Words::Border>& rhs);
    /// Determines whether the specified object is equal in value to the current object.
    ASPOSE_WORDS_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// Serves as a hash function for this type.
    ASPOSE_WORDS_SHARED_API int32_t GetHashCode() const override;

protected:

    virtual ASPOSE_WORDS_SHARED_API ~Border();

private:

    bool get_IsInheritedComplexAttr() override;

    System::WeakPtr<System::Object> mField0;
    __TypeStub<4,4,4,4>::type mField1;
    __TypeStub<4,4,4,4>::type mField2;
    __TypeStub<4,4,4,4>::type mField3;
    System::SharedPtr<System::Object> mField4;
    __TypeStub<4,4,4,4>::type mField5;
    __TypeStub<1,1,1,1>::type mField6;
    __TypeStub<1,1,1,1>::type mField7;
    System::String mField8;
    System::String mField9;
    System::String mField10;
    __TypeStub<1,1,1,1>::type mField11;

    System::SharedPtr<Aspose::Words::IComplexAttr> DeepCloneComplexAttr() override;

protected:

};

}
}
