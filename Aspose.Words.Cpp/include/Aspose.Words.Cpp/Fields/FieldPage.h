//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fields/FieldPage.h
#pragma once

#include <Aspose.Words.Cpp/Fields/Field.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
class Section;
}
}

namespace Aspose {

namespace Words {

namespace Fields {

/// Implements the PAGE field.
class ASPOSE_WORDS_SHARED_CLASS FieldPage : public Aspose::Words::Fields::Field
{
    typedef FieldPage ThisType;
    typedef Aspose::Words::Fields::Field BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Section> GetPageNumberFormatSection() override;

};

}
}
}
