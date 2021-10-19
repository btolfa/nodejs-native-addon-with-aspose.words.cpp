//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/Ole/Forms2OleControl.h
#pragma once

#include <system/shared_ptr.h>
#include <system/enum_helpers.h>
#include <cstdint>

#include <Aspose.Words.Cpp/Drawing/Ole/OleControl.h>
#include <Aspose.Words.Cpp/Drawing/Ole/Forms2OleControlType.h>
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
namespace Ole
{
class Forms2OleControlCollection;
}
}
}
}

namespace Aspose {

namespace Words {

namespace Drawing {

namespace Ole {

/// Represents %Microsoft Forms 2.0 OLE control.
class ASPOSE_WORDS_SHARED_CLASS Forms2OleControl : public Aspose::Words::Drawing::Ole::OleControl
{
    typedef Forms2OleControl ThisType;
    typedef Aspose::Words::Drawing::Ole::OleControl BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets Caption property of control. Default value is an empty string.
    ASPOSE_WORDS_SHARED_API System::String get_Caption();
    /// Gets underlying Value property which often represents control state.
    /// For example checked option button has '1' value while unchecked has '0'.
    /// Default value is an empty string.
    ASPOSE_WORDS_SHARED_API System::String get_Value();
    /// Returns true if control is in enabled state.
    ASPOSE_WORDS_SHARED_API bool get_Enabled();
    /// Gets collection of immediate child controls.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Ole::Forms2OleControlCollection> get_ChildNodes();
    /// Gets type of Forms 2.0 control.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::Ole::Forms2OleControlType get_Type();
    ASPOSE_WORDS_SHARED_API bool get_IsForms2OleControl() override;

    ASPOSE_WORDS_SHARED_API Forms2OleControl();

protected:

    System::SharedPtr<System::Object> mField0;

    virtual Aspose::Words::Drawing::Ole::Forms2OleControlType GetControlType() = 0;

private:

};

}
}
}
}
