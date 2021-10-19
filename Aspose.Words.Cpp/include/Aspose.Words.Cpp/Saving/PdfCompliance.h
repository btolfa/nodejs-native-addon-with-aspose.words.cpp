//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Saving/PdfCompliance.h
#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Saving {

/// Specifies the PDF standards compliance level.
enum class ASPOSE_WORDS_SHARED_CLASS PdfCompliance
{
    /// The output file will comply with the PDF 1.7 standard.
    Pdf17,
    /// @deprecated PDF version 1.5 is outdated and will be removed in future releases. Please, use the latest PDF version 1.7.
    /// The output file will comply with the PDF 1.5 standard.
    Pdf15 [[deprecated("PDF version 1.5 is outdated and will be removed in future releases. Please, use the latest PDF version 1.7.")]],
    /// The output file will comply with the PDF/A-1a standard.
    /// This level includes all the requirements of PDF/A-1b and additionally requires
    /// that document structure be included (also known as being "tagged"),
    /// with the objective of ensuring that document content can be searched and repurposed.
    /// @deprecated PDF/A-1 have significant limitations which are removed in PDF/A-2. Please, use the PDF/A-2a compliance instead of PDF/A-1a.
    PdfA1a [[deprecated("PDF/A-1 have significant limitations which are removed in PDF/A-2. Please, use the PDF/A-2a compliance instead of PDF/A-1a.")]],
    /// The output file will comply with the PDF/A-1b standard.
    /// PDF/A-1b has the objective of ensuring reliable reproduction of the
    /// visual appearance of the document.
    /// @deprecated PDF/A-1 have significant limitations which are removed in PDF/A-2. Please, use the PDF/A-2u compliance instead of PDF/A-1b.
    PdfA1b [[deprecated("PDF/A-1 have significant limitations which are removed in PDF/A-2. Please, use the PDF/A-2u compliance instead of PDF/A-1b.")]],
    /// The output file will comply with the PDF/A-2a standard.
    /// This level includes all the requirements of PDF/A-2u and additionally requires
    /// that document structure be included (also known as being "tagged"),
    /// with the objective of ensuring that document content can be searched and repurposed.
    PdfA2a,
    /// The output file will comply with the PDF/A-2u standard.
    /// PDF/A-2u has the objective of preserving document static visual appearance over time, independent of the tools
    /// and systems used for creating, storing or rendering the files. Additionally any text contained in the document
    /// can be reliably extracted as a series of Unicode codepoints.
    PdfA2u
};

}
}
}

template<>
struct EnumMetaInfo<Aspose::Words::Saving::PdfCompliance>
{
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::Saving::PdfCompliance, const char_t*>, 6>& values();
};
