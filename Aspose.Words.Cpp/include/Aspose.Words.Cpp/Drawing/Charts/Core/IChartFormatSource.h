//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/Charts/Core/IChartFormatSource.h
#pragma once

#include <system/object.h>

namespace Aspose
{
namespace Words
{
namespace Drawing
{
namespace Core
{
namespace Dml
{
namespace Themes
{
class IThemeProvider;
}
namespace Outlines
{
class DmlOutline;
}
namespace Fills
{
class DmlFill;
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
class IChartFormatSource : public virtual System::Object
{
    typedef IChartFormatSource ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();

public:

    virtual System::SharedPtr<Aspose::Words::Drawing::Core::Dml::Fills::DmlFill> get_Fill() = 0;
    virtual void set_Fill(System::SharedPtr<Aspose::Words::Drawing::Core::Dml::Fills::DmlFill> value) = 0;
    virtual System::SharedPtr<Aspose::Words::Drawing::Core::Dml::Outlines::DmlOutline> get_Outline() = 0;
    virtual void set_Outline(System::SharedPtr<Aspose::Words::Drawing::Core::Dml::Outlines::DmlOutline> value) = 0;
    virtual System::SharedPtr<Aspose::Words::Drawing::Core::Dml::Themes::IThemeProvider> get_ThemeProvider() = 0;

    virtual void MaterializeSpPr() = 0;

};/// \endcond

}
}
}
}
}
