//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/Charts/ChartLegend.h
#pragma once

#include <system/shared_ptr.h>
#include <cstdint>

#include <Aspose.Words.Cpp/Drawing/Core/Dml/IDmlExtensionListSource.h>
#include <Aspose.Words.Cpp/Drawing/Charts/LegendPosition.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

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

/// Represents chart legend properties.
class ASPOSE_WORDS_SHARED_CLASS ChartLegend : public Aspose::Words::Drawing::Core::Dml::IDmlExtensionListSource
{
    typedef ChartLegend ThisType;
    typedef Aspose::Words::Drawing::Core::Dml::IDmlExtensionListSource BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Specifies the position of the legend on a chart.
    /// Default value is <see cref="Aspose::Words::Drawing::Charts::LegendPosition::Right">Right</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::Charts::LegendPosition get_Position() const;
    /// Specifies the position of the legend on a chart.
    /// Default value is <see cref="Aspose::Words::Drawing::Charts::LegendPosition::Right">Right</see>.
    ASPOSE_WORDS_SHARED_API void set_Position(Aspose::Words::Drawing::Charts::LegendPosition value);
    /// Determines whether other chart elements shall be allowed to overlap legend.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API bool get_Overlay() const;
    /// Determines whether other chart elements shall be allowed to overlap legend.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API void set_Overlay(bool value);

    ASPOSE_WORDS_SHARED_API ChartLegend();

protected:

private:

    System::SharedPtr<Aspose::Collections::StringToObjDictionary<System::SharedPtr<Aspose::Words::Drawing::Core::Dml::DmlExtension>>> get_Extensions() override;
    void set_Extensions(System::SharedPtr<Aspose::Collections::StringToObjDictionary<System::SharedPtr<Aspose::Words::Drawing::Core::Dml::DmlExtension>>> ) override;

    System::SharedPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;
    __TypeStub<4,4,4,4>::type mField2;
    __TypeStub<1,1,1,1>::type mField3;
    System::SharedPtr<System::Object> mField4;
    System::SharedPtr<System::Object> mField5;
    System::SharedPtr<System::Object> mField6;
    __TypeStub<4,4,4,4>::type mField7;
    __TypeStub<4,4,4,4>::type mField8;

};

}
}
}
}
