//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fields/FieldAutoText.h
#pragma once

#include <cstdint>

#include <Aspose.Words.Cpp/Fields/IFieldAutoTextCode.h>
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
class FieldUpdateAction;
}
}
}

namespace Aspose {

namespace Words {

namespace Fields {

/// Implements the AUTOTEXT field.
class ASPOSE_WORDS_SHARED_CLASS FieldAutoText : public Aspose::Words::Fields::Field, public Aspose::Words::Fields::IFieldAutoTextCode
{
    typedef FieldAutoText ThisType;
    typedef Aspose::Words::Fields::Field BaseType;
    typedef Aspose::Words::Fields::IFieldAutoTextCode BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets the name of the AutoText entry.
    ASPOSE_WORDS_SHARED_API System::String get_EntryName() override;
    /// Sets the name of the AutoText entry.
    ASPOSE_WORDS_SHARED_API void set_EntryName(const System::String& value);

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FieldUpdateAction> UpdateCore() override;

    virtual ASPOSE_WORDS_SHARED_API ~FieldAutoText();

private:

};

}
}
}
