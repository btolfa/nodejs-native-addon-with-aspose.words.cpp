//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Saving/PdfDigitalSignatureHashAlgorithm.h
#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Saving {

/// Specifies a digital hash algorithm used by a digital signature.
enum class ASPOSE_WORDS_SHARED_CLASS PdfDigitalSignatureHashAlgorithm
{
    /// SHA-1 hash algorithm.
    Sha1,
    /// SHA-256 hash algorithm.
    Sha256,
    /// SHA-384 hash algorithm.
    Sha384,
    /// SHA-512 hash algorithm.
    Sha512,
    /// SHA-1 hash algorithm.
    Md5
};

}
}
}

template<>
struct EnumMetaInfo<Aspose::Words::Saving::PdfDigitalSignatureHashAlgorithm>
{
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::Saving::PdfDigitalSignatureHashAlgorithm, const char_t*>, 5>& values();
};
