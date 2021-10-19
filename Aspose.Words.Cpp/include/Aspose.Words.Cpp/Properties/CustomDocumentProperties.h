//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Properties/CustomDocumentProperties.h
#pragma once

#include <cstdint>

#include <Aspose.Words.Cpp/Properties/DocumentPropertyCollection.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
class DateTime;
class String;
}
namespace Aspose
{
namespace Words
{

namespace Properties
{
class DocumentProperty;
}
}
}

namespace Aspose {

namespace Words {

namespace Properties {

/// A collection of custom document properties.
/// 
/// Each <see cref="Aspose::Words::Properties::DocumentProperty">DocumentProperty</see> object represents a custom property of a container document.
/// 
/// The names of the properties are case-insensitive.
/// 
/// The properties in the collection are sorted alphabetically by name.
/// 
/// @sa Aspose::Words::Document
/// @sa Aspose::Words::Document::get_BuiltInDocumentProperties
/// @sa Aspose::Words::Document::get_CustomDocumentProperties
class ASPOSE_WORDS_SHARED_CLASS CustomDocumentProperties : public Aspose::Words::Properties::DocumentPropertyCollection
{
    typedef CustomDocumentProperties ThisType;
    typedef Aspose::Words::Properties::DocumentPropertyCollection BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

protected:

public:
    using Aspose::Words::Properties::DocumentPropertyCollection::idx_get;

public:

    /// Creates a new custom document property of the <b>%PropertyType.String</b> data type.
    /// 
    /// @param name The name of the property.
    /// @param value The value of the property.
    /// 
    /// @return The newly created property object.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Properties::DocumentProperty> Add(const System::String& name, const System::String& value);
    /// Creates a new custom document property of the <b>%PropertyType.Number</b> data type.
    /// 
    /// @param name The name of the property.
    /// @param value The value of the property.
    /// 
    /// @return The newly created property object.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Properties::DocumentProperty> Add(const System::String& name, int32_t value);
    /// Creates a new custom document property of the <b>%PropertyType.DateTime</b> data type.
    /// 
    /// @param name The name of the property.
    /// @param value The value of the property.
    /// 
    /// @return The newly created property object.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Properties::DocumentProperty> Add(const System::String& name, System::DateTime value);
    /// Creates a new custom document property of the <b>%PropertyType.Boolean</b> data type.
    /// 
    /// @param name The name of the property.
    /// @param value The value of the property.
    /// 
    /// @return The newly created property object.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Properties::DocumentProperty> Add(const System::String& name, bool value);
    /// Creates a new custom document property of the <b>%PropertyType.Float</b> data type.
    /// 
    /// @param name The name of the property.
    /// @param value The value of the property.
    /// 
    /// @return The newly created property object.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Properties::DocumentProperty> Add(const System::String& name, double value);
    /// Creates a new linked to content custom document property.
    /// 
    /// @param name The name of the property.
    /// @param linkSource The source of the property.
    /// 
    /// @return The newly created property object or null when the linkSource is invalid.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Properties::DocumentProperty> AddLinkToContent(const System::String& name, const System::String& linkSource);

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Properties::DocumentPropertyCollection> Create() override;

    virtual ASPOSE_WORDS_SHARED_API ~CustomDocumentProperties();

private:

    System::WeakPtr<System::Object> mField0;

};

}
}
}
