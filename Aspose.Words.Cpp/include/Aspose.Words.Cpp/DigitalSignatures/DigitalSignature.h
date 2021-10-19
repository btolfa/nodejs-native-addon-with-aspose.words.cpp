//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/DigitalSignatures/DigitalSignature.h
#pragma once

#include <system/guid.h>
#include <system/date_time.h>
#include <system/array.h>
#include <cstdint>

#include <Aspose.Words.Cpp/DigitalSignatures/DigitalSignatureType.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{

namespace Words
{

namespace DigitalSignatures
{
class CertificateHolder;

}

}
}

namespace Aspose {

namespace Words {

namespace DigitalSignatures {

/// Represents a digital signature on a document and the result of its verification.
class ASPOSE_WORDS_SHARED_CLASS DigitalSignature : public System::Object
{
    typedef DigitalSignature ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Gets the type of the digital signature.
    ASPOSE_WORDS_SHARED_API Aspose::Words::DigitalSignatures::DigitalSignatureType get_SignatureType() const;
    /// Gets the time the document was signed.
    ASPOSE_WORDS_SHARED_API System::DateTime get_SignTime() const;
    /// Gets the signing purpose comment.
    ASPOSE_WORDS_SHARED_API System::String get_Comments() const;
    /// Returns the subject distinguished name of the certificate that was used to sign the document.
    ASPOSE_WORDS_SHARED_API System::String get_SubjectName();
    /// Returns the subject distinguished name of the certificate isuuer.
    ASPOSE_WORDS_SHARED_API System::String get_IssuerName();
    /// Returns true if this digital signature is valid and the document has not been tampered with.
    ASPOSE_WORDS_SHARED_API bool get_IsValid() const;
    /// Returns the certificate holder object that contains the certificate was used to sign the document.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::DigitalSignatures::CertificateHolder> get_CertificateHolder() const;

    /// Returns a user-friendly string that displays the value of this object.
    ASPOSE_WORDS_SHARED_API System::String ToString() const override;

protected:

private:

    __TypeStub<4,4,4,4>::type mField0;
    System::SharedPtr<System::Object> mField1;
    System::SharedPtr<System::Object> mField2;
    System::DateTime mField3;
    System::String mField4;
    __TypeStub<1,1,1,1>::type mField5;
    System::SharedPtr<System::Object> mField6;
    System::SharedPtr<System::Object> mField7;
    System::SharedPtr<System::Object> mField8;
    System::String mField9;
    System::Guid mField10;
    System::Guid mField11;
    __TypeStub<1,1,1,1>::type mField12;

};

}
}
}
