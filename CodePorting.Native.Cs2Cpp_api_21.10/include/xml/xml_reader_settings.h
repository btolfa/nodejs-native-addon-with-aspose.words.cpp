/// @file xml/xml_reader_settings.h
#pragma once

#include <system/exceptions.h>

#include "xml/validation_type.h"
#include "xml/dtd_processing.h"
#include "xml/schema/validation_event_handler.h"
#include "xml/schema/xml_schema_set.h"
#include "xml/schema/xml_schema_validation_flags.h"

namespace System { namespace Xml {

class XmlTextReader;

/// Specifies a set of features to support on the XmlReader object created by the Create method.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlReaderSettings : public Object
{
    using BaseType = Object;

    friend class XmlTextReader;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlReaderSettings> Ptr;

    /// Constructs a new instance of XmlReaderSettings class.
    ASPOSECPP_SHARED_API XmlReaderSettings();

    /// Returns a value that indicates if insignificant white spaces should be ignored.
    /// @returns Always false
    bool get_IgnoreWhitespace() const { return false; }
    /// Not supported.
    /// @throws NotSupportedException Always
    void set_IgnoreWhitespace(bool value)
    {
        /* always false for libxml backend */
        if (value)
            throw System::NotSupportedException(u"Unsupported for libxml2 backend");
    }

    /// Returns a value that determines the processing of DTD.
    DtdProcessing get_DtdProcessing() const { return dtd_processing; }
    /// Sets a value that determines the processing of DTD.
    /// @param value The value to set
    void set_DtdProcessing(DtdProcessing value) { dtd_processing = value; }

    /// Returns a value that indicates if DTD processing should be prohibited.
    bool get_ProhibitDtd() const { return dtd_processing == DtdProcessing::Prohibit; }
    /// Sets a value that indicates if DTD processing should be prohibited.
    /// @param value The value to set
    void set_ProhibitDtd(bool value) { dtd_processing = value ? DtdProcessing::Prohibit : DtdProcessing::Parse; }

    /// Returns a value that indicates if the XmlReader will perform validation or type assignment when reading.
    ValidationType get_ValidationType() const { return validation_type; }
    /// Sets a value that indicates if the XmlReader will perform validation or type assignment when reading.
    /// @param value The valu to set
    void set_ValidationType(ValidationType value) { validation_type = value; }

    /// Returns a set of XML schemas to use when schema validation is performed.
    Schema::XmlSchemaSet::Ptr get_Schemas() const { return m_schemas; }
    /// Sets a set of XML schemas to use when schema validation is performed.
    /// @param value A shared pointer to XmlSchemaSet object to set
    void set_Schemas(const Schema::XmlSchemaSet::Ptr& value) { m_schemas = value; }

    /// Returns schema validation settings.
    Schema::XmlSchemaValidationFlags get_ValidationFlags() const { return schema_validation_flags; }
    /// Sets schema validation settings.
    void set_ValidationFlags(Schema::XmlSchemaValidationFlags value) { schema_validation_flags = value; }

    /// NOT IMPLEMENTED
    /// @throws NotImplementedException
    void set_MaxCharactersFromEntities(int64_t value);
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException
    void set_MaxCharactersInDocument(int64_t value);

    /// Occurs when validation errors are encountered by the reader.
    Schema::ValidatingEventSignal ValidationEventHandler;

    /// Returns a line number offset of the XmlReader object.
    inline int get_LineNumberOffset() { return lineNumberOffset; }
    /// Returns a line position offset of the XmlReader object.
    inline int get_LinePositionOffset() { return linePositionOffset; }
    /// Sets the XML Resolver used when accessing external documents.
    /// @param xmlResolver The XmlResolver object to set
    inline void set_XmlResolver(XmlResolver::Ptr xmlResolver)
    {
        this->m_xml_resolver = xmlResolver;
        this->IsXmlResolverSet = true;
    }
    /// Sets a value indicating whether to do character checking.
    /// @param value The value to set
    inline void set_CheckCharacters(bool value) { checkCharacters = value; }
    /// Returns a value indicating whether to do character checking.
    inline bool get_CheckCharacters() { return checkCharacters; }

protected:
#ifdef ASPOSE_GET_SHARED_MEMBERS
    /// Pointer leakage lookup.
    ASPOSECPP_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
#endif

protected:
    /// Specifies if the XmlReader will perform validation or type assignment when reading.
    ValidationType validation_type;
    /// Schema validation settings.
    Schema::XmlSchemaValidationFlags schema_validation_flags;
    /// Dsetermines the processing of DTD.
    DtdProcessing dtd_processing;
    /// XML schemas use when schema validation is performed.
    Schema::XmlSchemaSet::Ptr m_schemas;
    /// A line number offset of the XmlReader object.
    int lineNumberOffset;
    /// A line position offset of the XmlReader object.
    int linePositionOffset;
    /// XML Resolver used when accessing external documents.
    XmlResolver::Ptr m_xml_resolver;
    /// Indicates if the XmlResolver object has been set.
    bool IsXmlResolverSet;
    /// Indicates whether to do character checking.
    bool checkCharacters;

private:
    int64_t m_maxCharactersFromEntities;
    int64_t m_maxCharactersInDocument;
};

}}
