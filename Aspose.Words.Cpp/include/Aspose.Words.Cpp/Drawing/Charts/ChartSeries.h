//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/Charts/ChartSeries.h
#pragma once

#include <system/array.h>

#include <Aspose.Words.Cpp/Drawing/Core/Dml/IDmlExtensionListSource.h>
#include <Aspose.Words.Cpp/Drawing/Charts/IChartDataPoint.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
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
namespace Charts
{
class ChartFormat;
class ChartMarker;

class ChartDataPointCollection;
class ChartDataLabelCollection;

}
}

}
}

namespace Aspose {

namespace Words {

namespace Drawing {

namespace Charts {

/// Represents chart series properties.
class ASPOSE_WORDS_SHARED_CLASS ChartSeries : public Aspose::Words::Drawing::Charts::IChartDataPoint, public Aspose::Words::Drawing::Core::Dml::IDmlExtensionListSource
{
    typedef ChartSeries ThisType;
    typedef Aspose::Words::Drawing::Charts::IChartDataPoint BaseType;
    typedef Aspose::Words::Drawing::Core::Dml::IDmlExtensionListSource BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    ASPOSE_WORDS_SHARED_API int32_t get_Explosion() override;
    ASPOSE_WORDS_SHARED_API void set_Explosion(int32_t value) override;
    ASPOSE_WORDS_SHARED_API bool get_InvertIfNegative() override;
    ASPOSE_WORDS_SHARED_API void set_InvertIfNegative(bool value) override;
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Charts::ChartMarker> get_Marker() override;
    ASPOSE_WORDS_SHARED_API bool get_Bubble3D() override;
    ASPOSE_WORDS_SHARED_API void set_Bubble3D(bool value) override;
    /// Returns a collection of formatting objects for all data points in this series.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Charts::ChartDataPointCollection> get_DataPoints() const;
    /// Gets the name of the series, if name is not set explicitly it is generated using index.
    /// By default returns Series plus one based index.
    ASPOSE_WORDS_SHARED_API System::String get_Name();
    /// Sets the name of the series, if name is not set explicitly it is generated using index.
    /// By default returns Series plus one based index.
    ASPOSE_WORDS_SHARED_API void set_Name(const System::String& value);
    /// Allows to specify whether the line connecting the points on the chart shall be smoothed using Catmull-Rom splines.
    ASPOSE_WORDS_SHARED_API bool get_Smooth() const;
    /// Allows to specify whether the line connecting the points on the chart shall be smoothed using Catmull-Rom splines.
    ASPOSE_WORDS_SHARED_API void set_Smooth(bool value);
    /// Gets a flag indicating whether data labels are displayed for the series.
    ASPOSE_WORDS_SHARED_API bool get_HasDataLabels() const;
    /// Sets a flag indicating whether data labels are displayed for the series.
    ASPOSE_WORDS_SHARED_API void set_HasDataLabels(bool value);
    /// Specifies the settings for the data labels for the entire series.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Charts::ChartDataLabelCollection> get_DataLabels();
    /// Provides access to fill and line formatting of the series.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Charts::ChartFormat> get_Format();

protected:

    virtual ASPOSE_WORDS_SHARED_API ~ChartSeries();

private:

    __TypeStub<1,1,1,1>::type mField0;

    System::SharedPtr<Aspose::Collections::StringToObjDictionary<System::SharedPtr<Aspose::Words::Drawing::Core::Dml::DmlExtension>>> get_Extensions() override;
    void set_Extensions(System::SharedPtr<Aspose::Collections::StringToObjDictionary<System::SharedPtr<Aspose::Words::Drawing::Core::Dml::DmlExtension>>> ) override;

    System::SharedPtr<System::Object> mField1;
    __TypeStub<4,4,4,4>::type mField2;
    __TypeStub<4,4,4,4>::type mField3;
    __TypeStub<1,1,1,1>::type mField4;
    __TypeStub<1,1,1,1>::type mField5;
    __TypeStub<4,4,4,4>::type mField6;
    System::SharedPtr<System::Object> mField7;
    System::SharedPtr<System::Object> mField8;
    System::SharedPtr<System::Object> mField9;
    System::SharedPtr<System::Object> mField10;
    System::SharedPtr<System::Object> mField11;
    System::SharedPtr<System::Object> mField12;
    System::SharedPtr<System::Object> mField13;
    System::SharedPtr<System::Object> mField14;
    System::SharedPtr<System::Object> mField15;
    System::SharedPtr<System::Object> mField16;
    System::SharedPtr<System::Object> mField17;
    System::SharedPtr<System::Object> mField18;
    System::WeakPtr<System::Object> mField19;
    System::SharedPtr<System::Object> mField20;
    System::SharedPtr<System::Object> mField21;
    __TypeStub<4,4,4,4>::type mField22;
    __TypeStub<1,1,1,1>::type mField23;
    System::SharedPtr<System::Object> mField24;
    System::String mField25;
    __TypeStub<4,4,4,4>::type mField26;
    __TypeStub<4,4,4,4>::type mField27;
    __TypeStub<4,4,4,4>::type mField28;
    System::SharedPtr<System::Object> mField29;
    System::SharedPtr<System::Object> mField30;

};

}
}
}
}
