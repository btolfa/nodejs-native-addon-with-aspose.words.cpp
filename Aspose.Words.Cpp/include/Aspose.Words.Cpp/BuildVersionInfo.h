//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/BuildVersionInfo.h
#pragma once

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
class String;
}

namespace Aspose {

namespace Words {

/// Provides information about the current product name and version.
class ASPOSE_WORDS_SHARED_CLASS BuildVersionInfo
{
    typedef BuildVersionInfo ThisType;

public:

    /// Gets the full name of the product.
    static ASPOSE_WORDS_SHARED_API System::String get_Product();
    /// Gets the product version.
    /// 
    /// The product version is in the "Major.Minor.Hotfix.0" format.
    static ASPOSE_WORDS_SHARED_API System::String get_Version();

public:
    BuildVersionInfo() = delete;
};

}
}
