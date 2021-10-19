//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/IncorrectPasswordException.h
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
namespace RW
{
namespace Odt
{
namespace Reader
{
class OdtReader;
}
}
namespace OfficeCrypto
{
class Ecma376StandardEncryption;
class Ecma376AgileEncryption;
class OdtEncryption;
}
namespace Doc
{
namespace Reader
{
class DocReaderCore;
}
namespace Decrypt
{
class RC4Decryptor;
class XorDecryptor;
}
}
}
}
}

namespace Aspose {

namespace Words {

class Details_IncorrectPasswordException;
/// Thrown if a document is encrypted with a password and the password specified when opening the document is incorrect or missing.
using IncorrectPasswordException = System::ExceptionWrapper<Details_IncorrectPasswordException>;

/// Thrown if a document is encrypted with a password and the password specified when opening the document is incorrect or missing.
class ASPOSE_WORDS_SHARED_CLASS Details_IncorrectPasswordException : public System::Details_Exception
{
    typedef Details_IncorrectPasswordException ThisType;
    typedef System::Details_Exception BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

    friend class Aspose::Words::RW::OfficeCrypto::OdtEncryption;
    friend class Aspose::Words::RW::Doc::Decrypt::XorDecryptor;
    friend class Aspose::Words::RW::OfficeCrypto::Ecma376AgileEncryption;
    friend class Aspose::Words::RW::OfficeCrypto::Ecma376StandardEncryption;
    friend class Aspose::Words::RW::Odt::Reader::OdtReader;
    friend class Aspose::Words::RW::Doc::Decrypt::RC4Decryptor;
    friend class Aspose::Words::RW::Doc::Reader::DocReaderCore;
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;

protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;

    Details_IncorrectPasswordException(const System::String& message);

    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_IncorrectPasswordException, CODEPORTING_ARGS(System::String message));

    Details_IncorrectPasswordException(const System::SharedPtr<System::Runtime::Serialization::SerializationInfo>& info, System::Runtime::Serialization::StreamingContext context);

    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_IncorrectPasswordException, CODEPORTING_ARGS(System::SharedPtr<System::Runtime::Serialization::SerializationInfo> info, System::Runtime::Serialization::StreamingContext context));

};

}
}
