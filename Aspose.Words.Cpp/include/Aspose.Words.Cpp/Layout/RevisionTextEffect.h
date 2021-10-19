//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Layout/RevisionTextEffect.h
#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Layout {

/// Allows to specify decoration effect for revisions of document text.
enum class ASPOSE_WORDS_SHARED_CLASS RevisionTextEffect
{
    /// Revised content has no special effects applied.
    /// This corresponds to <see cref="Aspose::Words::Layout::RevisionColor::NoHighlight">NoHighlight</see>.
    None,
    /// Revised content is highlighted with color only.
    Color,
    /// Revised content is made bold and colored.
    Bold,
    /// Revised content is made italic and colored.
    Italic,
    /// Revised content is underlined and colored.
    Underline,
    /// Revised content is double underlined and colored.
    DoubleUnderline,
    /// Revised content is stroked through and colored.
    StrikeThrough,
    /// Revised content is double stroked through and colored.
    DoubleStrikeThrough,
    /// Revised content is hidden.
    Hidden
};

}
}
}

template<>
struct EnumMetaInfo<Aspose::Words::Layout::RevisionTextEffect>
{
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::Layout::RevisionTextEffect, const char_t*>, 9>& values();
};
