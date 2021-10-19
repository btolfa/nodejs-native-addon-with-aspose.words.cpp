//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/License.h
#pragma once

#include <system/object_ext.h>
#include <system/io/std_stream_wrappers.h>
#include <system/enum.h>
#include <iostream>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
namespace IO
{
class Stream;
}
}

namespace Aspose {

namespace Words {

/// LicenseState enumeration.
enum class LicenseState
{
    Evaluation,
    Licensed
};

/// Provides methods to license the component.
class ASPOSE_WORDS_SHARED_CLASS License : public System::Object
{
    typedef License ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Initializes a new instance of this class.
    ASPOSE_WORDS_SHARED_API License();

    /// Licenses the component.
    /// 
    /// Tries to find the license in the following locations:
    /// 
    /// 1. Explicit path.
    /// 
    /// 2. The folder that contains the %Aspose.Words library.
    /// 
    /// 3. The folder that contains the client's application.
    /// 
    /// @param licenseName Can be a full or short file name.
    ///     Use an empty string to switch to evaluation mode.
    ASPOSE_WORDS_SHARED_API void SetLicense(const System::String& licenseName);
    /// Licenses the component.
    /// 
    /// Use this method to load a license from a stream.
    /// 
    /// @param stream A stream that contains the license.
    ASPOSE_WORDS_SHARED_API void SetLicense(const System::SharedPtr<System::IO::Stream>& stream);

    template <typename CharType, typename Traits>
    void SetLicense(std::basic_istream<CharType, Traits>& stream)
    {
        auto streamWrapper = System::IO::WrapSTDIOStream(stream);
        SetLicense(streamWrapper);
    }

};

}
}

template<>
struct EnumMetaInfo<Aspose::Words::LicenseState>
{
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::LicenseState, const char_t*>, 2>& values();
};
