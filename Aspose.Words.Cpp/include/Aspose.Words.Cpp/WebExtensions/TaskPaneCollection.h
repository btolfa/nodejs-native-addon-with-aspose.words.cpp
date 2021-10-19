//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/WebExtensions/TaskPaneCollection.h
#pragma once

#include <Aspose.Words.Cpp/WebExtensions/TaskPane.h>
#include <Aspose.Words.Cpp/WebExtensions/BaseWebExtensionCollection.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose {

namespace Words {

namespace WebExtensions {

/// Specifies a list of persisted task pane objects.
class ASPOSE_WORDS_SHARED_CLASS TaskPaneCollection : public Aspose::Words::WebExtensions::BaseWebExtensionCollection<System::SharedPtr<Aspose::Words::WebExtensions::TaskPane>>
{
    typedef TaskPaneCollection ThisType;
    typedef Aspose::Words::WebExtensions::BaseWebExtensionCollection<System::SharedPtr<Aspose::Words::WebExtensions::TaskPane>> BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    ASPOSE_WORDS_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;

protected:

    virtual ASPOSE_WORDS_SHARED_API ~TaskPaneCollection();

};

}
}
}
