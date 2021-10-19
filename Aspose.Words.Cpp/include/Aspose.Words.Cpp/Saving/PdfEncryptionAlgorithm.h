//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Saving/PdfEncryptionAlgorithm.h
#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Saving {

/// Specifies the encryption algorithm to use for encrypting a PDF document.
enum class ASPOSE_WORDS_SHARED_CLASS PdfEncryptionAlgorithm
{
    /// RC4 encryption, key length of 40 bits.
    RC4_40,
    /// RC4 encryption, key length of 128 bits.
    RC4_128
};

}
}
}

template<>
struct EnumMetaInfo<Aspose::Words::Saving::PdfEncryptionAlgorithm>
{
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::Saving::PdfEncryptionAlgorithm, const char_t*>, 2>& values();
};
