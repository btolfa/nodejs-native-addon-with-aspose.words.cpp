//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/DigitalSignatures/DigitalSignatureUtil.h
#pragma once

#include <system/shared_ptr.h>
#include <system/io/std_stream_wrappers.h>
#include <iostream>
#include <cstdint>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
namespace IO
{
class MemoryStream;
class Stream;
}
class String;
}
namespace Aspose
{

namespace Words
{
namespace DigitalSignatures
{

class DigitalSignatureCollection;
class SignOptions;
class CertificateHolder;
}

}
}

namespace Aspose {

namespace Words {

namespace DigitalSignatures {

/// Provides methods for signing document.
/// 
/// Since digital signature works with file content rather than Document Object Model these methods are put into a separate class.
/// 
/// Supported formats are <see cref="Aspose::Words::LoadFormat::Doc">Doc</see> and <see cref="Aspose::Words::LoadFormat::Docx">Docx</see>.
class ASPOSE_WORDS_SHARED_CLASS DigitalSignatureUtil
{
    typedef DigitalSignatureUtil ThisType;

public:

    /// Signs source document using given <see cref="Aspose::Words::DigitalSignatures::CertificateHolder">CertificateHolder</see> and <see cref="Aspose::Words::DigitalSignatures::SignOptions">SignOptions</see>
    /// with digital signature and writes signed document to destination stream.
    /// Document should be either <see cref="Aspose::Words::LoadFormat::Doc">Doc</see> or <see cref="Aspose::Words::LoadFormat::Docx">Docx</see>.<b>%Output will be written to the start of stream and stream size will be updated with content length.</b>
    /// 
    /// @param srcStream The stream which contains the document to sign.
    /// @param dstStream The stream that signed document will be written to.
    /// @param certHolder <see cref="Aspose::Words::DigitalSignatures::CertificateHolder">CertificateHolder</see> object with certificate that used to sign file.
    ///     The certificate in holder MUST contain private keys.
    /// @param signOptions <see cref="Aspose::Words::DigitalSignatures::SignOptions">SignOptions</see> object with various signing options.
    static ASPOSE_WORDS_SHARED_API void Sign(const System::SharedPtr<System::IO::Stream>& srcStream, const System::SharedPtr<System::IO::Stream>& dstStream, const System::SharedPtr<Aspose::Words::DigitalSignatures::CertificateHolder>& certHolder, const System::SharedPtr<Aspose::Words::DigitalSignatures::SignOptions>& signOptions);
    /// Signs source document using given <see cref="Aspose::Words::DigitalSignatures::CertificateHolder">CertificateHolder</see> and <see cref="Aspose::Words::DigitalSignatures::SignOptions">SignOptions</see>
    /// with digital signature and writes signed document to destination file.
    /// Document should be either <see cref="Aspose::Words::LoadFormat::Doc">Doc</see> or <see cref="Aspose::Words::LoadFormat::Docx">Docx</see>.
    /// 
    /// @param srcFileName The file name of the document to sign.
    /// @param dstFileName The file name of the signed document output.
    /// @param certHolder <see cref="Aspose::Words::DigitalSignatures::CertificateHolder">CertificateHolder</see> object with certificate that used to sign file.
    ///     The certificate in holder MUST contain private keys.
    /// @param signOptions <see cref="Aspose::Words::DigitalSignatures::SignOptions">SignOptions</see> object with various signing options.
    static ASPOSE_WORDS_SHARED_API void Sign(const System::String& srcFileName, const System::String& dstFileName, const System::SharedPtr<Aspose::Words::DigitalSignatures::CertificateHolder>& certHolder, const System::SharedPtr<Aspose::Words::DigitalSignatures::SignOptions>& signOptions);
    /// Signs source document using given <see cref="Aspose::Words::DigitalSignatures::CertificateHolder">CertificateHolder</see> with digital signature
    /// and writes signed document to destination stream.
    /// Document should be either <see cref="Aspose::Words::LoadFormat::Doc">Doc</see> or <see cref="Aspose::Words::LoadFormat::Docx">Docx</see>.<b>%Output will be written to the start of stream and stream size will be updated with content length.</b>
    /// 
    /// @param srcStream The stream which contains the document to sign.
    /// @param dstStream The stream that signed document will be written to.
    /// @param certHolder <see cref="Aspose::Words::DigitalSignatures::CertificateHolder">CertificateHolder</see> object with certificate that used to sign file.
    ///     The certificate in holder MUST contain private keys.
    static ASPOSE_WORDS_SHARED_API void Sign(const System::SharedPtr<System::IO::Stream>& srcStream, const System::SharedPtr<System::IO::Stream>& dstStream, const System::SharedPtr<Aspose::Words::DigitalSignatures::CertificateHolder>& certHolder);
    /// Signs source document using given <see cref="Aspose::Words::DigitalSignatures::CertificateHolder">CertificateHolder</see> with digital signature
    /// and writes signed document to destination file.
    /// Document should be either <see cref="Aspose::Words::LoadFormat::Doc">Doc</see> or <see cref="Aspose::Words::LoadFormat::Docx">Docx</see>.
    /// 
    /// @param srcFileName The file name of the document to sign.
    /// @param dstFileName The file name of the signed document output.
    /// @param certHolder <see cref="Aspose::Words::DigitalSignatures::CertificateHolder">CertificateHolder</see> object with certificate that used to sign file.
    ///     The certificate in holder MUST contain private keys.
    static ASPOSE_WORDS_SHARED_API void Sign(const System::String& srcFileName, const System::String& dstFileName, const System::SharedPtr<Aspose::Words::DigitalSignatures::CertificateHolder>& certHolder);
    /// Removes all digital signatures from source file and writes unsigned file to destination file.
    static ASPOSE_WORDS_SHARED_API void RemoveAllSignatures(const System::String& srcFileName, const System::String& dstFileName);
    /// Removes all digital signatures from document in source stream and writes unsigned document to destination stream.
    /// <b>%Output will be written to the start of stream and stream size will be updated with content length.</b>
    static ASPOSE_WORDS_SHARED_API void RemoveAllSignatures(const System::SharedPtr<System::IO::Stream>& srcStream, const System::SharedPtr<System::IO::Stream>& dstStream);
    /// Loads digital signatures from document.
    /// 
    /// @param fileName Path to the document.
    /// 
    /// @return Collection of digital signatures. Returns empty collection if file is not signed.
    static ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::DigitalSignatures::DigitalSignatureCollection> LoadSignatures(const System::String& fileName);
    /// Loads digital signatures from document using stream.
    /// 
    /// @param stream Stream with the document.
    /// 
    /// @return Collection of digital signatures. Returns empty collection if file is not signed.
    static ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::DigitalSignatures::DigitalSignatureCollection> LoadSignatures(const System::SharedPtr<System::IO::Stream>& stream);

    template <typename CharType, typename Traits>
    static void Sign(std::basic_istream<CharType, Traits>& srcStream, std::basic_ostream<CharType, Traits>& dstStream, System::SharedPtr<Aspose::Words::DigitalSignatures::CertificateHolder> certHolder, System::SharedPtr<Aspose::Words::DigitalSignatures::SignOptions> signOptions)
    {
        auto srcStreamWrapper = System::IO::WrapSTDIOStream(srcStream);
        auto dstStreamWrapper = System::IO::WrapSTDIOStream(dstStream);
        Sign(srcStreamWrapper, dstStreamWrapper, certHolder, signOptions);
    }

    template <typename CharType, typename Traits>
    static void Sign(std::basic_istream<CharType, Traits>& srcStream, std::basic_ostream<CharType, Traits>& dstStream, System::SharedPtr<Aspose::Words::DigitalSignatures::CertificateHolder> certHolder)
    {
        auto srcStreamWrapper = System::IO::WrapSTDIOStream(srcStream);
        auto dstStreamWrapper = System::IO::WrapSTDIOStream(dstStream);
        Sign(srcStreamWrapper, dstStreamWrapper, certHolder);
    }

    template <typename CharType, typename Traits>
    static void RemoveAllSignatures(std::basic_istream<CharType, Traits>& srcStream, std::basic_ostream<CharType, Traits>& dstStream)
    {
        auto srcStreamWrapper = System::IO::WrapSTDIOStream(srcStream);
        auto dstStreamWrapper = System::IO::WrapSTDIOStream(dstStream);
        RemoveAllSignatures(srcStreamWrapper, dstStreamWrapper);
    }

    template <typename CharType, typename Traits>
    static System::SharedPtr<Aspose::Words::DigitalSignatures::DigitalSignatureCollection> LoadSignatures(std::basic_istream<CharType, Traits>& stream)
    {
        auto streamWrapper = System::IO::WrapSTDIOStream(stream);
        LoadSignatures(streamWrapper);
    }

protected:

private:

public:
    DigitalSignatureUtil() = delete;
};

}
}
}
