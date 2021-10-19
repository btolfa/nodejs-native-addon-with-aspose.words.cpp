#pragma once

#include <system/enum_helpers.h>
#include <system/enum.h>

namespace System { namespace Security { namespace Cryptography { namespace X509Certificates {

enum class X509ChainStatusFlags
{
    NoError = 0x00000000,
    NotTimeValid = 0x00000001,
    NotTimeNested = 0x00000002,
    Revoked = 0x00000004,
    NotSignatureValid = 0x00000008,
    NotValidForUsage = 0x00000010,
    UntrustedRoot = 0x00000020,
    RevocationStatusUnknown = 0x00000040,
    Cyclic = 0x00000080,
    InvalidExtension = 0x00000100,
    InvalidPolicyConstraints = 0x00000200,
    InvalidBasicConstraints = 0x00000400,
    InvalidNameConstraints = 0x00000800,
    HasNotSupportedNameConstraint = 0x00001000,
    HasNotDefinedNameConstraint = 0x00002000,
    HasNotPermittedNameConstraint = 0x00004000,
    HasExcludedNameConstraint = 0x00008000,
    PartialChain = 0x00010000,
    CtlNotTimeValid = 0x00020000,
    CtlNotSignatureValid = 0x00040000,
    CtlNotValidForUsage = 0x00080000,
    OfflineRevocation = 0x01000000,
    NoIssuanceChainPolicy = 0x02000000,
    ExplicitDistrust = 0x04000000,
    HasNotSupportedCriticalExtension = 0x08000000,
    HasWeakSignature = 0x00100000
};

DECLARE_ENUM_OPERATORS(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags);
DECLARE_USING_GLOBAL_OPERATORS

}}}} // System::Security::Cryptography::X509Certificates

DECLARE_USING_ENUM_OPERATORS(System::Security::Cryptography::X509Certificates);
template<>
struct EnumMetaInfo<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>
{
    typedef void Flags;
    static const std::array<std::pair<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, const char_t*>, 26>& values();
};
