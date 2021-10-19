//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Replacing/FindReplaceOptions.h
#pragma once

#include <system/object.h>

#include <Aspose.Words.Cpp/Replacing/FindReplaceDirection.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{

class ParagraphFormat;
class Font;
namespace Replacing
{
class IReplacingCallback;

}
}
}

namespace Aspose {

namespace Words {

namespace Replacing {

/// Specifies options for find/replace operations.
class ASPOSE_WORDS_SHARED_CLASS FindReplaceOptions : public System::Object
{
    typedef FindReplaceOptions ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Text formatting applied to new content.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Font> get_ApplyFont() const;
    /// Paragraph formatting applied to new content.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::ParagraphFormat> get_ApplyParagraphFormat() const;
    /// Selects direction for replace. Default value is <see cref="Aspose::Words::Replacing::FindReplaceDirection::Forward">Forward</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Replacing::FindReplaceDirection get_Direction() const;
    /// Selects direction for replace. Default value is <see cref="Aspose::Words::Replacing::FindReplaceDirection::Forward">Forward</see>.
    ASPOSE_WORDS_SHARED_API void set_Direction(Aspose::Words::Replacing::FindReplaceDirection value);
    /// True indicates case-sensitive comparison, false indicates case-insensitive comparison.
    ASPOSE_WORDS_SHARED_API bool get_MatchCase() const;
    /// True indicates case-sensitive comparison, false indicates case-insensitive comparison.
    ASPOSE_WORDS_SHARED_API void set_MatchCase(bool value);
    /// True indicates the oldValue must be a standalone word.
    ASPOSE_WORDS_SHARED_API bool get_FindWholeWordsOnly() const;
    /// True indicates the oldValue must be a standalone word.
    ASPOSE_WORDS_SHARED_API void set_FindWholeWordsOnly(bool value);
    /// The user-defined method which is called before every replace occurrence.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Replacing::IReplacingCallback> get_ReplacingCallback() const;
    /// The user-defined method which is called before every replace occurrence.
    ASPOSE_WORDS_SHARED_API void set_ReplacingCallback(const System::SharedPtr<Aspose::Words::Replacing::IReplacingCallback>& value);
    /// True indicates that a text search is performed sequentially from top to bottom considering the text boxes.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API bool get_UseLegacyOrder() const;
    /// True indicates that a text search is performed sequentially from top to bottom considering the text boxes.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API void set_UseLegacyOrder(bool value);
    /// Gets a boolean value indicating either to ignore text inside delete revisions.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API bool get_IgnoreDeleted() const;
    /// Sets a boolean value indicating either to ignore text inside delete revisions.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API void set_IgnoreDeleted(bool value);
    /// Gets a boolean value indicating either to ignore text inside insert revisions.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API bool get_IgnoreInserted() const;
    /// Sets a boolean value indicating either to ignore text inside insert revisions.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API void set_IgnoreInserted(bool value);
    /// Gets a boolean value indicating either to ignore text inside fields.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API bool get_IgnoreFields() const;
    /// Sets a boolean value indicating either to ignore text inside fields.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API void set_IgnoreFields(bool value);
    /// Gets a boolean value indicating either to ignore footnotes.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API bool get_IgnoreFootnotes() const;
    /// Sets a boolean value indicating either to ignore footnotes.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API void set_IgnoreFootnotes(bool value);
    /// Gets a boolean value indicating whether to recognize and use substitutions within replacement patterns.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API bool get_UseSubstitutions() const;
    /// Sets a boolean value indicating whether to recognize and use substitutions within replacement patterns.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API void set_UseSubstitutions(bool value);
    /// Gets a boolean value indicating that old find/replace algorithm is used.
    ASPOSE_WORDS_SHARED_API bool get_LegacyMode() const;
    /// Sets a boolean value indicating that old find/replace algorithm is used.
    ASPOSE_WORDS_SHARED_API void set_LegacyMode(bool value);
    /// Gets a boolean value indicating either it is allowed to replace paragraph break
    /// when there is no next sibling paragraph.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API bool get_SmartParagraphBreakReplacement() const;
    /// Sets a boolean value indicating either it is allowed to replace paragraph break
    /// when there is no next sibling paragraph.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API void set_SmartParagraphBreakReplacement(bool value);

    ASPOSE_WORDS_SHARED_API FindReplaceOptions();
    ASPOSE_WORDS_SHARED_API FindReplaceOptions(Aspose::Words::Replacing::FindReplaceDirection direction);
    ASPOSE_WORDS_SHARED_API FindReplaceOptions(const System::SharedPtr<Aspose::Words::Replacing::IReplacingCallback>& replacingCallback);
    ASPOSE_WORDS_SHARED_API FindReplaceOptions(Aspose::Words::Replacing::FindReplaceDirection direction, const System::SharedPtr<Aspose::Words::Replacing::IReplacingCallback>& replacingCallback);

protected:

private:

    __TypeStub<1,1,1,1>::type mField0;
    __TypeStub<1,1,1,1>::type mField1;
    __TypeStub<4,4,4,4>::type mField2;
    System::SharedPtr<System::Object> mField3;
    System::SharedPtr<System::Object> mField4;
    System::SharedPtr<System::Object> mField5;
    System::SharedPtr<System::Object> mField6;
    __TypeStub<1,1,1,1>::type mField7;
    __TypeStub<1,1,1,1>::type mField8;
    System::SharedPtr<System::Object> mField9;
    __TypeStub<1,1,1,1>::type mField10;
    __TypeStub<1,1,1,1>::type mField11;
    __TypeStub<1,1,1,1>::type mField12;
    __TypeStub<1,1,1,1>::type mField13;
    __TypeStub<1,1,1,1>::type mField14;
    __TypeStub<1,1,1,1>::type mField15;

};

}
}
}
