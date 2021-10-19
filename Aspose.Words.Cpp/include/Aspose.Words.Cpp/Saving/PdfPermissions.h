//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Saving/PdfPermissions.h
#pragma once

#include <system/object_ext.h>
#include <system/enum_helpers.h>
#include <system/enum.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Saving {

/// Specifies the operations that are allowed to a user on an encrypted PDF document.
enum class ASPOSE_WORDS_SHARED_CLASS PdfPermissions
{
    /// Disallows all operations on the PDF document.
    /// This is the default value.
    DisallowAll = 0,
    /// Allows all operations on the PDF document.
    AllowAll = 0xffff,
    /// Allows copying or otherwise extracting text and graphics from the document, including extraction for accessibility purposes.
    ContentCopy = 0x10,
    /// Allows extract text and graphics in support of accessibility to disabled users or for other purposes.
    /// When using RC4 40-bit encryption, this option is ignored and accessibility is allowed whenever <see cref="Aspose::Words::Saving::PdfPermissions::ContentCopy">ContentCopy</see> is set.
    ContentCopyForAccessibility = 0x200,
    /// Allows modifying the document’s contents.
    ModifyContents = 0x8,
    /// Allows adding or modifying text annotations.
    /// When using RC4 40-bit encryption, this option also allows filling in form fields.
    ModifyAnnotations = 0x20,
    /// Allows filling in forms and signing the document.
    /// When using RC4 40-bit encryption, this option is ignored and filling in form is allowed whenever <see cref="Aspose::Words::Saving::PdfPermissions::ModifyAnnotations">ModifyAnnotations</see> is set.
    FillIn = 0x100,
    /// Allows assembling the document: inserting, rotating, or deleting pages and creating
    /// navigation elements such as bookmarks or thumbnail images.
    /// When using RC4 40-bit encryption, this option is ignored and document assembly is allowed when <see cref="Aspose::Words::Saving::PdfPermissions::ModifyContents">ModifyContents</see> is set.
    DocumentAssembly = 0x400,
    /// Allows printing the document.
    Printing = 0x4,
    /// Allows printing the document to the highest resolution possible.
    /// When using RC4 40-bit encryption, this option is ignored and high resolution printing is allowed when <see cref="Aspose::Words::Saving::PdfPermissions::Printing">Printing</see> is set.
    HighResolutionPrinting = 0x804
};

DECLARE_ENUM_OPERATORS(Aspose::Words::Saving::PdfPermissions);
DECLARE_USING_GLOBAL_OPERATORS

}
}
}

DECLARE_USING_ENUM_OPERATORS(Aspose::Words::Saving);
template<>
struct EnumMetaInfo<Aspose::Words::Saving::PdfPermissions>
{
    typedef void Flags;
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::Saving::PdfPermissions, const char_t*>, 10>& values();
};
