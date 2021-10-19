//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/StyleIndex.h
#pragma once

#include <mutex>
#include <memory>
#include <cstdint>

#include <Aspose.Words.Cpp/StyleIdentifier.h>

namespace System
{
class String;
template <typename> class SmartPtr;
template <typename T0> using SharedPtr = System::SmartPtr<T0>;
}
namespace Aspose
{
namespace Words
{
enum class StyleIdentifier;
class Style;
}

}

namespace Aspose {

namespace Words {

/// \cond
class StyleIndex
{
    typedef StyleIndex ThisType;

public:

    static Aspose::Words::StyleIdentifier BuiltInStyleNameEnglish(const System::String& name);
    static void ConvertToRegularStyle(const System::SharedPtr<Aspose::Words::Style>& style, const System::SharedPtr<Aspose::Words::Style>& oldStyle);
    static bool ConvertToBuiltInStyle(const System::SharedPtr<Aspose::Words::Style>& style, Aspose::Words::StyleIdentifier sti, const System::SharedPtr<Aspose::Words::Style>& oldStyle, bool updateCollection);
    static int32_t StyleIdentifierToIstd(Aspose::Words::StyleIdentifier sti);
    static bool IsIstdReserved(int32_t istd);
    static bool IsHeadingIstd(int32_t istd);
    static bool IsNonModifiable(const System::SharedPtr<Aspose::Words::Style>& srcStyle);

    StyleIndex();

private:

public:

    static constexpr int32_t Normal = 0;
    static constexpr int32_t Heading1 = 1;
    static constexpr int32_t Heading2 = 2;
    static constexpr int32_t Heading3 = 3;
    static constexpr int32_t Heading4 = 4;
    static constexpr int32_t Heading5 = 5;
    static constexpr int32_t Heading6 = 6;
    static constexpr int32_t Heading7 = 7;
    static constexpr int32_t Heading8 = 8;
    static constexpr int32_t Heading9 = 9;
    static constexpr int32_t DefaultParagraphFont = 10;
    static constexpr int32_t TableNormal = 11;
    static constexpr int32_t NoList = 12;
    static constexpr int32_t Nil = 0x2FFF;
    static constexpr int32_t Limit = 0x2FFE;

};/// \endcond

}
}
