//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Model/Drawing/Core/FillTypeCore.h
#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Drawing {

namespace Core {

/// FillTypeCore enumeration.
enum class FillTypeCore
{
    Solid = 0,
    Pattern = 1,
    Texture = 2,
    Picture = 3,
    Shade = 4,
    ShadeCenter = 5,
    ShadeShape = 6,
    ShadeScale = 7,
    ShadeTitle = 8,
    Background = 9,
    ShadeUnscale = 10
};

}
}
}
}

template<>
struct EnumMetaInfo<Aspose::Words::Drawing::Core::FillTypeCore>
{
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::Drawing::Core::FillTypeCore, const char_t*>, 11>& values();
};
