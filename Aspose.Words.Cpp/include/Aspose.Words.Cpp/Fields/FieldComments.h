//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fields/FieldComments.h
#pragma once

#include <cstdint>

#include <Aspose.Words.Cpp/Fields/IFieldInfoResultProvider.h>
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
class Document;
namespace Fields
{
class IFieldCode;
class FieldUpdateAction;

namespace Expressions
{
class Constant;
}
}
}
}

namespace Aspose {

namespace Words {

namespace Fields {

/// Implements the COMMENTS field.
class ASPOSE_WORDS_SHARED_CLASS FieldComments : public Aspose::Words::Fields::Field
{
    typedef FieldComments ThisType;
    typedef Aspose::Words::Fields::Field BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

private:

public:

    /// Gets the text of the comments.
    ASPOSE_WORDS_SHARED_API System::String get_Text();
    /// Sets the text of the comments.
    ASPOSE_WORDS_SHARED_API void set_Text(const System::String& value);

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FieldUpdateAction> UpdateCore() override;

    virtual ASPOSE_WORDS_SHARED_API ~FieldComments();

private:

private:

};

}
}
}
