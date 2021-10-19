//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/Ole/Forms2OleControlCollection.h
#pragma once

#include <system/object.h>
#include <cstdint>

#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{

namespace Drawing
{
namespace Ole
{
class Forms2OleControl;
}
}
}
}

namespace Aspose {

namespace Words {

namespace Drawing {

namespace Ole {

/// Represents collection of <see cref="Aspose::Words::Drawing::Ole::Forms2OleControl">Forms2OleControl</see> objects.
class ASPOSE_WORDS_SHARED_CLASS Forms2OleControlCollection : public System::Object
{
    typedef Forms2OleControlCollection ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets count of objects in the collection.
    ASPOSE_WORDS_SHARED_API int32_t get_Count();

    /// Gets <see cref="Aspose::Words::Drawing::Ole::Forms2OleControl">Forms2OleControl</see> object at specified index.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Ole::Forms2OleControl> idx_get(int32_t index);

    ASPOSE_WORDS_SHARED_API Forms2OleControlCollection();

protected:

private:

    System::SharedPtr<System::Object> mField0;

};

}
}
}
}
