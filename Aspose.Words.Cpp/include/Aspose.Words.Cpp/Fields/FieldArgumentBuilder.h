//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fields/FieldArgumentBuilder.h
#pragma once

#include <system/shared_ptr.h>

#include <Aspose.Words.Cpp/Fields/IFieldBuildingBlock.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
class DocumentBuilder;
namespace Fields
{
class FieldBuilder;
}
class Inline;
}
}
namespace System
{
class String;

}

namespace Aspose {

namespace Words {

namespace Fields {

/// Builds a complex field argument consisting of fields, nodes, and plain text.
class ASPOSE_WORDS_SHARED_CLASS FieldArgumentBuilder : public Aspose::Words::Fields::IFieldBuildingBlock
{
    typedef FieldArgumentBuilder ThisType;
    typedef Aspose::Words::Fields::IFieldBuildingBlock BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Initializes an instance of the <see cref="Aspose::Words::Fields::FieldArgumentBuilder">FieldArgumentBuilder</see> class.
    ASPOSE_WORDS_SHARED_API FieldArgumentBuilder();

    /// Adds a plain text to the argument.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FieldArgumentBuilder> AddText(const System::String& text);
    /// Adds a node to the argument.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FieldArgumentBuilder> AddNode(const System::SharedPtr<Aspose::Words::Inline>& node);
    /// Adds a field represented by a <see cref="Aspose::Words::Fields::FieldBuilder">FieldBuilder</see> to the argument.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FieldArgumentBuilder> AddField(const System::SharedPtr<Aspose::Words::Fields::FieldBuilder>& fieldBuilder);

protected:

    virtual ASPOSE_WORDS_SHARED_API ~FieldArgumentBuilder();

private:

    System::SharedPtr<System::Object> mField0;

    void BuildBlock(System::SharedPtr<Aspose::Words::DocumentBuilder> ) override;

};

}
}
}
