//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Saving/SaveOptions.h
#pragma once

#include <system/string.h>

#include <Aspose.Words.Cpp/Saving/ImlRenderingMode.h>
#include <Aspose.Words.Cpp/Saving/DmlRenderingMode.h>
#include <Aspose.Words.Cpp/Saving/DmlEffectsRenderingMode.h>
#include <Aspose.Words.Cpp/Saving/Dml3DEffectsRenderingMode.h>
#include <Aspose.Words.Cpp/SaveFormat.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
class TimeZoneInfo;
}

namespace Aspose {

namespace Words {

namespace Saving {

/// This is an abstract base class for classes that allow the user to specify additional
/// options when saving a document into a particular format.
class ASPOSE_WORDS_SHARED_CLASS SaveOptions : public System::Object
{
    typedef SaveOptions ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:

    /// Specifies the format in which the document will be saved if this save options object is used.
    virtual ASPOSE_WORDS_SHARED_API Aspose::Words::SaveFormat get_SaveFormat() = 0;
    /// Specifies the format in which the document will be saved if this save options object is used.
    virtual ASPOSE_WORDS_SHARED_API void set_SaveFormat(Aspose::Words::SaveFormat value) = 0;
    /// When true, causes the name and version of %Aspose.Words to be embedded into produced files.
    /// Default value is <b>%true</b>.
    ASPOSE_WORDS_SHARED_API bool get_ExportGeneratorName() const;
    /// When true, causes the name and version of %Aspose.Words to be embedded into produced files.
    /// Default value is <b>%true</b>.
    ASPOSE_WORDS_SHARED_API void set_ExportGeneratorName(bool value);
    /// Specifies the folder for temporary files used when saving to a DOC or DOCX file.
    /// By default this property is <c>%null</c> and no temporary files are used.
    /// 
    /// When %Aspose.Words saves a document, it needs to create temporary internal structures. By default,
    /// these internal structures are created in memory and the memory usage spikes for a short period while
    /// the document is being saved. When saving is complete, the memory is freed and reclaimed by the garbage collector.
    /// 
    /// If you are saving a very large document (thousands of pages) and/or processing many documents at the same time,
    /// then the memory spike during saving can be significant enough to cause the system to throw <see cref="System::OutOfMemoryException">OutOfMemoryException</see>.
    /// Specifying a temporary folder using <see cref="Aspose::Words::Saving::SaveOptions::get_TempFolder">TempFolder</see> will cause %Aspose.Words to keep the internal structures in
    /// temporary files instead of memory. It reduces the memory usage during saving, but will decrease the save performance.
    /// 
    /// The folder must exist and be writable, otherwise an exception will be thrown.
    /// 
    /// %Aspose.Words automatically deletes all temporary files when saving is complete.
    ASPOSE_WORDS_SHARED_API System::String get_TempFolder() const;
    /// Setter for Aspose::Words::Saving::SaveOptions::get_TempFolder
    ASPOSE_WORDS_SHARED_API void set_TempFolder(const System::String& value);
    /// When <c>%true</c>, pretty formats output where applicable.
    /// Default value is <b>%false</b>.
    /// 
    /// Set to <b>%true</b> to make HTML, MHTML, EPUB, WordML, RTF, DOCX and ODT output human readable.
    /// Useful for testing or debugging.
    ASPOSE_WORDS_SHARED_API bool get_PrettyFormat() const;
    /// Setter for Aspose::Words::Saving::SaveOptions::get_PrettyFormat
    ASPOSE_WORDS_SHARED_API void set_PrettyFormat(bool value);
    /// Gets or sets a value determining whether or not to use anti-aliasing for rendering.
    /// 
    /// The default value is <c>%false</c>. When this value is set to <c>%true</c> anti-aliasing is
    /// used for rendering.
    /// 
    /// This property is used when the document is exported to the following formats:
    /// <see cref="Aspose::Words::SaveFormat::Tiff">Tiff</see>, <see cref="Aspose::Words::SaveFormat::Png">Png</see>, <see cref="Aspose::Words::SaveFormat::Bmp">Bmp</see>,
    /// <see cref="Aspose::Words::SaveFormat::Jpeg">Jpeg</see>, <see cref="Aspose::Words::SaveFormat::Emf">Emf</see>. When the document is exported to the
    /// <see cref="Aspose::Words::SaveFormat::Html">Html</see>, <see cref="Aspose::Words::SaveFormat::Mhtml">Mhtml</see> and <see cref="Aspose::Words::SaveFormat::Epub">Epub</see>
    /// formats this option is used for raster images.
    ASPOSE_WORDS_SHARED_API bool get_UseAntiAliasing() const;
    /// Setter for Aspose::Words::Saving::SaveOptions::get_UseAntiAliasing
    ASPOSE_WORDS_SHARED_API void set_UseAntiAliasing(bool value);
    /// Gets or sets a value determining whether or not to use high quality (i.e. slow) rendering algorithms.
    /// 
    /// The default value is <c>%false</c>.
    /// 
    /// This property is used when the document is exported to image formats:
    /// <see cref="Aspose::Words::SaveFormat::Tiff">Tiff</see>, <see cref="Aspose::Words::SaveFormat::Png">Png</see>, <see cref="Aspose::Words::SaveFormat::Bmp">Bmp</see>,
    /// <see cref="Aspose::Words::SaveFormat::Jpeg">Jpeg</see>, <see cref="Aspose::Words::SaveFormat::Emf">Emf</see>.
    ASPOSE_WORDS_SHARED_API bool get_UseHighQualityRendering() const;
    /// Setter for Aspose::Words::Saving::SaveOptions::get_UseHighQualityRendering
    ASPOSE_WORDS_SHARED_API void set_UseHighQualityRendering(bool value);
    /// Gets value determining whether content of <see cref="Aspose::Words::Markup::StructuredDocumentTag">StructuredDocumentTag</see> is updated before saving.
    ASPOSE_WORDS_SHARED_API bool get_UpdateSdtContent() const;
    /// Sets value determining whether content of <see cref="Aspose::Words::Markup::StructuredDocumentTag">StructuredDocumentTag</see> is updated before saving.
    ASPOSE_WORDS_SHARED_API void set_UpdateSdtContent(bool value);
    /// Gets or sets a value determining how DrawingML shapes are rendered.
    /// 
    /// The default value is <see cref="Aspose::Words::Saving::DmlRenderingMode::Fallback">Fallback</see>.
    /// 
    /// This property is used when the document is exported to fixed page formats.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Saving::DmlRenderingMode get_DmlRenderingMode() const;
    /// Setter for Aspose::Words::Saving::SaveOptions::get_DmlRenderingMode
    ASPOSE_WORDS_SHARED_API void set_DmlRenderingMode(Aspose::Words::Saving::DmlRenderingMode value);
    /// Gets or sets a value determining how DrawingML effects are rendered.
    /// 
    /// The default value is <see cref="Aspose::Words::Saving::DmlEffectsRenderingMode::Simplified">Simplified</see>.
    /// 
    /// This property is used when the document is exported to fixed page formats.
    virtual ASPOSE_WORDS_SHARED_API Aspose::Words::Saving::DmlEffectsRenderingMode get_DmlEffectsRenderingMode();
    /// Setter for Aspose::Words::Saving::SaveOptions::get_DmlEffectsRenderingMode
    virtual ASPOSE_WORDS_SHARED_API void set_DmlEffectsRenderingMode(Aspose::Words::Saving::DmlEffectsRenderingMode value);
    /// Gets or sets a value determining how ink (InkML) objects are rendered.
    /// 
    /// The default value is <see cref="Aspose::Words::Saving::ImlRenderingMode::InkML">InkML</see>.
    /// 
    /// This property is used when the document is exported to fixed page formats.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Saving::ImlRenderingMode get_ImlRenderingMode() const;
    /// Setter for Aspose::Words::Saving::SaveOptions::get_ImlRenderingMode
    ASPOSE_WORDS_SHARED_API void set_ImlRenderingMode(Aspose::Words::Saving::ImlRenderingMode value);
    /// Gets path to default template (including filename).
    /// Default value for this property is <b>%empty string</b>.
    ASPOSE_WORDS_SHARED_API System::String get_DefaultTemplate() const;
    /// Sets path to default template (including filename).
    /// Default value for this property is <b>%empty string</b>.
    ASPOSE_WORDS_SHARED_API void set_DefaultTemplate(const System::String& value);
    /// Gets a value determining if fields of certain types should be updated before saving the document to a fixed page format.
    /// Default value for this property is <b>%true</b>.
    ASPOSE_WORDS_SHARED_API bool get_UpdateFields() const;
    /// Sets a value determining if fields of certain types should be updated before saving the document to a fixed page format.
    /// Default value for this property is <b>%true</b>.
    ASPOSE_WORDS_SHARED_API void set_UpdateFields(bool value);
    /// Gets a value determining whether the <see cref="Aspose::Words::Properties::BuiltInDocumentProperties::get_LastSavedTime">LastSavedTime</see> property is updated before saving.
    ASPOSE_WORDS_SHARED_API bool get_UpdateLastSavedTimeProperty() const;
    /// Sets a value determining whether the <see cref="Aspose::Words::Properties::BuiltInDocumentProperties::get_LastSavedTime">LastSavedTime</see> property is updated before saving.
    ASPOSE_WORDS_SHARED_API void set_UpdateLastSavedTimeProperty(bool value);
    /// Gets a value determining whether the <see cref="Aspose::Words::Properties::BuiltInDocumentProperties::get_LastPrinted">LastPrinted</see> property is updated before saving.
    ASPOSE_WORDS_SHARED_API bool get_UpdateLastPrintedProperty() const;
    /// Sets a value determining whether the <see cref="Aspose::Words::Properties::BuiltInDocumentProperties::get_LastPrinted">LastPrinted</see> property is updated before saving.
    ASPOSE_WORDS_SHARED_API void set_UpdateLastPrintedProperty(bool value);
    /// Gets a value determining whether the <see cref="Aspose::Words::Properties::BuiltInDocumentProperties::get_CreatedTime">CreatedTime</see> property is updated before saving.
    /// Default value is false;
    ASPOSE_WORDS_SHARED_API bool get_UpdateCreatedTimeProperty() const;
    /// Sets a value determining whether the <see cref="Aspose::Words::Properties::BuiltInDocumentProperties::get_CreatedTime">CreatedTime</see> property is updated before saving.
    /// Default value is false;
    ASPOSE_WORDS_SHARED_API void set_UpdateCreatedTimeProperty(bool value);
    /// Gets value determining if memory optimization should be performed before saving the document.
    /// Default value for this property is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API bool get_MemoryOptimization() const;
    /// Sets value determining if memory optimization should be performed before saving the document.
    /// Default value for this property is <b>%false</b>.
    ASPOSE_WORDS_SHARED_API void set_MemoryOptimization(bool value);
    /// Gets a value determining how 3D effects are rendered.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Saving::Dml3DEffectsRenderingMode get_Dml3DEffectsRenderingMode() const;
    /// Sets a value determining how 3D effects are rendered.
    ASPOSE_WORDS_SHARED_API void set_Dml3DEffectsRenderingMode(Aspose::Words::Saving::Dml3DEffectsRenderingMode value);
    /// Gets or sets a boolean value indicating whether to allow embedding fonts with PostScript outlines
    /// when embedding TrueType fonts in a document upon it is saved.
    /// The default value is <b>%false</b>.
    /// 
    /// Note, Word does not embed PostScript fonts, but can open documents with embedded fonts of this type.
    /// 
    /// This option only works when <see cref="Aspose::Words::Fonts::FontInfoCollection::get_EmbedTrueTypeFonts">EmbedTrueTypeFonts</see> of the
    /// <see cref="Aspose::Words::DocumentBase::get_FontInfos">FontInfos</see> property is set to <c>%true</c>.
    ASPOSE_WORDS_SHARED_API bool get_AllowEmbeddingPostScriptFonts() const;
    /// Setter for Aspose::Words::Saving::SaveOptions::get_AllowEmbeddingPostScriptFonts
    ASPOSE_WORDS_SHARED_API void set_AllowEmbeddingPostScriptFonts(bool value);
    ASPOSE_WORDS_SHARED_API System::SharedPtr<System::TimeZoneInfo> get_CustomTimeZoneInfo() const;
    ASPOSE_WORDS_SHARED_API void set_CustomTimeZoneInfo(const System::SharedPtr<System::TimeZoneInfo>& value);
    /// Gets value determining which document formats are allowed to be mapped by <see cref="Aspose::Words::Markup::StructuredDocumentTag::get_XmlMapping">XmlMapping</see>.
    /// By default only <see cref="Aspose::Words::LoadFormat::FlatOpc">FlatOpc</see> document format is allowed to be mapped.
    ASPOSE_WORDS_SHARED_API bool get_FlatOpcXmlMappingOnly() const;
    /// Sets value determining which document formats are allowed to be mapped by <see cref="Aspose::Words::Markup::StructuredDocumentTag::get_XmlMapping">XmlMapping</see>.
    /// By default only <see cref="Aspose::Words::LoadFormat::FlatOpc">FlatOpc</see> document format is allowed to be mapped.
    ASPOSE_WORDS_SHARED_API void set_FlatOpcXmlMappingOnly(bool value);

    /// Creates a save options object of a class suitable for the specified save format.
    /// 
    /// @param saveFormat The save format for which to create a save options object.
    /// 
    /// @return An object of a class that derives from <see cref="Aspose::Words::Saving::SaveOptions">SaveOptions</see>.
    static ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Saving::SaveOptions> CreateSaveOptions(Aspose::Words::SaveFormat saveFormat);
    /// Creates a save options object of a class suitable for the file extension specified in the given file name.
    /// 
    /// @param fileName The extension of this file name determines the class of the save options object to create.
    /// 
    /// @return An object of a class that derives from <see cref="Aspose::Words::Saving::SaveOptions">SaveOptions</see>.
    static ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Saving::SaveOptions> CreateSaveOptions(const System::String& fileName);

protected:

    virtual ASPOSE_WORDS_SHARED_API bool get_IsMultipleMainPartsAllowed();
    virtual ASPOSE_WORDS_SHARED_API bool get_IsFlowFormat();

    virtual ASPOSE_WORDS_SHARED_API void SetTestMode();

private:

    __TypeStub<1,1,1,1>::type mField0;
    __TypeStub<1,1,1,1>::type mField1;
    __TypeStub<1,1,1,1>::type mField2;
    __TypeStub<1,1,1,1>::type mField3;
    __TypeStub<1,1,1,1>::type mField4;
    __TypeStub<1,1,1,1>::type mField5;
    System::String mField6;
    __TypeStub<1,1,1,1>::type mField7;
    __TypeStub<1,1,1,1>::type mField8;
    __TypeStub<1,1,1,1>::type mField9;
    __TypeStub<4,4,4,4>::type mField10;
    __TypeStub<4,4,4,4>::type mField11;
    __TypeStub<4,4,4,4>::type mField12;
    System::String mField13;
    __TypeStub<1,1,1,1>::type mField14;
    __TypeStub<1,1,1,1>::type mField15;
    __TypeStub<1,1,1,1>::type mField16;
    __TypeStub<1,1,1,1>::type mField17;
    __TypeStub<4,4,4,4>::type mField18;
    __TypeStub<1,1,1,1>::type mField19;
    __TypeStub<1,1,1,1>::type mField20;
    __TypeStub<1,1,1,1>::type mField21;
    System::SharedPtr<System::Object> mField22;

};

}
}
}
