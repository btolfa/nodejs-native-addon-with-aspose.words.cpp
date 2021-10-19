/// @file xml/xml_reader.h
#pragma once

#include "xml_node_type.h"
#include "xml_read_state.h"
#include "name_table.h"

#include <memory>
#include <system/date_time.h>
#include <system/idisposable.h>
#include <system/io/stream.h>
#include <system/io/text_reader.h>

namespace System { namespace Xml {

class XmlTextReader;
class XmlReaderSettings;
class XmlParserContext;

namespace Schema { class IXmlSchemaInfo; }

/// Provides non-cached forward-only access to XML data.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlReader : public IDisposable
{
    RTTI_INFO(XmlReader, ::System::BaseTypesInfo<System::IDisposable>);

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlReader> Ptr;
    
    /// Returns the qualified name of the current node.
    virtual ASPOSECPP_SHARED_API String get_Name();
    /// Returns the prefix of the current node.
    virtual ASPOSECPP_SHARED_API String get_Prefix();
    /// Returns the local name of the current node.
    virtual ASPOSECPP_SHARED_API String get_LocalName();
    /// Returns the namespace URI of the current node.
    virtual ASPOSECPP_SHARED_API String get_NamespaceURI();
    /// Returns the base URI of the current node.
    virtual ASPOSECPP_SHARED_API String get_BaseURI();
    /// Returns the value of the current node.
    virtual ASPOSECPP_SHARED_API String get_Value() = 0;

    virtual ASPOSECPP_SHARED_API SharedPtr<Schema::IXmlSchemaInfo> get_SchemaInfo();

    /// Returns the value of the attribute with the specified name.
    /// @param name The name of the attribute
    /// @returns The value of the attribute whose name is @p name
    ASPOSECPP_SHARED_API String idx_get(const String& name);

    /// Returns the current state of the reader.
    virtual ASPOSECPP_SHARED_API ReadState get_ReadState();
    /// Determines if the current node is an empty element.
    virtual ASPOSECPP_SHARED_API bool get_IsEmptyElement() = 0;
    /// Determines if the current node is an attribute that was generated from the default value defined in the DTD or schema.
    virtual ASPOSECPP_SHARED_API bool get_IsDefault();
    /// Returns the depths of the current node in the XML tree.
    virtual ASPOSECPP_SHARED_API int get_Depth();
    /// Determines if the reader has reached the end of stream.
    virtual ASPOSECPP_SHARED_API bool get_EOF();
    /// Determines if the current node has any attributes.
    virtual ASPOSECPP_SHARED_API bool get_HasAttributes();
    /// Returns the number of attributes in the current node.
    virtual ASPOSECPP_SHARED_API int get_AttributeCount() = 0;
    /// Determines if the current node has a value.
    virtual ASPOSECPP_SHARED_API bool get_HasValue();
    /// Returns the current xml:lang scope.
    virtual ASPOSECPP_SHARED_API String get_XmlLang();
    /// Returns the used as quotation mark character used to enclose the value of an XML attribute node.
    virtual ASPOSECPP_SHARED_API UChar get_QuoteChar();
    /// Returns the type of the current node.
    virtual ASPOSECPP_SHARED_API XmlNodeType get_NodeType() = 0;
    /// Determines whether the current XmlReader object can parse and resolve entities.
    virtual ASPOSECPP_SHARED_API bool get_CanResolveEntity();

    /// Returns the value of the attribute with the specified index.
    /// @param index A 0-based index of the attribute in the list of attributes of the current node
    /// @returns The value of the attribute with index @p index
    virtual ASPOSECPP_SHARED_API String GetAttribute(int32_t index);
    /// Returns the value of the attribute with the specified name.
    /// @param name The qualified name of the attribute
    /// @returns The value of the attribute with name @p name
    virtual ASPOSECPP_SHARED_API String GetAttribute(const String& name);
    /// Moves the reader's position to the attribute with the specified name.
    /// @param name The qualified name of the attribute to move the position to
    /// @returns True if the operation succeeded, otherwise - false
    virtual ASPOSECPP_SHARED_API bool MoveToAttribute(const String& name);
    /// Gets the value of the attribute with the specified local name and namespace URI.
    /// @param localName The local name of the attribute.
    /// @param namespaceURI The namespace URI of the attribute.
    /// @returns The value of the specified attribute.
    /// If the attribute is not found, null is returned. This method does not move the reader.
    virtual ASPOSECPP_SHARED_API String GetAttribute(const String& localName, const String& namespaceURI);
    /// Moves the reader's position to the attribute with the specified index.
    /// @param index A 0-based index of the attribute in the list of attributes of the current node
    virtual ASPOSECPP_SHARED_API void MoveToAttribute(int index);
    /// Moves the reader's position to the next attribute.
    /// @returns True if the operation succeeded, otherwise - false
    virtual ASPOSECPP_SHARED_API bool MoveToNextAttribute();
    /// Moves the reader's position to the first attribute in the list of attributes of the current node.
    /// @returns True if the operation succeeded, otherwise - false
    virtual ASPOSECPP_SHARED_API bool MoveToFirstAttribute();
    /// Moves the position of the reader to the next sibling with the specified name.
    /// @param name The name of the sibling to move the reader's position to
    /// @returns True if the sibling node with the specified qualified name has been found, otherwise - false
    virtual ASPOSECPP_SHARED_API bool ReadToNextSibling(const String& name);
    /// Read an element and all its children, and return a new XmlReader object set to ReadState::Initial.
    virtual ASPOSECPP_SHARED_API Ptr ReadSubtree();
    /// Moves the position of the reader to the next content node, skipping the non-content nodes.
    /// @returns The type of the node to which the reader's position was moved
    virtual ASPOSECPP_SHARED_API XmlNodeType MoveToContent() = 0;
    /// Moves the reader's position to the element node that contains the current attribute node.
    /// @returns True if the operation succeeded, otherwise - false
    virtual ASPOSECPP_SHARED_API bool MoveToElement() = 0;

    /// Navigates to the next token.
    /// @return True if successful, false otherwise.
    virtual ASPOSECPP_SHARED_API bool Next();

    /// Reads the next node.
    /// @returns True if the operation succeeded, otherwise - false
    virtual ASPOSECPP_SHARED_API bool Read() = 0;
    /// Resolves a namespace prefix in the scope of the current element.
    /// @param prefix The prefix to resove
    /// @returns The namespace URI associated with the specified prefix
    virtual ASPOSECPP_SHARED_API String LookupNamespace(const String & prefix) = 0;
    /// Skips the children of the current node.
    virtual ASPOSECPP_SHARED_API void Skip() = 0;
    /// Changes the state of the reader to ReadState::Closed.
    virtual ASPOSECPP_SHARED_API void Close() = 0;
    /// Reads the contents of an element or a text node.
    /// @returns The contents of an element or a text node as a string.
    virtual ASPOSECPP_SHARED_API String ReadString() = 0;
    /// Checks if the current content node is an element and 
    /// moves the the reader's position to the next node.
    virtual ASPOSECPP_SHARED_API void ReadStartElement() = 0;
    /// Checks if the current content node is an element with the specified qualified name and 
    /// moves the the reader's position to the next node.
    /// @param value The element's qualified name
    virtual ASPOSECPP_SHARED_API void ReadStartElement(const String& value) = 0;
    /// Checks if the current content node is an element with the specified local name and namespace URI and 
    /// moves the the reader's position to the next node.
    /// @param localName The element's local name
    /// @param namespaceUri The element's namespace URI
    virtual ASPOSECPP_SHARED_API void ReadStartElement(const String& localName, const String& namespaceUri) = 0;
    /// Returns a string containing all the content of the current node, including the markup, but excluding start and end tags.
    virtual ASPOSECPP_SHARED_API String ReadInnerXml() = 0;
    /// Returns a string containing all the content of the current node, including the markup, and including start and end tags.
    virtual ASPOSECPP_SHARED_API String ReadOuterXml() = 0;
    /// Reads until an element with the specified name is encountered.
    /// @param name The qualified name of the element to read until
    /// @returns True if the node with the specified qualified name has been found, otherwise - false
    virtual ASPOSECPP_SHARED_API bool ReadToFollowing(const String &name);
    /// Reads until an element with the specified local name name and namespace URI is encountered.
    /// @param localName The local name of the element to read until
    /// @param namespaceURI The namespce URI of the element to read until
    /// @returns True if the node with the specified local name and namespace URI has been found, otherwise - false
    virtual ASPOSECPP_SHARED_API bool ReadToFollowing(const String &localName, const String &namespaceURI);
    /// Reads to the first descendant of the current element with the given name.
    /// @param name The qualified name of the element to move to.
    /// @returns True if a matching descendant element is found; otherwise false.
    virtual ASPOSECPP_SHARED_API bool ReadToDescendant(const String &name);
    // Reads to the first descendant of the current element with the given LocalName and NamespaceURI.
    /// @param localName The local name of the element to move to.
    /// @param namespaceURI The namespce URI of the element to move to.
    /// @returns True if a matching descendant element is found; otherwise false.
    virtual ASPOSECPP_SHARED_API bool ReadToDescendant(const String &localName, const String &namespaceURI);
    /// Gets name table associated with document being read.
    /// @return XmlNameTable object pointer.
    virtual SharedPtr<System::Xml::XmlNameTable> get_NameTable();

    /// Reads current element's contents as boolean.
    /// @return Boolean representation of current element's contents.
    virtual bool ReadContentAsBoolean();
    /// Reads current element's contents as double.
    /// @return Double representation of current element's contents.
    virtual double ReadContentAsDouble();
    /// Reads current element's contents as float.
    /// @return Float representation of current element's contents.
    virtual float ReadContentAsFloat();
    /// Reads current element's contents as decimal.
    /// @return Decimal representation of current element's contents.
    virtual Decimal ReadContentAsDecimal();
    /// Reads current element's contents as integer.
    /// @return Integer representation of current element's contents.
    virtual int32_t ReadContentAsInt();
    /// Reads current element's contents as long integer.
    /// @return 64-bit integer representation of current element's contents.
    virtual int64_t ReadContentAsLong();
    /// Reads current element's contents as string.
    /// @return String representation of current element's contents.
    virtual String ReadContentAsString();
    /// Reads next attribute's value.
    /// @return True if attribute is read, false otherwise.
    virtual bool ReadAttributeValue() = 0;
    /// Concatenates values of textual nodes of the current content, ignoring comments and PIs, expanding entity references, 
    /// and converts the content to a DateTime. Stops at start tags and end tags.
    /// @returns Content as DateTime value
    virtual ASPOSECPP_SHARED_API DateTime ReadContentAsDateTime();
    /// Returns the content of the current element as a DateTime. 
    /// Moves to the node following the element's end tag.
    /// @returns The element's content as DateTime value
    virtual ASPOSECPP_SHARED_API DateTime ReadElementContentAsDateTime();
    /// Checks local name and namespace of the current element and returns its content as a DateTime. 
    /// Moves to the node following the element's end tag.
    /// @param localName The local name of the element
    /// @param namespaceURI The namespace URI of the element
    /// @returns The element's content as DateTime value
    virtual ASPOSECPP_SHARED_API DateTime ReadElementContentAsDateTime(const String &localName, const String &namespaceURI);
    /// Checks if the current node is an element whose local name and namespce URI match the 
    /// specified values and returns its content as 32-bit integer value.
    /// @param localName The local name of the element
    /// @param namespaceURI The namespace URI of the element
    /// @returns The element's content as 32-bit integer value
    virtual ASPOSECPP_SHARED_API int ReadElementContentAsInt(const String &localName, const String &namespaceURI);
    /// Returns the content of the current element as an int. Moves to the node following the element's end tag.
    /// @returns The element's content as 32-bit integer value
    virtual ASPOSECPP_SHARED_API int ReadElementContentAsInt();
    /// Call this methods until it returns 0 to get all the data.
    /// @returns Decoded bytes of the current base64 element content
    virtual ASPOSECPP_SHARED_API int ReadElementContentAsBase64(const ArrayPtr<uint8_t>& buffer, int index, int count);
    /// Returns the content of the current element as a boolean. Moves to the node following the element's end tag.
    /// @returns The element's content as boolean 
    virtual ASPOSECPP_SHARED_API bool ReadElementContentAsBoolean();
    /// Checks if the current node is an element whose local name and namespce URI match the 
    /// specified values and returns its content as boolean value.
    /// @param localName The local name of the element
    /// @param namespaceURI The namespace URI of the element
    /// @returns The element's content as boolean 
    virtual ASPOSECPP_SHARED_API bool ReadElementContentAsBoolean(const String &localName, const String &namespaceURI);
    /// Checks if the current node is an element whose local name and namespce URI match the 
    /// specified values and returns its content as string.
    /// @param localName The local name of the element
    /// @param namespaceURI The namespace URI of the element
    /// @returns The element's content as string
    virtual ASPOSECPP_SHARED_API String ReadElementContentAsString(const String &localName, const String &namespaceURI);
    /// Returns the content of the current element as a string. Moves to the node following the element's end tag.
    /// @returns The element's content as string
    virtual ASPOSECPP_SHARED_API String ReadElementContentAsString();
    /// Determines if the current content node is an end tag and advances the reader to the next node.
    virtual ASPOSECPP_SHARED_API void ReadEndElement();
    /// Calls MoveToContent() and then determines if the current node is a start tag or an empty element tag.
    /// @returns True if the current node is a start tag or an empty element tag, otherwise - false
    virtual ASPOSECPP_SHARED_API bool IsStartElement();
    /// Calls MoveToContent() and then determines if the current node is a start tag or an empty element tag
    /// and if the found node's qualified name matches the specified value.
    /// @param name The string to match the node's qualified name against
    /// @returns True if the current node is a start tag or an empty element tag and its qualified name
    /// matches @p name, otherwise - false
    virtual ASPOSECPP_SHARED_API bool IsStartElement(const String &name);
    /// Calls MoveToContent() and then determines if the current node is a start tag or an empty element tag
    /// and if the found node's qualified name matches the specified value.
    /// @param name The string to match the node's name against
    /// @param ns The string to match the node's namespace against
    /// @returns True if the current node is a start tag or an empty element tag and its qualified name
    /// matches @p name, otherwise - false
    virtual ASPOSECPP_SHARED_API bool IsStartElement(const String& name, const String& ns);
    /// Reads the contents of a text-only element.
    /// @returns The contents of the current element
    virtual ASPOSECPP_SHARED_API String ReadElementString() = 0;
    /// Checks if the current node is an element whose qualified name matches the 
    /// specified value and reads its content.
    /// @param value The element's qualified name
    /// @returns The contents of the current element as a string
    virtual ASPOSECPP_SHARED_API String ReadElementString(const String& value) = 0;
    /// Checks if the current node is an element whose local name and namespce URI match the 
    /// specified values and returns its content as string.
    /// @param localName The local name of the element
    /// @param namespaceUri The namespace URI of the element
    /// @returns The element's content as a string
    virtual ASPOSECPP_SHARED_API String ReadElementString(const String& localName, const String& namespaceUri) = 0;
    /// resolves the entity reference for EntityReference nodes.
    virtual ASPOSECPP_SHARED_API void ResolveEntity() = 0; 
    /// Constructs an instance of the XmlReader class that reads XML data from the specified file.
    /// @param inputUri URI of the file containing the XML to read
    /// @returns A shared pointer to the created XmlReader
    static ASPOSECPP_SHARED_API XmlReader::Ptr Create(const String& inputUri);
    /// Constructs an instance of the XmlReader class that reads XML data from the specified stream.
    /// @param input A System::IO::Stream object to read the XML data from
    /// @returns A shared pointer to the created XmlReader
    static ASPOSECPP_SHARED_API XmlReader::Ptr Create(const SharedPtr<System::IO::Stream>& input);
    /// Constructs an instance of the XmlReader class that reads XML data from the specified TextReader.
    /// @param input A TextReader object to read the XML data from
    /// @returns A shared pointer to the created XmlReader
    static ASPOSECPP_SHARED_API XmlReader::Ptr Create(const SharedPtr<System::IO::TextReader>& input);
    /// Constructs an instance of the XmlReader class that reads XML data from the specified file using the specified settings.
    /// @param inputUri URI of the file containing the XML to read
    /// @param settings The settings of the XmlReader being created
    /// @returns A shared pointer to the created XmlReader
    static ASPOSECPP_SHARED_API XmlReader::Ptr Create(const String& inputUri, const SharedPtr<XmlReaderSettings>& settings);
    /// Constructs an instance of the XmlReader class that reads XML data from the specified stream using the specified settings.
    /// @param input A System::IO::Stream object to read the XML data from
    /// @param settings The settings of the XmlReader being created
    /// @returns A shared pointer to the created XmlReader
    static ASPOSECPP_SHARED_API XmlReader::Ptr Create(const SharedPtr<System::IO::Stream>& input, const SharedPtr<XmlReaderSettings>& settings);
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException
    static ASPOSECPP_SHARED_API XmlReader::Ptr Create(const SharedPtr<System::IO::Stream>& input,
                                                      const SharedPtr<XmlReaderSettings>& settings,
                                                      const String& baseUri);
    /// Constructs an instance of the XmlReader class that reads XML data from the specified TextReader using the specified settings.
    /// @param input A TextReader object to read the XML data from
    /// @param settings The settings of the XmlReader being created
    /// @returns A shared pointer to the created XmlReader
    static ASPOSECPP_SHARED_API XmlReader::Ptr Create(const SharedPtr<System::IO::TextReader>& input, const SharedPtr<XmlReaderSettings>& settings);
    /// Constructs an instance of the XmlReader class that reads XML data from the specified TextReader using the specified settings
    /// and cotext information for parsing.
    /// @param input A TextReader object to read the XML data from
    /// @param settings The settings of the XmlReader being created
    /// @param inputContext The context information used to parse the XML fragment
    /// @returns A shared pointer to the created XmlReader
    static ASPOSECPP_SHARED_API XmlReader::Ptr Create(const SharedPtr<System::IO::TextReader>& input, const SharedPtr<XmlReaderSettings>& settings, const SharedPtr<XmlParserContext>& inputContext);
    /// Constructs an instance of the XmlReader class that reads XML data from the specified stream using the specified settings
    /// and cotext information for parsing.
    /// @param input A System::IO::Stream object to read the XML data from
    /// @param settings The settings of the XmlReader being created
    /// @param inputContext The context information used to parse the XML fragment
    /// @returns A shared pointer to the created XmlReader
    static ASPOSECPP_SHARED_API XmlReader::Ptr Create(const SharedPtr<System::IO::Stream>& input, const SharedPtr<XmlReaderSettings>& settings,
                                 const SharedPtr<XmlParserContext>& inputContext);
    /// Constructs an instance of the XmlReader class that reads XML data from the specified TextReader using the specified settings
    /// and base URI.
    /// @param input A TextReader object to read the XML data from
    /// @param settings The settings of the XmlReader being created
    /// @param baseUrl The base URI for the XML document being read; used to resolve relative URIs in the XML document being read
    /// @returns A shared pointer to the created XmlReader
    static ASPOSECPP_SHARED_API XmlReader::Ptr Create(const SharedPtr<System::IO::TextReader>& input, const SharedPtr<XmlReaderSettings>& settings,
        const System::String& baseUrl);
    /// Constructs an instance of the XmlReader class that uses the specified XmlReader object as underlying reader.
    /// @param input A XmlReader object to be used as underlying reader
    /// @param settings The settings of the XmlReader being created
    /// @returns A shared pointer to the created XmlReader
    static ASPOSECPP_SHARED_API XmlReader::Ptr Create(const XmlReader::Ptr& input, const SharedPtr<XmlReaderSettings>& settings);
    /// Returns the settings of the XmlReader
    /// @returns The settings object
    ASPOSECPP_SHARED_API virtual SharedPtr<XmlReaderSettings> get_Settings() const;

    // special:
    /// Returns a pointer to the underlying libxml2 xmlTextReader object.
    xmlTextReader* native() const { return m_reader; }
    /// Returns a pointer to the current document used by the xmlTextReader object.
    xmlDoc* native_doc();
    // Internal:
    virtual void RaiseLastError();

protected:
    bool m_callbackRegistered = false;
    /// The underlying naive libxml2 XML reader object used by the current object.
    xmlTextReader* m_reader;
    /// A pointer to the libxml2 object that represents an XML document to which the XML node read by the current object belongs.
    std::unique_ptr<xmlDoc, void(*)(xmlDoc*)> m_internalDoc;
    /// Constructs an instance of XmlReader class.
    ASPOSECPP_SHARED_API XmlReader();
    /// Determines if the node of the specified type is a content node.
    /// @param type The node type to check.
    /// @returns True if the specified node type is a content node, otherwise - false
    static bool is_content(XmlNodeType type);

private:
    /// Initializes the specified XmlTextReader object and returns a shared pointer to it.
    /// @param reader The XmlTextReader object to initialize
    /// @returns A shared pointer to @p reader
    static XmlReader::Ptr Init(const SharedPtr<XmlTextReader>& reader);

    /// Checks if InternalReadContentAsString can be called safely
    /// (i.e. current NodeType is one of the 'content' types)
    /// @returns true, if InternalReadContentAsString method can be called safely, false otherwise.
    bool CanReadContent();
    
    /// Reads node content as string.
    /// @returns the node content represented as string.
    String InternalReadContentAsString();

    /// Prepare reader to read element content. Should be called before any ReadContentAsXXX method. 
    /// Works in pair with EndReadElementContent.
    /// @returns true, if ReadContentAsXXX method can be called safely, false otherwise.
    bool BeginReadElementContent(const String& methodName);

    /// Relax reader from reading element content. Works in pair with BeginReadElementContent.
    void EndReadElementContent();
    
    /// Ensures current node has appropriated localName and namespaceURI
    /// If not, an exception will thrown.
    void CheckNameNS(const String & localName, const String & namespaceURI);
};

}} // namespace System::Xml
