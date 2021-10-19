//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/CompositeNode.h
#pragma once

#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <cstdint>

#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/Node.h>
#include <Aspose.Words.Cpp/INodeCollection.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
class DocumentVisitor;
class NodeList;
class INodeCloningListener;

class DocumentBase;

class NodeCollection;

enum class VisitorAction;
}
}
namespace System
{
namespace Text
{
class StringBuilder;
}
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
}
}
}

namespace Aspose {

namespace Words {

/// Base class for nodes that can contain other nodes.
/// 
/// A document is represented as a tree of nodes, similar to DOM or XmlDocument.
/// 
/// For more info see the Composite design pattern.
/// 
/// The <see cref="Aspose::Words::CompositeNode">CompositeNode</see> class:
/// 
/// - Provides access to the child nodes.
/// - Implements Composite operations such as insert and remove children.
/// - Provides methods for XPath navigation.
class ASPOSE_WORDS_SHARED_CLASS CompositeNode : public Aspose::Words::Node, public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Words::Node>>, public Aspose::Words::INodeCollection
{
    typedef CompositeNode ThisType;
    typedef Aspose::Words::Node BaseType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Words::Node>> BaseType1;
    typedef Aspose::Words::INodeCollection BaseType2;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:
    using Aspose::Words::Node::Clone;

public:

    /// Returns true as this node can have child nodes.
    ASPOSE_WORDS_SHARED_API bool get_IsComposite() override;
    /// Returns true if this node has any child nodes.
    ASPOSE_WORDS_SHARED_API bool get_HasChildNodes();
    /// Gets all immediate child nodes of this node.
    /// 
    /// Note, <see cref="Aspose::Words::CompositeNode::get_ChildNodes">ChildNodes</see> is equivalent to calling <c>%GetChildNodes(NodeType.Any, false)</c>
    /// and creates and returns a new collection every time it is accessed.
    /// 
    /// If there are no child nodes, this property returns an empty collection.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::NodeCollection> get_ChildNodes();
    /// Gets the first child of the node.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> get_FirstChild() const;
    /// Gets the last child of the node.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> get_LastChild() const;
    /// Gets the number of immediate children of this node.
    ASPOSE_WORDS_SHARED_API int32_t get_Count();

    /// Gets the text of this node and of all its children.
    /// 
    /// The returned string includes all control and special characters as described in <see cref="Aspose::Words::ControlChar">ControlChar</see>.
    ASPOSE_WORDS_SHARED_API System::String GetText() override;
    /// Returns a live collection of child nodes that match the specified type.
    /// 
    /// The collection of nodes returned by this method is always live.
    /// 
    /// A live collection is always in sync with the document. For example, if you
    /// selected all sections in a document and enumerate through the collection
    /// deleting the sections, the section is removed from the collection immediately
    /// when it is removed from the document.
    /// 
    /// @param nodeType Specifies the type of nodes to select.
    /// @param isDeep True to select from all child nodes recursively.
    ///     False to select only among immediate children.
    /// 
    /// @return A live collection of child nodes of the specified type.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::NodeCollection> GetChildNodes(Aspose::Words::NodeType nodeType, bool isDeep);
    /// Returns an Nth child node that matches the specified type.
    /// 
    /// If index is out of range, a null is returned.
    /// 
    /// @param nodeType Specifies the type of the child node.
    /// @param index Zero based index of the child node to select.
    ///     Negative indexes are also allowed and indicate access from the end,
    ///     that is -1 means the last node.
    /// @param isDeep True to select from all child nodes recursively.
    ///     False to select only among immediate children. See remarks for more info.
    /// 
    /// @return The child node that matches the criteria or null if no matching node is found.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> GetChild(Aspose::Words::NodeType nodeType, int32_t index, bool isDeep);
    /// Selects a list of nodes matching the XPath expression.
    /// 
    /// Only expressions with element names are supported at the moment. Expressions
    /// that use attribute names are not supported.
    /// 
    /// @param xpath The XPath expression.
    /// 
    /// @return A list of nodes matching the XPath query.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::NodeList> SelectNodes(const System::String& xpath);
    /// Selects the first Node that matches the XPath expression.
    /// 
    /// Only expressions with element names are supported at the moment. Expressions
    /// that use attribute names are not supported.
    /// 
    /// @param xpath The XPath expression.
    /// 
    /// @return The first Node that matches the XPath query or null if no matching node is found.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> SelectSingleNode(const System::String& xpath);
    /// Provides support for the for each style iteration over the child nodes of this node.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Words::Node>>> GetEnumerator() override;
    /// Adds the specified node to the end of the list of child nodes for this node.
    /// 
    /// If the newChild is already in the tree, it is first removed.
    /// 
    /// If the node being inserted was created from another document, you should use
    /// <see cref="Aspose::Words::DocumentBase::ImportNode(System::SharedPtr<Aspose::Words::Node>, bool, Aspose::Words::ImportFormatMode)">ImportNode()</see> to import the node to the current document.
    /// The imported node can then be inserted into the current document.
    /// 
    /// @param newChild The node to add.
    /// 
    /// @return The node added.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> AppendChild(const System::SharedPtr<Aspose::Words::Node>& newChild);
    /// Adds the specified node to the beginning of the list of child nodes for this node.
    /// 
    /// If the newChild is already in the tree, it is first removed.
    /// 
    /// If the node being inserted was created from another document, you should use
    /// <see cref="Aspose::Words::DocumentBase::ImportNode(System::SharedPtr<Aspose::Words::Node>, bool, Aspose::Words::ImportFormatMode)">ImportNode()</see> to import the node to the current document.
    /// The imported node can then be inserted into the current document.
    /// 
    /// @param newChild The node to add.
    /// 
    /// @return The node added.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> PrependChild(const System::SharedPtr<Aspose::Words::Node>& newChild);
    /// Inserts the specified node immediately after the specified reference node.
    /// 
    /// If refChild is null, inserts newChild at the beginning of the list of child nodes.
    /// 
    /// If the newChild is already in the tree, it is first removed.
    /// 
    /// If the node being inserted was created from another document, you should use
    /// <see cref="Aspose::Words::DocumentBase::ImportNode(System::SharedPtr<Aspose::Words::Node>, bool, Aspose::Words::ImportFormatMode)">ImportNode()</see> to import the node to the current document.
    /// The imported node can then be inserted into the current document.
    /// 
    /// @param newChild The Node to insert.
    /// @param refChild The Node that is the reference node. The newNode is placed after the refNode.
    /// 
    /// @return The inserted node.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> InsertAfter(const System::SharedPtr<Aspose::Words::Node>& newChild, const System::SharedPtr<Aspose::Words::Node>& refChild);
    /// Inserts the specified node immediately before the specified reference node.
    /// 
    /// If refChild is null, inserts newChild at the end of the list of child nodes.
    /// 
    /// If the newChild is already in the tree, it is first removed.
    /// 
    /// If the node being inserted was created from another document, you should use
    /// <see cref="Aspose::Words::DocumentBase::ImportNode(System::SharedPtr<Aspose::Words::Node>, bool, Aspose::Words::ImportFormatMode)">ImportNode()</see> to import the node to the current document.
    /// The imported node can then be inserted into the current document.
    /// 
    /// @param newChild The Node to insert.
    /// @param refChild The Node that is the reference node. The newChild is placed before this node.
    /// 
    /// @return The inserted node.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> InsertBefore(const System::SharedPtr<Aspose::Words::Node>& newChild, const System::SharedPtr<Aspose::Words::Node>& refChild);
    /// Removes the specified child node.
    /// 
    /// The parent of oldChild is set to null after the node is removed.
    /// 
    /// @param oldChild The node to remove.
    /// 
    /// @return The removed node.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> RemoveChild(const System::SharedPtr<Aspose::Words::Node>& oldChild);
    /// Removes all the child nodes of the current node.
    ASPOSE_WORDS_SHARED_API void RemoveAllChildren();
    /// Removes all <see cref="Aspose::Words::Markup::SmartTag">SmartTag</see> descendant nodes of the current node.
    ASPOSE_WORDS_SHARED_API void RemoveSmartTags();
    /// Returns the index of the specified child node in the child node array.
    ASPOSE_WORDS_SHARED_API int32_t IndexOf(const System::SharedPtr<Aspose::Words::Node>& child);

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> Clone(bool , System::SharedPtr<Aspose::Words::INodeCloningListener> ) override;
    ASPOSE_WORDS_SHARED_API void GetTextToBuilder(System::SharedPtr<System::Text::StringBuilder> ) override;

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> GetNodeFromPos(int32_t ) override;
    ASPOSE_WORDS_SHARED_API int32_t GetTextLength() override;
    virtual ASPOSE_WORDS_SHARED_API System::String GetEndText();

    virtual Aspose::Words::VisitorAction AcceptStart(System::SharedPtr<Aspose::Words::DocumentVisitor> ) = 0;
    virtual Aspose::Words::VisitorAction AcceptEnd(System::SharedPtr<Aspose::Words::DocumentVisitor> ) = 0;

    virtual bool CanInsert(System::SharedPtr<Aspose::Words::Node> ) = 0;

    virtual ASPOSE_WORDS_SHARED_API ~CompositeNode();

private:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::CompositeNode> get_Container() override;

    System::SharedPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;
    System::SharedPtr<System::Object> mField2;

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> GetNextMatchingNode(System::SharedPtr<Aspose::Words::Node> ) override;
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> GetCurrentNode() override;

};

}
}
