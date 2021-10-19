//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Markup/StructuredDocumentTag.h
#pragma once

#include <system/string.h>
#include <cstdint>

#include <Aspose.Words.Cpp/Revisions/ITrackableNode.h>
#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/CompositeNode.h>
#include <Aspose.Words.Cpp/Markup/SdtType.h>
#include <Aspose.Words.Cpp/Markup/SdtDateStorageFormat.h>
#include <Aspose.Words.Cpp/Markup/SdtCalendarType.h>
#include <Aspose.Words.Cpp/Markup/SdtAppearance.h>
#include <Aspose.Words.Cpp/Markup/MarkupLevel.h>
#include <Aspose.Words.Cpp/Markup/IMarkupNode.h>
#include <Aspose.Words.Cpp/IRunAttrSource.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
namespace Drawing
{
class Color;
}
class DateTime;
}
namespace Aspose
{

namespace Words
{
enum class VisitorAction;
class DocumentVisitor;
class INodeCloningListener;
class Node;

class Style;
class Font;
namespace BuildingBlocks
{
class BuildingBlock;
}

class DocumentBase;

namespace Revisions
{
class MoveRevision;
class EditRevision;

}

namespace Markup
{

class SdtListItemCollection;
class XmlMapping;

}

}
}

namespace Aspose {

namespace Words {

namespace Markup {

/// Represents a structured document tag (SDT or content control) in a document.
/// 
/// Structured document tags (SDTs) allow to embed customer-defined semantics as well as its
/// behavior and appearance into a document.
/// 
/// In this version %Aspose.Words provides a number of public methods and properties to
/// manipulate the behavior and content of <see cref="Aspose::Words::Markup::StructuredDocumentTag">StructuredDocumentTag</see>.
/// Mapping of SDT nodes to custom XML packages within a document can be performed with using
/// the <see cref="Aspose::Words::Markup::StructuredDocumentTag::get_XmlMapping">XmlMapping</see> property.
/// 
/// <see cref="Aspose::Words::Markup::StructuredDocumentTag">StructuredDocumentTag</see> can occur in a document in the following places:
/// 
/// - Block-level - Among paragraphs and tables, as a child of a <see cref="Aspose::Words::Body">Body</see>, <see cref="Aspose::Words::HeaderFooter">HeaderFooter</see>,
///   <see cref="Aspose::Words::Comment">Comment</see>, <see cref="Aspose::Words::Notes::Footnote">Footnote</see> or a <see cref="Aspose::Words::Drawing::Shape">Shape</see> node.
/// - Row-level - Among rows in a table, as a child of a <see cref="Aspose::Words::Tables::Table">Table</see> node.
/// - Cell-level - Among cells in a table row, as a child of a <see cref="Aspose::Words::Tables::Row">Row</see> node.
/// - Inline-level - Among inline content inside, as a child of a <see cref="Aspose::Words::Paragraph">Paragraph</see>.
/// - Nested inside another <see cref="Aspose::Words::Markup::StructuredDocumentTag">StructuredDocumentTag</see>.
class ASPOSE_WORDS_SHARED_CLASS StructuredDocumentTag : public Aspose::Words::CompositeNode, public Aspose::Words::Markup::IMarkupNode, public Aspose::Words::Revisions::ITrackableNode, public Aspose::Words::IRunAttrSource
{
    typedef StructuredDocumentTag ThisType;
    typedef Aspose::Words::CompositeNode BaseType;
    typedef Aspose::Words::Markup::IMarkupNode BaseType1;
    typedef Aspose::Words::Revisions::ITrackableNode BaseType2;
    typedef Aspose::Words::IRunAttrSource BaseType3;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:
    using Aspose::Words::CompositeNode::Clone;

public:

    /// Returns <b>%NodeType.StructuredDocumentTag</b>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const override;
    /// Gets the <see cref="Aspose::Words::BuildingBlocks::BuildingBlock">BuildingBlock</see> containing placeholder text which should be displayed when this SDT run contents are empty,
    /// the associated mapped XML element is empty as specified via the <see cref="Aspose::Words::Markup::StructuredDocumentTag::get_XmlMapping">XmlMapping</see> element
    /// or the <see cref="Aspose::Words::Markup::StructuredDocumentTag::get_IsShowingPlaceholderText">IsShowingPlaceholderText</see> element is true.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::BuildingBlocks::BuildingBlock> get_Placeholder() const;
    /// Gets Name of the <see cref="Aspose::Words::BuildingBlocks::BuildingBlock">BuildingBlock</see> containing placeholder text.
    /// BuildingBlock with this name <see cref="Aspose::Words::BuildingBlocks::BuildingBlock::get_Name">Name</see> has to be present in the <see cref="Aspose::Words::Document::get_GlossaryDocument">GlossaryDocument</see>
    /// otherwise <see cref="System::InvalidOperationException">InvalidOperationException</see> will occur.
    ASPOSE_WORDS_SHARED_API System::String get_PlaceholderName() const;
    /// Sets Name of the <see cref="Aspose::Words::BuildingBlocks::BuildingBlock">BuildingBlock</see> containing placeholder text.
    /// BuildingBlock with this name <see cref="Aspose::Words::BuildingBlocks::BuildingBlock::get_Name">Name</see> has to be present in the <see cref="Aspose::Words::Document::get_GlossaryDocument">GlossaryDocument</see>
    /// otherwise <see cref="System::InvalidOperationException">InvalidOperationException</see> will occur.
    ASPOSE_WORDS_SHARED_API void set_PlaceholderName(const System::String& value);
    /// Gets the level at which this <b>%SDT</b> occurs in the document tree.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Markup::MarkupLevel get_Level() const;
    /// Gets type of this <b>%Structured document tag</b>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Markup::SdtType get_SdtType();
    /// Specifies a unique read-only persistent numerical Id for this <b>%SDT</b>.
    /// 
    /// Id attribute shall follow these rules:
    /// - The document shall retain SDT ids only if the whole document is cloned <see cref="Aspose::Words::Document::Clone">Clone</see>.
    /// - During <see cref="Aspose::Words::DocumentBase::ImportNode(System::SharedPtr<Aspose::Words::Node>, bool)">ImportNode()</see>
    /// Id shall be retained if import does not cause conflicts with other SDT Ids in
    /// the target document.
    /// - If multiple SDT nodes specify the same decimal number value for the Id attribute,
    /// then the first SDT in the document shall maintain this original Id,
    /// and all subsequent SDT nodes shall have new identifiers assigned to them when the document is loaded.
    /// - During standalone SDT <see cref="Aspose::Words::Markup::StructuredDocumentTag::Clone(bool, System::SharedPtr<Aspose::Words::INodeCloningListener>)">Clone()</see> operation new unique ID will be generated for the cloned SDT node.
    /// - If Id is not specified in the source document, then the SDT node shall have a new unique identifier assigned
    /// to it when the document is loaded.
    ASPOSE_WORDS_SHARED_API int32_t get_Id();
    /// When set to true, this property will prohibit a user from deleting this <b>%SDT</b>.
    ASPOSE_WORDS_SHARED_API bool get_LockContentControl() const;
    /// When set to true, this property will prohibit a user from deleting this <b>%SDT</b>.
    ASPOSE_WORDS_SHARED_API void set_LockContentControl(bool value);
    /// When set to true, this property will prohibit a user from editing the contents of this <b>%SDT</b>.
    ASPOSE_WORDS_SHARED_API bool get_LockContents() const;
    /// When set to true, this property will prohibit a user from editing the contents of this <b>%SDT</b>.
    ASPOSE_WORDS_SHARED_API void set_LockContents(bool value);
    /// Specifies whether the content of this <b>%SDT</b> shall be interpreted to contain placeholder text
    /// (as opposed to regular text contents within the SDT).
    /// if set to true, this state shall be resumed (showing placeholder text) upon opening this document.
    ASPOSE_WORDS_SHARED_API bool get_IsShowingPlaceholderText() const;
    /// Specifies whether the content of this <b>%SDT</b> shall be interpreted to contain placeholder text
    /// (as opposed to regular text contents within the SDT).
    /// if set to true, this state shall be resumed (showing placeholder text) upon opening this document.
    ASPOSE_WORDS_SHARED_API void set_IsShowingPlaceholderText(bool value);
    /// Specifies a tag associated with the current SDT node.
    /// Can not be null.
    ASPOSE_WORDS_SHARED_API System::String get_Tag() const;
    /// Specifies a tag associated with the current SDT node.
    /// Can not be null.
    ASPOSE_WORDS_SHARED_API void set_Tag(const System::String& value);
    /// Font formatting that will be applied to text entered into <b>%SDT</b>.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Font> get_ContentsFont();
    /// Font formatting that will be applied to the last character of text entered into <b>%SDT</b>.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Font> get_EndCharacterFont();
    /// Specifies whether this <b>%SDT</b> shall be removed from the WordProcessingML document when its contents
    /// are modified.
    ASPOSE_WORDS_SHARED_API bool get_IsTemporary() const;
    /// Specifies whether this <b>%SDT</b> shall be removed from the WordProcessingML document when its contents
    /// are modified.
    ASPOSE_WORDS_SHARED_API void set_IsTemporary(bool value);
    /// Specifies the friendly name associated with this <b>%SDT</b>.
    /// Can not be null.
    ASPOSE_WORDS_SHARED_API System::String get_Title() const;
    /// Specifies the friendly name associated with this <b>%SDT</b>.
    /// Can not be null.
    ASPOSE_WORDS_SHARED_API void set_Title(const System::String& value);
    /// Gets <see cref="Aspose::Words::Markup::SdtListItemCollection">SdtListItemCollection</see> associated with this <b>%SDT</b>.
    /// 
    /// Accessing this property will only work for <see cref="Aspose::Words::Markup::SdtType::ComboBox">ComboBox</see> or <see cref="Aspose::Words::Markup::SdtType::DropDownList">DropDownList</see>
    /// SDT types.
    /// 
    /// For all other SDT types exception will occur.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Markup::SdtListItemCollection> get_ListItems();
    /// Gets/Sets current state of the Checkbox <b>%SDT</b>.
    /// Default value for this property is false.
    /// 
    /// Accessing this property will only work for <see cref="Aspose::Words::Markup::SdtType::Checkbox">Checkbox</see>
    /// SDT types.
    /// 
    /// For all other SDT types exception will occur.
    ASPOSE_WORDS_SHARED_API bool get_Checked();
    /// Setter for Aspose::Words::Markup::StructuredDocumentTag::get_Checked
    ASPOSE_WORDS_SHARED_API void set_Checked(bool value);
    /// Gets/sets the appearance of a structured document tag.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Markup::SdtAppearance get_Appearance() const;
    /// Gets/sets the appearance of a structured document tag.
    ASPOSE_WORDS_SHARED_API void set_Appearance(Aspose::Words::Markup::SdtAppearance value);
    /// Allows to set/get the language format for the date displayed in this <b>%SDT</b>.
    /// 
    /// Accessing this property will only work for <see cref="Aspose::Words::Markup::SdtType::Date">Date</see> SDT type.
    /// 
    /// For all other SDT types exception will occur.
    ASPOSE_WORDS_SHARED_API int32_t get_DateDisplayLocale();
    /// Setter for Aspose::Words::Markup::StructuredDocumentTag::get_DateDisplayLocale
    ASPOSE_WORDS_SHARED_API void set_DateDisplayLocale(int32_t value);
    /// String that represents the format in which dates are displayed.
    /// Can not be null.
    /// 
    /// Accessing this property will only work for <see cref="Aspose::Words::Markup::SdtType::Date">Date</see> SDT type.
    /// 
    /// For all other SDT types exception will occur.
    ASPOSE_WORDS_SHARED_API System::String get_DateDisplayFormat();
    /// Setter for Aspose::Words::Markup::StructuredDocumentTag::get_DateDisplayFormat
    ASPOSE_WORDS_SHARED_API void set_DateDisplayFormat(const System::String& value);
    /// Specifies the full date and time last entered into this <b>%SDT</b>.
    /// 
    /// Accessing this property will only work for <see cref="Aspose::Words::Markup::SdtType::Date">Date</see> SDT type.
    /// 
    /// For all other SDT types exception will occur.
    ASPOSE_WORDS_SHARED_API System::DateTime get_FullDate();
    /// Setter for Aspose::Words::Markup::StructuredDocumentTag::get_FullDate
    ASPOSE_WORDS_SHARED_API void set_FullDate(System::DateTime value);
    /// Gets/sets format in which the date for a date SDT is stored when the <b>%SDT</b> is bound to an XML node in the document's data store.
    /// Default value is <see cref="Aspose::Words::Markup::SdtDateStorageFormat::DateTime">DateTime</see>
    /// 
    /// Accessing this property will only work for <see cref="Aspose::Words::Markup::SdtType::Date">Date</see> SDT type.
    /// 
    /// For all other SDT types exception will occur.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Markup::SdtDateStorageFormat get_DateStorageFormat();
    /// Setter for Aspose::Words::Markup::StructuredDocumentTag::get_DateStorageFormat
    ASPOSE_WORDS_SHARED_API void set_DateStorageFormat(Aspose::Words::Markup::SdtDateStorageFormat value);
    /// Specifies the type of calendar for this <b>%SDT</b>.
    /// Default is <see cref="Aspose::Words::Markup::SdtCalendarType::Default">Default</see>
    /// 
    /// Accessing this property will only work for <see cref="Aspose::Words::Markup::SdtType::Date">Date</see> SDT type.
    /// 
    /// For all other SDT types exception will occur.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Markup::SdtCalendarType get_CalendarType();
    /// Setter for Aspose::Words::Markup::StructuredDocumentTag::get_CalendarType
    ASPOSE_WORDS_SHARED_API void set_CalendarType(Aspose::Words::Markup::SdtCalendarType value);
    /// Specifies type of building block for this <b>%SDT</b>.
    /// Can not be null.
    /// 
    /// Accessing this property will only work for <see cref="Aspose::Words::Markup::SdtType::BuildingBlockGallery">BuildingBlockGallery</see> and
    /// <see cref="Aspose::Words::Markup::SdtType::DocPartObj">DocPartObj</see> SDT types. It is read-only for <b>%SDT</b> of the document part type.
    /// 
    /// For all other SDT types exception will occur.
    ASPOSE_WORDS_SHARED_API System::String get_BuildingBlockGallery();
    /// Setter for Aspose::Words::Markup::StructuredDocumentTag::get_BuildingBlockGallery
    ASPOSE_WORDS_SHARED_API void set_BuildingBlockGallery(const System::String& value);
    /// Specifies category of building block for this <b>%SDT</b> node.
    /// Can not be null.
    /// 
    /// Accessing this property will only work for <see cref="Aspose::Words::Markup::SdtType::BuildingBlockGallery">BuildingBlockGallery</see> and
    /// <see cref="Aspose::Words::Markup::SdtType::DocPartObj">DocPartObj</see> SDT types. It is read-only for <b>%SDT</b> of the document part type.
    /// 
    /// For all other SDT types exception will occur.
    ASPOSE_WORDS_SHARED_API System::String get_BuildingBlockCategory();
    /// Setter for Aspose::Words::Markup::StructuredDocumentTag::get_BuildingBlockCategory
    ASPOSE_WORDS_SHARED_API void set_BuildingBlockCategory(const System::String& value);
    /// Specifies whether this <b>%SDT</b> allows multiple lines of text.
    /// 
    /// Accessing this property will only work for <see cref="Aspose::Words::Markup::SdtType::RichText">RichText</see> and <see cref="Aspose::Words::Markup::SdtType::PlainText">PlainText</see> SDT type.
    /// 
    /// For all other SDT types exception will occur.
    ASPOSE_WORDS_SHARED_API bool get_Multiline();
    /// Setter for Aspose::Words::Markup::StructuredDocumentTag::get_Multiline
    ASPOSE_WORDS_SHARED_API void set_Multiline(bool value);
    /// Gets the color of the structured document tag.
    ASPOSE_WORDS_SHARED_API System::Drawing::Color get_Color();
    /// Sets the color of the structured document tag.
    ASPOSE_WORDS_SHARED_API void set_Color(System::Drawing::Color value);
    /// Gets the Style of the structured document tag.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Style> get_Style();
    /// Sets the Style of the structured document tag.
    ASPOSE_WORDS_SHARED_API void set_Style(const System::SharedPtr<Aspose::Words::Style>& value);
    /// Gets the name of the style applied to the structured document tag.
    ASPOSE_WORDS_SHARED_API System::String get_StyleName();
    /// Sets the name of the style applied to the structured document tag.
    ASPOSE_WORDS_SHARED_API void set_StyleName(const System::String& value);
    /// Gets an object that represents the mapping of this structured document tag to XML data
    /// in a custom XML part of the current document.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Markup::XmlMapping> get_XmlMapping() const;

    /// Initializes a new instance of the <b>%Structured document tag</b> class.
    /// 
    /// The following types of SDT can be created:
    /// 
    /// - <see cref="Aspose::Words::Markup::SdtType::Checkbox">Checkbox</see>
    /// - <see cref="Aspose::Words::Markup::SdtType::DropDownList">DropDownList</see>
    /// - <see cref="Aspose::Words::Markup::SdtType::ComboBox">ComboBox</see>
    /// - <see cref="Aspose::Words::Markup::SdtType::Date">Date</see>
    /// - <see cref="Aspose::Words::Markup::SdtType::BuildingBlockGallery">BuildingBlockGallery</see>
    /// - <see cref="Aspose::Words::Markup::SdtType::Group">Group</see>
    /// - <see cref="Aspose::Words::Markup::SdtType::Picture">Picture</see>
    /// - <see cref="Aspose::Words::Markup::SdtType::RichText">RichText</see>
    /// - <see cref="Aspose::Words::Markup::SdtType::PlainText">PlainText</see>
    /// 
    /// @param doc The owner document.
    /// @param type Type of SDT node.
    /// @param level Level of SDT node within the document.
    ASPOSE_WORDS_SHARED_API StructuredDocumentTag(const System::SharedPtr<Aspose::Words::DocumentBase>& doc, Aspose::Words::Markup::SdtType type, Aspose::Words::Markup::MarkupLevel level);

    /// Sets the symbol used to represent the checked state of a check box content control.
    /// 
    /// Accessing this method will only work for <see cref="Aspose::Words::Markup::SdtType::Checkbox">Checkbox</see> SDT types.
    /// 
    /// For all other SDT types exception will occur.
    /// 
    /// @param characterCode The character code for the specified symbol.
    /// @param fontName The name of the font that contains the symbol.
    ASPOSE_WORDS_SHARED_API void SetCheckedSymbol(int32_t characterCode, const System::String& fontName);
    /// Sets the symbol used to represent the unchecked state of a check box content control.
    /// 
    /// Accessing this method will only work for <see cref="Aspose::Words::Markup::SdtType::Checkbox">Checkbox</see> SDT types.
    /// 
    /// For all other SDT types exception will occur.
    /// 
    /// @param characterCode The character code for the specified symbol.
    /// @param fontName The name of the font that contains the symbol.
    ASPOSE_WORDS_SHARED_API void SetUncheckedSymbol(int32_t characterCode, const System::String& fontName);
    /// Removes just this SDT node itself, but keeps the content of it inside the document tree.
    ASPOSE_WORDS_SHARED_API void RemoveSelfOnly();
    /// Accepts a visitor.
    /// 
    /// Enumerates over this node and all of its children. Each node calls a corresponding method on DocumentVisitor.
    /// 
    /// For more info see the Visitor design pattern.
    /// 
    /// @param visitor The visitor that will visit the nodes.
    /// 
    /// @return True if all nodes were visited; false if DocumentVisitor stopped the operation before visiting all nodes.
    ASPOSE_WORDS_SHARED_API bool Accept(System::SharedPtr<Aspose::Words::DocumentVisitor> visitor) override;
    /// Clears contents of this structured document tag and displays a placeholder if it is defined.
    /// 
    /// It is not possible to clear contents of a structured document tag if it has revisions.
    /// 
    /// If this structured document tag is mapped to custom XML (with using the <see cref="Aspose::Words::Markup::StructuredDocumentTag::get_XmlMapping">XmlMapping</see>
    /// property), the referenced XML node is cleared.
    ASPOSE_WORDS_SHARED_API void Clear();

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> Clone(bool , System::SharedPtr<Aspose::Words::INodeCloningListener> ) override;

    ASPOSE_WORDS_SHARED_API Aspose::Words::VisitorAction AcceptStart(System::SharedPtr<Aspose::Words::DocumentVisitor> ) override;
    ASPOSE_WORDS_SHARED_API Aspose::Words::VisitorAction AcceptEnd(System::SharedPtr<Aspose::Words::DocumentVisitor> ) override;
    ASPOSE_WORDS_SHARED_API bool CanInsert(System::SharedPtr<Aspose::Words::Node> ) override;

    virtual ASPOSE_WORDS_SHARED_API ~StructuredDocumentTag();

private:

    Aspose::Words::Markup::MarkupLevel get_Level_IMarkupNode() override;
    System::SharedPtr<Aspose::Words::Revisions::EditRevision> get_InsertRevision() override;
    void set_InsertRevision(System::SharedPtr<Aspose::Words::Revisions::EditRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::EditRevision> get_DeleteRevision() override;
    void set_DeleteRevision(System::SharedPtr<Aspose::Words::Revisions::EditRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::MoveRevision> get_MoveFromRevision() override;
    void set_MoveFromRevision(System::SharedPtr<Aspose::Words::Revisions::MoveRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::MoveRevision> get_MoveToRevision() override;
    void set_MoveToRevision(System::SharedPtr<Aspose::Words::Revisions::MoveRevision> ) override;

    System::String mField0;
    __TypeStub<4,4,4,4>::type mField1;
    System::SharedPtr<System::Object> mField2;
    System::SharedPtr<System::Object> mField3;
    __TypeStub<4,4,4,4>::type mField4;
    __TypeStub<1,1,1,1>::type mField5;
    __TypeStub<4,4,4,4>::type mField6;
    System::String mField7;
    __TypeStub<1,1,1,1>::type mField8;
    __TypeStub<4,4,4,4>::type mField9;
    System::String mField10;
    __TypeStub<1,1,1,1>::type mField11;
    System::SharedPtr<System::Object> mField12;
    System::SharedPtr<System::Object> mField13;
    System::WeakPtr<System::Object> mField14;
    __TypeStub<1,1,1,1>::type mField15;
    __TypeStub<1,1,1,1>::type mField16;
    System::SharedPtr<System::Object> mField17;
    System::SharedPtr<System::Object> mField18;
    System::SharedPtr<System::Object> mField19;
    System::String mField20;
    System::String mField21;
    System::String mField22;
    __TypeStub<4,4,4,4>::type mField23;
    __TypeStub<4,4,4,4>::type mField24;

    void RemoveMoveRevisions() override;
    System::SharedPtr<System::Object> GetDirectRunAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchInheritedRunAttr(int32_t ) override;
    void SetRunAttr(int32_t , System::SharedPtr<System::Object> ) override;
    void RemoveRunAttr(int32_t ) override;
    void ClearRunAttrs() override;

    ThisType* CppMemberwiseClone() const override ;

};

}
}
}
