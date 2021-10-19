//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/Charts/ChartAxis.h
#pragma once

#include <system/array.h>
#include <drawing/rectangle_f.h>
#include <cstdint>

#include <Aspose.Words.Cpp/ParagraphAlignment.h>
#include <Aspose.Words.Cpp/Drawing/Core/Dml/IDmlExtensionListSource.h>
#include <Aspose.Words.Cpp/Drawing/Charts/Core/INumberFormatProvider.h>
#include <Aspose.Words.Cpp/Drawing/Charts/Core/IDmlChartTitleHolder.h>
#include <Aspose.Words.Cpp/Drawing/Charts/ChartAxisType.h>
#include <Aspose.Words.Cpp/Drawing/Charts/AxisTimeUnit.h>
#include <Aspose.Words.Cpp/Drawing/Charts/AxisTickMark.h>
#include <Aspose.Words.Cpp/Drawing/Charts/AxisTickLabelPosition.h>
#include <Aspose.Words.Cpp/Drawing/Charts/AxisCrosses.h>
#include <Aspose.Words.Cpp/Drawing/Charts/AxisCategoryType.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
namespace Drawing
{
class SizeF;
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

namespace Collections
{
template <typename> class StringToObjDictionary;
}
namespace Words
{
class DocumentBase;

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
class ChartTitle;
class AxisScaling;
class ChartNumberFormat;

class AxisDisplayUnit;

namespace Core
{

namespace ComplexTypes
{

class DmlChartTx;

class DmlChartNumFormat;

}
namespace SimpleTypes
{
enum class TitlePosition;

}

}
}
}
namespace ApsBuilder
{
namespace Dml
{
namespace Charts
{
class DmlChartRenderingContext;

}
}
}
}
}

namespace Aspose {

namespace Words {

namespace Drawing {

namespace Charts {

/// Represents the axis options of the chart.
class ASPOSE_WORDS_SHARED_CLASS ChartAxis : public Aspose::Words::Drawing::Charts::Core::IDmlChartTitleHolder, public Aspose::Words::Drawing::Core::Dml::IDmlExtensionListSource, public Aspose::Words::Drawing::Charts::Core::INumberFormatProvider
{
    typedef ChartAxis ThisType;
    typedef Aspose::Words::Drawing::Charts::Core::IDmlChartTitleHolder BaseType;
    typedef Aspose::Words::Drawing::Core::Dml::IDmlExtensionListSource BaseType1;
    typedef Aspose::Words::Drawing::Charts::Core::INumberFormatProvider BaseType2;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Returns type of the axis.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::Charts::ChartAxisType get_Type() const;
    /// Gets type of the category axis.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::Charts::AxisCategoryType get_CategoryType();
    /// Sets type of the category axis.
    ASPOSE_WORDS_SHARED_API void set_CategoryType(Aspose::Words::Drawing::Charts::AxisCategoryType value);
    /// Specifies how this axis crosses the perpendicular axis.
    /// 
    /// Default value is <see cref="Aspose::Words::Drawing::Charts::AxisCrosses::Automatic">Automatic</see>.
    /// 
    /// The property is not supported by MS Office 2016 new charts.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::Charts::AxisCrosses get_Crosses();
    /// Setter for Aspose::Words::Drawing::Charts::ChartAxis::get_Crosses
    ASPOSE_WORDS_SHARED_API void set_Crosses(Aspose::Words::Drawing::Charts::AxisCrosses value);
    /// Specifies where on the perpendicular axis the axis crosses.
    /// 
    /// The property has effect only if <see cref="Aspose::Words::Drawing::Charts::ChartAxis::get_Crosses">Crosses</see> are set to <see cref="Aspose::Words::Drawing::Charts::AxisCrosses::Custom">Custom</see>.
    /// It is not supported by MS Office 2016 new charts.
    /// 
    /// The units are determined by the type of axis. When the axis is a value axis, the value of the property
    /// is a decimal number on the value axis. When the axis is a time category axis, the value is defined as
    /// an integer number of days relative to the base date (30/12/1899). For a text category axis, the value is
    /// an integer category number, starting with 1 as the first category.
    ASPOSE_WORDS_SHARED_API double get_CrossesAt();
    /// Setter for Aspose::Words::Drawing::Charts::ChartAxis::get_CrossesAt
    ASPOSE_WORDS_SHARED_API void set_CrossesAt(double value);
    /// Returns a flag indicating whether values of axis should be displayed in reverse order, i.e.
    /// from max to min.
    ASPOSE_WORDS_SHARED_API bool get_ReverseOrder();
    /// Sets a flag indicating whether values of axis should be displayed in reverse order, i.e.
    /// from max to min.
    ASPOSE_WORDS_SHARED_API void set_ReverseOrder(bool value);
    /// Returns the major tick marks.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::Charts::AxisTickMark get_MajorTickMark();
    /// Sets the major tick marks.
    ASPOSE_WORDS_SHARED_API void set_MajorTickMark(Aspose::Words::Drawing::Charts::AxisTickMark value);
    /// Returns the minor tick marks for the axis.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::Charts::AxisTickMark get_MinorTickMark();
    /// Sets the minor tick marks for the axis.
    ASPOSE_WORDS_SHARED_API void set_MinorTickMark(Aspose::Words::Drawing::Charts::AxisTickMark value);
    /// Returns the position of the tick labels on the axis.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::Charts::AxisTickLabelPosition get_TickLabelPosition();
    /// Sets the position of the tick labels on the axis.
    ASPOSE_WORDS_SHARED_API void set_TickLabelPosition(Aspose::Words::Drawing::Charts::AxisTickLabelPosition value);
    /// Returns or sets the distance between major tick marks.
    /// 
    /// Valid range of a value is greater than zero. The property has effect for time category and
    /// value axes.
    /// 
    /// Setting this property sets the <see cref="Aspose::Words::Drawing::Charts::ChartAxis::get_MajorUnitIsAuto">MajorUnitIsAuto</see> property to <b>%false</b>.
    ASPOSE_WORDS_SHARED_API double get_MajorUnit();
    /// Setter for Aspose::Words::Drawing::Charts::ChartAxis::get_MajorUnit
    ASPOSE_WORDS_SHARED_API void set_MajorUnit(double value);
    /// Gets a flag indicating whether default distance between major tick marks shall be used.
    ASPOSE_WORDS_SHARED_API bool get_MajorUnitIsAuto();
    /// Sets a flag indicating whether default distance between major tick marks shall be used.
    ASPOSE_WORDS_SHARED_API void set_MajorUnitIsAuto(bool value);
    /// Returns the scale value for major tick marks on the time category axis.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::Charts::AxisTimeUnit get_MajorUnitScale();
    /// Sets the scale value for major tick marks on the time category axis.
    ASPOSE_WORDS_SHARED_API void set_MajorUnitScale(Aspose::Words::Drawing::Charts::AxisTimeUnit value);
    /// Returns or sets the distance between minor tick marks.
    /// 
    /// Valid range of a value is greater than zero. The property has effect for time category and
    /// value axes.
    /// 
    /// Setting this property sets the <see cref="Aspose::Words::Drawing::Charts::ChartAxis::get_MinorUnitIsAuto">MinorUnitIsAuto</see> property to <b>%false</b>.
    ASPOSE_WORDS_SHARED_API double get_MinorUnit();
    /// Setter for Aspose::Words::Drawing::Charts::ChartAxis::get_MinorUnit
    ASPOSE_WORDS_SHARED_API void set_MinorUnit(double value);
    /// Gets a flag indicating whether default distance between minor tick marks shall be used.
    ASPOSE_WORDS_SHARED_API bool get_MinorUnitIsAuto();
    /// Sets a flag indicating whether default distance between minor tick marks shall be used.
    ASPOSE_WORDS_SHARED_API void set_MinorUnitIsAuto(bool value);
    /// Returns the scale value for minor tick marks on the time category axis.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::Charts::AxisTimeUnit get_MinorUnitScale();
    /// Sets the scale value for minor tick marks on the time category axis.
    ASPOSE_WORDS_SHARED_API void set_MinorUnitScale(Aspose::Words::Drawing::Charts::AxisTimeUnit value);
    /// Returns the smallest time unit that is represented on the time category axis.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::Charts::AxisTimeUnit get_BaseTimeUnit();
    /// Sets the smallest time unit that is represented on the time category axis.
    ASPOSE_WORDS_SHARED_API void set_BaseTimeUnit(Aspose::Words::Drawing::Charts::AxisTimeUnit value);
    /// Returns a <see cref="Aspose::Words::Drawing::Charts::ChartNumberFormat">ChartNumberFormat</see> object that allows defining number formats for the axis.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Charts::ChartNumberFormat> get_NumberFormat();
    /// Gets or sets the distance of labels from the axis.
    /// 
    /// The property represents a percentage of the default label offset.
    /// 
    /// Valid range is from 0 to 1000 percent inclusive. Default value is 100\%.
    /// 
    /// The property has effect only for category axes. It is not supported by MS Office 2016 new charts.
    ASPOSE_WORDS_SHARED_API int32_t get_TickLabelOffset();
    /// Setter for Aspose::Words::Drawing::Charts::ChartAxis::get_TickLabelOffset
    ASPOSE_WORDS_SHARED_API void set_TickLabelOffset(int32_t value);
    /// Specifies the scaling value of the display units for the value axis.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Charts::AxisDisplayUnit> get_DisplayUnit();
    /// Gets a flag indicating whether the value axis crosses the category axis between categories.
    ASPOSE_WORDS_SHARED_API bool get_AxisBetweenCategories();
    /// Sets a flag indicating whether the value axis crosses the category axis between categories.
    ASPOSE_WORDS_SHARED_API void set_AxisBetweenCategories(bool value);
    /// Provides access to the scaling options of the axis.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Charts::AxisScaling> get_Scaling();
    /// Gets or sets the interval, at which tick labels are drawn.
    /// 
    /// The property has effect for text category and series axes. It is not supported by MS Office 2016
    /// new charts. Valid range of a value is greater than or equal to 1.
    /// 
    /// Setting this property sets the <see cref="Aspose::Words::Drawing::Charts::ChartAxis::get_TickLabelSpacingIsAuto">TickLabelSpacingIsAuto</see> property to <b>%false</b>.
    ASPOSE_WORDS_SHARED_API int32_t get_TickLabelSpacing();
    /// Setter for Aspose::Words::Drawing::Charts::ChartAxis::get_TickLabelSpacing
    ASPOSE_WORDS_SHARED_API void set_TickLabelSpacing(int32_t value);
    /// Gets or sets a flag indicating whether automatic interval of drawing tick labels shall be used.
    /// 
    /// Default value is <b>%true</b>.
    /// 
    /// The property has effect for text category and series axes. It is not supported by MS Office 2016
    /// new charts.
    ASPOSE_WORDS_SHARED_API bool get_TickLabelSpacingIsAuto();
    /// Setter for Aspose::Words::Drawing::Charts::ChartAxis::get_TickLabelSpacingIsAuto
    ASPOSE_WORDS_SHARED_API void set_TickLabelSpacingIsAuto(bool value);
    /// Gets or sets text alignment of axis tick labels.
    /// 
    /// This property has effect only for multi-line labels.
    /// 
    /// Default value is <see cref="Aspose::Words::ParagraphAlignment::Center">Center</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::ParagraphAlignment get_TickLabelAlignment();
    /// Setter for Aspose::Words::Drawing::Charts::ChartAxis::get_TickLabelAlignment
    ASPOSE_WORDS_SHARED_API void set_TickLabelAlignment(Aspose::Words::ParagraphAlignment value);
    /// Gets or sets the interval, at which tick marks are drawn.
    /// 
    /// The property has effect for text category and series axes. It is not supported by MS Office 2016
    /// new charts.
    /// 
    /// Valid range of a value is greater than or equal to 1.
    ASPOSE_WORDS_SHARED_API int32_t get_TickMarkSpacing();
    /// Setter for Aspose::Words::Drawing::Charts::ChartAxis::get_TickMarkSpacing
    ASPOSE_WORDS_SHARED_API void set_TickMarkSpacing(int32_t value);
    /// Gets a flag indicating whether this axis is hidden or not.
    ASPOSE_WORDS_SHARED_API bool get_Hidden();
    /// Sets a flag indicating whether this axis is hidden or not.
    ASPOSE_WORDS_SHARED_API void set_Hidden(bool value);
    /// Returns the Document the title holder belongs.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::DocumentBase> get_Document() override;

protected:

    virtual ASPOSE_WORDS_SHARED_API ~ChartAxis();

private:

    System::SharedPtr<System::Object> mField0;

    System::SharedPtr<Aspose::Words::Drawing::Charts::ChartTitle> get_Title() override;
    void set_Title(System::SharedPtr<Aspose::Words::Drawing::Charts::ChartTitle> ) override;
    Aspose::Words::Drawing::Charts::Core::SimpleTypes::TitlePosition get_TitlePosition() override;
    bool get_TitleDeleted() override;
    void set_TitleDeleted(bool ) override;
    bool get_IsVisible() override;
    System::SharedPtr<Aspose::Words::Drawing::Charts::Core::ComplexTypes::DmlChartNumFormat> get_NumFmt_INumberFormatProvider() override;
    void set_NumFmt_INumberFormatProvider(System::SharedPtr<Aspose::Words::Drawing::Charts::Core::ComplexTypes::DmlChartNumFormat> ) override;
    bool get_IsInherited() override;
    System::SharedPtr<Aspose::Collections::StringToObjDictionary<System::SharedPtr<Aspose::Words::Drawing::Core::Dml::DmlExtension>>> get_Extensions() override;
    void set_Extensions(System::SharedPtr<Aspose::Collections::StringToObjDictionary<System::SharedPtr<Aspose::Words::Drawing::Core::Dml::DmlExtension>>> ) override;

    System::SharedPtr<System::Object> mField1;
    System::WeakPtr<System::Object> mField2;
    System::WeakPtr<System::Object> mField3;
    __TypeStub<4,4,4,4>::type mField4;
    System::SharedPtr<System::Object> mField5;
    System::WeakPtr<System::Object> mField6;
    System::SharedPtr<System::Object> mField7;
    System::Drawing::RectangleF mField8;
    System::SharedPtr<System::Object> mField9;
    __TypeStub<1,1,1,1>::type mField10;
    __TypeStub<1,1,1,1>::type mField11;
    __TypeStub<1,1,1,1>::type mField12;
    __TypeStub<1,1,1,1>::type mField13;
    System::String mField14;
    __TypeStub<4,4,4,4>::type mField15;
    System::SharedPtr<System::Object> mField16;
    System::SharedPtr<System::Object> mField17;
    System::SharedPtr<System::Object> mField18;
    System::SharedPtr<System::Object> mField19;

    System::SharedPtr<Aspose::Words::Drawing::Charts::Core::ComplexTypes::DmlChartTx> GenerateAutoTitle(System::SharedPtr<Aspose::Words::ApsBuilder::Dml::Charts::DmlChartRenderingContext> ) override;

};

}
}
}
}
