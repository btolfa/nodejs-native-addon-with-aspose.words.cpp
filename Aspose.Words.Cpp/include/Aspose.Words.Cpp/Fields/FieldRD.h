//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fields/FieldRD.h
#pragma once

#include <cstdint>

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
}
}
}

namespace Aspose {

namespace Words {

namespace Fields {

/// Implements the RD field.
class ASPOSE_WORDS_SHARED_CLASS FieldRD : public Aspose::Words::Fields::Field, public Aspose::Words::Fields::IFieldCodeTokenInfoProvider
{
    typedef FieldRD ThisType;
    typedef Aspose::Words::Fields::Field BaseType;
    typedef Aspose::Words::Fields::IFieldCodeTokenInfoProvider BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets the name of the file to include when generating a table of contents, table of authorities, or index.
    ASPOSE_WORDS_SHARED_API System::String get_FileName();
    /// Sets the name of the file to include when generating a table of contents, table of authorities, or index.
    ASPOSE_WORDS_SHARED_API void set_FileName(const System::String& value);
    /// Gets whether the path is relative to the current document.
    ASPOSE_WORDS_SHARED_API bool get_IsPathRelative();
    /// Sets whether the path is relative to the current document.
    ASPOSE_WORDS_SHARED_API void set_IsPathRelative(bool value);

private:

    Aspose::Words::Fields::FieldSwitchType GetSwitchType(System::String ) override;

};

}
}
}
