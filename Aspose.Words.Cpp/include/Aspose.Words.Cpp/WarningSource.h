//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/WarningSource.h
#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

/// Specifies the module that produces a warning during document loading or saving.
enum class ASPOSE_WORDS_SHARED_CLASS WarningSource
{
    /// The warning source is not specified.
    Unknown,
    /// Module that builds a document layout.
    Layout,
    /// Module that renders DrawingML shapes.
    DrawingML,
    /// Module that renders OfficeMath.
    OfficeMath,
    /// Module that renders ordinary shapes.
    Shapes,
    /// Module that renders metafiles.
    Metafile,
    /// Module that renders XPS.
    Xps,
    /// Module that renders PDF.
    Pdf,
    /// Module that renders images.
    Image,
    /// Module that reads/writes DOCX files.
    Docx,
    /// Module that reads/writes binary DOC files.
    Doc,
    /// Module that reads/writes plaintext files.
    Text,
    /// Module that reads/writes RTF files.
    Rtf,
    /// Module that reads/writes WML files.
    WordML,
    /// Common modules that are shared between DOCX/WML reader/writer modules.
    Nrx,
    /// Module that reads/writes ODT files.
    Odt,
    /// Module that reads/writes HTML/MHTML files.
    Html,
    /// Module that verifies model consistency and validity.
    Validator,
    /// Module that reads/writes Xaml files.
    Xaml,
    /// Module that reads Svm files.
    Svm,
    /// Module that reads W3C MathML files.
    MathML,
    /// Module that reads font files.
    Font,
    /// Module that reads SVG files.
    Svg,
    /// Module that reads/writes Markdown files.
    Markdown,
    /// Module that reads CHM files.
    Chm
};

}
}

template<>
struct EnumMetaInfo<Aspose::Words::WarningSource>
{
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::WarningSource, const char_t*>, 25>& values();
};
