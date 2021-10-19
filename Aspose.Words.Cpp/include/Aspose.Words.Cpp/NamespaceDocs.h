//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file NamespaceDocs.h
#pragma once

/// @namespace Aspose::Words::BuildingBlocks
/// @brief The <b>%Aspose.Words.BuildingBlocks</b> namespace provides classes that allow to access
/// and use AutoText, AutoCorrect entries and Building Blocks in a document.


/// @namespace Aspose::Words::Comparing
/// @brief The <b>%Aspose.Words.Comparing</b> namespace provides classes and enumerations that allow to specify additional options when comparing documents.


/// @namespace Aspose::Words::DigitalSignatures
/// @brief The <b>%Aspose.Words.DigitalSignatures</b> namespace provides classes to sign documents and verify signatures.


/// @namespace Aspose::Words::Drawing::Charts
/// @brief The <b>%Aspose.Words.Drawing.Charts</b> namespace provides classes that allow to access charts in %Microsoft Word documents.
/// 
/// The chart supported are Word 2007 (or higher) DrawingML Charts.


/// @namespace Aspose::Words::Drawing::Core
/// @brief The <b>%Aspose.Words.Drawing</b> namespace contains classes that allow to
/// create and modify drawing objects in %Microsoft Word documents.
/// 
/// %Aspose.Words supports all drawing objects in %Microsoft Word documents, including
/// OfficeArt shapes, textboxes, pictures, diagrams, OLE objects and ActiveX controls.
/// 
/// The main classes in this namespace are:
/// 
/// - <see cref="Aspose::Words::Drawing::Shape">Shape</see> represents an object in the drawing layer,
///   such as an AutoShape, textbox, freeform, OLE object, ActiveX control, or picture.
/// - <see cref="Aspose::Words::Drawing::GroupShape">GroupShape</see> represents a group of shapes
///   in a document.
/// - <see cref="Aspose::Words::Drawing::ShapeBase">ShapeBase</see> is the base class for the
///   shape and group shape classes, provides all common shape properties such as position,
///   size and text wrapping. A shape is a node in the document tree.
/// 
/// Although not every type of drawing object can be programmatically created and not every shape
/// property can be accessed, all drawing objects are fully preserved in %Microsoft Word documents
/// during document open-save operations.
/// 
/// Names of classes, methods and properties in this namespace correspond to VML DOM where possible.


/// @namespace Aspose::Words::Drawing
/// @brief The <b>%Aspose.Words.Drawing</b> namespace provides classes that allow to create and modify drawing objects.
/// 
/// All drawing objects in %Microsoft Word documents are represented by instances of the <see cref="Aspose::Words::Drawing::Shape">Shape</see> and <see cref="Aspose::Words::Drawing::GroupShape">GroupShape</see> classes.
/// An object of  the <see cref="Aspose::Words::Drawing::Shape">Shape</see> class is a node in a document and can represent a picture, textbox, AutoShape or an OLE object.
/// 
/// The classes in this namespace support the latest (Word 2007 - 2013 DrawingML) and the earlier (pre Word 2007 - Office Art) shapes.


/// @namespace Aspose::Words::Drawing::Ole
/// @brief Contains classes to work with OLE / ActiveX controls and forms in %Microsoft Word documents.


/// @namespace Aspose::Words::Fields
/// @brief The <b>%Aspose.Words.Fields</b> namespace contains classes that
/// represent %Microsoft Word fields in a document.


/// @namespace Aspose::Words::Fonts
/// @brief The <b>%Aspose.Words.Fonts</b> namespace provides classes and enumerations to access information about
/// fonts used in a document.


/// @namespace Aspose::Words::Framesets
/// @brief The <b>%Aspose.Words.Framesets</b> namespace provides classes and enumerations that
/// represents a frames page or a single frame on a frames page.


/// @namespace Aspose::Words::Layout
/// @brief The <b>%Aspose.Words.Layout</b> namespace provides classes that allow to access
/// information such as on what page and where on a page particular document elements
/// are positioned, when the document is formatted into pages.


/// @namespace Aspose::Words::Lists
/// @brief The <b>%Aspose.Words.Lists</b> namespace contains classes for working
/// with bulleted and numbered lists defined in a document.


/// @namespace Aspose::Words::Loading
/// @brief The <b>%Aspose.Words.Loading</b> namespace provides classes and enumerations that
/// allow to specify additional options when loading documents.


/// @namespace Aspose::Words::MailMerging
/// @brief The <b>%Aspose.Words.MailMerging</b> namespace contains classes of the
/// "original" mail merge reporting engine.
/// 
/// This reporting engine requires the document to be marked up with %Microsoft Word
/// mail merge fields, but supports more functionality than %Microsoft Word's mail merge.
/// 
/// The engine allows to quickly and easily populate a report template with data from various
/// sources such as <b>%DataTable</b>, <b>%DataSet</b>, <b>%DataView</b>, <b>%IDataReader</b> or an array of values.
/// 
/// The <see cref="Aspose::Words::MailMerging::MailMerge">MailMerge</see> object which provides access to the reporting functionality
/// is available via the <see cref="Aspose::Words::Document::get_MailMerge">Document.MailMerge</see> property.
/// 
/// For the newer and more advanced reporting engine based on the LINQ method syntax see
/// <see cref="Aspose::Words::Reporting">Reporting</see>.
/// 
/// @sa Aspose::Words::Reporting


/// @namespace Aspose::Words::Markup
/// @brief The <b>%Aspose.Words.Markup</b> namespace contains classes that
/// represent customer defined semantics in a document: smart tags, custom XML and
/// structured document tags (content controls).


/// @namespace Aspose::Words::Math
/// @brief The <b>%Aspose.Words.Math</b> namespace contains classes that represent Office Math elements.


/// @namespace Aspose::Words
/// @brief The <b>%Aspose.Words</b> namespace provides classes for generating, converting, modifying,
/// rendering and printing %Microsoft Word documents without utilizing %Microsoft Word.
/// 
/// %Aspose.Words is written completely in C++. %Microsoft Word is not required in order to use %Aspose.Words.
/// 
/// The classes in the <b>%Aspose.Words</b> namespace borrow best practices from two well-known frameworks:
/// %Microsoft Word Automation and System.Xml.
/// A document in %Aspose.Words is represented by a tree of nodes, much like in XML DOM.
/// Where possible, class, method and property names match those found in %Microsoft Word Automation.
/// 
/// The main classes in this namespace are:
/// 
/// - <see cref="Aspose::Words::Document">Document</see>
///   is the main class of the object model that represents a %Microsoft Word document.
/// - <see cref="Aspose::Words::DocumentBuilder">DocumentBuilder</see>
///   provides an easy way to insert content and formatting into a document.
/// - <see cref="Aspose::Words::Node">Node</see>
///   is the base class for all nodes in the document.
/// - <see cref="Aspose::Words::CompositeNode">CompositeNode</see>
///   is the base class for all nodes of the document that can contain other nodes, for example
///   <see cref="Aspose::Words::Paragraph">Paragraph</see>,
///   <see cref="Aspose::Words::Section">Section</see> and
///   and
///   <see cref="Aspose::Words::Tables::Table">Table</see>.


/// @namespace Aspose::Words::Notes
/// @brief The <b>%Aspose.Words.Notes</b> namespace provides classes to work with %Microsoft Word endnotes and footnotes.


/// @namespace Aspose::Words::Properties
/// @brief The <b>%Aspose.Words.Properties</b> namespace provides classes to work
/// with custom and built-in document properties such as title, keywords, company etc.


/// @namespace Aspose::Words::Rendering
/// @brief The <b>%Aspose.Words.Rendering</b> namespace provides classes that allow to
/// customize printing or rendering of documents.
/// 
/// To actually render, print or convert a document use the corresponding methods on the
/// <see cref="Aspose::Words::Document">Document</see> object.


/// @namespace Aspose::Words::Replacing
/// @brief The <b>%Aspose.Words.Replacing</b> namespace provides classes to manipulate
/// with find/replace operations over the document tree.


/// @namespace Aspose::Words::Reporting
/// @brief This namespace contains classes of the Aspose.Words' new reporting engine that
/// supports report templates marked up with a language based on the LINQ Method Syntax.
/// 
/// This new reporting engine is more advanced than the original mail merge reporting engine
/// <see cref="Aspose::Words::MailMerging">MailMerging</see> and allows to retrieve data from any .NET class,
/// perform grouping, sorting, joining and interpret C\# expressions.
/// 
/// @sa Aspose::Words::MailMerging


/// @namespace Aspose::Words::Saving
/// @brief The <b>%Aspose.Words.Saving</b> namespace provides classes and enumerations that
/// allow to specify additional options for saving or converting documents.


/// @namespace Aspose::Words::Settings
/// @brief The <b>%Aspose.Words.Settings</b> namespace contains classes and enums
/// that are used when specifying various settings and options stored in a document.
/// These are mail merge, write protection, compatibility and other settings.


/// @namespace Aspose::Words::Shaping
/// @brief 


/// @namespace Aspose::Words::Tables
/// @brief The <b>%Aspose.Words.Tables</b> namespace contains classes that
/// represent tables, rows, cells and their formatting.


/// @namespace Aspose::Words::Themes
/// @brief The <b>%Aspose.Words.Themes</b> namespace provides classes that allow to access theme information in %Microsoft Word documents.
/// 
/// A document theme can specify fonts and colors to be used in a document. Themes are supported in Word 2007 and higher.


/// @namespace Aspose::Words::Vba
/// @brief The <b>%Aspose.Words.Vba</b> namespace provides classes to work with VBA projects.
/// 
/// A <see cref="Aspose::Words::Vba::VbaProject">VbaProject</see> inside the document is defined as a collection of <see cref="Aspose::Words::Vba::VbaModule">VbaModule</see>.


/// @namespace Aspose::Words::WebExtensions
/// @brief The <b>%Aspose.Words.WebExtensions</b> namespace provides classes that allow to
/// customize elements and attributes that extend the XML vocabulary for representing Office Add-ins.


