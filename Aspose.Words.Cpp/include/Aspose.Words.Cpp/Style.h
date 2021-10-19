//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Style.h
#pragma once

#include <system/object_ext.h>
#include <system/enum_helpers.h>
#include <system/array.h>
#include <cstdint>

#include <Aspose.Words.Cpp/StyleType.h>
#include <Aspose.Words.Cpp/StyleIdentifier.h>
#include <Aspose.Words.Cpp/IRunAttrSource.h>
#include <Aspose.Words.Cpp/IParaAttrSource.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{

namespace Words
{
enum class RevisionsView;

enum class StyleIdentifier;

class DocumentBase;

class ParagraphFormat;

class Font;
class StyleCollection;

namespace Lists
{
class ListFormat;
class List;

}

}
}

namespace Aspose {

namespace Words {

/// Represents a single built-in or user-defined style.
class ASPOSE_WORDS_SHARED_CLASS Style : public Aspose::Words::IParaAttrSource, public Aspose::Words::IRunAttrSource
{
    typedef Style ThisType;
    typedef Aspose::Words::IParaAttrSource BaseType;
    typedef Aspose::Words::IRunAttrSource BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:
    using System::Object::Equals;

public:

    /// Gets or sets the name of the style.
    /// 
    /// Can not be empty string.
    /// 
    /// If there already is a style with such name in the collection, then this style will override it. All affected nodes will reference new style.
    ASPOSE_WORDS_SHARED_API System::String get_Name() const;
    /// Setter for Aspose::Words::Style::get_Name
    ASPOSE_WORDS_SHARED_API void set_Name(const System::String& value);
    /// Gets the locale independent style identifier for a built-in style.
    /// 
    /// For user defined (custom) styles, this property returns <see cref="Aspose::Words::StyleIdentifier::User">User</see>.
    /// 
    /// @sa Aspose::Words::Style::get_Name
    ASPOSE_WORDS_SHARED_API Aspose::Words::StyleIdentifier get_StyleIdentifier() const;
    /// Gets all aliases of this style. If style has no aliases then empty array of string is returned.
    ASPOSE_WORDS_SHARED_API System::ArrayPtr<System::String> get_Aliases();
    /// True when the style is one of the built-in Heading styles.
    ASPOSE_WORDS_SHARED_API bool get_IsHeading();
    /// Gets the style type (paragraph or character).
    ASPOSE_WORDS_SHARED_API Aspose::Words::StyleType get_Type() const;
    /// Gets the owner document.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::DocumentBase> get_Document();
    /// Gets the name of the Style linked to this one. Returns Empty string if no styles are linked.
    ASPOSE_WORDS_SHARED_API System::String get_LinkedStyleName();
    /// Gets/sets the name of the style this style is based on.
    ASPOSE_WORDS_SHARED_API System::String get_BaseStyleName();
    /// Gets/sets the name of the style this style is based on.
    ASPOSE_WORDS_SHARED_API void set_BaseStyleName(const System::String& value);
    /// Gets/sets the name of the style to be applied automatically to a new paragraph inserted after a
    /// paragraph formatted with the specified style.
    ASPOSE_WORDS_SHARED_API System::String get_NextParagraphStyleName();
    /// Gets/sets the name of the style to be applied automatically to a new paragraph inserted after a
    /// paragraph formatted with the specified style.
    ASPOSE_WORDS_SHARED_API void set_NextParagraphStyleName(const System::String& value);
    /// True if this style is one of the built-in styles in MS Word.
    ASPOSE_WORDS_SHARED_API bool get_BuiltIn();
    /// Gets the character formatting of the style.
    /// 
    /// For list styles this property returns null.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Font> get_Font();
    /// Gets the paragraph formatting of the style.
    /// 
    /// For character and list styles this property returns null.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::ParagraphFormat> get_ParagraphFormat();
    /// Gets the list that defines formatting of this list style.
    /// 
    /// This property is only valid for list styles.
    /// For other style types this property returns null.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Lists::List> get_List();
    /// Provides access to the list formatting properties of a paragraph style.
    /// 
    /// This property is only valid for paragraph styles.
    /// For other style types this property returns null.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Lists::ListFormat> get_ListFormat();
    /// Specifies whether this style is shown in the Quick Style gallery inside MS Word UI.
    ASPOSE_WORDS_SHARED_API bool get_IsQuickStyle() const;
    /// Specifies whether this style is shown in the Quick Style gallery inside MS Word UI.
    ASPOSE_WORDS_SHARED_API void set_IsQuickStyle(bool value);
    /// Gets the collection of styles this style belongs to.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::StyleCollection> get_Styles() const;

    /// Removes the specified style from the document.
    /// 
    /// Style removal has following effects on the document model:
    /// 
    /// - All references to the style are removed from corresponding paragraphs, runs and tables.
    /// - If base style is removed its formatting is moved to child styles.
    /// - If style to be deleted has a linked style, then both of these are deleted.
    ASPOSE_WORDS_SHARED_API void Remove();
    /// Compares with the specified style.
    /// Styles Istds are compared for built-in styles only.
    /// Styles defaults are not included in comparison.
    /// Base style, linked style and next paragraph style are recursively compared.
    ASPOSE_WORDS_SHARED_API bool Equals(const System::SharedPtr<Aspose::Words::Style>& style);

protected:

    __TypeStub<1,1,1,1>::type mField0;
    __TypeStub<1,1,1,1>::type mField1;
    __TypeStub<1,1,1,1>::type mField2;

    ASPOSE_WORDS_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Style, CODEPORTING_ARGS(Aspose::Words::StyleType styleType));

    virtual ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Style> Clone();

    virtual ASPOSE_WORDS_SHARED_API bool HasFormatting();

    virtual ASPOSE_WORDS_SHARED_API ~Style();

private:

    __TypeStub<4,4,4,4>::type mField3;
    __TypeStub<4,4,4,4>::type mField4;
    __TypeStub<4,4,4,4>::type mField5;
    __TypeStub<4,4,4,4>::type mField6;
    __TypeStub<4,4,4,4>::type mField7;
    __TypeStub<4,4,4,4>::type mField8;
    __TypeStub<1,1,1,1>::type mField9;
    __TypeStub<1,1,1,1>::type mField10;
    __TypeStub<1,1,1,1>::type mField11;
    __TypeStub<1,1,1,1>::type mField12;
    __TypeStub<1,1,1,1>::type mField13;
    __TypeStub<1,1,1,1>::type mField14;
    __TypeStub<4,4,4,4>::type mField15;
    __TypeStub<1,1,1,1>::type mField16;
    __TypeStub<1,1,1,1>::type mField17;
    __TypeStub<1,1,1,1>::type mField18;
    __TypeStub<1,1,1,1>::type mField19;
    __TypeStub<4,4,4,4>::type mField20;
    __TypeStub<4,4,4,4>::type mField21;
    System::String mField22;
    System::SharedPtr<System::Object> mField23;
    System::SharedPtr<System::Object> mField24;
    System::WeakPtr<System::Object> mField25;
    System::SharedPtr<System::Object> mField26;
    System::SharedPtr<System::Object> mField27;
    System::SharedPtr<System::Object> mField28;
    System::SharedPtr<System::Object> mField29;

    System::SharedPtr<System::Object> GetDirectParaAttr(int32_t ) override;
    System::SharedPtr<System::Object> GetDirectParaAttr(int32_t , Aspose::Words::RevisionsView ) override;
    System::SharedPtr<System::Object> FetchParaAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchInheritedParaAttr(int32_t ) override;
    void SetParaAttr(int32_t , System::SharedPtr<System::Object> ) override;
    void RemoveParaAttr(int32_t ) override;
    void ClearParaAttrs() override;
    System::SharedPtr<System::Object> GetDirectRunAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchInheritedRunAttr(int32_t ) override;
    void SetRunAttr(int32_t , System::SharedPtr<System::Object> ) override;
    void RemoveRunAttr(int32_t ) override;
    void ClearRunAttrs() override;

    virtual ThisType* CppMemberwiseClone() const ;

protected:

};

}
}
