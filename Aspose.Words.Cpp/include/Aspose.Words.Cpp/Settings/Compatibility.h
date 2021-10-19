//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Settings/Compatibility.h
#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace Settings {

/// Specifies names of compatibility options.
enum class ASPOSE_WORDS_SHARED_CLASS Compatibility
{
    NoTabHangInd,
    NoSpaceRaiseLower,
    SuppressSpBfAfterPgBrk,
    WrapTrailSpaces,
    PrintColBlack,
    NoColumnBalance,
    ConvMailMergeEsc,
    SuppressTopSpacing,
    UseSingleBorderforContiguousCells,
    TransparentMetafiles,
    ShowBreaksInFrames,
    SwapBordersOddFacingPgs,
    DoNotLeaveBackslashAlone,
    DoNotExpandOnShiftReturn,
    UlTrailSpace,
    BalanceSingleByteDoubleByteWidth,
    SuppressTopSpacingAtTopOfPage,
    SpacingInWholePoints,
    PrintBodyTextBeforeHeader,
    NoLeading,
    SpaceForUL,
    MWSmallCaps,
    SuppressTopLineSpacingWP,
    TruncateFontHeightLikeWP6,
    SubFontBySize,
    LineWrapLikeWord6,
    DoNotSuppressParagraphBorder,
    NoExtraLineSpacing,
    SuppressBottomSpacing,
    WPSpaceWidth,
    WPJustification,
    UsePrinterMetrics,
    ShapeLayoutLikeWW8,
    FootnoteLayoutLikeWW8,
    DoNotUseHtmlParagraphAutoSpacing,
    AdjustLineHeightInTable,
    ForgetLastTabAlignment,
    AutoSpaceLikeWord95,
    AlignTableRowByRow,
    LayoutRawTableWidth,
    LayoutTableRowsApart,
    UseWord97LineBreakRules,
    DoNotBreakWrappedTables,
    doNotSnapToGridInCell,
    SelectFldWithFirstOrLastChar,
    ApplyBreakingRules,
    DoNotWrapTextWithPunct,
    DoNotUseEastAsianBreakRules,
    UseWord2002TableStyleRules,
    GrowAutofit,
    UseNormalStyleForList,
    DoNotUseIndentAsNumberingTabStop,
    UseAltKinsokuLineBreakRules,
    AllowSpaceOfSameStyleInTable,
    DoNotSuppressIndentation,
    DoNotAutofitConstrainedTables,
    AutofitToFirstFixedWidthCell,
    UnderlineTabInNumList,
    DisplayHangulFixedWidth,
    SplitPgBreakAndParaMark,
    DoNotVertAlignCellWithSp,
    DoNotBreakConstrainedForcedTable,
    DoNotVertAlignInTxbx,
    UseAnsiKerningPairs,
    CachedColBalance,
    UseFELayout,
    UICompat97To2003,
    OverrideTableStyleFontSizeAndJustification,
    DisableOpenTypeFontFormattingFeatures,
    SwapInsideAndOutsideForMirrorIndentsAndRelativePositioning,
    UseWord2010TableStyleRules
};

}
}
}

template<>
struct EnumMetaInfo<Aspose::Words::Settings::Compatibility>
{
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::Settings::Compatibility, const char_t*>, 71>& values();
};
