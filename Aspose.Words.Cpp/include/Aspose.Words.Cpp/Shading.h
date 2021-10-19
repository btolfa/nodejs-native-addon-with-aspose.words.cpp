//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Shading.h
#pragma once

#include <system/string.h>
#include <cstdint>

#include <Aspose.Words.Cpp/InternableComplexAttr.h>
#include <Aspose.Words.Cpp/IComplexAttr.h>
#include <Aspose.Words.Cpp/TextureIndex.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
namespace Drawing
{
class Color;
}
}

namespace Aspose {

namespace Words {

/// Contains shading attributes for an object.
class ASPOSE_WORDS_SHARED_CLASS Shading : public Aspose::Words::InternableComplexAttr, public Aspose::Words::IComplexAttr
{
    typedef Shading ThisType;
    typedef Aspose::Words::InternableComplexAttr BaseType;
    typedef Aspose::Words::IComplexAttr BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets the color that's applied to the background of the Shading object.
    ASPOSE_WORDS_SHARED_API System::Drawing::Color get_BackgroundPatternColor();
    /// Sets the color that's applied to the background of the Shading object.
    ASPOSE_WORDS_SHARED_API void set_BackgroundPatternColor(System::Drawing::Color value);
    /// Gets the color that's applied to the foreground of the Shading object.
    ASPOSE_WORDS_SHARED_API System::Drawing::Color get_ForegroundPatternColor();
    /// Sets the color that's applied to the foreground of the Shading object.
    ASPOSE_WORDS_SHARED_API void set_ForegroundPatternColor(System::Drawing::Color value);
    /// Gets the shading texture.
    ASPOSE_WORDS_SHARED_API Aspose::Words::TextureIndex get_Texture();
    /// Sets the shading texture.
    ASPOSE_WORDS_SHARED_API void set_Texture(Aspose::Words::TextureIndex value);

    /// Removes shading from the object.
    ASPOSE_WORDS_SHARED_API void ClearFormatting();
    /// Determines whether the specified Shading is equal in value to the current Shading.
    ASPOSE_WORDS_SHARED_API bool Equals(const System::SharedPtr<Aspose::Words::Shading>& rhs);
    /// Determines whether the specified object is equal in value to the current object.
    ASPOSE_WORDS_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// Serves as a hash function for this type.
    ASPOSE_WORDS_SHARED_API int32_t GetHashCode() const override;

protected:

    virtual ASPOSE_WORDS_SHARED_API ~Shading();

private:

    bool get_IsInheritedComplexAttr() override;

    System::WeakPtr<System::Object> mField0;
    __TypeStub<4,4,4,4>::type mField1;
    __TypeStub<4,4,4,4>::type mField2;
    System::SharedPtr<System::Object> mField3;
    System::SharedPtr<System::Object> mField4;
    System::String mField5;
    System::String mField6;
    System::String mField7;
    System::String mField8;
    System::String mField9;
    System::String mField10;

    System::SharedPtr<Aspose::Words::IComplexAttr> DeepCloneComplexAttr() override;

};

}
}
