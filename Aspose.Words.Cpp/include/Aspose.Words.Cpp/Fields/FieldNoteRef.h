//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fields/FieldNoteRef.h
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

class NodeRange;
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

/// Implements the NOTEREF field.
class ASPOSE_WORDS_SHARED_CLASS FieldNoteRef : public Aspose::Words::Fields::Field, public Aspose::Words::Fields::IFieldCodeTokenInfoProvider
{
    typedef FieldNoteRef ThisType;
    typedef Aspose::Words::Fields::Field BaseType;
    typedef Aspose::Words::Fields::IFieldCodeTokenInfoProvider BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets the name of the bookmark.
    ASPOSE_WORDS_SHARED_API System::String get_BookmarkName();
    /// Sets the name of the bookmark.
    ASPOSE_WORDS_SHARED_API void set_BookmarkName(const System::String& value);
    /// Inserts the reference mark with the same character formatting as the Footnote Reference
    /// or Endnote Reference style.
    ASPOSE_WORDS_SHARED_API bool get_InsertReferenceMark();
    /// Inserts the reference mark with the same character formatting as the Footnote Reference
    /// or Endnote Reference style.
    ASPOSE_WORDS_SHARED_API void set_InsertReferenceMark(bool value);
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

    virtual ASPOSE_WORDS_SHARED_API ~FieldNoteRef();

private:

    Aspose::Words::Fields::FieldSwitchType GetSwitchType(System::String ) override;

};

}
}
}
