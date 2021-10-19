//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/MailMerging/MailMergeRegionInfo.h
#pragma once

#include <system/string.h>
#include <cstdint>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
namespace Fields
{
class FieldMergeField;
class Field;
}

}
}
namespace System
{
namespace Collections
{
namespace Generic
{

template <typename> class IList;
}
}
}

namespace Aspose {

namespace Words {

namespace MailMerging {

/// Contains information about a mail merge region.
class ASPOSE_WORDS_SHARED_CLASS MailMergeRegionInfo : public System::Object
{
    typedef MailMergeRegionInfo ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Returns parent region info (null for top-level region).
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::MailMerging::MailMergeRegionInfo> get_ParentRegion() const;
    /// Returns a list of child regions.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Words::MailMerging::MailMergeRegionInfo>>> get_Regions() const;
    /// Returns a list of child fields.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Words::Fields::Field>>> get_Fields() const;
    /// Returns the name of region.
    ASPOSE_WORDS_SHARED_API System::String get_Name() const;
    /// Returns a start field for the region.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FieldMergeField> get_StartField() const;
    /// Returns an end field for the region.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FieldMergeField> get_EndField() const;
    /// Returns the nesting level for the region.
    ASPOSE_WORDS_SHARED_API int32_t get_Level() const;

protected:

    virtual ASPOSE_WORDS_SHARED_API ~MailMergeRegionInfo();

private:

    System::SharedPtr<System::Object> mField0;
    System::String mField1;
    System::SharedPtr<System::Object> mField2;
    System::SharedPtr<System::Object> mField3;

    __TypeStub<4,4,4,4>::type mField4;
    System::SharedPtr<System::Object> mField5;
    System::SharedPtr<System::Object> mField6;

};

}
}
}
