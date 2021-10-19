//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/Charts/ChartDataLabel.h
#pragma once

#include <system/shared_ptr.h>
#include <system/enum_helpers.h>
#include <cstdint>

#include <Aspose.Words.Cpp/Drawing/Charts/Core/INumberFormatProvider.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{

class String;
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

/// Represents data label on a chart point or trendline.
class ASPOSE_WORDS_SHARED_CLASS ChartDataLabel : public Aspose::Words::Drawing::Charts::Core::INumberFormatProvider
{
    typedef ChartDataLabel ThisType;
    typedef Aspose::Words::Drawing::Charts::Core::INumberFormatProvider BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Specifies the index of the containing element.
    /// This index shall determine which of the parent's children collection this element applies to.
    /// Default value is 0.
    ASPOSE_WORDS_SHARED_API int32_t get_Index();
    /// Allows to specify if category name is to be displayed for the data labels on a chart.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API bool get_ShowCategoryName();
    /// Allows to specify if category name is to be displayed for the data labels on a chart.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API void set_ShowCategoryName(bool value);
    /// Allows to specify if bubble size is to be displayed for the data labels on a chart.
    /// Applies only to Bubble charts.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API bool get_ShowBubbleSize();
    /// Allows to specify if bubble size is to be displayed for the data labels on a chart.
    /// Applies only to Bubble charts.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API void set_ShowBubbleSize(bool value);
    /// Allows to specify if legend key is to be displayed for the data labels on a chart.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API bool get_ShowLegendKey();
    /// Allows to specify if legend key is to be displayed for the data labels on a chart.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API void set_ShowLegendKey(bool value);
    /// Allows to specify if percentage value is to be displayed for the data labels on a chart.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API bool get_ShowPercentage();
    /// Allows to specify if percentage value is to be displayed for the data labels on a chart.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API void set_ShowPercentage(bool value);
    /// Returns a Boolean to indicate the series name display behavior for the data labels on a chart.
    /// True to show the series name. False to hide. By default false.
    ASPOSE_WORDS_SHARED_API bool get_ShowSeriesName();
    /// Sets a Boolean to indicate the series name display behavior for the data labels on a chart.
    /// True to show the series name. False to hide. By default false.
    ASPOSE_WORDS_SHARED_API void set_ShowSeriesName(bool value);
    /// Allows to specify if values are to be displayed in the data labels.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API bool get_ShowValue();
    /// Allows to specify if values are to be displayed in the data labels.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API void set_ShowValue(bool value);
    /// Allows to specify if data label leader lines need be shown.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API bool get_ShowLeaderLines();
    /// Allows to specify if data label leader lines need be shown.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API void set_ShowLeaderLines(bool value);
    /// Allows to specify if values from data labels range to be displayed in the data labels.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API bool get_ShowDataLabelsRange();
    /// Allows to specify if values from data labels range to be displayed in the data labels.
    /// Default value is false.
    ASPOSE_WORDS_SHARED_API void set_ShowDataLabelsRange(bool value);
    /// Gets string separator used for the data labels on a chart.
    /// The default is a comma, except for pie charts showing only category name and percentage, when a line break
    /// shall be used instead.
    ASPOSE_WORDS_SHARED_API System::String get_Separator();
    /// Sets string separator used for the data labels on a chart.
    /// The default is a comma, except for pie charts showing only category name and percentage, when a line break
    /// shall be used instead.
    ASPOSE_WORDS_SHARED_API void set_Separator(const System::String& value);
    /// Returns true if this data label has something to display.
    ASPOSE_WORDS_SHARED_API bool get_IsVisible();
    /// Returns number format of the parent element.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Charts::ChartNumberFormat> get_NumberFormat();
    /// Gets/sets a flag indicating whether this label is hidden.
    /// The default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API bool get_IsHidden();
    /// Gets/sets a flag indicating whether this label is hidden.
    /// The default value is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API void set_IsHidden(bool value);

    /// Clears format of this data label. The properties are set to the default values defined in the parent data
    /// label collection.
    ASPOSE_WORDS_SHARED_API void ClearFormat();

protected:

    virtual ASPOSE_WORDS_SHARED_API ~ChartDataLabel();

private:

    __TypeStub<4,4,4,4>::type mField0;

    System::SharedPtr<Aspose::Words::Drawing::Charts::Core::ComplexTypes::DmlChartNumFormat> get_NumFmt_INumberFormatProvider() override;
    void set_NumFmt_INumberFormatProvider(System::SharedPtr<Aspose::Words::Drawing::Charts::Core::ComplexTypes::DmlChartNumFormat> ) override;
    bool get_IsInherited() override;

    System::SharedPtr<System::Object> mField1;
    System::SharedPtr<System::Object> mField2;
    System::SharedPtr<System::Object> mField3;
    System::SharedPtr<System::Object> mField4;
    System::SharedPtr<System::Object> mField5;
    System::WeakPtr<System::Object> mField6;
    System::SharedPtr<System::Object> mField7;

};

}
}
}
}
