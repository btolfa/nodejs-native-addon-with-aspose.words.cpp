//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Loading/RtfLoadOptions.h
#pragma once

#include <Aspose.Words.Cpp/Loading/LoadOptions.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Loading {

/// Allows to specify additional options when loading <see cref="Aspose::Words::LoadFormat::Rtf">Rtf</see> document into a <see cref="Aspose::Words::Document">Document</see> object.
class ASPOSE_WORDS_SHARED_CLASS RtfLoadOptions : public Aspose::Words::Loading::LoadOptions
{
    typedef RtfLoadOptions ThisType;
    typedef Aspose::Words::Loading::LoadOptions BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// When set to true, <see cref="Aspose::Charset::CharsetDetector">CharsetDetector</see> will try to detect UTF8 characters,
    /// they will be preserved during import.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API bool get_RecognizeUtf8Text() const;
    /// When set to true, <see cref="Aspose::Charset::CharsetDetector">CharsetDetector</see> will try to detect UTF8 characters,
    /// they will be preserved during import.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API void set_RecognizeUtf8Text(bool value);

    /// Initializes a new instance of this class with default values.
    ASPOSE_WORDS_SHARED_API RtfLoadOptions();

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Loading::LoadOptions> Clone() override;

    virtual ASPOSE_WORDS_SHARED_API ~RtfLoadOptions();

private:

    __TypeStub<1,1,1,1>::type mField0;

};

}
}
}
