//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fields/FieldUnknown.h
#pragma once

#include <Aspose.Words.Cpp/Fields/IMergeFieldSurrogate.h>
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
enum class FieldType;
class FieldChar;
class FieldUpdateAction;
enum class FieldUpdateStage;
class FieldEnd;
class FieldSeparator;
class FieldStart;

}
}
}

namespace Aspose {

namespace Words {

namespace Fields {

/// Implements an unknown or unrecognized field.
class ASPOSE_WORDS_SHARED_CLASS FieldUnknown : public Aspose::Words::Fields::Field, public Aspose::Words::Fields::IMergeFieldSurrogate
{
    typedef FieldUnknown ThisType;
    typedef Aspose::Words::Fields::Field BaseType;
    typedef Aspose::Words::Fields::IMergeFieldSurrogate BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets the node that represents the start of the field.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FieldStart> get_Start() override;
    /// Gets the node that represents the field separator. Can be null.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FieldSeparator> get_Separator() override;
    /// Gets the node that represents the field end.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FieldEnd> get_End() override;

protected:

    ASPOSE_WORDS_SHARED_API Aspose::Words::Fields::FieldUpdateStage GetUpdateStage() override;
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FieldUpdateAction> UpdateCore() override;

    virtual ASPOSE_WORDS_SHARED_API ~FieldUnknown();

private:

    ASPOSE_WORDS_SHARED_API System::String GetMergeFieldName() override;
    ASPOSE_WORDS_SHARED_API bool CanWorkAsMergeField() override;
    ASPOSE_WORDS_SHARED_API bool IsMergeValueRequired() override;

};

}
}
}
