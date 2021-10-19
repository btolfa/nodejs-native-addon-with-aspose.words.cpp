//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/Ole/Forms2OleControlType.h
#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Drawing {

namespace Ole {

/// Forms2OleControlType enumeration.
enum class ASPOSE_WORDS_SHARED_CLASS Forms2OleControlType
{
    OptionButton,
    Label,
    Textbox,
    CheckBox,
    ToggleButton,
    SpinButton,
    ComboBox,
    Frame,
    MultiPage,
    TabStrip,
    CommandButton,
    Image,
    ScrollBar,
    Form,
    ListBox
};

}
}
}
}

template<>
struct EnumMetaInfo<Aspose::Words::Drawing::Ole::Forms2OleControlType>
{
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::Drawing::Ole::Forms2OleControlType, const char_t*>, 15>& values();
};
