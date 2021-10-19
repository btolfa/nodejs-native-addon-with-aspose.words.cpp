//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fonts/MemoryFontSource.h
#pragma once

#include <system/array.h>

#include <Aspose.Words.Cpp/Fonts/FontSourceType.h>
#include <Aspose.Words.Cpp/Fonts/FontSourceBase.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Fonts
{
class IFontData;
}
}
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerable;
}
}
}

namespace Aspose {

namespace Words {

namespace Fonts {

/// Represents the single TrueType font file stored in memory.
class ASPOSE_WORDS_SHARED_CLASS MemoryFontSource : public Aspose::Words::Fonts::FontSourceBase
{
    typedef MemoryFontSource ThisType;
    typedef Aspose::Words::Fonts::FontSourceBase BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Binary font data.
    ASPOSE_WORDS_SHARED_API System::ArrayPtr<uint8_t> get_FontData() const;
    /// Returns the type of the font source.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Fonts::FontSourceType get_Type() override;

    /// Ctor.
    /// 
    /// @param fontData Binary font data.
    ASPOSE_WORDS_SHARED_API MemoryFontSource(const System::ArrayPtr<uint8_t>& fontData);
    /// Ctor.
    /// 
    /// @param fontData Binary font data.
    /// @param priority Font source priority. See the <see cref="Aspose::Words::Fonts::FontSourceBase::get_Priority">Priority</see> property description for more information.
    ASPOSE_WORDS_SHARED_API MemoryFontSource(const System::ArrayPtr<uint8_t>& fontData, int32_t priority);

private:

    System::SharedPtr<System::Object> mField0;

    ASPOSE_WORDS_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Fonts::IFontData>>> GetFontDataInternal() override;

};

}
}
}
