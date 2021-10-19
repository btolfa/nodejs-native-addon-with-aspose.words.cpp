//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/TextColumn.h
#pragma once

#include <system/object.h>
#include <cstdint>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

/// Represents a single text column. <b>%TextColumn</b> is a member of the <see cref="Aspose::Words::TextColumnCollection">TextColumnCollection</see> collection.
/// The <b>%TextColumns</b> collection includes all the columns in a section of a document.
/// 
/// <b>%TextColumn</b> objects are only used to specify columns with custom width and spacing. If you want
/// the columns in the document to be of equal width, set TextColumns.<see cref="Aspose::Words::TextColumnCollection::get_EvenlySpaced">EvenlySpaced</see> to <b>%true</b>.
/// 
/// When a new <b>%TextColumn</b> is created it has its width and spacing set to zero.
/// 
/// @sa Aspose::Words::TextColumnCollection
/// @sa Aspose::Words::PageSetup
/// @sa Aspose::Words::Section
class ASPOSE_WORDS_SHARED_CLASS TextColumn : public System::Object
{
    typedef TextColumn ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets the width of the text column in points.
    ASPOSE_WORDS_SHARED_API double get_Width();
    /// Sets the width of the text column in points.
    ASPOSE_WORDS_SHARED_API void set_Width(double value);
    /// Gets the space between this column and the next column in points. Not required for the last column.
    ASPOSE_WORDS_SHARED_API double get_SpaceAfter();
    /// Sets the space between this column and the next column in points. Not required for the last column.
    ASPOSE_WORDS_SHARED_API void set_SpaceAfter(double value);

protected:

private:

    __TypeStub<4,4,4,4>::type mField0;
    __TypeStub<4,4,4,4>::type mField1;

};

}
}
