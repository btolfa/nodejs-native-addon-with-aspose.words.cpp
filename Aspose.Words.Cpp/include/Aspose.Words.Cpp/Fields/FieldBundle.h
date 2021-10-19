//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Fields/FieldBundle.h
#pragma once

#include <system/object.h>
#include <system/exceptions.h>
#include <cstdint>

#include <Aspose.Words.Cpp/Fields/FieldType.h>

namespace System
{
class Details_InvalidOperationException; using InvalidOperationException = System::ExceptionWrapper<Details_InvalidOperationException>;
class String;
}
namespace Aspose
{
namespace Words
{
namespace Fields
{
class FieldEnd;
class FieldSeparator;
class FieldStart;
class FieldChar;
}
}
}

namespace Aspose {

namespace Words {

namespace Fields {

/// \cond
class FieldBundle : public System::Object
{
    typedef FieldBundle ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();

public:

    System::SharedPtr<Aspose::Words::Fields::FieldChar> get_FieldCodeEnd();
    Aspose::Words::Fields::FieldType get_FieldType();
    System::SharedPtr<Aspose::Words::Fields::FieldStart> get_Start() const;
    void set_Start(const System::SharedPtr<Aspose::Words::Fields::FieldStart>& value);
    System::SharedPtr<Aspose::Words::Fields::FieldSeparator> get_Separator() const;
    void set_Separator(const System::SharedPtr<Aspose::Words::Fields::FieldSeparator>& value);
    bool get_HasSeparator();
    System::SharedPtr<Aspose::Words::Fields::FieldEnd> get_End() const;
    void set_End(const System::SharedPtr<Aspose::Words::Fields::FieldEnd>& value);
    bool get_IsLocked();
    bool get_IsDirty();

    FieldBundle(const System::SharedPtr<Aspose::Words::Fields::FieldStart>& start, const System::SharedPtr<Aspose::Words::Fields::FieldSeparator>& separator, const System::SharedPtr<Aspose::Words::Fields::FieldEnd>& end);

    System::String GetFieldCode();
    System::String GetFieldCode(bool includeChildFieldCodes);
    void SetFieldType(Aspose::Words::Fields::FieldType fieldType);
    Aspose::Words::Fields::FieldType ParseFieldType();
    void NormalizeFieldTypes();
    void RemoveFieldNodes();
    void LockField(bool isLocked);
    void DirtyField(bool isDirty);
    void UpdateDirtyLocked();
    static Aspose::Words::Fields::FieldBundle GetFieldBundle(const System::SharedPtr<Aspose::Words::Fields::FieldChar>& fieldChar);
    static Aspose::Words::Fields::FieldBundle GetFieldBundleNoSeparatorCheck(const System::SharedPtr<Aspose::Words::Fields::FieldChar>& fieldChar);
    static Aspose::Words::Fields::FieldBundle FillFieldBundleOneWay(Aspose::Words::Fields::FieldBundle fieldBundle, const System::SharedPtr<Aspose::Words::Fields::FieldChar>& fieldChar, bool isForward);

    FieldBundle();

private:

    System::SharedPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;
    System::WeakPtr<System::Object> mField2;

};/// \endcond

/// \cond
class FieldNestingLevel : public System::Object
{
    typedef FieldNestingLevel ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();

public:

    bool get_IsTop();

    FieldNestingLevel(bool isForward, bool startFromTop);

    bool AcceptFieldStart();
    bool AcceptFieldEnd();

private:

    __TypeStub<1,1,1,1>::type mField3;
    __TypeStub<4,4,4,4>::type mField4;

};/// \endcond

}
}
}
