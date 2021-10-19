//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Node.h
#pragma once

#include <system/constraints.h>
#include <system/array.h>
#include <cstdint>

#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/SaveFormat.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{

class DocumentVisitor;
class INodeCloningListener;

class Range;
class DocumentBase;

namespace Saving
{
class SaveOptions;

}

class CompositeNode;
}
}
namespace System
{
namespace Text
{
class StringBuilder;
}

}

namespace Aspose {

namespace Words {

/// Base class for all nodes of a Word document.
/// 
/// A document is represented as a tree of nodes, similar to DOM or XmlDocument.
/// 
/// For more info see the Composite design pattern.
/// 
/// The <see cref="Aspose::Words::Node">Node</see> class:
/// 
/// - Defines the child node interface.
/// - Defines the interface for visiting nodes.
/// - Provides default cloning capability.
/// - Implements parent node and owner document mechanisms.
/// - Implements access to sibling nodes.
class ASPOSE_WORDS_SHARED_CLASS Node : public virtual System::Object
{
    typedef Node ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:
    using System::Object::ToString;

public:

    /// Gets the type of this node.
    virtual ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const = 0;
    /// Gets the immediate parent of this node.
    /// 
    /// If a node has just been created and not yet added to the tree,
    /// or if it has been removed from the tree, the parent is null.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::CompositeNode> get_ParentNode();
    /// Gets the document to which this node belongs.
    /// 
    /// The node always belongs to a document even if it has just been created
    /// and not yet added to the tree, or if it has been removed from the tree.
    virtual ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::DocumentBase> get_Document() const;
    /// Gets the node immediately preceding this node.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> get_PreviousSibling();
    /// Gets the node immediately following this node.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> get_NextSibling();
    /// Returns true if this node can contain other nodes.
    virtual ASPOSE_WORDS_SHARED_API bool get_IsComposite();
    /// Returns a <b>%Range</b> object that represents the portion of a document that is contained in this node.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Range> get_Range();
    /// Specifies custom node identifier.
    /// 
    /// Default is zero.
    /// 
    /// This identifier can be set and used arbitrarily. For example, as a key to get external data.
    /// 
    /// Important note, specified value is not saved to an output file and exists only during the node lifetime.
    ASPOSE_WORDS_SHARED_API int32_t get_CustomNodeId() const;
    /// Setter for Aspose::Words::Node::get_CustomNodeId
    ASPOSE_WORDS_SHARED_API void set_CustomNodeId(int32_t value);

    /// Creates a duplicate of the node.
    /// 
    /// This method serves as a copy constructor for nodes.
    /// The cloned node has no parent, but belongs to the same document as the original node.
    /// 
    /// This method always performs a deep copy of the node. The <i>%isCloneChildren</i> parameter
    /// specifies whether to perform copy all child nodes as well.
    /// 
    /// @param isCloneChildren True to recursively clone the subtree under the specified node;
    ///     false to clone only the node itself.
    /// 
    /// @return The cloned node.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> Clone(bool isCloneChildren);
    /// Accepts a visitor.
    /// 
    /// Enumerates over this node and all of its children. Each node calls a corresponding method on DocumentVisitor.
    /// 
    /// For more info see the Visitor design pattern.
    /// 
    /// @param visitor The visitor that will visit the nodes.
    /// 
    /// @return True if all nodes were visited; false if DocumentVisitor stopped the operation before visiting all nodes.
    virtual ASPOSE_WORDS_SHARED_API bool Accept(System::SharedPtr<Aspose::Words::DocumentVisitor> visitor) = 0;
    /// Gets the text of this node and of all its children.
    /// 
    /// The returned string includes all control and special characters as described in <see cref="Aspose::Words::ControlChar">ControlChar</see>.
    virtual ASPOSE_WORDS_SHARED_API System::String GetText();
    template <typename T>
    T GetAncestorOf()
    {
        typedef Aspose::Words::CompositeNode BaseT_CompositeNode;
assert_is_base_of(BaseT_CompositeNode, T);
System::SharedPtr<Aspose::Words::Node> curParent = System::StaticCast<Aspose::Words::Node>(this->get_ParentNode());
while (curParent != nullptr)
{
    auto parent = System::StaticCast_noexcept<typename T::Pointee_>(curParent);
    if (parent != nullptr)
    {
        return parent;
    }
    curParent = System::StaticCast<Aspose::Words::Node>(curParent->get_ParentNode());
}
return nullptr;
    }
    /// Gets the first ancestor of the specified <see cref="Aspose::Words::NodeType">NodeType</see>.
    /// 
    /// @param ancestorType The node type of the ancestor to retrieve.
    /// 
    /// @return The ancestor of the specified type or null if no ancestor of this type was found.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::CompositeNode> GetAncestor(Aspose::Words::NodeType ancestorType);
    /// Removes itself from the parent.
    ASPOSE_WORDS_SHARED_API void Remove();
    /// Gets next node according to the pre-order tree traversal algorithm.
    /// 
    /// @param rootNode The top node (limit) of traversal.
    /// 
    /// @return Next node in pre-order order. Null if reached the rootNode.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> NextPreOrder(const System::SharedPtr<Aspose::Words::Node>& rootNode);
    /// Gets the previous node according to the pre-order tree traversal algorithm.
    /// 
    /// @param rootNode The top node (limit) of traversal.
    /// 
    /// @return Previous node in pre-order order. Null if reached the rootNode.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> PreviousPreOrder(const System::SharedPtr<Aspose::Words::Node>& rootNode);
    /// Exports the content of the node into a string in the specified format.
    /// 
    /// @return The content of the node in the specified format.
    ASPOSE_WORDS_SHARED_API System::String ToString(Aspose::Words::SaveFormat saveFormat);
    /// Exports the content of the node into a string using the specified save options.
    /// 
    /// @param saveOptions Specifies the options that control how the node is saved.
    /// 
    /// @return The content of the node in the specified format.
    ASPOSE_WORDS_SHARED_API System::String ToString(const System::SharedPtr<Aspose::Words::Saving::SaveOptions>& saveOptions);
    /// A utility method that converts a node type enum value into a user friendly string.
    static ASPOSE_WORDS_SHARED_API System::String NodeTypeToString(Aspose::Words::NodeType nodeType);

protected:

    virtual ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> GetNodeFromPos(int32_t );
    virtual ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> Clone(bool , System::SharedPtr<Aspose::Words::INodeCloningListener> );

    virtual ASPOSE_WORDS_SHARED_API void GetTextToBuilder(System::SharedPtr<System::Text::StringBuilder> );

    virtual ASPOSE_WORDS_SHARED_API int32_t GetTextLength();

    virtual ASPOSE_WORDS_SHARED_API ~Node();

private:

    System::WeakPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;
    System::WeakPtr<System::Object> mField2;
    __TypeStub<4,4,4,4>::type mField3;

    virtual ThisType* CppMemberwiseClone() const = 0;

};

}
}
