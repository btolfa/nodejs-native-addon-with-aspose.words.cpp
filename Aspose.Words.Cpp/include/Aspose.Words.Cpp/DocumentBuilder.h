//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/DocumentBuilder.h
#pragma once

#include <system/io/std_stream_wrappers.h>
#include <system/enum_helpers.h>
#include <system/array.h>
#include <iostream>
#include <cstdint>

#include <Aspose.Words.Cpp/Underline.h>
#include <Aspose.Words.Cpp/HeaderFooterType.h>
#include <Aspose.Words.Cpp/ImportFormatMode.h>
#include <Aspose.Words.Cpp/IRunAttrSource.h>
#include <Aspose.Words.Cpp/IRowAttrSource.h>
#include <Aspose.Words.Cpp/ICellAttrSource.h>
#include <Aspose.Words.Cpp/Notes/FootnoteType.h>
#include <Aspose.Words.Cpp/Fields/TextFormFieldType.h>
#include <Aspose.Words.Cpp/Fields/FieldType.h>
#include <Aspose.Words.Cpp/Drawing/WrapType.h>
#include <Aspose.Words.Cpp/Drawing/ShapeType.h>
#include <Aspose.Words.Cpp/Drawing/RelativeVerticalPosition.h>
#include <Aspose.Words.Cpp/Drawing/RelativeHorizontalPosition.h>
#include <Aspose.Words.Cpp/Drawing/Charts/ChartType.h>
#include <Aspose.Words.Cpp/HtmlInsertOptions.h>
#include <Aspose.Words.Cpp/BreakType.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace Aspose
{
namespace Words
{

class ImportFormatOptions;
class EditableRangeEnd;
class EditableRangeStart;
class BookmarkEnd;
class BookmarkStart;
class SignatureLineOptions;
namespace Notes
{
class Footnote;
}

class Section;
class Story;
class Paragraph;
class Node;

namespace Tables
{
class Table;
class Row;

class Cell;
class CellFormat;
class RowFormat;
}
class PageSetup;
namespace Lists
{
class ListFormat;
}
class ParagraphFormat;
class Font;
class Document;

namespace Fields
{

class FormField;
class Field;

}

namespace Drawing
{

class Shape;

}
class DocumentBuilder;
}
}
namespace System
{
namespace IO
{
class Stream;
}
namespace Drawing
{
class Image;
}

}

namespace Aspose {

namespace Words {

/// Provides methods to insert text, images and other content, specify font, paragraph and section formatting.
/// 
/// <b>%DocumentBuilder</b> makes the process of building a <b>%Document</b> easier.
/// <b>%Document</b> is a composite object consisting of a tree of nodes and while inserting content
/// nodes directly into the tree is possible, it requires good understanding of the tree structure.
/// <b>%DocumentBuilder</b> is a "facade" for the complex structure of <b>%Document</b> and allows
/// to insert content and formatting quickly and easily.
/// 
/// Create a <b>%DocumentBuilder</b> and associate it with a <see cref="Aspose::Words::DocumentBuilder::get_Document">Document</see>.
/// 
/// The <b>%DocumentBuilder</b> has an internal cursor where the text will be inserted
/// when you call <see cref="Aspose::Words::DocumentBuilder::Write(System::String)">Write()</see>, <see cref="Aspose::Words::DocumentBuilder::Writeln(System::String)">Writeln()</see>, <see cref="Aspose::Words::DocumentBuilder::InsertBreak(Aspose::Words::BreakType)">InsertBreak()</see>
/// and other methods. You can navigate the <b>%DocumentBuilder</b> cursor to a different location
/// in a document using various MoveToXXX methods.
/// 
/// Use the <see cref="Aspose::Words::DocumentBuilder::get_Font">Font</see> property to specify character formatting that will apply to
/// all text inserted from the current position in the document onwards.
/// 
/// Use the <see cref="Aspose::Words::DocumentBuilder::get_ParagraphFormat">ParagraphFormat</see> property to specify paragraph formatting for the current
/// and all paragraphs that will be inserted.
/// 
/// Use the <see cref="Aspose::Words::DocumentBuilder::get_PageSetup">PageSetup</see> property to specify page and section properties for the current
/// section and all section that will be inserted.
/// 
/// Use the <see cref="Aspose::Words::DocumentBuilder::get_CellFormat">CellFormat</see> and <see cref="Aspose::Words::DocumentBuilder::get_RowFormat">RowFormat</see> properties to specify
/// formatting properties for table cells and rows. User the <see cref="Aspose::Words::DocumentBuilder::InsertCell">InsertCell</see> and
/// <see cref="Aspose::Words::DocumentBuilder::EndRow">EndRow</see> methods to build a table.
/// 
/// Note that <b>%Font</b>, <b>%ParagraphFormat</b> and <b>%PageSetup</b> properties are updated whenever
/// you navigate to a different place in the document to reflect formatting properties available at the new location.
class ASPOSE_WORDS_SHARED_CLASS DocumentBuilder : public Aspose::Words::IRunAttrSource, public Aspose::Words::IRowAttrSource, public Aspose::Words::ICellAttrSource
{
    typedef DocumentBuilder ThisType;
    typedef Aspose::Words::IRunAttrSource BaseType;
    typedef Aspose::Words::IRowAttrSource BaseType1;
    typedef Aspose::Words::ICellAttrSource BaseType2;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

private:

public:

    /// Gets the <see cref="Aspose::Words::DocumentBuilder::get_Document">Document</see> object that this object is attached to.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Document> get_Document() const;
    /// Sets the <see cref="Aspose::Words::DocumentBuilder::get_Document">Document</see> object that this object is attached to.
    ASPOSE_WORDS_SHARED_API void set_Document(const System::SharedPtr<Aspose::Words::Document>& value);
    /// Returns an object that represents current font formatting properties.
    /// 
    /// Use <b>%Font</b> to access and modify font formatting properties.
    /// 
    /// Specify font formatting before inserting text.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Font> get_Font();
    /// True if the font is formatted as bold.
    ASPOSE_WORDS_SHARED_API bool get_Bold();
    /// True if the font is formatted as bold.
    ASPOSE_WORDS_SHARED_API void set_Bold(bool value);
    /// True if the font is formatted as italic.
    ASPOSE_WORDS_SHARED_API bool get_Italic();
    /// True if the font is formatted as italic.
    ASPOSE_WORDS_SHARED_API void set_Italic(bool value);
    /// Gets/sets underline type for the current font.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Underline get_Underline();
    /// Gets/sets underline type for the current font.
    ASPOSE_WORDS_SHARED_API void set_Underline(Aspose::Words::Underline value);
    /// Returns an object that represents current paragraph formatting properties.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::ParagraphFormat> get_ParagraphFormat();
    /// Returns an object that represents current list formatting properties.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Lists::ListFormat> get_ListFormat();
    /// Returns an object that represents current page setup and section properties.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::PageSetup> get_PageSetup();
    /// Returns an object that represents current table row formatting properties.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::RowFormat> get_RowFormat();
    /// Returns an object that represents current table cell formatting properties.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::CellFormat> get_CellFormat();
    /// Returns true if the cursor is at the beginning of the current paragraph (no text before the cursor).
    ASPOSE_WORDS_SHARED_API bool get_IsAtStartOfParagraph();
    /// Returns true if the cursor is at the end of the current paragraph.
    ASPOSE_WORDS_SHARED_API bool get_IsAtEndOfParagraph();
    /// Gets the node that is currently selected in this DocumentBuilder.
    /// 
    /// <b>%CurrentNode</b> is a cursor of <b>%DocumentBuilder</b> and points to a <b>%Node</b>
    /// that is a direct child of a <b>%Paragraph</b>. Any insert operations you perform using
    /// <b>%DocumentBuilder</b> will insert before the <b>%CurrentNode</b>.
    /// 
    /// When the current paragraph is empty or the cursor is positioned just
    /// before the end of the paragraph, <b>%CurrentNode</b> returns null.
    /// 
    /// @sa Aspose::Words::DocumentBuilder::get_CurrentParagraph
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> get_CurrentNode();
    /// Gets the paragraph that is currently selected in this DocumentBuilder.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Paragraph> get_CurrentParagraph();
    /// Gets the story that is currently selected in this DocumentBuilder.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Story> get_CurrentStory();
    /// Gets the section that is currently selected in this DocumentBuilder.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Section> get_CurrentSection();

    /// Initializes a new instance of this class.
    ASPOSE_WORDS_SHARED_API DocumentBuilder();
    /// Initializes a new instance of this class.
    /// 
    /// @param doc The Document object to attach to.
    ASPOSE_WORDS_SHARED_API DocumentBuilder(const System::SharedPtr<Aspose::Words::Document>& doc);

    /// Moves the cursor to the beginning of the document.
    ASPOSE_WORDS_SHARED_API void MoveToDocumentStart();
    /// Moves the cursor to the end of the document.
    ASPOSE_WORDS_SHARED_API void MoveToDocumentEnd();
    /// Moves the cursor to the beginning of the body in a specified section.
    /// 
    /// When sectionIndex is greater than or equal to 0, it specifies an index from
    /// the beginning of the document with 0 being the first section. When sectionIndex is less than 0,
    /// it specified an index from the end of the document with -1 being the last section.
    /// 
    /// The cursor is moved to the first paragraph in the <b>%Body</b> of the specified section.
    /// 
    /// @param sectionIndex The index of the section to move to.
    ASPOSE_WORDS_SHARED_API void MoveToSection(int32_t sectionIndex);
    /// Moves the cursor to the beginning of a header or footer in the current section.
    /// 
    /// After you moved the cursor into a header or footer, you can use the rest of DocumentBuilder
    /// methods to modify the contents of the header or footer.
    /// 
    /// If you want to create headers and footers different for the first page, you need
    /// to set <see cref="Aspose::Words::PageSetup::get_DifferentFirstPageHeaderFooter">DifferentFirstPageHeaderFooter</see>.
    /// 
    /// If you want to create headers and footers different for even and odd pages, you need
    /// to set <see cref="Aspose::Words::PageSetup::get_OddAndEvenPagesHeaderFooter">OddAndEvenPagesHeaderFooter</see>.
    /// 
    /// Use <see cref="Aspose::Words::DocumentBuilder::MoveToSection(int32_t)">MoveToSection()</see> to move out of the header into the main text.
    /// 
    /// @param headerFooterType Specifies the header or footer to move to.
    ASPOSE_WORDS_SHARED_API void MoveToHeaderFooter(Aspose::Words::HeaderFooterType headerFooterType);
    /// Moves the cursor to a position just beyond the specified merge field and removes the merge field.
    /// 
    /// Note that this method deletes the merge field from the document after moving the cursor.
    /// 
    /// @param fieldName The case-insensitive name of the mail merge field.
    /// 
    /// @return True if the merge field was found and the cursor was moved; false otherwise.
    ASPOSE_WORDS_SHARED_API bool MoveToMergeField(const System::String& fieldName);
    /// Moves the merge field to the specified merge field.
    /// 
    /// @param fieldName The case-insensitive name of the mail merge field.
    /// @param isAfter When true, moves the cursor to be after the field end.
    ///     When false, moves the cursor to be before the field start.
    /// @param isDeleteField When true, deletes the merge field.
    /// 
    /// @return True if the merge field was found and the cursor was moved; false otherwise.
    ASPOSE_WORDS_SHARED_API bool MoveToMergeField(const System::String& fieldName, bool isAfter, bool isDeleteField);
    /// Moves the cursor to a field in the document.
    /// 
    /// @param field The field to move the cursor to.
    /// @param isAfter When true, moves the cursor to be after the field end.
    ///     When false, moves the cursor to be before the field start.
    ASPOSE_WORDS_SHARED_API void MoveToField(const System::SharedPtr<Aspose::Words::Fields::Field>& field, bool isAfter);
    /// Moves the cursor to a bookmark.
    /// 
    /// Moves the cursor to a position just after the start of the bookmark with the
    /// specified name.
    /// 
    /// The comparison is not case-sensitive. If the bookmark was not found, false is
    /// returned and the cursor is not moved.
    /// 
    /// Inserting new text does not replace existing text of the bookmark.
    /// 
    /// Note that some bookmarks in the document are assigned to form fields.
    /// Moving to such a bookmark and inserting text there inserts the text into the
    /// form field code. Although this will not invalidate the form field, the inserted
    /// text will not be visible because it becomes part of the field code.
    /// 
    /// @param bookmarkName The name of the bookmark to move the cursor to.
    /// 
    /// @return True if the bookmark was found; false otherwise.
    ASPOSE_WORDS_SHARED_API bool MoveToBookmark(const System::String& bookmarkName);
    /// Moves the cursor to a bookmark with greater precision.
    /// 
    /// Moves the cursor to a position before or after the bookmark start or end.
    /// 
    /// If desired position is not at inline level, moves to the next paragraph.
    /// 
    /// The comparison is not case-sensitive. If the bookmark was not found, false is
    /// returned and the cursor is not moved.
    /// 
    /// @param bookmarkName The name of the bookmark to move the cursor to.
    /// @param isStart When true, moves the cursor to the beginning of the bookmark.
    ///     When false, moves the cursor to the end of the bookmark.
    /// @param isAfter When true, moves the cursor to be after the bookmark
    ///     start or end position. When false, moves the cursor to be before the bookmark
    ///     start or end position.
    /// 
    /// @return True if the bookmark was found; false otherwise.
    ASPOSE_WORDS_SHARED_API bool MoveToBookmark(const System::String& bookmarkName, bool isStart, bool isAfter);
    /// Moves the cursor to a paragraph in the current section.
    /// 
    /// The navigation is performed inside the current story of the current section.
    /// That is, if you moved the cursor to the primary header of the first section,
    /// then paragraphIndex specified the index of the paragraph inside that header
    /// of that section.
    /// 
    /// When paragraphIndex is greater than or equal to 0, it specifies an index from
    /// the beginning of the section with 0 being the first paragraph. When paragraphIndex is less than 0,
    /// it specified an index from the end of the section with -1 being the last paragraph.
    /// 
    /// @param paragraphIndex The index of the paragraph to move to.
    /// @param characterIndex The index of the character inside the paragraph.
    ///     A negative value allows you to specify a position from the end of the paragraph. Use -1 to move to the end of
    ///     the paragraph.
    ASPOSE_WORDS_SHARED_API void MoveToParagraph(int32_t paragraphIndex, int32_t characterIndex);
    /// Moves the cursor to a table cell in the current section.
    /// 
    /// The navigation is performed inside the current story of the current section.
    /// 
    /// For the index parameters, when index is greater than or equal to 0, it specifies an index from
    /// the beginning with 0 being the first element. When index is less than 0, it specified an index from
    /// the end with -1 being the last element.
    /// 
    /// @param tableIndex The index of the table to move to.
    /// @param rowIndex The index of the row in the table.
    /// @param columnIndex The index of the column in the table.
    /// @param characterIndex The index of the character inside the cell.
    ///     A negative value allows you to specify a position from the end of the cell. Use -1 to move to the end of
    ///     the cell.
    ASPOSE_WORDS_SHARED_API void MoveToCell(int32_t tableIndex, int32_t rowIndex, int32_t columnIndex, int32_t characterIndex);
    /// Moves the cursor to an inline node or to the end of a paragraph.
    /// 
    /// When <i>%node</i> is an inline-level node, the cursor is moved to this node
    /// and further content will be inserted before that node.
    /// 
    /// When <i>%node</i> is a <b>%Paragraph</b>, the cursor is moved to the end of the paragraph
    /// and further content will be inserted just before the paragraph break.
    /// 
    /// When <i>%node</i> is a block-level node but not a Paragraph, the cursor is moved to the end of the first paragraph into block-level node
    /// and further content will be inserted just before the paragraph break.
    /// 
    /// @param node The node must be a paragraph or a direct child of a paragraph.
    ASPOSE_WORDS_SHARED_API void MoveTo(const System::SharedPtr<Aspose::Words::Node>& node);
    /// Deletes a row from a table.
    /// 
    /// If the cursor is inside the row that is being deleted, the cursor is moved
    /// out to the next row or to the next paragraph after the table.
    /// 
    /// If you delete a row from a table that contains only one row, the whole
    /// table is deleted.
    /// 
    /// For the index parameters, when index is greater than or equal to 0, it specifies an index from
    /// the beginning with 0 being the first element. When index is less than 0, it specified an index from
    /// the end with -1 being the last element.
    /// 
    /// @param tableIndex The index of the table.
    /// @param rowIndex The index of the row in the table.
    /// 
    /// @return The row node that was just removed.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::Row> DeleteRow(int32_t tableIndex, int32_t rowIndex);
    /// Inserts a string into the document at the current insert position.
    /// 
    /// @param text The string to insert into the document.
    ASPOSE_WORDS_SHARED_API void Write(const System::String& text);
    /// Inserts a string and a paragraph break into the document.
    /// 
    /// @param text The string to insert into the document.
    ASPOSE_WORDS_SHARED_API void Writeln(const System::String& text);
    /// Inserts a paragraph break into the document.
    /// 
    /// Calls <see cref="Aspose::Words::DocumentBuilder::InsertParagraph">InsertParagraph</see>.
    ASPOSE_WORDS_SHARED_API void Writeln();
    /// Inserts a paragraph break into the document.
    /// 
    /// Current paragraph formatting specified by the <see cref="Aspose::Words::DocumentBuilder::get_ParagraphFormat">ParagraphFormat</see> property is used.
    /// 
    /// Breaks the current paragraph in two. After inserting the paragraph, the cursor is placed at the beginning of the new paragraph.
    /// 
    /// @return The paragraph node that was just inserted. It is the same node as <see cref="Aspose::Words::DocumentBuilder::get_CurrentParagraph">CurrentParagraph</see>.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Paragraph> InsertParagraph();
    /// Inserts style separator into the document.
    ASPOSE_WORDS_SHARED_API void InsertStyleSeparator();
    /// Inserts a break of the specified type into the document.
    /// 
    /// @param breakType Specifies the type of the break to insert.
    ASPOSE_WORDS_SHARED_API void InsertBreak(Aspose::Words::BreakType breakType);
    /// Inserts a TOC (table of contents) field into the document.
    /// 
    /// This method inserts a TOC (table of contents) field into the document at
    /// the current position.
    /// 
    /// A table of contents in a Word document can be built in a number of ways
    /// and formatted using a variety of options. The way the table is built and
    /// displayed by %Microsoft Word is controlled by the field switches.
    /// 
    /// The easiest way to specify the switches is to insert and configure a table of
    /// contents into a Word document using the Insert-\>Reference-\>Index and Tables menu,
    /// then switch display of field codes on to see the switches. You can press Alt+F9 in
    /// %Microsoft Word to toggle display of field codes on or off.
    /// 
    /// For example, after creating a table of contents, the following field is inserted
    /// into the document: <b>%{ TOC \\o "1-3" \\h \\z \\u }</b>.
    /// You can copy <b>%\\o "1-3" \\h \\z \\u</b> and use it as the switches parameter.
    /// 
    /// Note that <b>%InsertTableOfContents</b> will only insert a TOC field, but
    /// will not actually build the table of contents. The table of contents is built by
    /// %Microsoft Word when the field is updated.
    /// 
    /// If you insert a table of contents using this method and then open the file
    /// in %Microsoft Word, you will not see the table of contents because the TOC field
    /// has not yet been updated.
    /// 
    /// In %Microsoft Word, fields are not automatically updated when a document is opened,
    /// but you can update fields in a document at any time by pressing F9.
    /// 
    /// @param switches The TOC field switches.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::Field> InsertTableOfContents(const System::String& switches);
    /// Inserts a Word field into a document and optionally updates the field result.
    /// 
    /// This method inserts a field into a document.
    /// %Aspose.Words can update fields of most types, but not all. For more details see the
    /// <see cref="Aspose::Words::DocumentBuilder::InsertField(System::String, System::String)">InsertField()</see> overload.
    /// 
    /// @param fieldType The type of the field to append.
    /// @param updateField Specifies whether to update the field immediately.
    /// 
    /// @return A <see cref="Aspose::Words::Fields::Field">Field</see> object that represents the inserted field.
    /// 
    /// @sa Aspose::Words::Fields::Field
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::Field> InsertField(Aspose::Words::Fields::FieldType fieldType, bool updateField);
    /// Inserts a Word field into a document and updates the field result.
    /// 
    /// This method inserts a field into a document and updates the field result immediately.
    /// %Aspose.Words can update fields of most types, but not all. For more details see the
    /// <see cref="Aspose::Words::DocumentBuilder::InsertField(System::String, System::String)">InsertField()</see> overload.
    /// 
    /// @param fieldCode The field code to insert (without curly braces).
    /// 
    /// @return A <see cref="Aspose::Words::Fields::Field">Field</see> object that represents the inserted field.
    /// 
    /// @sa Aspose::Words::Fields::Field
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::Field> InsertField(const System::String& fieldCode);
    /// Inserts a Word field into a document without updating the field result.
    /// 
    /// Fields in %Microsoft Word documents consist of a field code and a field result.
    /// The field code is like a formula and the field result is like the value that
    /// the formula produces. The field code may also contain field switches
    /// that are like additional instructions to perform a specific action.
    /// 
    /// You can switch between displaying field codes and results in your document in
    /// %Microsoft Word using the keyboard shortcut Alt+F9. Field codes appear between curly braces ( { } ).
    /// 
    /// To create a field, you need to specify a field type, field code and a "placeholder" field value.
    /// If you are not sure about a particular field code syntax, create the field in %Microsoft Word first
    /// and switch to see its field code.
    /// 
    /// %Aspose.Words can calculate field results for most of the field types, but this method
    /// does not update the field result automatically. Because the field result is not calculated automatically,
    /// you are expected to pass some string value (or even an empty string) that will be inserted into the field result.
    /// This value will remain in the field result as a placeholder until the field is updated.
    /// To update the field result you can call <see cref="Aspose::Words::Fields::Field::Update">Update</see> on the field object returned
    /// to you or <see cref="Aspose::Words::Document::UpdateFields">UpdateFields</see> to update fields in the whole document.
    /// 
    /// @param fieldCode The field code to insert (without curly braces).
    /// @param fieldValue The field value to insert. Pass null for fields that do not have a value.
    /// 
    /// @return A <see cref="Aspose::Words::Fields::Field">Field</see> object that represents the inserted field.
    /// 
    /// @sa Aspose::Words::Fields::Field
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::Field> InsertField(const System::String& fieldCode, const System::String& fieldValue);
    /// Inserts a hyperlink into the document.
    /// 
    /// Note that you need to specify font formatting for the hyperlink display text explicitly
    /// using the <see cref="Aspose::Words::DocumentBuilder::get_Font">Font</see> property.
    /// 
    /// This methods internally calls <see cref="Aspose::Words::DocumentBuilder::InsertField(System::String)">InsertField()</see> to insert an MS Word HYPERLINK field
    /// into the document.
    /// 
    /// @param displayText Text of the link to be displayed in the document.
    /// @param urlOrBookmark Link destination. Can be a url or a name of a bookmark inside the document.
    ///     This method always adds apostrophes at the beginning and end of the url.
    /// @param isBookmark True if the previous parameter is a name of a bookmark inside the document;
    ///     false is the previous parameter is a URL.
    /// 
    /// @return A <see cref="Aspose::Words::Fields::Field">Field</see> object that represents the inserted field.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::Field> InsertHyperlink(const System::String& displayText, const System::String& urlOrBookmark, bool isBookmark);
    /// Inserts a text form field at the current position.
    /// 
    /// If you specify a name for the form field, then a bookmark is automatically created with the same name.
    /// 
    /// @param name The name of the form field. Can be an empty string.
    /// @param type Specifies the type of the text form field.
    /// @param format Format string used to format the value of the form field.
    /// @param fieldValue Text that will be shown in the field.
    /// @param maxLength Maximum length the user can enter into the form field. Set to zero for unlimited length.
    /// 
    /// @return The form field node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FormField> InsertTextInput(const System::String& name, Aspose::Words::Fields::TextFormFieldType type, const System::String& format, const System::String& fieldValue, int32_t maxLength);
    /// Inserts a checkbox form field at the current position.
    /// 
    /// If you specify a name for the form field, then a bookmark is automatically created with the same name.
    /// 
    /// @param name The name of the form field. Can be an empty string. The value longer than 20 characters will be truncated.
    /// @param checkedValue Checked status of the checkbox form field.
    /// @param size Specifies the size of the checkbox in points. Specify 0 for MS Word
    ///     to calculate the size of the checkbox automatically.
    /// 
    /// @return The form field node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FormField> InsertCheckBox(const System::String& name, bool checkedValue, int32_t size);
    /// Inserts a checkbox form field at the current position.
    /// 
    /// If you specify a name for the form field, then a bookmark is automatically created with the same name.
    /// 
    /// @param name The name of the form field. Can be an empty string. The value longer than 20 characters will be truncated.
    /// @param defaultValue Default value of the checkbox form field.
    /// @param checkedValue Current checked status of the checkbox form field.
    /// @param size Specifies the size of the checkbox in points. Specify 0 for MS Word
    ///     to calculate the size of the checkbox automatically.
    /// 
    /// @return The form field node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FormField> InsertCheckBox(const System::String& name, bool defaultValue, bool checkedValue, int32_t size);
    /// Inserts a combobox form field at the current position.
    /// 
    /// If you specify a name for the form field, then a bookmark is automatically created with the same name.
    /// 
    /// @param name The name of the form field. Can be an empty string. The value longer than 20 characters will be truncated.
    /// @param items The items of the ComboBox. Maximum is 25 items.
    /// @param selectedIndex The index of the selected item in the ComboBox.
    /// 
    /// @return The form field node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Fields::FormField> InsertComboBox(const System::String& name, const System::ArrayPtr<System::String>& items, int32_t selectedIndex);
    /// Inserts a footnote or endnote into the document.
    /// 
    /// @param footnoteType Specifies whether to insert a footnote or an endnote.
    /// @param footnoteText Specifies the text of the footnote.
    /// 
    /// @return Returns a footnote object that was just created.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Notes::Footnote> InsertFootnote(Aspose::Words::Notes::FootnoteType footnoteType, const System::String& footnoteText);
    /// Inserts a footnote or endnote into the document.
    /// 
    /// @param footnoteType Specifies whether to insert a footnote or an endnote.
    /// @param footnoteText Specifies the text of the footnote.
    /// @param referenceMark Specifies the custom reference mark of the footnote.
    /// 
    /// @return Returns a footnote object that was just created.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Notes::Footnote> InsertFootnote(Aspose::Words::Notes::FootnoteType footnoteType, const System::String& footnoteText, const System::String& referenceMark);
    /// Inserts an image from a <see cref="System::Drawing::Image">Image</see>
    /// object into the document. The image is inserted inline and at 100\% scale.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param image The image to insert into the document.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(const System::SharedPtr<System::Drawing::Image>& image);
    /// Inserts an image from a file or URL into the document. The image is inserted inline and at 100\% scale.
    /// 
    /// This overload will automatically download the image before inserting into the document
    /// if you specify a remote URI.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param fileName The file with the image. Can be any valid local or remote URI.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(const System::String& fileName);
    /// Inserts an image from a stream into the document. The image is inserted inline and at 100\% scale.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param stream The stream that contains the image.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(const System::SharedPtr<System::IO::Stream>& stream);
    /// Inserts an image from a byte array into the document. The image is inserted inline and at 100\% scale.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param imageBytes The byte array that contains the image.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(const System::ArrayPtr<uint8_t>& imageBytes);
    /// Inserts an inline image from a <see cref="System::Drawing::Image">Image</see>
    /// object into the document and scales it to the specified size.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param image The image to insert into the document.
    /// @param width The width of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param height The height of the image in points. Can be a negative or zero value to request 100\% scale.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(const System::SharedPtr<System::Drawing::Image>& image, double width, double height);
    /// Inserts an inline image from a file or URL into the document and scales it to the specified size.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param fileName The file that contains the image.
    /// @param width The width of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param height The height of the image in points. Can be a negative or zero value to request 100\% scale.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(const System::String& fileName, double width, double height);
    /// Inserts an inline image from a stream into the document and scales it to the specified size.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param stream The stream that contains the image.
    /// @param width The width of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param height The height of the image in points. Can be a negative or zero value to request 100\% scale.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(const System::SharedPtr<System::IO::Stream>& stream, double width, double height);
    /// Inserts an inline image from a byte array into the document and scales it to the specified size.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param imageBytes The byte array that contains the image.
    /// @param width The width of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param height The height of the image in points. Can be a negative or zero value to request 100\% scale.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(const System::ArrayPtr<uint8_t>& imageBytes, double width, double height);
    /// Inserts an image from a <see cref="System::Drawing::Image">Image</see>
    /// object at the specified position and size.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param image The image to insert into the document.
    /// @param horzPos Specifies where the distance to the image is measured from.
    /// @param left Distance in points from the origin to the left side of the image.
    /// @param vertPos Specifies where the distance to the image measured from.
    /// @param top Distance in points from the origin to the top side of the image.
    /// @param width The width of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param height The height of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param wrapType Specifies how to wrap text around the image.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(const System::SharedPtr<System::Drawing::Image>& image, Aspose::Words::Drawing::RelativeHorizontalPosition horzPos, double left, Aspose::Words::Drawing::RelativeVerticalPosition vertPos, double top, double width, double height, Aspose::Words::Drawing::WrapType wrapType);
    /// Inserts an image from a file or URL at the specified position and size.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param fileName The file that contains the image.
    /// @param horzPos Specifies where the distance to the image is measured from.
    /// @param left Distance in points from the origin to the left side of the image.
    /// @param vertPos Specifies where the distance to the image measured from.
    /// @param top Distance in points from the origin to the top side of the image.
    /// @param width The width of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param height The height of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param wrapType Specifies how to wrap text around the image.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(const System::String& fileName, Aspose::Words::Drawing::RelativeHorizontalPosition horzPos, double left, Aspose::Words::Drawing::RelativeVerticalPosition vertPos, double top, double width, double height, Aspose::Words::Drawing::WrapType wrapType);
    /// Inserts an image from a stream at the specified position and size.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param stream The stream that contains the image.
    /// @param horzPos Specifies where the distance to the image is measured from.
    /// @param left Distance in points from the origin to the left side of the image.
    /// @param vertPos Specifies where the distance to the image measured from.
    /// @param top Distance in points from the origin to the top side of the image.
    /// @param width The width of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param height The height of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param wrapType Specifies how to wrap text around the image.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(const System::SharedPtr<System::IO::Stream>& stream, Aspose::Words::Drawing::RelativeHorizontalPosition horzPos, double left, Aspose::Words::Drawing::RelativeVerticalPosition vertPos, double top, double width, double height, Aspose::Words::Drawing::WrapType wrapType);
    /// Inserts an image from a byte array at the specified position and size.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param imageBytes The byte array that contains the image.
    /// @param horzPos Specifies where the distance to the image is measured from.
    /// @param left Distance in points from the origin to the left side of the image.
    /// @param vertPos Specifies where the distance to the image measured from.
    /// @param top Distance in points from the origin to the top side of the image.
    /// @param width The width of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param height The height of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param wrapType Specifies how to wrap text around the image.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(const System::ArrayPtr<uint8_t>& imageBytes, Aspose::Words::Drawing::RelativeHorizontalPosition horzPos, double left, Aspose::Words::Drawing::RelativeVerticalPosition vertPos, double top, double width, double height, Aspose::Words::Drawing::WrapType wrapType);
    /// Inserts an embedded OLE object from a stream into the document.
    /// 
    /// @param stream Stream containing application data.
    /// @param progId Programmatic Identifier of OLE object.
    /// @param asIcon Specifies either Iconic or Normal mode of OLE object being inserted.
    /// @param presentation Image presentation of OLE object. If value is null %Aspose.Words will use one of the predefined images.
    /// 
    /// @return Shape node containing Ole object and inserted at the current Builder position.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertOleObject(const System::SharedPtr<System::IO::Stream>& stream, const System::String& progId, bool asIcon, const System::SharedPtr<System::IO::Stream>& presentation);
    /// Inserts an embedded or linked OLE object from a file into the document. Detects OLE object type using file extension.
    /// 
    /// @param fileName Full path to the file.
    /// @param isLinked If true then linked OLE object is inserted otherwise embedded OLE object is inserted.
    /// @param asIcon Specifies either Iconic or Normal mode of OLE object being inserted.
    /// @param presentation Image presentation of OLE object. If value is null %Aspose.Words will use one of the predefined images.
    /// 
    /// @return Shape node containing Ole object and inserted at the current Builder position.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertOleObject(const System::String& fileName, bool isLinked, bool asIcon, const System::SharedPtr<System::IO::Stream>& presentation);
    /// Inserts an embedded or linked OLE object from a file into the document. Detects OLE object type using given progID parameter.
    /// 
    /// @param fileName Full path to the file.
    /// @param progId ProgId of OLE object.
    /// @param isLinked If true then linked OLE object is inserted otherwise embedded OLE object is inserted.
    /// @param asIcon Specifies either Iconic or Normal mode of OLE object being inserted.
    /// @param presentation Image presentation of OLE object. If value is null %Aspose.Words will use one of the predefined images.
    /// 
    /// @return Shape node containing Ole object and inserted at the current Builder position.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertOleObject(const System::String& fileName, const System::String& progId, bool isLinked, bool asIcon, const System::SharedPtr<System::IO::Stream>& presentation);
    /// Inserts an embedded or linked OLE object as icon into the document.
    /// Allows to specify icon file and caption. Detects OLE object type using file extension.
    /// 
    /// @param fileName Full path to the file.
    /// @param isLinked If true then linked OLE object is inserted otherwise embedded OLE object is inserted.
    /// @param iconFile Full path to the ICO file. If the value is null, %Aspose.Words will use a predefined image.
    /// @param iconCaption Icon caption. If the value is null, %Aspose.Words will use the file name.
    /// 
    /// @return Shape node containing Ole object and inserted at the current Builder position.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertOleObjectAsIcon(const System::String& fileName, bool isLinked, const System::String& iconFile, const System::String& iconCaption);
    /// Inserts an embedded or linked OLE object as icon into the document.
    /// Allows to specify icon file and caption. Detects OLE object type using given progID parameter.
    /// 
    /// @param fileName Full path to the file.
    /// @param progId ProgId of OLE object.
    /// @param isLinked If true then linked OLE object is inserted otherwise embedded OLE object is inserted.
    /// @param iconFile Full path to the ICO file. If the value is null, %Aspose.Words will use a predefined image.
    /// @param iconCaption Icon caption. If the value is null, %Aspose.Words will use the file name.
    /// 
    /// @return Shape node containing Ole object and inserted at the current Builder position.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertOleObjectAsIcon(const System::String& fileName, const System::String& progId, bool isLinked, const System::String& iconFile, const System::String& iconCaption);
    /// Inserts an embedded OLE object as icon from a stream into the document.
    /// Allows to specify icon file and caption. Detects OLE object type using given progID parameter.
    /// 
    /// @param stream Stream containing application data.
    /// @param progId ProgId of OLE object.
    /// @param iconFile Full path to the ICO file. If the value is null, %Aspose.Words will use a predefined image.
    /// @param iconCaption Icon caption. If the value is null, %Aspose.Words will use the a predefined icon caption.
    /// 
    /// @return Shape node containing Ole object and inserted at the current Builder position.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertOleObjectAsIcon(const System::SharedPtr<System::IO::Stream>& stream, const System::String& progId, const System::String& iconFile, const System::String& iconCaption);
    /// Inserts an HTML string into the document.
    /// 
    /// @param html An HTML string to insert into the document.
    ASPOSE_WORDS_SHARED_API void InsertHtml(const System::String& html);
    /// Inserts an HTML string into the document.
    /// 
    /// You can use this method to insert an HTML fragment or whole HTML document.
    /// 
    /// When @a useBuilderFormatting is <c>%false</c>,
    /// <see cref="Aspose::Words::DocumentBuilder">DocumentBuilder</see> formating is ignored and formatting of inserted text
    /// is based on default HTML formatting. As a result, the text looks as it is rendered in browsers.
    /// 
    /// When @a useBuilderFormatting is <c>%true</c>,
    /// formatting of inserted text is based on <see cref="Aspose::Words::DocumentBuilder">DocumentBuilder</see> formatting,
    /// and the text looks as if it were inserted with <see cref="Aspose::Words::DocumentBuilder::Write(System::String)">Write()</see>.
    /// 
    /// @param html An HTML string to insert into the document.
    /// @param useBuilderFormatting A value indicating whether formatting specified in <see cref="Aspose::Words::DocumentBuilder">DocumentBuilder</see>
    ///     is used as base formatting for text imported from HTML.
    ASPOSE_WORDS_SHARED_API void InsertHtml(const System::String& html, bool useBuilderFormatting);
    /// Inserts an HTML string into the document. Allows to specify additional options.
    /// 
    /// @param html An HTML string to insert into the document.
    /// @param options Options that are used when HTML string is inserted.
    ASPOSE_WORDS_SHARED_API void InsertHtml(const System::String& html, Aspose::Words::HtmlInsertOptions options);
    /// Inserts inline shape with specified type and size.
    /// 
    /// @param shapeType The shape type to insert into the document.
    /// @param width The width of the shape in points.
    /// @param height The height of the shape in points.
    /// 
    /// @return The shape node that was inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertShape(Aspose::Words::Drawing::ShapeType shapeType, double width, double height);
    /// Inserts free-floating shape with specified position, size and text wrap type.
    /// 
    /// @param shapeType The shape type to insert into the document
    /// @param horzPos Specifies where the horizontal distance to the shape is measured from.
    /// @param left Distance in points from the origin to the left side of the shape.
    /// @param vertPos Specifies where the vertical distance to the shape is measured from.
    /// @param top Distance in points from the origin to the top side of the shape.
    /// @param width The width of the shape in points.
    /// @param height The width of the shape in points.
    /// @param wrapType Specifies how to wrap text around the shape.
    /// 
    /// @return The shape node that was inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertShape(Aspose::Words::Drawing::ShapeType shapeType, Aspose::Words::Drawing::RelativeHorizontalPosition horzPos, double left, Aspose::Words::Drawing::RelativeVerticalPosition vertPos, double top, double width, double height, Aspose::Words::Drawing::WrapType wrapType);
    /// Inserts an chart object into the document and scales it to the specified size.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param chartType The chart type to insert into the document.
    /// @param width The width of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param height The height of the image in points. Can be a negative or zero value to request 100\% scale.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertChart(Aspose::Words::Drawing::Charts::ChartType chartType, double width, double height);
    /// Inserts an chart object into the document and scales it to the specified size.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param chartType The chart type to insert into the document.
    /// @param horzPos Specifies where the distance to the image is measured from.
    /// @param left Distance in points from the origin to the left side of the image.
    /// @param vertPos Specifies where the distance to the image measured from.
    /// @param top Distance in points from the origin to the top side of the image.
    /// @param width The width of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param height The height of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param wrapType Specifies how to wrap text around the image.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertChart(Aspose::Words::Drawing::Charts::ChartType chartType, Aspose::Words::Drawing::RelativeHorizontalPosition horzPos, double left, Aspose::Words::Drawing::RelativeVerticalPosition vertPos, double top, double width, double height, Aspose::Words::Drawing::WrapType wrapType);
    /// Inserts an online video object into the document and scales it to the specified size.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// Insertion of online video from the following resources is supported:
    /// 
    /// - https://www.youtube.com/
    /// - https://vimeo.com/
    /// 
    /// If your online video is not displaying correctly, use <see cref="Aspose::Words::DocumentBuilder::InsertOnlineVideo(System::String, System::String, System::ArrayPtr<uint8_t>, double, double)">InsertOnlineVideo()</see>, which accepts custom embedded html code.
    /// 
    /// The code for embedding video can vary between providers, consult your corresponding provider of choice for details.
    /// 
    /// @param videoUrl The URL to the video.
    /// @param width The width of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param height The height of the image in points. Can be a negative or zero value to request 100\% scale.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertOnlineVideo(const System::String& videoUrl, double width, double height);
    /// Inserts an online video object into the document and scales it to the specified size.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// Insertion of online video from the following resources is supported:
    /// 
    /// - https://www.youtube.com/
    /// - https://vimeo.com/
    /// 
    /// If your online video is not displaying correctly, use <see cref="Aspose::Words::DocumentBuilder::InsertOnlineVideo(System::String, System::String, System::ArrayPtr<uint8_t>, double, double)">InsertOnlineVideo()</see>, which accepts custom embedded html code.
    /// 
    /// The code for embedding video can vary between providers, consult your corresponding provider of choice for details.
    /// 
    /// @param videoUrl The URL to the video.
    /// @param horzPos Specifies where the distance to the image is measured from.
    /// @param left Distance in points from the origin to the left side of the image.
    /// @param vertPos Specifies where the distance to the image measured from.
    /// @param top Distance in points from the origin to the top side of the image.
    /// @param width The width of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param height The height of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param wrapType Specifies how to wrap text around the image.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertOnlineVideo(const System::String& videoUrl, Aspose::Words::Drawing::RelativeHorizontalPosition horzPos, double left, Aspose::Words::Drawing::RelativeVerticalPosition vertPos, double top, double width, double height, Aspose::Words::Drawing::WrapType wrapType);
    /// Inserts an online video object into the document and scales it to the specified size.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param videoUrl The URL to the video.
    /// @param videoEmbedCode The embed code for the video.
    /// @param thumbnailImageBytes The thumbnail image bytes.
    /// @param width The width of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param height The height of the image in points. Can be a negative or zero value to request 100\% scale.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertOnlineVideo(const System::String& videoUrl, const System::String& videoEmbedCode, const System::ArrayPtr<uint8_t>& thumbnailImageBytes, double width, double height);
    /// Inserts an online video object into the document and scales it to the specified size.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param videoUrl The URL to the video.
    /// @param videoEmbedCode The embed code for the video.
    /// @param thumbnailImageBytes The thumbnail image bytes.
    /// @param horzPos Specifies where the distance to the image is measured from.
    /// @param left Distance in points from the origin to the left side of the image.
    /// @param vertPos Specifies where the distance to the image measured from.
    /// @param top Distance in points from the origin to the top side of the image.
    /// @param width The width of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param height The height of the image in points. Can be a negative or zero value to request 100\% scale.
    /// @param wrapType Specifies how to wrap text around the image.
    /// 
    /// @return The image node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertOnlineVideo(const System::String& videoUrl, const System::String& videoEmbedCode, const System::ArrayPtr<uint8_t>& thumbnailImageBytes, Aspose::Words::Drawing::RelativeHorizontalPosition horzPos, double left, Aspose::Words::Drawing::RelativeVerticalPosition vertPos, double top, double width, double height, Aspose::Words::Drawing::WrapType wrapType);
    /// Inserts a signature line at the current position.
    /// 
    /// @param signatureLineOptions The object that stores parameters of creating signature line.
    /// 
    /// @return The signature line node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertSignatureLine(const System::SharedPtr<Aspose::Words::SignatureLineOptions>& signatureLineOptions);
    /// Inserts a signature line at the specified position.
    /// 
    /// You can change the image size, location, positioning method and other settings using the
    /// <see cref="Aspose::Words::Drawing::Shape">Shape</see> object returned by this method.
    /// 
    /// @param signatureLineOptions The object that stores parameters of creating signature line.
    /// @param horzPos Specifies where the distance to the signature line is measured from.
    /// @param left Distance in points from the origin to the left side of the signature line.
    /// @param vertPos Specifies where the distance to the signature line measured from.
    /// @param top Distance in points from the origin to the top side of the signature line.
    /// @param wrapType Specifies how to wrap text around the signature line.
    /// 
    /// @return The signature line node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertSignatureLine(const System::SharedPtr<Aspose::Words::SignatureLineOptions>& signatureLineOptions, Aspose::Words::Drawing::RelativeHorizontalPosition horzPos, double left, Aspose::Words::Drawing::RelativeVerticalPosition vertPos, double top, Aspose::Words::Drawing::WrapType wrapType);
    /// Inserts a horizontal rule shape into the document.
    /// 
    /// @return The shape that is a horizontal rule.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Shape> InsertHorizontalRule();
    /// Inserts a table cell into the document.
    /// 
    /// To start a table, just call <b>%InsertCell</b>. After this, any content you add using
    /// other methods of the <see cref="Aspose::Words::DocumentBuilder">DocumentBuilder</see> class will be added to the current cell.
    /// 
    /// To start a new cell in the same row, call <b>%InsertCell</b> again.
    /// 
    /// To end a table row call <see cref="Aspose::Words::DocumentBuilder::EndRow">EndRow</see>.
    /// 
    /// Use the <see cref="Aspose::Words::DocumentBuilder::get_CellFormat">CellFormat</see> property to specify cell formatting.
    /// 
    /// @return The cell node that was just inserted.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::Cell> InsertCell();
    /// Starts a table in the document.
    /// 
    /// The next method to call is <see cref="Aspose::Words::DocumentBuilder::InsertCell">InsertCell</see>.
    /// 
    /// This method starts a nested table when called inside a cell.
    /// 
    /// @return The table node that was just created.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::Table> StartTable();
    /// Ends a table in the document.
    /// 
    /// This method should be called only once after <see cref="Aspose::Words::DocumentBuilder::EndRow">EndRow</see> was called. When called,
    /// <b>%EndTable</b> moves the cursor out of the current cell to point just after the table.
    /// 
    /// @return The table node that was just finished.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::Table> EndTable();
    /// Ends a table row in the document.
    /// 
    /// Call <b>%EndRow</b> to end a table row. If you call <see cref="Aspose::Words::DocumentBuilder::InsertCell">InsertCell</see> immediately
    /// after that, then the table continues on a new row.
    /// 
    /// Use the <see cref="Aspose::Words::DocumentBuilder::get_RowFormat">RowFormat</see> property to specify row formatting.
    /// 
    /// @return The row node that was just finished.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Tables::Row> EndRow();
    /// Marks the current position in the document as a bookmark start.
    /// 
    /// Bookmarks in a document can overlap and span any range. To create a valid bookmark you need to
    /// call both <see cref="Aspose::Words::DocumentBuilder::StartBookmark(System::String)">StartBookmark()</see> and <see cref="Aspose::Words::DocumentBuilder::EndBookmark(System::String)">EndBookmark()</see> with the same <b>%bookmarkName</b>
    /// parameter.
    /// 
    /// Badly formed bookmarks or bookmarks with duplicate names will be ignored when the document is saved.
    /// 
    /// @param bookmarkName Name of the bookmark.
    /// 
    /// @return The bookmark start node that was just created.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::BookmarkStart> StartBookmark(const System::String& bookmarkName);
    /// Marks the current position in the document as a bookmark end.
    /// 
    /// Bookmarks in a document can overlap and span any range. To create a valid bookmark you need to
    /// call both <see cref="Aspose::Words::DocumentBuilder::StartBookmark(System::String)">StartBookmark()</see> and <see cref="Aspose::Words::DocumentBuilder::EndBookmark(System::String)">EndBookmark()</see> with the same <b>%bookmarkName</b>
    /// parameter.
    /// 
    /// Badly formed bookmarks or bookmarks with duplicate names will be ignored when the document is saved.
    /// 
    /// @param bookmarkName Name of the bookmark.
    /// 
    /// @return The bookmark end node that was just created.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::BookmarkEnd> EndBookmark(const System::String& bookmarkName);
    /// Marks the current position in the document as a column bookmark start. The position must be in a table cell.
    /// 
    /// A column bookmark covers one or more columns in a range of rows. To create a valid bookmark you
    /// need to call both <see cref="Aspose::Words::DocumentBuilder::StartColumnBookmark(System::String)">StartColumnBookmark()</see> and <see cref="Aspose::Words::DocumentBuilder::EndColumnBookmark(System::String)">EndColumnBookmark()</see> with the same
    /// <b>%bookmarkName</b> parameter.
    /// 
    /// Badly formed bookmarks or bookmarks with duplicate names will be ignored when the document is saved.
    /// 
    /// The actual position of the inserted <see cref="Aspose::Words::BookmarkStart">BookmarkStart</see> node may differ from the current document
    /// builder position.
    /// 
    /// @param bookmarkName Name of the bookmark.
    /// 
    /// @return The bookmark start node that was just created.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::BookmarkStart> StartColumnBookmark(const System::String& bookmarkName);
    /// Marks the current position in the document as a column bookmark end. The position must be in a table cell.
    /// 
    /// A column bookmark covers one or more columns in a range of rows. To create a valid bookmark you
    /// need to call both <see cref="Aspose::Words::DocumentBuilder::StartColumnBookmark(System::String)">StartColumnBookmark()</see> and <see cref="Aspose::Words::DocumentBuilder::EndColumnBookmark(System::String)">EndColumnBookmark()</see> with the same
    /// <b>%bookmarkName</b> parameter.
    /// 
    /// Badly formed bookmarks or bookmarks with duplicate names will be ignored when the document is saved.
    /// 
    /// The actual position of the inserted <see cref="Aspose::Words::BookmarkEnd">BookmarkEnd</see> node may differ from the current document
    /// builder position.
    /// 
    /// @param bookmarkName Name of the bookmark.
    /// 
    /// @return The bookmark end node that was just created.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::BookmarkEnd> EndColumnBookmark(const System::String& bookmarkName);
    /// Marks the current position in the document as an editable range start.
    /// 
    /// Editable range in a document can overlap and span any range. To create a valid editable range you need to
    /// call both <see cref="Aspose::Words::DocumentBuilder::StartEditableRange">StartEditableRange</see> and <see cref="Aspose::Words::DocumentBuilder::EndEditableRange">EndEditableRange</see>
    /// or <see cref="Aspose::Words::DocumentBuilder::EndEditableRange(System::SharedPtr<Aspose::Words::EditableRangeStart>)">EndEditableRange()</see> methods.
    /// 
    /// Badly formed editable range will be ignored when the document is saved.
    /// 
    /// @return The editable range start node that was just created.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::EditableRangeStart> StartEditableRange();
    /// Marks the current position in the document as an editable range end.
    /// 
    /// Editable range in a document can overlap and span any range. To create a valid editable range you need to
    /// call both <see cref="Aspose::Words::DocumentBuilder::StartEditableRange">StartEditableRange</see> and <see cref="Aspose::Words::DocumentBuilder::EndEditableRange">EndEditableRange</see>
    /// or <see cref="Aspose::Words::DocumentBuilder::EndEditableRange(System::SharedPtr<Aspose::Words::EditableRangeStart>)">EndEditableRange()</see> methods.
    /// 
    /// Badly formed editable range will be ignored when the document is saved.
    /// 
    /// @return The editable range end node that was just created.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::EditableRangeEnd> EndEditableRange();
    /// Marks the current position in the document as an editable range end.
    /// 
    /// Use this overload during creating nested editable ranges.
    /// 
    /// Editable range in a document can overlap and span any range. To create a valid editable range you need to
    /// call both <see cref="Aspose::Words::DocumentBuilder::StartEditableRange">StartEditableRange</see> and <see cref="Aspose::Words::DocumentBuilder::EndEditableRange">EndEditableRange</see>
    /// or <see cref="Aspose::Words::DocumentBuilder::EndEditableRange(System::SharedPtr<Aspose::Words::EditableRangeStart>)">EndEditableRange()</see> methods.
    /// 
    /// Badly formed editable range will be ignored when the document is saved.
    /// 
    /// @param start This editable range start.
    /// 
    /// @return The editable range end node that was just created.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::EditableRangeEnd> EndEditableRange(const System::SharedPtr<Aspose::Words::EditableRangeStart>& start);
    /// Inserts a document at the cursor position.
    /// 
    /// @param srcDoc Source document for inserting.
    /// @param importFormatMode Specifies how to merge style formatting that clashes.
    /// 
    /// @return First node of the inserted content.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> InsertDocument(const System::SharedPtr<Aspose::Words::Document>& srcDoc, Aspose::Words::ImportFormatMode importFormatMode);
    /// Inserts a document at the cursor position.
    /// 
    /// @param srcDoc Source document for inserting.
    /// @param importFormatMode Specifies how to merge style formatting that clashes.
    /// @param importFormatOptions Allows to specify options that affect formatting of a result document.
    /// 
    /// @return First node of the inserted content.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> InsertDocument(const System::SharedPtr<Aspose::Words::Document>& srcDoc, Aspose::Words::ImportFormatMode importFormatMode, const System::SharedPtr<Aspose::Words::ImportFormatOptions>& importFormatOptions);
    /// Saves current character formatting onto the stack.
    /// 
    /// @sa Aspose::Words::DocumentBuilder::get_Font
    /// @sa Aspose::Words::DocumentBuilder::PopFont
    ASPOSE_WORDS_SHARED_API void PushFont();
    /// Retrieves character formatting previously saved on the stack.
    /// 
    /// @sa Aspose::Words::DocumentBuilder::get_Font
    /// @sa Aspose::Words::DocumentBuilder::PushFont
    ASPOSE_WORDS_SHARED_API void PopFont();
    /// Inserts a text level node inside the current paragraph before the cursor.
    ASPOSE_WORDS_SHARED_API void InsertNode(const System::SharedPtr<Aspose::Words::Node>& node);

    template <typename CharType, typename Traits>
    System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(std::basic_istream<CharType, Traits>& stream)
    {
        auto streamWrapper = System::IO::WrapSTDIOStream(stream);
        InsertImage(streamWrapper);
    }

    template <typename CharType, typename Traits>
    System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(std::basic_istream<CharType, Traits>& stream, double width, double height)
    {
        auto streamWrapper = System::IO::WrapSTDIOStream(stream);
        InsertImage(streamWrapper, width, height);
    }

    template <typename CharType, typename Traits>
    System::SharedPtr<Aspose::Words::Drawing::Shape> InsertImage(std::basic_istream<CharType, Traits>& stream, Aspose::Words::Drawing::RelativeHorizontalPosition horzPos, double left, Aspose::Words::Drawing::RelativeVerticalPosition vertPos, double top, double width, double height, Aspose::Words::Drawing::WrapType wrapType)
    {
        auto streamWrapper = System::IO::WrapSTDIOStream(stream);
        InsertImage(streamWrapper, horzPos, left, vertPos, top, width, height, wrapType);
    }

    template <typename CharType, typename Traits>
    System::SharedPtr<Aspose::Words::Drawing::Shape> InsertOleObject(std::basic_istream<CharType, Traits>& stream, System::String progId, bool asIcon, std::basic_istream<CharType, Traits>& presentation)
    {
        auto streamWrapper = System::IO::WrapSTDIOStream(stream);
        auto presentationWrapper = System::IO::WrapSTDIOStream(presentation);
        InsertOleObject(streamWrapper, progId, asIcon, presentationWrapper);
    }

    template <typename CharType, typename Traits>
    System::SharedPtr<Aspose::Words::Drawing::Shape> InsertOleObject(System::String fileName, bool isLinked, bool asIcon, std::basic_istream<CharType, Traits>& presentation)
    {
        auto presentationWrapper = System::IO::WrapSTDIOStream(presentation);
        InsertOleObject(fileName, isLinked, asIcon, presentationWrapper);
    }

    template <typename CharType, typename Traits>
    System::SharedPtr<Aspose::Words::Drawing::Shape> InsertOleObject(System::String fileName, System::String progId, bool isLinked, bool asIcon, std::basic_istream<CharType, Traits>& presentation)
    {
        auto presentationWrapper = System::IO::WrapSTDIOStream(presentation);
        InsertOleObject(fileName, progId, isLinked, asIcon, presentationWrapper);
    }

    template <typename CharType, typename Traits>
    System::SharedPtr<Aspose::Words::Drawing::Shape> InsertOleObjectAsIcon(std::basic_istream<CharType, Traits>& stream, System::String progId, System::String iconFile, System::String iconCaption)
    {
        auto streamWrapper = System::IO::WrapSTDIOStream(stream);
        InsertOleObjectAsIcon(streamWrapper, progId, iconFile, iconCaption);
    }

protected:

    virtual ASPOSE_WORDS_SHARED_API ~DocumentBuilder();

private:

    System::SharedPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;
    System::SharedPtr<System::Object> mField2;
    System::SharedPtr<System::Object> mField3;
    System::SharedPtr<System::Object> mField4;
    System::SharedPtr<System::Object> mField5;
    System::SharedPtr<System::Object> mField6;
    System::SharedPtr<System::Object> mField7;
    System::SharedPtr<System::Object> mField8;
    System::SharedPtr<System::Object> mField9;
    System::SharedPtr<System::Object> mField10;
    System::SharedPtr<System::Object> mField11;
    System::SharedPtr<System::Object> mField12;
    __TypeStub<4,4,4,4>::type mField13;
    __TypeStub<4,4,4,4>::type mField14;
    __TypeStub<4,4,4,4>::type mField15;

    System::SharedPtr<System::Object> GetDirectRunAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchInheritedRunAttr(int32_t ) override;
    void SetRunAttr(int32_t , System::SharedPtr<System::Object> ) override;
    void RemoveRunAttr(int32_t ) override;
    void ClearRunAttrs() override;
    System::SharedPtr<System::Object> GetDirectRowAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchRowAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchInheritedRowAttr(int32_t ) override;
    void SetRowAttr(int32_t , System::SharedPtr<System::Object> ) override;
    void ClearRowAttrs() override;
    void ResetToDefaultAttrs() override;
    System::SharedPtr<System::Object> GetDirectCellAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchCellAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchInheritedCellAttr(int32_t ) override;
    void SetCellAttr(int32_t , System::SharedPtr<System::Object> ) override;
    void ClearCellAttrs() override;

private:

};

}
}
