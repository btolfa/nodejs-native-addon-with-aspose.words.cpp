//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/BookmarkStart.h
#pragma once

#include <system/string.h>
#include <cstdint>

#include <Aspose.Words.Cpp/NodeType.h>
#include <Aspose.Words.Cpp/Node.h>
#include <Aspose.Words.Cpp/IDisplaceableByCustomXml.h>
#include <Aspose.Words.Cpp/IBookmarkNode.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
class DocumentVisitor;
class DocumentBase;
namespace Revisions
{
enum class DisplacedByType;
}

class Bookmark;

}
}

namespace Aspose {

namespace Words {

/// Represents a start of a bookmark in a Word document.
/// 
/// A complete bookmark in a Word document consists of a <see cref="Aspose::Words::BookmarkStart">BookmarkStart</see>
/// and a matching <see cref="Aspose::Words::BookmarkEnd">BookmarkEnd</see> with the same bookmark name.
/// 
/// <see cref="Aspose::Words::BookmarkStart">BookmarkStart</see> and <see cref="Aspose::Words::BookmarkEnd">BookmarkEnd</see> are just markers inside a document
/// that specify where the bookmark starts and ends.
/// 
/// Use the <see cref="Aspose::Words::BookmarkStart::get_Bookmark">Bookmark</see> class as a "facade" to work with a bookmark
/// as a single object.
class ASPOSE_WORDS_SHARED_CLASS BookmarkStart : public Aspose::Words::Node, public Aspose::Words::IBookmarkNode, public Aspose::Words::IDisplaceableByCustomXml
{
    typedef BookmarkStart ThisType;
    typedef Aspose::Words::Node BaseType;
    typedef Aspose::Words::IBookmarkNode BaseType1;
    typedef Aspose::Words::IDisplaceableByCustomXml BaseType2;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Returns <see cref="Aspose::Words::NodeType::BookmarkStart">BookmarkStart</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::NodeType get_NodeType() const override;
    /// Gets the facade object that encapsulates this bookmark start and end.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Bookmark> get_Bookmark();
    /// Gets the bookmark name.
    /// 
    /// Cannot be null.
    ASPOSE_WORDS_SHARED_API System::String get_Name() override;
    /// Sets the bookmark name.
    /// 
    /// Cannot be null.
    ASPOSE_WORDS_SHARED_API void set_Name(System::String value) override;

    /// Initializes a new instance of the <see cref="Aspose::Words::BookmarkStart">BookmarkStart</see> class.
    /// 
    /// @param doc The owner document.
    /// @param name The name of the bookmark. Cannot be null.
    ASPOSE_WORDS_SHARED_API BookmarkStart(const System::SharedPtr<Aspose::Words::DocumentBase>& doc, const System::String& name);

    /// Accepts a visitor.
    /// 
    /// Calls <see cref="Aspose::Words::DocumentVisitor::VisitBookmarkStart(System::SharedPtr<Aspose::Words::BookmarkStart>)">VisitBookmarkStart()</see>.
    /// 
    /// For more info see the Visitor design pattern.
    /// 
    /// @param visitor The visitor that will visit the node.
    /// 
    /// @return False if the visitor requested the enumeration to stop.
    ASPOSE_WORDS_SHARED_API bool Accept(System::SharedPtr<Aspose::Words::DocumentVisitor> visitor) override;
    /// Returns an empty string.
    /// 
    /// @return An empty string.
    ASPOSE_WORDS_SHARED_API System::String GetText() override;

protected:

    virtual ASPOSE_WORDS_SHARED_API ~BookmarkStart();

private:

    Aspose::Words::Revisions::DisplacedByType get_DisplacedByCustomXml() override;
    void set_DisplacedByCustomXml(Aspose::Words::Revisions::DisplacedByType ) override;

    System::String mField0;
    __TypeStub<4,4,4,4>::type mField1;
    __TypeStub<4,4,4,4>::type mField2;

    ThisType* CppMemberwiseClone() const override ;

};

}
}
