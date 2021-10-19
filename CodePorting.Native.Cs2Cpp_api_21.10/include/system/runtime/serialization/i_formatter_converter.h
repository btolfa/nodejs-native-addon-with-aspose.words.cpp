﻿/// @file system/runtime/serialization/i_formatter_converter.h
#pragma once

#include <system/type_info.h>
#include <system/type_code.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/decimal.h>
#include <system/date_time.h>
#include <cstdint>

namespace System {

namespace Runtime {

namespace Serialization {

/// Provides the connection between an instance of System::Runtime::Serialization::SerializationInfo
/// and the formatter-provided class best suited to parse the data inside the System::Runtime::Serialization::SerializationInfo.
class ASPOSECPP_SHARED_CLASS IFormatterConverter : public System::Object
{
    /// ThisType alias
    typedef IFormatterConverter ThisType;
    /// BaseType alias
    typedef System::Object BaseType;
    /// ThisTypeBaseTypesInfo alias
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    /// RTTI information.
    RTTI_INFO(IFormatterConverter, ThisTypeBaseTypesInfo)
    
public:

    /// Converts a value to the given System::TypeInfo.
    /// @param value The object to be converted.
    /// @param type The System::TypeInfo into which value is to be converted.
    /// @returns The converted value.
    virtual System::SharedPtr<Object> Convert(System::SharedPtr<Object> value, const TypeInfo& type) = 0;
    /// Converts a value to the given System::TypeCode.
    /// @param value The object to be converted.
    /// @param typeCode The System::TypeCode into which value is to be converted.
    /// @returns The converted value.
    virtual System::SharedPtr<Object> Convert(System::SharedPtr<Object> value, TypeCode typeCode) = 0;
    /// Converts a value to a bool.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual bool ToBoolean(System::SharedPtr<Object> value) = 0;
    /// Converts a value to a uint8_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual uint8_t ToByte(System::SharedPtr<Object> value) = 0;
    /// Converts a value to a char16_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual char16_t ToChar(System::SharedPtr<Object> value) = 0;
    /// Converts a value to a DateTime.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual DateTime ToDateTime(System::SharedPtr<Object> value) = 0;
    /// Converts a value to a Decimal.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual Decimal ToDecimal(System::SharedPtr<Object> value) = 0;
    /// Converts a value to a double.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual double ToDouble(System::SharedPtr<Object> value) = 0;
    /// Converts a value to a int16_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual int16_t ToInt16(System::SharedPtr<Object> value) = 0;
    /// Converts a value to a int32_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual int32_t ToInt32(System::SharedPtr<Object> value) = 0;
    /// Converts a value to a int64_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual int64_t ToInt64(System::SharedPtr<Object> value) = 0;
    /// Converts a value to a int8_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual int8_t ToSByte(System::SharedPtr<Object> value) = 0;
    /// Converts a value to a float.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual float ToSingle(System::SharedPtr<Object> value) = 0;
    /// Converts a value to a String.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual String ToString(System::SharedPtr<Object> value) = 0;
    /// Converts a value to a uint16_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual uint16_t ToUInt16(System::SharedPtr<Object> value) = 0;
    /// Converts a value to a uint32_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual uint32_t ToUInt32(System::SharedPtr<Object> value) = 0;
    /// Converts a value to a uint64_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    virtual uint64_t ToUInt64(System::SharedPtr<Object> value) = 0;
    
};

} // namespace Serialization
} // namespace Runtime
} // namespace System

