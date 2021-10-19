//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/Charts/ChartDataPointCollection.h
#pragma once

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

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

class ChartDataPoint;

}
}
}
}

namespace Aspose {

namespace Words {

namespace Drawing {

namespace Charts {

/// Represents collection of a <see cref="Aspose::Words::Drawing::Charts::ChartDataPoint">ChartDataPoint</see>.
class ASPOSE_WORDS_SHARED_CLASS ChartDataPointCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Words::Drawing::Charts::ChartDataPoint>>
{
    typedef ChartDataPointCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Words::Drawing::Charts::ChartDataPoint>> BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

private:

public:

    /// Returns the number of <see cref="Aspose::Words::Drawing::Charts::ChartDataPoint">ChartDataPoint</see> in this collection.
    ASPOSE_WORDS_SHARED_API int32_t get_Count();

    /// Returns <see cref="Aspose::Words::Drawing::Charts::ChartDataPoint">ChartDataPoint</see> for the specified index.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Charts::ChartDataPoint> idx_get(int32_t index);

    /// Returns an enumerator object.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Words::Drawing::Charts::ChartDataPoint>>> GetEnumerator() override;
    /// @deprecated All data points are available in this collection.
    /// Adds new <see cref="Aspose::Words::Drawing::Charts::ChartDataPoint">ChartDataPoint</see> at the specified index.
    /// 
    /// @param index Target data point index.
    [[deprecated("All data points are available in this collection.")]]
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Charts::ChartDataPoint> Add(int32_t index);
    /// @deprecated Use the ChartDataPoint.ClearFormat method instead.
    /// Clears format of a <see cref="Aspose::Words::Drawing::Charts::ChartDataPoint">ChartDataPoint</see> at the specified index.
    /// 
    /// @param index The zero-based index of the data point to clear format.
    [[deprecated("Use the ChartDataPoint.ClearFormat method instead.")]]
    ASPOSE_WORDS_SHARED_API void RemoveAt(int32_t index);
    /// @deprecated Use the ClearFormat method instead.
    /// Clears format of all <see cref="Aspose::Words::Drawing::Charts::ChartDataPoint">ChartDataPoint</see> in this collection.
    [[deprecated("Use the ClearFormat method instead.")]]
    ASPOSE_WORDS_SHARED_API void Clear();
    /// Clears format of all <see cref="Aspose::Words::Drawing::Charts::ChartDataPoint">ChartDataPoint</see> in this collection.
    ASPOSE_WORDS_SHARED_API void ClearFormat();

protected:

    virtual ASPOSE_WORDS_SHARED_API ~ChartDataPointCollection();

private:

    System::WeakPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;

};

}
}
}
}
