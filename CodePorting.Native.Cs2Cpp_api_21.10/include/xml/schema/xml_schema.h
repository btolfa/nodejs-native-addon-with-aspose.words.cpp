/// @file xml/schema/xml_schema.h
#pragma once

#include <system/uri.h>

#include <xml/xml_reader.h>
#include <xml/xml_resolver.h>
#include <xml/schema/details/xml_schema_type_helpers.h>

#include "xml_schema_object_table.h"
#include "validation_event_handler.h"

namespace System { namespace Xml { namespace Schema {

class XmlSchemaSet;

/// Represents an XML schema.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlSchema : public Object
{
    using BaseType = Object;

    friend class XmlSchemaSet;
    friend class System::Xml::XmlTextReader;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlSchema> Ptr;

    /// The XML schema instance namespace.
    static const String ASPOSECPP_SHARED_API InstanceNamespace;
    /// The XML schema namespace.
    static const String ASPOSECPP_SHARED_API Namespace;

    /// Constructs a new instance of XmlSchema object.
    ASPOSECPP_SHARED_API XmlSchema();
    MEMBER_FUNCTION_MAKE_OBJECT(XmlSchema, CODEPORTING_ARGS(), CODEPORTING_ARGS());
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~XmlSchema();

    /// Returns the URI of schema target namespace.
    String get_TargetNamespace() const { return m_target_ns; }
    /// Sets the URI of schema target namespace.
    /// @param value The value to set
    void set_TargetNamespace(const String& value)
    {
        m_isDefaultTargetNamespace = false;
        m_target_ns = value;
    }

    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaObjectTable> get_Attributes();

    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaObjectTable> get_Elements();

    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaObjectTable> get_Groups();

    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaObjectTable> get_SchemaTypes();

    /// Determines if the schema has been compiled.
    /// @returns True if the schema has been compiled, otherwise - false
    ASPOSECPP_SHARED_API bool get_IsCompiled() const;

    /// Compiles the XML Schema Object Model into schema information for validation.
    ASPOSECPP_SHARED_API void Compile();
    /// @deprecated Use System::Xml::Schema::XmlSchemaSet for schema compilation and validation.
    /// Compiles the XML Schema Object Model into schema information for validation.
    /// The specified validation event handler receives validation events.
    /// @param validationEventHandler The validation event handler
    ASPOSECPP_SHARED_API void Compile(const ValidationEventHandler& validationEventHandler);

    /// @deprecated Use System::Xml::Schema::XmlSchemaSet for schema compilation and validation.
    ASPOSECPP_SHARED_API void Compile(const ValidationEventHandler& validationEventHandler, const SharedPtr<XmlResolver>& resolver);
    /// Reads an XML Schema from the specified XmlReader.
    /// @param reader The XmlReader to read from
    /// @param validationEventHandler The validation event handler
    static ASPOSECPP_SHARED_API XmlSchema::Ptr Read(const XmlReader::Ptr& reader, const ValidationEventHandler& validationEventHandler);
    /// Returns a pointer to the underlying libxml2 xmlSchema object.
    xmlSchema* native_schema() const { return m_schema; }
    /// Returns a pointer to the underlying libxml2 xmlSchemaValidCtxt object.
    xmlSchemaValidCtxt* native_valid_ctx() const { return m_valid_ctx; }

protected:
#ifdef ASPOSE_GET_SHARED_MEMBERS
    /// Pointer leakage lookup.
    ASPOSECPP_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
#endif

private:
    /// If the schema is take from an xmlDoc object, this variable stores a pointer to a copy of that xmlDoc object.
    xmlDoc* m_doc;
    /// Schema parser context.
    xmlSchemaParserCtxt* m_parser_ctx;
    /// The underlying libxml2 object representing a parsed schema.
    xmlSchema* m_schema;
    /// Schema validation context; contains information about the results of schema validation.
    xmlSchemaValidCtxt* m_valid_ctx;
    /// Represents events generated during schema validation.
    ValidatingEventSignal m_validationEventHandler;
    std::exception_ptr m_last_schema_exception;
    std::exception_ptr m_last_resolver_exception;

    SharedPtr<XmlSchemaObjectTable> m_attributes;
    SharedPtr<XmlSchemaObjectTable> m_elements;
    SharedPtr<XmlSchemaObjectTable> m_schema_types;

    Details::NativeAttributeMap m_native_attributes;
    Details::NativeElementMap m_native_elements;
    Details::NativeTypeMap m_native_types;

    /// The schema target namespace.
    String m_target_ns;
    /// Determines if TargetNamespace contains the default value.
    bool m_isDefaultTargetNamespace = true;
    bool m_is_types_compiled = false;

    SharedPtr<Uri> m_base_uri;

private:
    /// Initializes the XmlSchema object by reading an XML Schema from the specified XmlReader
    /// and setting the specifying validation event handler.
    /// @param reader The XmlReader to read from
    void init(const XmlReader::Ptr& reader);
    /// Initializes the XmlSchema object with the schema from the specified XML document.
    /// @param doc The XML document to take the schema from
    void init(xmlDoc* doc);
    /// Parses a schema definition resource and builds an internal structure which
    /// can be used for validation of instances.
    void parse(SharedPtr<XmlResolver> resolver = nullptr);
    /// Releases resources of libxml2 library.
    void free_();
    /// Determines if the schema is valid; applicable only after validation.
    bool is_valid() const;
    /// Validates the specified node.
    /// @param node The node to validate
    int validate_element(xmlNode* node) const;

    void RaiseLastSchemaError();

    void EnsureSchemaTypesCompiled();

    /// Triggers a schema validation errors from libxml2 structured errors
    static void schema_validity_structured_error(void *ctx, xmlError* error);

    static xmlChar* schema_uri_resolver(const xmlChar* uri, const xmlChar* base, void* ctx);
    static xmlDoc* schema_external_entity_loader(xmlParserCtxt* ctxt, const char* entity_name, void* ctx, int options);
};

}}} // namespace System::Xml::Schema
