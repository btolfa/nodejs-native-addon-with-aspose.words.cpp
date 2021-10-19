//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/Ole/OleControl.h
#pragma once

#include <system/string.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Drawing {

namespace Ole {

/// Represents OLE ActiveX control.
class ASPOSE_WORDS_SHARED_CLASS OleControl : public System::Object
{
    typedef OleControl ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Returns true if the control is a <see cref="Aspose::Words::Drawing::Ole::Forms2OleControl">Forms2OleControl</see>.
    virtual ASPOSE_WORDS_SHARED_API bool get_IsForms2OleControl();
    /// Gets name of the ActiveX control.
    ASPOSE_WORDS_SHARED_API System::String get_Name() const;

protected:

    virtual ASPOSE_WORDS_SHARED_API bool get_IsHtmlOleControl();

    ASPOSE_WORDS_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OleControl, CODEPORTING_ARGS());

    ASPOSE_WORDS_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OleControl, CODEPORTING_ARGS(System::String name));

private:

    System::String mField0;

};

}
}
}
}
