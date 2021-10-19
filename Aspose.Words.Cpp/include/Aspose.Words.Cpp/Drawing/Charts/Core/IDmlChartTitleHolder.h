//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/Charts/Core/IDmlChartTitleHolder.h
#pragma once

#include <system/object.h>

#include <Aspose.Words.Cpp/Model/Drawing/Charts/Core/SimpleTypes/TitlePosition.h>

namespace Aspose
{
namespace Words
{
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
class DocumentBase;
namespace Drawing
{
namespace Charts
{
class ChartTitle;
namespace Core
{
namespace ComplexTypes
{
class DmlChartTx;
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

namespace Core {

/// \cond
class IDmlChartTitleHolder : public virtual System::Object
{
    typedef IDmlChartTitleHolder ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();

public:

    virtual System::SharedPtr<Aspose::Words::Drawing::Charts::ChartTitle> get_Title() = 0;
    virtual void set_Title(System::SharedPtr<Aspose::Words::Drawing::Charts::ChartTitle> value) = 0;
    virtual Aspose::Words::Drawing::Charts::Core::SimpleTypes::TitlePosition get_TitlePosition() = 0;
    virtual System::SharedPtr<Aspose::Words::DocumentBase> get_Document() = 0;
    virtual bool get_IsVisible() = 0;
    virtual bool get_TitleDeleted() = 0;
    virtual void set_TitleDeleted(bool value) = 0;

    virtual System::SharedPtr<Aspose::Words::Drawing::Charts::Core::ComplexTypes::DmlChartTx> GenerateAutoTitle(System::SharedPtr<Aspose::Words::ApsBuilder::Dml::Charts::DmlChartRenderingContext> context) = 0;

};/// \endcond

}
}
}
}
}
