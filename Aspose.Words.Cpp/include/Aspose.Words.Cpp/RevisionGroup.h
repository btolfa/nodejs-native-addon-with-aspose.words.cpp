//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/RevisionGroup.h
#pragma once

#include <system/array.h>
#include <cstdint>

#include <Aspose.Words.Cpp/RevisionType.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

/// Represents a group of sequential <see cref="Aspose::Words::Revision">Revision</see> objects.
class ASPOSE_WORDS_SHARED_CLASS RevisionGroup : public System::Object
{
    typedef RevisionGroup ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Returns inserted/deleted/moved text or description of format change.
    ASPOSE_WORDS_SHARED_API System::String get_Text();
    /// Gets the author of this revision group.
    ASPOSE_WORDS_SHARED_API System::String get_Author();
    /// Gets the type of revisions included in this group.
    ASPOSE_WORDS_SHARED_API Aspose::Words::RevisionType get_RevisionType();

protected:

private:

    System::SharedPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;
    System::String mField2;
    System::SharedPtr<System::Object> mField3;

};

}
}
