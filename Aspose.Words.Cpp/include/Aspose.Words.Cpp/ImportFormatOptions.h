//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/ImportFormatOptions.h
#pragma once

#include <system/object.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

/// Allows to specify various import options to format output.
class ASPOSE_WORDS_SHARED_CLASS ImportFormatOptions : public System::Object
{
    typedef ImportFormatOptions ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets or sets a boolean value that specifies how styles will be imported
    /// when they have equal names in source and destination documents.
    /// The default value is <c>%false</c>.
    /// 
    /// When this option is <b>%enabled</b>, the source style will be expanded into a direct attributes inside a
    /// destination document, if <see cref="Aspose::Words::ImportFormatMode::KeepSourceFormatting">KeepSourceFormatting</see> importing mode is used.
    /// 
    /// When this option is <b>%disabled</b>, the source style will be expanded only if it is numbered. Existing
    /// destination attributes will not be overridden, including lists.
    ASPOSE_WORDS_SHARED_API bool get_SmartStyleBehavior() const;
    /// Setter for Aspose::Words::ImportFormatOptions::get_SmartStyleBehavior
    ASPOSE_WORDS_SHARED_API void set_SmartStyleBehavior(bool value);
    /// Gets a boolean value that specifies how the numbering will be imported when it clashes in source and
    /// destination documents.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API bool get_KeepSourceNumbering() const;
    /// Sets a boolean value that specifies how the numbering will be imported when it clashes in source and
    /// destination documents.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API void set_KeepSourceNumbering(bool value);
    /// Gets a boolean value that specifies that source formatting of textboxes content ignored
    /// if <see cref="Aspose::Words::ImportFormatMode::KeepSourceFormatting">KeepSourceFormatting</see> mode is used.
    /// The default value is <c>%true</c>.
    ASPOSE_WORDS_SHARED_API bool get_IgnoreTextBoxes() const;
    /// Sets a boolean value that specifies that source formatting of textboxes content ignored
    /// if <see cref="Aspose::Words::ImportFormatMode::KeepSourceFormatting">KeepSourceFormatting</see> mode is used.
    /// The default value is <c>%true</c>.
    ASPOSE_WORDS_SHARED_API void set_IgnoreTextBoxes(bool value);
    /// Gets a boolean value that specifies that source formatting of headers/footers content ignored
    /// if <see cref="Aspose::Words::ImportFormatMode::KeepSourceFormatting">KeepSourceFormatting</see> mode is used.
    /// The default value is <c>%true</c>.
    ASPOSE_WORDS_SHARED_API bool get_IgnoreHeaderFooter() const;
    /// Sets a boolean value that specifies that source formatting of headers/footers content ignored
    /// if <see cref="Aspose::Words::ImportFormatMode::KeepSourceFormatting">KeepSourceFormatting</see> mode is used.
    /// The default value is <c>%true</c>.
    ASPOSE_WORDS_SHARED_API void set_IgnoreHeaderFooter(bool value);
    /// Gets a boolean value that specifies whether pasted lists will be merged with surrounding lists.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API bool get_MergePastedLists() const;
    /// Sets a boolean value that specifies whether pasted lists will be merged with surrounding lists.
    /// The default value is <c>%false</c>.
    ASPOSE_WORDS_SHARED_API void set_MergePastedLists(bool value);

    ASPOSE_WORDS_SHARED_API ImportFormatOptions();

protected:

private:

    __TypeStub<1,1,1,1>::type mField0;
    __TypeStub<1,1,1,1>::type mField1;
    __TypeStub<1,1,1,1>::type mField2;
    __TypeStub<1,1,1,1>::type mField3;
    __TypeStub<1,1,1,1>::type mField4;
    __TypeStub<1,1,1,1>::type mField5;

};

}
}
