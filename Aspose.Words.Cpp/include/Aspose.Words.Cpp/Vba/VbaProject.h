//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Vba/VbaProject.h
#pragma once

#include <system/array.h>
#include <cstdint>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{

namespace IO
{
class MemoryStream;
}
namespace Collections
{
namespace Generic
{
template <typename> class IList;
}
}
}
namespace Aspose
{

namespace Words
{

namespace Vba
{

class VbaReferenceCollection;
class VbaModuleCollection;

}

}
}

namespace Aspose {

namespace Words {

namespace Vba {

/// Provides access to VBA project information.
/// A VBA project inside the document is defined as a collection of VBA modules.
class ASPOSE_WORDS_SHARED_CLASS VbaProject : public System::Object
{
    typedef VbaProject ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets VBA project name.
    ASPOSE_WORDS_SHARED_API System::String get_Name() const;
    /// Sets VBA project name.
    ASPOSE_WORDS_SHARED_API void set_Name(const System::String& value);
    /// Returns collection of VBA project modules.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Vba::VbaModuleCollection> get_Modules();
    /// Returns the VBA project’s code page.
    ASPOSE_WORDS_SHARED_API int32_t get_CodePage() const;
    /// Shows whether the VbaProject is signed or not.
    ASPOSE_WORDS_SHARED_API bool get_IsSigned();
    /// Gets a collection of VBA project references.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Vba::VbaReferenceCollection> get_References();

    /// Creates a blank VbaProject.
    ASPOSE_WORDS_SHARED_API VbaProject();

    /// Performs a copy of the <see cref="Aspose::Words::Vba::VbaProject">VbaProject</see>.
    /// 
    /// @return The cloned VbaProject.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Vba::VbaProject> Clone();

protected:

    virtual ASPOSE_WORDS_SHARED_API ~VbaProject();

private:

    System::SharedPtr<System::Object> mField0;
    __TypeStub<2,2,2,2>::type mField1;
    System::String mField2;
    System::SharedPtr<System::Object> mField3;
    System::SharedPtr<System::Object> mField4;
    __TypeStub<4,4,4,4>::type mField5;
    __TypeStub<4,4,4,4>::type mField6;
    __TypeStub<4,4,4,4>::type mField7;
    System::String mField8;
    System::String mField9;
    System::String mField10;
    __TypeStub<4,4,4,4>::type mField11;
    __TypeStub<4,4,4,4>::type mField12;
    __TypeStub<4,4,4,4>::type mField13;
    __TypeStub<2,2,2,2>::type mField14;
    System::String mField15;
    System::SharedPtr<System::Object> mField16;
    System::SharedPtr<System::Object> mField17;
    System::SharedPtr<System::Object> mField18;
    System::String mField19;
    System::String mField20;
    System::String mField21;
    System::String mField22;

};

}
}
}
