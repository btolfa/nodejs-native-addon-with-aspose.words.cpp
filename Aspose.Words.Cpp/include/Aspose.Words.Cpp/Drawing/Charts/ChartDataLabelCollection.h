//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/Charts/ChartDataLabelCollection.h
#pragma once

#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <cstdint>

#include <Aspose.Words.Cpp/Drawing/Charts/Core/INumberFormatProvider.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;

}
}
}
namespace Aspose
{

namespace Words
{

namespace Drawing
{
namespace Charts
{
class ChartNumberFormat;

class ChartDataLabel;
namespace Core
{

namespace ComplexTypes
{

class DmlChartNumFormat;

}
}
}
}
}
}

namespace Aspose {

namespace Words {

namespace Drawing {

namespace Charts {

/// Represents a collection of <see cref="Aspose::Words::Drawing::Charts::ChartDataLabel">ChartDataLabel</see>.
class ASPOSE_WORDS_SHARED_CLASS ChartDataLabelCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Words::Drawing::Charts::ChartDataLabel>>, public Aspose::Words::Drawing::Charts::Core::INumberFormatProvider
{
    typedef ChartDataLabelCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Words::Drawing::Charts::ChartDataLabel>> BaseType;
    typedef Aspose::Words::Drawing::Charts::Core::INumberFormatProvider BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

private:

public:

    /// Returns the number of <see cref="Aspose::Words::Drawing::Charts::ChartDataLabel">ChartDataLabel</see> in this collection.
    ASPOSE_WORDS_SHARED_API int32_t get_Count();
    /// Allows to specify whether category name is to be displayed for the data labels of the entire series.
    /// Default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API bool get_ShowCategoryName();
    /// Allows to specify whether category name is to be displayed for the data labels of the entire series.
    /// Default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API void set_ShowCategoryName(bool value);
    /// Allows to specify whether bubble size is to be displayed for the data labels of the entire series.
    /// Applies only to Bubble charts.
    /// Default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API bool get_ShowBubbleSize();
    /// Allows to specify whether bubble size is to be displayed for the data labels of the entire series.
    /// Applies only to Bubble charts.
    /// Default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API void set_ShowBubbleSize(bool value);
    /// Allows to specify whether legend key is to be displayed for the data labels of the entire series.
    /// Default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API bool get_ShowLegendKey();
    /// Allows to specify whether legend key is to be displayed for the data labels of the entire series.
    /// Default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API void set_ShowLegendKey(bool value);
    /// Allows to specify whether percentage value is to be displayed for the data labels of the entire series.
    /// Default value is <b>%false</b>. Applies only to Pie charts.
    ASPOSE_WORDS_SHARED_API bool get_ShowPercentage();
    /// Allows to specify whether percentage value is to be displayed for the data labels of the entire series.
    /// Default value is <b>%false</b>. Applies only to Pie charts.
    ASPOSE_WORDS_SHARED_API void set_ShowPercentage(bool value);
    /// Returns a Boolean to indicate the series name display behavior for the data labels of the entire series.
    /// <b>%True</b> to show the series name. <b>%False</b> to hide. By default <b>%false</b>.
    ASPOSE_WORDS_SHARED_API bool get_ShowSeriesName();
    /// Sets a Boolean to indicate the series name display behavior for the data labels of the entire series.
    /// <b>%True</b> to show the series name. <b>%False</b> to hide. By default <b>%false</b>.
    ASPOSE_WORDS_SHARED_API void set_ShowSeriesName(bool value);
    /// Allows to specify whether values are to be displayed in the data labels of the entire series.
    /// Default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API bool get_ShowValue();
    /// Allows to specify whether values are to be displayed in the data labels of the entire series.
    /// Default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API void set_ShowValue(bool value);
    /// Allows to specify whether data label leader lines need be shown for the data labels of the entire series.
    /// Default value is <b>%false</b>.
    /// 
    /// Applies to Pie charts only.
    /// Leader lines create a visual connection between a data label and its corresponding data point.
    /// 
    /// Value defined for this property can be overridden for an individual data label with using the
    /// <see cref="Aspose::Words::Drawing::Charts::ChartDataLabel::get_ShowLeaderLines">ShowLeaderLines</see> property.
    ASPOSE_WORDS_SHARED_API bool get_ShowLeaderLines();
    /// Setter for Aspose::Words::Drawing::Charts::ChartDataLabelCollection::get_ShowLeaderLines
    ASPOSE_WORDS_SHARED_API void set_ShowLeaderLines(bool value);
    /// Allows to specify whether values from data labels range to be displayed in the data labels of the entire series.
    /// Default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API bool get_ShowDataLabelsRange();
    /// Allows to specify whether values from data labels range to be displayed in the data labels of the entire series.
    /// Default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API void set_ShowDataLabelsRange(bool value);
    /// Gets string separator used for the data labels of the entire series.
    /// The default is a comma, except for pie charts showing only category name and percentage, when a line break
    /// shall be used instead.
    ASPOSE_WORDS_SHARED_API System::String get_Separator();
    /// Sets string separator used for the data labels of the entire series.
    /// The default is a comma, except for pie charts showing only category name and percentage, when a line break
    /// shall be used instead.
    ASPOSE_WORDS_SHARED_API void set_Separator(const System::String& value);
    /// Gets an <see cref="Aspose::Words::Drawing::Charts::ChartNumberFormat">ChartNumberFormat</see> instance allowing to set number format for the data labels of the
    /// entire series.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Charts::ChartNumberFormat> get_NumberFormat();

    /// Returns <see cref="Aspose::Words::Drawing::Charts::ChartDataLabel">ChartDataLabel</see> for the specified index.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Charts::ChartDataLabel> idx_get(int32_t index);

    /// Returns an enumerator object.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Words::Drawing::Charts::ChartDataLabel>>> GetEnumerator() override;
    /// @deprecated When ChartSeries.HasDataLabels is 'true', all data labels are available in this collection.
    /// Adds new <see cref="Aspose::Words::Drawing::Charts::ChartDataLabel">ChartDataLabel</see> at the specified index.
    /// 
    /// @param index Target data label index.
    [[deprecated("When ChartSeries.HasDataLabels is 'true', all data labels are available in this collection.")]]
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Charts::ChartDataLabel> Add(int32_t index);
    /// @deprecated Use the ChartDataLabel.ClearFormat method instead. 
    /// Clears format of a <see cref="Aspose::Words::Drawing::Charts::ChartDataLabel">ChartDataLabel</see> at the specified index.
    /// 
    /// @param index The zero-based index of the chart data label to clear format.
    [[deprecated("Use the ChartDataLabel.ClearFormat method instead.")]]
    ASPOSE_WORDS_SHARED_API void RemoveAt(int32_t index);
    /// @deprecated Use the ClearFormat method instead.
    /// Clears format of all <see cref="Aspose::Words::Drawing::Charts::ChartDataLabel">ChartDataLabel</see> in this collection.
    [[deprecated("Use the ClearFormat method instead.")]]
    ASPOSE_WORDS_SHARED_API void Clear();
    /// Clears format of all <see cref="Aspose::Words::Drawing::Charts::ChartDataLabel">ChartDataLabel</see> in this collection.
    ASPOSE_WORDS_SHARED_API void ClearFormat();

protected:

    virtual ASPOSE_WORDS_SHARED_API ~ChartDataLabelCollection();

private:

    System::SharedPtr<Aspose::Words::Drawing::Charts::Core::ComplexTypes::DmlChartNumFormat> get_NumFmt_INumberFormatProvider() override;
    void set_NumFmt_INumberFormatProvider(System::SharedPtr<Aspose::Words::Drawing::Charts::Core::ComplexTypes::DmlChartNumFormat> ) override;
    bool get_IsInherited() override;

    System::SharedPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;
    System::WeakPtr<System::Object> mField2;
    System::WeakPtr<System::Object> mField3;
    System::SharedPtr<System::Object> mField4;

};

}
}
}
}
