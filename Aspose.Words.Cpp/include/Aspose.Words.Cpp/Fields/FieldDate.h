//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fields/FieldDate.h
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

/// Implements the DATE field.
class ASPOSE_WORDS_SHARED_CLASS FieldDate : public Aspose::Words::Fields::Field, public Aspose::Words::Fields::IFieldCodeTokenInfoProvider
{
    typedef FieldDate ThisType;
    typedef Aspose::Words::Fields::Field BaseType;
    typedef Aspose::Words::Fields::IFieldCodeTokenInfoProvider BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets whether to use the Hijri Lunar or Hebrew Lunar calendar.
    ASPOSE_WORDS_SHARED_API bool get_UseLunarCalendar();
    /// Sets whether to use the Hijri Lunar or Hebrew Lunar calendar.
    ASPOSE_WORDS_SHARED_API void set_UseLunarCalendar(bool value);
    /// Gets whether to use a format last used by the hosting application when inserting a new DATE field.
    ASPOSE_WORDS_SHARED_API bool get_UseLastFormat();
    /// Sets whether to use a format last used by the hosting application when inserting a new DATE field.
    ASPOSE_WORDS_SHARED_API void set_UseLastFormat(bool value);
    /// Gets whether to use the Saka Era calendar.
    ASPOSE_WORDS_SHARED_API bool get_UseSakaEraCalendar();
    /// Sets whether to use the Saka Era calendar.
    ASPOSE_WORDS_SHARED_API void set_UseSakaEraCalendar(bool value);
    /// Gets whether to use the Um-al-Qura calendar.
    ASPOSE_WORDS_SHARED_API bool get_UseUmAlQuraCalendar();
    /// Sets whether to use the Um-al-Qura calendar.
    ASPOSE_WORDS_SHARED_API void set_UseUmAlQuraCalendar(bool value);

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FieldUpdateAction> UpdateCore() override;
    ASPOSE_WORDS_SHARED_API System::String GetDefaultDateTimeFormat() override;

    virtual ASPOSE_WORDS_SHARED_API ~FieldDate();

private:

    Aspose::Words::Fields::FieldSwitchType GetSwitchType(System::String ) override;

};

}
}
}
