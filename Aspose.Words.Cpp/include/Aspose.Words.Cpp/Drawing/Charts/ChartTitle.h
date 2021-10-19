//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/Charts/ChartTitle.h
#pragma once

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

#include <Aspose.Words.Cpp/IRunAttrSource.h>
#include <Aspose.Words.Cpp/Drawing/Core/Dml/IDmlExtensionListSource.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
class String;
}
namespace Aspose
{
namespace Collections
{
template <typename> class StringToObjDictionary;
}
namespace Words
{

namespace Drawing
{
namespace Core
{
namespace Dml
{
class DmlExtension;

}
}

}

}
}

namespace Aspose {

namespace Words {

namespace Drawing {

namespace Charts {

/// Provides access to the chart title properties.
class ASPOSE_WORDS_SHARED_CLASS ChartTitle : public Aspose::Words::Drawing::Core::Dml::IDmlExtensionListSource, public Aspose::Words::IRunAttrSource
{
    typedef ChartTitle ThisType;
    typedef Aspose::Words::Drawing::Core::Dml::IDmlExtensionListSource BaseType;
    typedef Aspose::Words::IRunAttrSource BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

private:

private:

public:

    /// Gets the text of the chart title.
    /// If null or empty value is specified, auto generated title will be shown.
    ASPOSE_WORDS_SHARED_API System::String get_Text();
    /// Sets the text of the chart title.
    /// If null or empty value is specified, auto generated title will be shown.
    ASPOSE_WORDS_SHARED_API void set_Text(const System::String& value);
    /// Determines whether other chart elements shall be allowed to overlap title.
    /// By default overlay is false.
    ASPOSE_WORDS_SHARED_API bool get_Overlay() const;
    /// Determines whether other chart elements shall be allowed to overlap title.
    /// By default overlay is false.
    ASPOSE_WORDS_SHARED_API void set_Overlay(bool value);
    /// Determines whether the title shall be shown for this chart.
    /// Default value is true.
    ASPOSE_WORDS_SHARED_API bool get_Show();
    /// Determines whether the title shall be shown for this chart.
    /// Default value is true.
    ASPOSE_WORDS_SHARED_API void set_Show(bool value);

protected:

    virtual ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Charts::ChartTitle> Clone();

    virtual ASPOSE_WORDS_SHARED_API ~ChartTitle();

private:

    System::SharedPtr<Aspose::Collections::StringToObjDictionary<System::SharedPtr<Aspose::Words::Drawing::Core::Dml::DmlExtension>>> get_Extensions() override;
    void set_Extensions(System::SharedPtr<Aspose::Collections::StringToObjDictionary<System::SharedPtr<Aspose::Words::Drawing::Core::Dml::DmlExtension>>> ) override;

    System::SharedPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;
    __TypeStub<1,1,1,1>::type mField2;
    System::SharedPtr<System::Object> mField3;
    System::SharedPtr<System::Object> mField4;
    System::SharedPtr<System::Object> mField5;
    System::SharedPtr<System::Object> mField6;
    System::WeakPtr<System::Object> mField7;
    __TypeStub<4,4,4,4>::type mField8;
    __TypeStub<4,4,4,4>::type mField9;
    System::SharedPtr<System::Object> mField10;
    System::SharedPtr<System::Object> mField11;

    System::SharedPtr<System::Object> GetDirectRunAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchInheritedRunAttr(int32_t ) override;
    void SetRunAttr(int32_t , System::SharedPtr<System::Object> ) override;
    void RemoveRunAttr(int32_t ) override;
    void ClearRunAttrs() override;
    virtual ThisType* CppMemberwiseClone() const ;

};

}
}
}
}
