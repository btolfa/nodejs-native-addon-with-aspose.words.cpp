//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fields/FieldPageRef.h
#pragma once

#include <system/shared_ptr.h>
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
class Section;
class Node;
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

/// Implements the PAGEREF field.
class ASPOSE_WORDS_SHARED_CLASS FieldPageRef : public Aspose::Words::Fields::Field, public Aspose::Words::Fields::IFieldCodeTokenInfoProvider
{
    typedef FieldPageRef ThisType;
    typedef Aspose::Words::Fields::Field BaseType;
    typedef Aspose::Words::Fields::IFieldCodeTokenInfoProvider BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets the name of the bookmark.
    ASPOSE_WORDS_SHARED_API System::String get_BookmarkName();
    /// Sets the name of the bookmark.
    ASPOSE_WORDS_SHARED_API void set_BookmarkName(const System::String& value);
    /// Gets whether to insert a hyperlink to the bookmarked paragraph.
    ASPOSE_WORDS_SHARED_API bool get_InsertHyperlink();
    /// Sets whether to insert a hyperlink to the bookmarked paragraph.
    ASPOSE_WORDS_SHARED_API void set_InsertHyperlink(bool value);
    /// Gets whether to insert a relative position of the bookmarked paragraph.
    ASPOSE_WORDS_SHARED_API bool get_InsertRelativePosition();
    /// Sets whether to insert a relative position of the bookmarked paragraph.
    ASPOSE_WORDS_SHARED_API void set_InsertRelativePosition(bool value);

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FieldUpdateAction> UpdateCore() override;
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Section> GetPageNumberFormatSection() override;

    virtual ASPOSE_WORDS_SHARED_API ~FieldPageRef();

private:

    System::SharedPtr<System::Object> mField0;

    Aspose::Words::Fields::FieldSwitchType GetSwitchType(System::String ) override;

};

}
}
}
