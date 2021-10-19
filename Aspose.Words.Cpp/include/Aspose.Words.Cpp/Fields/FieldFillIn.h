//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fields/FieldFillIn.h
#pragma once

#include <Aspose.Words.Cpp/Fields/IFieldCodeTokenInfoProvider.h>
#include <Aspose.Words.Cpp/Fields/Field.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
class String;
}
namespace Aspose
{
namespace Words
{
namespace Fields
{
enum class FieldSwitchType;
class FieldUpdateAction;
}
}
}

namespace Aspose {

namespace Words {

namespace Fields {

/// Implements the FILLIN field.
class ASPOSE_WORDS_SHARED_CLASS FieldFillIn : public Aspose::Words::Fields::Field, public Aspose::Words::Fields::IFieldCodeTokenInfoProvider
{
    typedef FieldFillIn ThisType;
    typedef Aspose::Words::Fields::Field BaseType;
    typedef Aspose::Words::Fields::IFieldCodeTokenInfoProvider BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets the prompt text (the title of the prompt window).
    ASPOSE_WORDS_SHARED_API System::String get_PromptText();
    /// Sets the prompt text (the title of the prompt window).
    ASPOSE_WORDS_SHARED_API void set_PromptText(const System::String& value);
    /// Gets whether the user response should be recieved once per a mail merge operation.
    ASPOSE_WORDS_SHARED_API bool get_PromptOnceOnMailMerge();
    /// Sets whether the user response should be recieved once per a mail merge operation.
    ASPOSE_WORDS_SHARED_API void set_PromptOnceOnMailMerge(bool value);
    /// Gets default user response (initial value contained in the prompt window).
    ASPOSE_WORDS_SHARED_API System::String get_DefaultResponse();
    /// Sets default user response (initial value contained in the prompt window).
    ASPOSE_WORDS_SHARED_API void set_DefaultResponse(const System::String& value);

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FieldUpdateAction> UpdateCore() override;

    virtual ASPOSE_WORDS_SHARED_API ~FieldFillIn();

private:

    Aspose::Words::Fields::FieldSwitchType GetSwitchType(System::String ) override;

};

}
}
}
