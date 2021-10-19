//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/FileCorruptedException.h
#pragma once

#include <system/exceptions.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
namespace Runtime
{
namespace Serialization
{
class StreamingContext;
class SerializationInfo;
}
}
class String;
}
namespace Aspose
{
namespace Words
{
class FileFormatUtil;
namespace RW
{
namespace OfficeCrypto
{
class Ecma376AgileEncryption;
}
namespace Factories
{
class FileFormatDetector;
}
}
}
}

namespace Aspose {

namespace Words {

class Details_FileCorruptedException;
/// Thrown during document load, when the document appears to be corrupted and impossible to load.
using FileCorruptedException = System::ExceptionWrapper<Details_FileCorruptedException>;

/// Thrown during document load, when the document appears to be corrupted and impossible to load.
class ASPOSE_WORDS_SHARED_CLASS Details_FileCorruptedException : public System::Details_Exception
{
    typedef Details_FileCorruptedException ThisType;
    typedef System::Details_Exception BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

    friend class Aspose::Words::RW::Factories::FileFormatDetector;
    friend class Aspose::Words::FileFormatUtil;
    friend class Aspose::Words::RW::OfficeCrypto::Ecma376AgileEncryption;
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;

protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;

    Details_FileCorruptedException(const System::String& message);

    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_FileCorruptedException, CODEPORTING_ARGS(System::String message));

    Details_FileCorruptedException(const System::String& message, System::Exception innerException);

    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_FileCorruptedException, CODEPORTING_ARGS(System::String message, System::Exception innerException));

    Details_FileCorruptedException(System::Exception innerException);

    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_FileCorruptedException, CODEPORTING_ARGS(System::Exception innerException));

    Details_FileCorruptedException(const System::SharedPtr<System::Runtime::Serialization::SerializationInfo>& info, System::Runtime::Serialization::StreamingContext context);

    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_FileCorruptedException, CODEPORTING_ARGS(System::SharedPtr<System::Runtime::Serialization::SerializationInfo> info, System::Runtime::Serialization::StreamingContext context));

};

}
}
