//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Saving/HeaderFooterBookmarksExportMode.h
#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Saving {

/// Specifies how bookmarks in headers/footers are exported.
enum class ASPOSE_WORDS_SHARED_CLASS HeaderFooterBookmarksExportMode
{
    /// Bookmarks in headers/footers are not exported.
    None,
    /// Only bookmark in first header/footer of the section is exported.
    First,
    /// Bookmarks in all headers/footers are exported.
    All
};

}
}
}

template<>
struct EnumMetaInfo<Aspose::Words::Saving::HeaderFooterBookmarksExportMode>
{
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::Saving::HeaderFooterBookmarksExportMode, const char_t*>, 3>& values();
};
