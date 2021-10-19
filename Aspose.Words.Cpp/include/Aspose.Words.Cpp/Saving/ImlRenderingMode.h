//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Saving/ImlRenderingMode.h
#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Saving {

/// Specifies how ink (InkML) objects are rendered to fixed page formats.
enum class ASPOSE_WORDS_SHARED_CLASS ImlRenderingMode
{
    /// If fall-back shape is available for ink (InkML) object, %Aspose.Words renders fall-back shape instead of the InkML.
    Fallback,
    /// %Aspose.Words ignores fall-back shape of ink (InkML) object and renders InkML itself.
    /// This is the default mode.
    InkML
};

}
}
}

template<>
struct EnumMetaInfo<Aspose::Words::Saving::ImlRenderingMode>
{
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::Saving::ImlRenderingMode, const char_t*>, 2>& values();
};
