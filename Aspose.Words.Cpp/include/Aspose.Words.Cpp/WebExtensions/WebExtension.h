//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/WebExtensions/WebExtension.h
#pragma once

#include <system/string.h>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{
namespace WebExtensions
{
class WebExtensionPropertyCollection;
class WebExtensionReferenceCollection;
class WebExtensionBindingCollection;
class WebExtensionReference;

}

}
}

namespace Aspose {

namespace Words {

namespace WebExtensions {

/// Represents a web extension object.
class ASPOSE_WORDS_SHARED_CLASS WebExtension : public System::Object
{
    typedef WebExtension ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Uniquely identifies the web extension instance in the current document.
    ASPOSE_WORDS_SHARED_API System::String get_Id() const;
    /// Uniquely identifies the web extension instance in the current document.
    ASPOSE_WORDS_SHARED_API void set_Id(const System::String& value);
    /// Specifies whether the user can interact with the web extension or not.
    ASPOSE_WORDS_SHARED_API bool get_IsFrozen() const;
    /// Specifies whether the user can interact with the web extension or not.
    ASPOSE_WORDS_SHARED_API void set_IsFrozen(bool value);
    /// Specifies the primary reference to an web extension.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::WebExtensions::WebExtensionReference> get_Reference() const;
    /// Specifies a list of web extension bindings.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::WebExtensions::WebExtensionBindingCollection> get_Bindings() const;
    /// Specifies alternate references to a web extension.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::WebExtensions::WebExtensionReferenceCollection> get_AlternateReferences() const;
    /// Represents a set of web extension custom properties.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::WebExtensions::WebExtensionPropertyCollection> get_Properties() const;

protected:

private:

    System::String mField0;
    __TypeStub<1,1,1,1>::type mField1;
    System::SharedPtr<System::Object> mField2;
    System::SharedPtr<System::Object> mField3;
    System::SharedPtr<System::Object> mField4;
    System::SharedPtr<System::Object> mField5;
    System::SharedPtr<System::Object> mField6;

};

}
}
}
