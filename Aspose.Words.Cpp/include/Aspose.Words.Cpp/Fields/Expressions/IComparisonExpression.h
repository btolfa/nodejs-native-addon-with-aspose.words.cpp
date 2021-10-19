//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fields/Expressions/IComparisonExpression.h
#pragma once

#include <system/object.h>

namespace System
{
class String;
}

namespace Aspose {

namespace Words {

namespace Fields {

namespace Expressions {

/// \cond
class IComparisonExpression : public System::Object
{
    typedef IComparisonExpression ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();

public:

    virtual System::String get_LeftExpression() = 0;
    virtual System::String get_ComparisonOperator() = 0;
    virtual System::String get_RightExpression() = 0;

};/// \endcond

}
}
}
}
