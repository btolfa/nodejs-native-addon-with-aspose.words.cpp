//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Markup/StructuredDocumentTagRangeStart.h
#pragma once

#include <system/shared_ptr.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

#include <Aspose.Words.Cpp/NodeMatcher.h>
#include <Aspose.Words.Cpp/NodeFinder.h>
#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/Node.h>
#include <Aspose.Words.Cpp/Markup/SdtType.h>
#include <Aspose.Words.Cpp/Markup/MarkupLevel.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
}
}
class String;
namespace Drawing
{
class Color;
}
}
namespace Aspose
{
namespace Words
{
class DocumentVisitor;
class INodeCloningListener;
class NodeRange;
class DocumentBase;
namespace BuildingBlocks
{
class BuildingBlock;
}
class NodeCollection;

namespace Markup
{
class StructuredDocumentTagRangeEnd;
class XmlMapping;

}

}
}

namespace Aspose {

namespace Words {

namespace Markup {

/// Represents a start of <b>%ranged</b> structured document tag which accepts multi-sections content.
/// See also <see cref="Aspose::Words::Markup::StructuredDocumentTagRangeEnd">StructuredDocumentTagRangeEnd</see>.
class ASPOSE_WORDS_SHARED_CLASS StructuredDocumentTagRangeStart : public Aspose::Words::Node, public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Words::Node>>
{
    typedef StructuredDocumentTagRangeStart ThisType;
    typedef Aspose::Words::Node BaseType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Words::Node>> BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:
    using Aspose::Words::Node::Clone;

private:

public:

    ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const override;
    /// Gets all nodes between this range start node and the range end node.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::NodeCollection> get_ChildNodes();
    /// Gets the last child in the stdContent range.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> get_LastChild();
    /// Gets the level at which this structured document tag range start occurs in the document tree.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Markup::MarkupLevel get_Level() const;
    /// Gets type of this structured document tag.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Markup::SdtType get_SdtType();
    /// Gets the color of the structured document tag.
    ASPOSE_WORDS_SHARED_API System::Drawing::Color get_Color();
    /// Sets the color of the structured document tag.
    ASPOSE_WORDS_SHARED_API void set_Color(System::Drawing::Color value);
    /// Specifies a unique read-only persistent numerical Id for this structured document tag.
    /// 
    /// Id attribute shall follow these rules:
    /// - The document shall retain structured document tag ids only if the whole document
    /// is cloned <see cref="Aspose::Words::Document::Clone">Clone</see>.
    /// - During <see cref="Aspose::Words::DocumentBase::ImportNode(System::SharedPtr<Aspose::Words::Node>, bool)">ImportNode()</see>
    /// Id shall be retained if import does not cause conflicts with other structured document tag Ids in
    /// the target document.
    /// - If multiple structured document tag nodes specify the same decimal number value for the Id attribute,
    /// then the first structured document tag in the document shall maintain this original Id,
    /// and all subsequent structured document tag nodes shall have new identifiers assigned to them when the document is loaded.
    /// - During standalone structured document tag <see cref="Aspose::Words::Markup::StructuredDocumentTag::Clone(bool, System::SharedPtr<Aspose::Words::INodeCloningListener>)">Clone()</see> operation new unique ID will be
    /// generated for the cloned structured document tag node.
    /// - If Id is not specified in the source document, then the structured document tag node shall have a new unique identifier assigned
    /// to it when the document is loaded.
    ASPOSE_WORDS_SHARED_API int32_t get_Id();
    /// When set to true, this property will prohibit a user from deleting this structured document tag.
    ASPOSE_WORDS_SHARED_API bool get_LockContentControl();
    /// When set to true, this property will prohibit a user from deleting this structured document tag.
    ASPOSE_WORDS_SHARED_API void set_LockContentControl(bool value);
    /// When set to true, this property will prohibit a user from editing the contents of this structured document tag.
    ASPOSE_WORDS_SHARED_API bool get_LockContents();
    /// When set to true, this property will prohibit a user from editing the contents of this structured document tag.
    ASPOSE_WORDS_SHARED_API void set_LockContents(bool value);
    /// Specifies whether the content of this structured document tag shall be interpreted to contain
    /// placeholder text (as opposed to regular text contents within the structured document tag).
    /// if set to true, this state shall be resumed (showing placeholder text) upon opening this document.
    ASPOSE_WORDS_SHARED_API bool get_IsShowingPlaceholderText();
    /// Specifies whether the content of this structured document tag shall be interpreted to contain
    /// placeholder text (as opposed to regular text contents within the structured document tag).
    /// if set to true, this state shall be resumed (showing placeholder text) upon opening this document.
    ASPOSE_WORDS_SHARED_API void set_IsShowingPlaceholderText(bool value);
    /// Gets the <see cref="Aspose::Words::BuildingBlocks::BuildingBlock">BuildingBlock</see> containing placeholder text which should be displayed when
    /// this structured document tag run contents are empty, the associated mapped XML element is empty as specified
    /// via the <see cref="Aspose::Words::Markup::StructuredDocumentTagRangeStart::get_XmlMapping">XmlMapping</see> element or the <see cref="Aspose::Words::Markup::StructuredDocumentTagRangeStart::get_IsShowingPlaceholderText">IsShowingPlaceholderText</see> element is true.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::BuildingBlocks::BuildingBlock> get_Placeholder();
    /// Gets Name of the <see cref="Aspose::Words::BuildingBlocks::BuildingBlock">BuildingBlock</see> containing placeholder text.
    /// BuildingBlock with this name <see cref="Aspose::Words::BuildingBlocks::BuildingBlock::get_Name">Name</see> has to be present in the <see cref="Aspose::Words::Document::get_GlossaryDocument">GlossaryDocument</see>
    /// otherwise <see cref="System::InvalidOperationException">InvalidOperationException</see> will occur.
    ASPOSE_WORDS_SHARED_API System::String get_PlaceholderName();
    /// Sets Name of the <see cref="Aspose::Words::BuildingBlocks::BuildingBlock">BuildingBlock</see> containing placeholder text.
    /// BuildingBlock with this name <see cref="Aspose::Words::BuildingBlocks::BuildingBlock::get_Name">Name</see> has to be present in the <see cref="Aspose::Words::Document::get_GlossaryDocument">GlossaryDocument</see>
    /// otherwise <see cref="System::InvalidOperationException">InvalidOperationException</see> will occur.
    ASPOSE_WORDS_SHARED_API void set_PlaceholderName(const System::String& value);
    /// Specifies a tag associated with the current structured document tag node.
    /// Can not be null.
    ASPOSE_WORDS_SHARED_API System::String get_Tag();
    /// Specifies a tag associated with the current structured document tag node.
    /// Can not be null.
    ASPOSE_WORDS_SHARED_API void set_Tag(const System::String& value);
    /// Specifies the friendly name associated with this structured document tag.
    /// Can not be null.
    ASPOSE_WORDS_SHARED_API System::String get_Title() const;
    /// Specifies the friendly name associated with this structured document tag.
    /// Can not be null.
    ASPOSE_WORDS_SHARED_API void set_Title(const System::String& value);
    /// Gets an object that represents the mapping of this structured document tag range to XML data
    /// in a custom XML part of the current document.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Markup::XmlMapping> get_XmlMapping();
    /// Specifies end of range if the StructuredDocumentTag is a ranged structured document tag.
    /// Otherwise returns null.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Markup::StructuredDocumentTagRangeEnd> get_RangeEnd();

    /// Initializes a new instance of the <b>%Structured document tag range start</b> class.
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
    ASPOSE_WORDS_SHARED_API StructuredDocumentTagRangeStart(const System::SharedPtr<Aspose::Words::DocumentBase>& doc, Aspose::Words::Markup::SdtType type);

    /// Returns a live collection of child nodes that match the specified types.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::NodeCollection> GetChildNodes(Aspose::Words::NodeType nodeType, bool isDeep);
    ASPOSE_WORDS_SHARED_API bool Accept(System::SharedPtr<Aspose::Words::DocumentVisitor> visitor) override;
    /// Provides support for the for each style iteration over the child nodes of this node.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Words::Node>>> GetEnumerator() override;
    /// Adds the specified node to the end of the stdContent range.
    /// 
    /// @param newChild The node to add.
    /// 
    /// @return The node added.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> AppendChild(const System::SharedPtr<Aspose::Words::Node>& newChild);
    /// Removes all the nodes between this range start node and the range end node.
    ASPOSE_WORDS_SHARED_API void RemoveAllChildren();
    /// Removes this range start and appropriate range end nodes of the structured document tag,
    /// but keeps its content inside the document tree.
    ASPOSE_WORDS_SHARED_API void RemoveSelfOnly();
    ASPOSE_WORDS_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> Clone(bool , System::SharedPtr<Aspose::Words::INodeCloningListener> ) override;

    virtual ASPOSE_WORDS_SHARED_API ~StructuredDocumentTagRangeStart();

private:

    System::SharedPtr<System::Object> mField0;

    ThisType* CppMemberwiseClone() const override ;

};

}
}
}
