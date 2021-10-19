//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/WatermarkLayout.h
#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

/// Defines layout of the watermark relative to the watermark center.
enum class ASPOSE_WORDS_SHARED_CLASS WatermarkLayout
{
    /// Horizontal watermark layout. Corresponds to 0 degrees of rotation.
    Horizontal = 0,
    /// Diagonal watermark layout. Corresponds to 315 degrees of rotation.
    Diagonal = 315
};

}
}

template<>
struct EnumMetaInfo<Aspose::Words::WatermarkLayout>
{
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::WatermarkLayout, const char_t*>, 2>& values();
};
