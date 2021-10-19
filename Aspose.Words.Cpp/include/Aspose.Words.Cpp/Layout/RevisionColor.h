//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Layout/RevisionColor.h
#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Layout {

/// Allows to specify color of document revisions.
enum class ASPOSE_WORDS_SHARED_CLASS RevisionColor
{
    /// Default.
    Auto,
    /// Represents 000000 color.
    Black,
    /// Represents 2e97d3 color.
    Blue,
    /// Represents 84a35b color.
    BrightGreen,
    /// Represents 376e96 color.
    DarkBlue,
    /// Represents 881824 color.
    DarkRed,
    /// Represents e09a2b color.
    DarkYellow,
    /// Represents a0a3a9 color.
    Gray25,
    /// Represents 50565e color.
    Gray50,
    /// Represents 2c6234 color.
    Green,
    /// Represents ce338f color.
    Pink,
    /// Represents b5082e color.
    Red,
    /// Represents 1b9cab color.
    Teal,
    /// Represents 3eafc2 color.
    Turquoise,
    /// Represents 633277 color.
    Violet,
    /// Represents ffffff color.
    White,
    /// Represents fad272 color.
    Yellow,
    /// No color is used to highlight revision changes.
    NoHighlight,
    /// Revisions of each author receive their own color for highlighting from a predfined set of hi-contrast colors.
    ByAuthor
};

}
}
}

template<>
struct EnumMetaInfo<Aspose::Words::Layout::RevisionColor>
{
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::Layout::RevisionColor, const char_t*>, 19>& values();
};
