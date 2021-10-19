//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fields/FieldEQ.h
#pragma once

#include <system/shared_ptr.h>
#include <system/idisposable.h>
#include <cstdint>

#include <Aspose.Words.Cpp/Fields/Field.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{

class Node;
class NodeRange;

}
}
namespace System
{
class String;
namespace Collections
{
namespace Generic
{
template <typename> class IList;
template <typename> class ICollection;

}
}
namespace Text
{
class StringBuilder;

}
}

namespace Aspose {

namespace Words {

namespace Fields {

/// Implements the EQ field.
class ASPOSE_WORDS_SHARED_CLASS FieldEQ : public Aspose::Words::Fields::Field
{
    typedef FieldEQ ThisType;
    typedef Aspose::Words::Fields::Field BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

private:

protected:

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::NodeRange> GetFakeResult() override;

    virtual ASPOSE_WORDS_SHARED_API ~FieldEQ();

private:

    System::SharedPtr<System::Object> mField0;

};

}
}
}
