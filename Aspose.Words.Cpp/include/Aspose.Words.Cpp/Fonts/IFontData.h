//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fonts/IFontData.h
#pragma once

#include <system/object.h>
#include <cstdint>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
class String;
namespace IO
{
class Stream;
}
}

namespace Aspose {

namespace Fonts {

/// \cond
class ASPOSE_WORDS_SHARED_CLASS IFontData : public virtual System::Object
{
    typedef IFontData ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    virtual System::SharedPtr<System::IO::Stream> OpenStream() = 0;

    virtual int32_t GetSize() = 0;

    virtual System::String GetFilePath() = 0;

};/// \endcond

}
}
