//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/TextBox.h
#pragma once

#include <system/object.h>
#include <cstdint>

#include <Aspose.Words.Cpp/Drawing/TextBoxWrapMode.h>
#include <Aspose.Words.Cpp/Drawing/TextBoxAnchor.h>
#include <Aspose.Words.Cpp/Drawing/LayoutFlow.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
class String;
}
namespace Aspose
{

namespace Words
{

namespace Drawing
{

class Shape;
}

}
}

namespace Aspose {

namespace Words {

namespace Drawing {

/// Defines attributes that specify how a text is displayed inside a shape.
/// 
/// Use the <see cref="Aspose::Words::Drawing::Shape::get_TextBox">TextBox</see> property to access text properties of a shape.
/// You do not create instances of the <see cref="Aspose::Words::Drawing::TextBox">TextBox</see> class directly.
/// 
/// @sa Aspose::Words::Drawing::Shape::get_TextBox
class ASPOSE_WORDS_SHARED_CLASS TextBox : public System::Object
{
    typedef TextBox ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Specifies the inner left margin in points for a shape.
    /// 
    /// The default value is 1/10 inch.
    ASPOSE_WORDS_SHARED_API double get_InternalMarginLeft();
    /// Specifies the inner left margin in points for a shape.
    /// 
    /// The default value is 1/10 inch.
    ASPOSE_WORDS_SHARED_API void set_InternalMarginLeft(double value);
    /// Specifies the inner right margin in points for a shape.
    /// 
    /// The default value is 1/10 inch.
    ASPOSE_WORDS_SHARED_API double get_InternalMarginRight();
    /// Specifies the inner right margin in points for a shape.
    /// 
    /// The default value is 1/10 inch.
    ASPOSE_WORDS_SHARED_API void set_InternalMarginRight(double value);
    /// Specifies the inner top margin in points for a shape.
    /// 
    /// The default value is 1/20 inch.
    ASPOSE_WORDS_SHARED_API double get_InternalMarginTop();
    /// Specifies the inner top margin in points for a shape.
    /// 
    /// The default value is 1/20 inch.
    ASPOSE_WORDS_SHARED_API void set_InternalMarginTop(double value);
    /// Specifies the inner bottom margin in points for a shape.
    /// 
    /// The default value is 1/20 inch.
    ASPOSE_WORDS_SHARED_API double get_InternalMarginBottom();
    /// Specifies the inner bottom margin in points for a shape.
    /// 
    /// The default value is 1/20 inch.
    ASPOSE_WORDS_SHARED_API void set_InternalMarginBottom(double value);
    /// Determines whether %Microsoft Word will grow the shape to fit text.
    /// 
    /// The default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API bool get_FitShapeToText();
    /// Determines whether %Microsoft Word will grow the shape to fit text.
    /// 
    /// The default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API void set_FitShapeToText(bool value);
    /// Determines the flow of the text layout in a shape.
    /// 
    /// The default value is <see cref="Aspose::Words::Drawing::LayoutFlow::Horizontal">Horizontal</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::LayoutFlow get_LayoutFlow();
    /// Determines the flow of the text layout in a shape.
    /// 
    /// The default value is <see cref="Aspose::Words::Drawing::LayoutFlow::Horizontal">Horizontal</see>.
    ASPOSE_WORDS_SHARED_API void set_LayoutFlow(Aspose::Words::Drawing::LayoutFlow value);
    /// Determines how text wraps inside a shape.
    /// 
    /// The default value is <see cref="Aspose::Words::Drawing::TextBoxWrapMode::Square">Square</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::TextBoxWrapMode get_TextBoxWrapMode();
    /// Determines how text wraps inside a shape.
    /// 
    /// The default value is <see cref="Aspose::Words::Drawing::TextBoxWrapMode::Square">Square</see>.
    ASPOSE_WORDS_SHARED_API void set_TextBoxWrapMode(Aspose::Words::Drawing::TextBoxWrapMode value);
    /// Specifies the vertical alignment of the text within a shape.
    /// 
    /// The default value is <see cref="Aspose::Words::Drawing::TextBoxAnchor::Top">Top</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::TextBoxAnchor get_VerticalAnchor();
    /// Specifies the vertical alignment of the text within a shape.
    /// 
    /// The default value is <see cref="Aspose::Words::Drawing::TextBoxAnchor::Top">Top</see>.
    ASPOSE_WORDS_SHARED_API void set_VerticalAnchor(Aspose::Words::Drawing::TextBoxAnchor value);
    /// Returns a TextBox that represents the next TextBox in a sequence of shapes.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::TextBox> get_Next();
    /// Sets a TextBox that represents the next TextBox in a sequence of shapes.
    ASPOSE_WORDS_SHARED_API void set_Next(const System::SharedPtr<Aspose::Words::Drawing::TextBox>& value);
    /// Returns a TextBox that represents the previous TextBox in a sequence of shapes.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::TextBox> get_Previous();
    /// Gets a parent shape for the TextBox.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> get_Parent() const;

    /// Determines whether this TextBox can be linked to the target Textbox.
    ASPOSE_WORDS_SHARED_API bool IsValidLinkTarget(const System::SharedPtr<Aspose::Words::Drawing::TextBox>& target);
    /// Breaks the link to the next TextBox.
    ASPOSE_WORDS_SHARED_API void BreakForwardLink();

protected:

    virtual ASPOSE_WORDS_SHARED_API ~TextBox();

private:

    System::WeakPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;
    System::SharedPtr<System::Object> mField2;

};

}
}
}
