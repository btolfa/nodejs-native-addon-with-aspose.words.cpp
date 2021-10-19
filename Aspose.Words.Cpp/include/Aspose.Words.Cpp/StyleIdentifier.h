//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/StyleIdentifier.h
#pragma once

#include <system/object_ext.h>
#include <system/enum_helpers.h>
#include <system/enum.h>
#include <cstdint>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

/// Locale independent style identifier.
/// 
/// The names of built-in styles in MS Word are localized for different languages.
/// Using a style identifier you can find the correct style regardless of the document language.
/// 
/// All user defined styles are assigned the StyleIdentifier.User value.
enum class ASPOSE_WORDS_SHARED_CLASS StyleIdentifier
{
    BookTitle = 264,
    /// The Annotation (Comment) Reference style.
    CommentReference = 39,
    /// The Default Paragraph Font style.
    DefaultParagraphFont = 65,
    Emphasis = 88,
    /// The Endnote Reference style.
    EndnoteReference = 42,
    FollowedHyperlink = 86,
    /// The Footnote Reference style.
    FootnoteReference = 38,
    HtmlAcronym = 95,
    HtmlCite = 97,
    HtmlCode = 98,
    HtmlDefinition = 99,
    HtmlKeyboard = 100,
    HtmlSample = 102,
    HtmlTypewriter = 103,
    HtmlVariable = 104,
    /// The Hyperlink style.
    Hyperlink = 85,
    IntenseEmphasis = 261,
    IntenseReference = 263,
    /// The Line Number style.
    LineNumber = 40,
    /// The Page Number style.
    PageNumber = 41,
    PlaceholderText = 156,
    /// The Smart Link style.
    SmartLink = 371,
    Strong = 87,
    SubtleEmphasis = 260,
    SubtleReference = 262,
    BalloonText = 153,
    /// The Body Text style.
    BodyText = 66,
    BodyText2 = 80,
    BodyText3 = 81,
    BodyText1I = 77,
    BodyText1I2 = 78,
    BodyTextInd = 67,
    BodyTextInd2 = 82,
    BodyTextInd3 = 83,
    Closing = 63,
    CommentSubject = 106,
    /// The Annotation (Comment) Text style.
    CommentText = 30,
    Date = 76,
    DocumentMap = 89,
    EmailSignature = 91,
    /// The Endnote Text style.
    EndnoteText = 43,
    /// The Footer style.
    Footer = 32,
    /// The Footnote Text style.
    FootnoteText = 29,
    /// The Header style.
    Header = 31,
    /// The Heading 1 style.
    Heading1 = 1,
    /// The Heading 2 style.
    Heading2 = 2,
    /// The Heading 3 style.
    Heading3 = 3,
    /// The Heading 4 style.
    Heading4 = 4,
    /// The Heading 5 style.
    Heading5 = 5,
    /// The Heading 6 style.
    Heading6 = 6,
    /// The Heading 7 style.
    Heading7 = 7,
    /// The Heading 8 style.
    Heading8 = 8,
    /// The Heading 9 style.
    Heading9 = 9,
    HtmlAddress = 96,
    HtmlTopOfForm = 92,
    HtmlBottomOfForm = 93,
    HtmlPreformatted = 101,
    IntenseQuote = 181,
    Macro = 45,
    MessageHeader = 73,
    NoteHeading = 79,
    PlainText = 90,
    Quote = 180,
    Salutation = 75,
    Signature = 64,
    Subtitle = 74,
    /// The Title style.
    Title = 62,
    Bibliography = 265,
    BlockText = 84,
    Caption = 34,
    /// The Envelope Address style.
    EnvelopeAddress = 36,
    /// The Envelope Return style.
    EnvelopeReturn = 37,
    Index1 = 10,
    Index2 = 11,
    Index3 = 12,
    Index4 = 13,
    Index5 = 14,
    Index6 = 15,
    Index7 = 16,
    Index8 = 17,
    Index9 = 18,
    /// The Index Heading style.
    IndexHeading = 33,
    /// The List style.
    List = 47,
    List2 = 50,
    List3 = 51,
    List4 = 52,
    List5 = 53,
    /// The List Bullet style.
    ListBullet = 48,
    ListBullet2 = 54,
    ListBullet3 = 55,
    ListBullet4 = 56,
    ListBullet5 = 57,
    ListContinue = 68,
    ListContinue2 = 69,
    ListContinue3 = 70,
    ListContinue4 = 71,
    ListContinue5 = 72,
    /// The List Number style.
    ListNumber = 49,
    ListNumber2 = 58,
    ListNumber3 = 59,
    ListNumber4 = 60,
    ListNumber5 = 61,
    ListParagraph = 179,
    NoSpacing = 157,
    /// The Normal style.
    Normal = 0,
    NormalWeb = 94,
    /// The Normal Indent style.
    NormalIndent = 28,
    TableOfAuthorities = 44,
    /// The Table of Figures style.
    TableOfFigures = 35,
    ToaHeading = 46,
    Toc1 = 19,
    Toc2 = 20,
    Toc3 = 21,
    Toc4 = 22,
    Toc5 = 23,
    Toc6 = 24,
    Toc7 = 25,
    Toc8 = 26,
    Toc9 = 27,
    TocHeading = 266,
    Revision = 178,
    /// The 1 / a / i style.
    OutlineList1 = 108,
    /// The 1 / 1.1 / 1.1.1 style.
    OutlineList2 = 109,
    /// The Article / Section style.
    OutlineList3 = 110,
    NoList = 107,
    ColorfulGrid = 171,
    ColorfulGridAccent1 = 189,
    ColorfulGridAccent2 = 203,
    ColorfulGridAccent3 = 217,
    ColorfulGridAccent4 = 231,
    ColorfulGridAccent5 = 245,
    ColorfulGridAccent6 = 259,
    ColorfulList = 170,
    ColorfulListAccent1 = 188,
    ColorfulListAccent2 = 202,
    ColorfulListAccent3 = 216,
    ColorfulListAccent4 = 230,
    ColorfulListAccent5 = 244,
    ColorfulListAccent6 = 258,
    ColorfulShading = 169,
    ColorfulShadingAccent1 = 187,
    ColorfulShadingAccent2 = 201,
    ColorfulShadingAccent3 = 215,
    ColorfulShadingAccent4 = 229,
    ColorfulShadingAccent5 = 243,
    ColorfulShadingAccent6 = 257,
    DarkList = 168,
    DarkListAccent1 = 186,
    DarkListAccent2 = 200,
    DarkListAccent3 = 214,
    DarkListAccent4 = 228,
    DarkListAccent5 = 242,
    DarkListAccent6 = 256,
    LightGrid = 160,
    LightGridAccent1 = 174,
    LightGridAccent2 = 192,
    LightGridAccent3 = 206,
    LightGridAccent4 = 220,
    LightGridAccent5 = 234,
    LightGridAccent6 = 248,
    LightList = 159,
    LightListAccent1 = 173,
    LightListAccent2 = 191,
    LightListAccent3 = 205,
    LightListAccent4 = 219,
    LightListAccent5 = 233,
    LightListAccent6 = 247,
    LightShading = 158,
    LightShadingAccent1 = 172,
    LightShadingAccent2 = 190,
    LightShadingAccent3 = 204,
    LightShadingAccent4 = 218,
    LightShadingAccent5 = 232,
    LightShadingAccent6 = 246,
    MediumGrid1 = 165,
    MediumGrid1Accent1 = 183,
    MediumGrid1Accent2 = 197,
    MediumGrid1Accent3 = 211,
    MediumGrid1Accent4 = 225,
    MediumGrid1Accent5 = 239,
    MediumGrid1Accent6 = 253,
    MediumGrid2 = 166,
    MediumGrid2Accent1 = 184,
    MediumGrid2Accent2 = 198,
    MediumGrid2Accent3 = 212,
    MediumGrid2Accent4 = 226,
    MediumGrid2Accent5 = 240,
    MediumGrid2Accent6 = 254,
    MediumGrid3 = 167,
    MediumGrid3Accent1 = 185,
    MediumGrid3Accent2 = 199,
    MediumGrid3Accent3 = 213,
    MediumGrid3Accent4 = 227,
    MediumGrid3Accent5 = 241,
    MediumGrid3Accent6 = 255,
    MediumList1 = 163,
    MediumList1Accent1 = 177,
    MediumList1Accent2 = 195,
    MediumList1Accent3 = 209,
    MediumList1Accent4 = 223,
    MediumList1Accent5 = 237,
    MediumList1Accent6 = 251,
    MediumList2 = 164,
    MediumList2Accent1 = 182,
    MediumList2Accent2 = 196,
    MediumList2Accent3 = 210,
    MediumList2Accent4 = 224,
    MediumList2Accent5 = 238,
    MediumList2Accent6 = 252,
    MediumShading1 = 161,
    MediumShading1Accent1 = 175,
    MediumShading1Accent2 = 193,
    MediumShading1Accent3 = 207,
    MediumShading1Accent4 = 221,
    MediumShading1Accent5 = 235,
    MediumShading1Accent6 = 249,
    MediumShading2 = 162,
    MediumShading2Accent1 = 176,
    MediumShading2Accent2 = 194,
    MediumShading2Accent3 = 208,
    MediumShading2Accent4 = 222,
    MediumShading2Accent5 = 236,
    MediumShading2Accent6 = 250,
    Table3DEffects1 = 142,
    Table3DEffects2 = 143,
    Table3DEffects3 = 144,
    TableClassic1 = 114,
    TableClassic2 = 115,
    TableClassic3 = 116,
    TableClassic4 = 117,
    TableColorful1 = 118,
    TableColorful2 = 119,
    TableColorful3 = 120,
    TableColumns1 = 121,
    TableColumns2 = 122,
    TableColumns3 = 123,
    TableColumns4 = 124,
    TableColumns5 = 125,
    TableContemporary = 145,
    TableElegant = 146,
    TableGrid = 154,
    TableGrid1 = 126,
    TableGrid2 = 127,
    TableGrid3 = 128,
    TableGrid4 = 129,
    TableGrid5 = 130,
    TableGrid6 = 131,
    TableGrid7 = 132,
    TableGrid8 = 133,
    TableList1 = 134,
    TableList2 = 135,
    TableList3 = 136,
    TableList4 = 137,
    TableList5 = 138,
    TableList6 = 139,
    TableList7 = 140,
    TableList8 = 141,
    TableNormal = 105,
    TableProfessional = 147,
    TableSimple1 = 111,
    TableSimple2 = 112,
    TableSimple3 = 113,
    TableSubtle1 = 148,
    TableSubtle2 = 149,
    TableTheme = 155,
    TableWeb1 = 150,
    TableWeb2 = 151,
    TableWeb3 = 152,
    /// Plain Table 1
    PlainTable1 = 267,
    /// Plain Table 2
    PlainTable2 = 268,
    /// Plain Table 3
    PlainTable3 = 269,
    /// Plain Table 4
    PlainTable4 = 270,
    /// Plain Table 5
    PlainTable5 = 271,
    /// Table Grid Light
    TableGridLight = 272,
    /// Grid Table 1 Light
    GridTable1Light = 273,
    /// Grid Table 2
    GridTable2 = 274,
    /// Grid Table 3
    GridTable3 = 275,
    /// Grid Table 4
    GridTable4 = 276,
    /// Grid Table 5 Dark
    GridTable5Dark = 277,
    /// Grid Table 6 Colorful
    GridTable6Colorful = 278,
    /// Grid Table 7 Colorful
    GridTable7Colorful = 279,
    /// Grid Table 1 Light - Accent 1
    GridTable1LightAccent1 = 280,
    /// Grid Table 2 - Accent 1
    GridTable2Accent1 = 281,
    /// Grid Table 3 - Accent 1
    GridTable3Accent1 = 282,
    /// Grid Table 4 - Accent 1
    GridTable4Accent1 = 283,
    /// Grid Table 5 Dark - Accent 1
    GridTable5DarkAccent1 = 284,
    /// Grid Table 6 Colorful - Accent 1
    GridTable6ColorfulAccent1 = 285,
    /// Grid Table 7 Colorful - Accent 1
    GridTable7ColorfulAccent1 = 286,
    /// Grid Table 1 Light - Accent 2
    GridTable1LightAccent2 = 287,
    /// Grid Table 2 - Accent 2
    GridTable2Accent2 = 288,
    /// Grid Table 3 - Accent 2
    GridTable3Accent2 = 289,
    /// Grid Table 4 - Accent 2
    GridTable4Accent2 = 290,
    /// Grid Table 5 Dark - Accent 2
    GridTable5DarkAccent2 = 291,
    /// Grid Table 6 Colorful - Accent 2
    GridTable6ColorfulAccent2 = 292,
    /// Grid Table 7 Colorful - Accent 2
    GridTable7ColorfulAccent2 = 293,
    /// Grid Table 1 Light - Accent 3
    GridTable1LightAccent3 = 294,
    /// Grid Table 2 - Accent 3
    GridTable2Accent3 = 295,
    /// Grid Table 3 - Accent 3
    GridTable3Accent3 = 296,
    /// Grid Table 4 - Accent 3
    GridTable4Accent3 = 297,
    /// Grid Table 5 Dark - Accent 3
    GridTable5DarkAccent3 = 298,
    /// Grid Table 6 Colorful - Accent 3
    GridTable6ColorfulAccent3 = 299,
    /// Grid Table 7 Colorful - Accent 3
    GridTable7ColorfulAccent3 = 300,
    /// Grid Table 1 Light - Accent 4
    GridTable1LightAccent4 = 301,
    /// Grid Table 2 - Accent 4
    GridTable2Accent4 = 302,
    /// Grid Table 3 - Accent 4
    GridTable3Accent4 = 303,
    /// Grid Table 4 - Accent 4
    GridTable4Accent4 = 304,
    /// Grid Table 5 Dark - Accent 4
    GridTable5DarkAccent4 = 305,
    /// Grid Table 6 Colorful - Accent 4
    GridTable6ColorfulAccent4 = 306,
    /// Grid Table 7 Colorful - Accent 4
    GridTable7ColorfulAccent4 = 307,
    /// Grid Table 1 Light - Accent 5
    GridTable1LightAccent5 = 308,
    /// Grid Table 2 - Accent 5
    GridTable2Accent5 = 309,
    /// Grid Table 3 - Accent 5
    GridTable3Accent5 = 310,
    /// Grid Table 4 - Accent 5
    GridTable4Accent5 = 311,
    /// Grid Table 5 Dark - Accent 5
    GridTable5DarkAccent5 = 312,
    /// Grid Table 6 Colorful - Accent 5
    GridTable6ColorfulAccent5 = 313,
    /// Grid Table 7 Colorful - Accent 5
    GridTable7ColorfulAccent5 = 314,
    /// Grid Table 1 Light - Accent 6
    GridTable1LightAccent6 = 315,
    /// Grid Table 2 - Accent 6
    GridTable2Accent6 = 316,
    /// Grid Table 3 - Accent 6
    GridTable3Accent6 = 317,
    /// Grid Table 4 - Accent 6
    GridTable4Accent6 = 318,
    /// Grid Table 5 Dark - Accent 6
    GridTable5DarkAccent6 = 319,
    /// Grid Table 6 Colorful - Accent 6
    GridTable6ColorfulAccent6 = 320,
    /// Grid Table 7 Colorful - Accent 6
    GridTable7ColorfulAccent6 = 321,
    /// List Table 1 Light
    ListTable1Light = 322,
    /// List Table 2
    ListTable2 = 323,
    /// List Table 3
    ListTable3 = 324,
    /// List Table 4
    ListTable4 = 325,
    /// List Table 5 Dark
    ListTable5Dark = 326,
    /// List Table 6 Colorful
    ListTable6Colorful = 327,
    /// List Table 7 Colorful
    ListTable7Colorful = 328,
    /// List Table 1 Light - Accent 1
    ListTable1LightAccent1 = 329,
    /// List Table 2 - Accent 1
    ListTable2Accent1 = 330,
    /// List Table 3 - Accent 1
    ListTable3Accent1 = 331,
    /// List Table 4 - Accent 1
    ListTable4Accent1 = 332,
    /// List Table 5 Dark - Accent 1
    ListTable5DarkAccent1 = 333,
    /// List Table 6 Colorful - Accent 1
    ListTable6ColorfulAccent1 = 334,
    /// List Table 7 Colorful - Accent 1
    ListTable7ColorfulAccent1 = 335,
    /// List Table 1 Light - Accent 2
    ListTable1LightAccent2 = 336,
    /// List Table 2 - Accent 2
    ListTable2Accent2 = 337,
    /// List Table 3 - Accent 2
    ListTable3Accent2 = 338,
    /// List Table 4 - Accent 2
    ListTable4Accent2 = 339,
    /// List Table 5 Dark - Accent 2
    ListTable5DarkAccent2 = 340,
    /// List Table 6 Colorful - Accent 2
    ListTable6ColorfulAccent2 = 341,
    /// List Table 7 Colorful - Accent 2
    ListTable7ColorfulAccent2 = 342,
    /// List Table 1 Light - Accent 3
    ListTable1LightAccent3 = 343,
    /// List Table 2 - Accent 3
    ListTable2Accent3 = 344,
    /// List Table 3 - Accent 3
    ListTable3Accent3 = 345,
    /// List Table 4 - Accent 3
    ListTable4Accent3 = 346,
    /// List Table 5 Dark - Accent 3
    ListTable5DarkAccent3 = 347,
    /// List Table 6 Colorful - Accent 3
    ListTable6ColorfulAccent3 = 348,
    /// List Table 7 Colorful - Accent 3
    ListTable7ColorfulAccent3 = 349,
    /// List Table 1 Light - Accent 4
    ListTable1LightAccent4 = 350,
    /// List Table 2 - Accent 4
    ListTable2Accent4 = 351,
    /// List Table 3 - Accent 4
    ListTable3Accent4 = 352,
    /// List Table 4 - Accent 4
    ListTable4Accent4 = 353,
    /// List Table 5 Dark - Accent 4
    ListTable5DarkAccent4 = 354,
    /// List Table 6 Colorful - Accent 4
    ListTable6ColorfulAccent4 = 355,
    /// List Table 7 Colorful - Accent 4
    ListTable7ColorfulAccent4 = 356,
    /// List Table 1 Light - Accent 5
    ListTable1LightAccent5 = 357,
    /// List Table 2 - Accent 5
    ListTable2Accent5 = 358,
    /// List Table 3 - Accent 5
    ListTable3Accent5 = 359,
    /// List Table 4 - Accent 5
    ListTable4Accent5 = 360,
    /// List Table 5 Dark - Accent 5
    ListTable5DarkAccent5 = 361,
    /// List Table 6 Colorful - Accent 5
    ListTable6ColorfulAccent5 = 362,
    /// List Table 7 Colorful - Accent 5
    ListTable7ColorfulAccent5 = 363,
    /// List Table 1 Light - Accent 6
    ListTable1LightAccent6 = 364,
    /// List Table 2 - Accent 6
    ListTable2Accent6 = 365,
    /// List Table 3 - Accent 6
    ListTable3Accent6 = 366,
    /// List Table 4 - Accent 6
    ListTable4Accent6 = 367,
    /// List Table 5 Dark - Accent 6
    ListTable5DarkAccent6 = 368,
    /// List Table 6 Colorful - Accent 6
    ListTable6ColorfulAccent6 = 369,
    /// List Table 7 Colorful - Accent 6
    ListTable7ColorfulAccent6 = 370,
    /// A user defined style.
    User = 0x0FFE,
    /// Reserved for internal use.
    Nil = 0x2FFF
};

DECLARE_ENUM_OPERATORS(Aspose::Words::StyleIdentifier);
DECLARE_USING_GLOBAL_OPERATORS

}
}

DECLARE_USING_ENUM_OPERATORS(Aspose::Words);
template<>
struct EnumMetaInfo<Aspose::Words::StyleIdentifier>
{
    static const ASPOSE_WORDS_SHARED_API std::array<std::pair<Aspose::Words::StyleIdentifier, const char_t*>, 374>& values();
};
