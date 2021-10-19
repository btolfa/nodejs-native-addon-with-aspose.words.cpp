//////////////////////////////////////////////////////////////////////////
// Copyright 2001-2021 Aspose Pty Ltd. All Rights Reserved.
//
// This file is part of Aspose.Words. The source code in this file
// is only intended as a supplement to the documentation, and is provided
// "as is", without warranty of any kind, either expressed or implied.
//////////////////////////////////////////////////////////////////////////
/// \file Aspose.Words.Cpp/Drawing/ShapeBase.h
#pragma once

#include <drawing/size_f.h>
#include <drawing/size.h>
#include <drawing/point_f.h>

#include <Aspose.Words.Cpp/IInline.h>
#include <Aspose.Words.Cpp/Revisions/ITrackableNode.h>
#include <Aspose.Words.Cpp/CompositeNode.h>
#include <Aspose.Words.Cpp/IShapeAttrSource.h>
#include <Aspose.Words.Cpp/Drawing/WrapType.h>
#include <Aspose.Words.Cpp/Drawing/WrapSide.h>
#include <Aspose.Words.Cpp/Drawing/VerticalAlignment.h>
#include <Aspose.Words.Cpp/Drawing/ShapeType.h>
#include <Aspose.Words.Cpp/Drawing/ShapeMarkupLanguage.h>
#include <Aspose.Words.Cpp/Drawing/RelativeVerticalPosition.h>
#include <Aspose.Words.Cpp/Drawing/RelativeHorizontalPosition.h>
#include <Aspose.Words.Cpp/Drawing/HorizontalAlignment.h>
#include <Aspose.Words.Cpp/Drawing/FlipOrientation.h>
#include <Aspose.Words.Cpp/Drawing/Core/IShape.h>
#include <Aspose.Words.Cpp/Drawing/Core/IFillable.h>
#include <Aspose.Words.Cpp/aspose_words_api_defs.h>

namespace System
{
namespace Drawing
{
class Point;
class RectangleF;
class Color;
}
}
namespace Aspose
{

namespace Words
{

class INodeCloningListener;
class Node;
enum class RunPrExpandFlags;

class Font;
namespace Revisions
{
class MoveRevision;
class EditRevision;
}
class RunPr;
class DocumentBase;
class Paragraph;

namespace Rendering
{
class ShapeRenderer;
}

namespace Drawing
{

enum class PatternType;
enum class PresetTexture;

class Fill;
class GradientStopCollection;
enum class GradientStyle;
enum class GradientVariant;
enum class TextureAlignment;

namespace Core
{

class IFill;
enum class FillTypeCore;

namespace Dml
{

namespace Colors
{
class DmlColor;
}
namespace Themes
{
class IThemeProvider;
}

}
}
}

}
}

namespace Aspose {

namespace Words {

namespace Drawing {

/// Base class for objects in the drawing layer, such as an AutoShape, freeform, OLE object, ActiveX control, or picture.
/// 
/// This is an abstract class. The two derived classes that you can instantiate
/// are <see cref="Aspose::Words::Drawing::Shape">Shape</see> and <see cref="Aspose::Words::Drawing::GroupShape">GroupShape</see>.
/// 
/// A shape is a node in the document tree.
/// 
/// If the shape is a child of a <see cref="Aspose::Words::Paragraph">Paragraph</see> object, then the shape is said to be "top-level".
/// Top-level shapes are measured and positioned in points.
/// 
/// A shape can also occur as a child of a <see cref="Aspose::Words::Drawing::GroupShape">GroupShape</see> object when several shapes
/// are grouped. Child shapes of a group shape are positioned in the coordinate space and units
/// defined by the <see cref="Aspose::Words::Drawing::ShapeBase::get_CoordSize">CoordSize</see> and <see cref="Aspose::Words::Drawing::ShapeBase::get_CoordOrigin">CoordOrigin</see> properties of the parent
/// group shape.
/// 
/// A shape can be positioned inline with text or floating. The positioning method is controlled
/// using the <see cref="Aspose::Words::Drawing::ShapeBase::get_WrapType">WrapType</see> property.
/// 
/// When a shape is floating, it is positioned relative to something (e.g the current paragraph,
/// the margin or the page). The relative positioning of the shape is specified using the
/// <see cref="Aspose::Words::Drawing::ShapeBase::get_RelativeHorizontalPosition">RelativeHorizontalPosition</see> and <see cref="Aspose::Words::Drawing::ShapeBase::get_RelativeVerticalPosition">RelativeVerticalPosition</see> properties.
/// 
/// A floating shape be positioned explicitly using the <see cref="Aspose::Words::Drawing::ShapeBase::get_Left">Left</see> and <see cref="Aspose::Words::Drawing::ShapeBase::get_Top">Top</see>
/// properties or aligned relative to some other object using the <see cref="Aspose::Words::Drawing::ShapeBase::get_HorizontalAlignment">HorizontalAlignment</see>
/// and <see cref="Aspose::Words::Drawing::ShapeBase::get_VerticalAlignment">VerticalAlignment</see> properties.
/// 
/// @sa Aspose::Words::Drawing::Shape
/// @sa Aspose::Words::Drawing::GroupShape
class ASPOSE_WORDS_SHARED_CLASS ShapeBase : public Aspose::Words::CompositeNode, public Aspose::Words::IInline, public Aspose::Words::Drawing::Core::IShape, public Aspose::Words::IShapeAttrSource, public Aspose::Words::Revisions::ITrackableNode, public Aspose::Words::Drawing::Core::IFillable
{
    typedef ShapeBase ThisType;
    typedef Aspose::Words::CompositeNode BaseType;
    typedef Aspose::Words::IInline BaseType1;
    typedef Aspose::Words::Drawing::Core::IShape BaseType2;
    typedef Aspose::Words::IShapeAttrSource BaseType3;
    typedef Aspose::Words::Revisions::ITrackableNode BaseType4;
    typedef Aspose::Words::Drawing::Core::IFillable BaseType5;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3, BaseType4, BaseType5> ThisTypeBaseTypesInfo;
    ASPOSE_WORDS_SHARED_RTTI_INFO_DECL();

public:
    using Aspose::Words::CompositeNode::Clone;

public:

    /// Gets fill formatting for the shape.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Drawing::Fill> get_Fill();
    /// Defines the text displayed when the mouse pointer moves over the shape.
    /// 
    /// The default value is an empty string.
    ASPOSE_WORDS_SHARED_API System::String get_ScreenTip();
    /// Defines the text displayed when the mouse pointer moves over the shape.
    /// 
    /// The default value is an empty string.
    ASPOSE_WORDS_SHARED_API void set_ScreenTip(const System::String& value);
    /// Gets or sets the full hyperlink address for a shape.
    /// 
    /// The default value is an empty string.
    /// 
    /// Below are examples of valid values for this property:
    /// 
    /// Full URI: <c>%https://www.aspose.com/</c>.
    /// 
    /// Full file name: <c>%C:\\\\My Documents\\\\SalesReport.doc</c>.
    /// 
    /// Relative URI: <c>%../../../resource.txt</c>
    /// 
    /// Relative file name: <c>%..\\\\My Documents\\\\SalesReport.doc</c>.
    /// 
    /// Bookmark within another document: <c>%https://www.aspose.com/Products/Default.aspx#Suites</c>
    /// 
    /// Bookmark within this document: <c>%\#BookmakName</c>.
    ASPOSE_WORDS_SHARED_API System::String get_HRef();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_HRef
    ASPOSE_WORDS_SHARED_API void set_HRef(const System::String& value);
    /// Gets the target frame for the shape hyperlink.
    /// 
    /// The default value is an empty string.
    ASPOSE_WORDS_SHARED_API System::String get_Target();
    /// Sets the target frame for the shape hyperlink.
    /// 
    /// The default value is an empty string.
    ASPOSE_WORDS_SHARED_API void set_Target(const System::String& value);
    /// Defines alternative text to be displayed instead of a graphic.
    /// 
    /// The default value is an empty string.
    ASPOSE_WORDS_SHARED_API System::String get_AlternativeText();
    /// Defines alternative text to be displayed instead of a graphic.
    /// 
    /// The default value is an empty string.
    ASPOSE_WORDS_SHARED_API void set_AlternativeText(const System::String& value);
    /// Gets the flag that specifies whether the shape is decorative in the document.
    ASPOSE_WORDS_SHARED_API bool get_IsDecorative();
    /// Sets the flag that specifies whether the shape is decorative in the document.
    ASPOSE_WORDS_SHARED_API void set_IsDecorative(bool value);
    /// Gets or sets the title (caption) of the current shape object.
    /// 
    /// Default is empty string.
    /// 
    /// Cannot be null, but can be an empty string.
    ASPOSE_WORDS_SHARED_API System::String get_Title();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_Title
    ASPOSE_WORDS_SHARED_API void set_Title(const System::String& value);
    /// Gets or sets the optional shape name.
    /// 
    /// Default is empty string.
    /// 
    /// Cannot be null, but can be an empty string.
    ASPOSE_WORDS_SHARED_API System::String get_Name();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_Name
    ASPOSE_WORDS_SHARED_API void set_Name(const System::String& value);
    /// Returns true if this object was inserted in %Microsoft Word while change tracking was enabled.
    ASPOSE_WORDS_SHARED_API bool get_IsInsertRevision();
    /// Returns true if this object was deleted in %Microsoft Word while change tracking was enabled.
    ASPOSE_WORDS_SHARED_API bool get_IsDeleteRevision();
    /// Returns <b>%true</b> if this object was moved (deleted) in %Microsoft Word while change tracking was enabled.
    ASPOSE_WORDS_SHARED_API bool get_IsMoveFromRevision();
    /// Returns <b>%true</b> if this object was moved (inserted) in %Microsoft Word while change tracking was enabled.
    ASPOSE_WORDS_SHARED_API bool get_IsMoveToRevision();
    /// Returns true if this shape is not a child of a group shape.
    ASPOSE_WORDS_SHARED_API bool get_IsTopLevel();
    /// Returns true if this is a group shape.
    ASPOSE_WORDS_SHARED_API bool get_IsGroup();
    /// Returns true if this shape is an image shape.
    ASPOSE_WORDS_SHARED_API bool get_IsImage();
    /// Returns true if this shape is a horizontal rule.
    ASPOSE_WORDS_SHARED_API bool get_IsHorizontalRule();
    /// Returns true if this shape is a WordArt object.
    ASPOSE_WORDS_SHARED_API bool get_IsWordArt();
    /// Returns true if the shape type allows the shape to have an image.
    /// 
    /// Although %Microsoft Word has a special shape type for images, it appears that in %Microsoft Word documents any shape
    /// except a group shape can have an image, therefore this property returns true for all shapes except <see cref="Aspose::Words::Drawing::GroupShape">GroupShape</see>.
    ASPOSE_WORDS_SHARED_API bool get_CanHaveImage();
    /// Specifies whether the shape's anchor is locked.
    /// 
    /// The default value is <b>%false</b>.
    /// 
    /// Has effect only for top level shapes.
    /// 
    /// This property affects behavior of the shape's anchor in %Microsoft Word.
    /// When the anchor is not locked, moving the shape in %Microsoft Word can move
    /// the shape's anchor too.
    ASPOSE_WORDS_SHARED_API bool get_AnchorLocked();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_AnchorLocked
    ASPOSE_WORDS_SHARED_API void set_AnchorLocked(bool value);
    /// Specifies whether the shape's aspect ratio is locked.
    /// 
    /// The default value depends on the <see cref="Aspose::Words::Drawing::ShapeBase::get_ShapeType">ShapeType</see>, for the ShapeType.Image it is <b>%true</b>
    /// but for the other shape types it is <b>%false</b>.
    /// 
    /// Has effect for top level shapes only.
    ASPOSE_WORDS_SHARED_API bool get_AspectRatioLocked();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_AspectRatioLocked
    ASPOSE_WORDS_SHARED_API void set_AspectRatioLocked(bool value);
    /// Gets or sets a value that specifies whether this shape can overlap other shapes.
    /// 
    /// This property affects behavior of the shape in %Microsoft Word.
    /// %Aspose.Words ignores the value of this property.
    /// 
    /// This property is applicable only to top level shapes.
    /// 
    /// The default value is <b>%true</b>.
    ASPOSE_WORDS_SHARED_API bool get_AllowOverlap();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_AllowOverlap
    ASPOSE_WORDS_SHARED_API void set_AllowOverlap(bool value);
    /// Specifies whether the shape is below or above text.
    /// 
    /// Has effect only for top level shapes.
    /// 
    /// The default value is <b>%false</b>.
    /// 
    /// @sa Aspose::Words::Drawing::ShapeBase::get_ZOrder
    ASPOSE_WORDS_SHARED_API bool get_BehindText();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_BehindText
    ASPOSE_WORDS_SHARED_API void set_BehindText(bool value);
    /// A quick way to determine if this shape is positioned inline with text.
    /// 
    /// Has effect only for top level shapes.
    ASPOSE_WORDS_SHARED_API bool get_IsInline();
    /// Gets or sets the position of the left edge of the containing block of the shape.
    /// 
    /// For a top-level shape, the value is in points and relative to the shape anchor.
    /// 
    /// For shapes in a group, the value is in the coordinate space and units of the parent group.
    /// 
    /// The default value is 0.
    /// 
    /// Has effect only for floating shapes.
    ASPOSE_WORDS_SHARED_API double get_Left();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_Left
    ASPOSE_WORDS_SHARED_API void set_Left(double value);
    /// Gets or sets the position of the top edge of the containing block of the shape.
    /// 
    /// For a top-level shape, the value is in points and relative to the shape anchor.
    /// 
    /// For shapes in a group, the value is in the coordinate space and units of the parent group.
    /// 
    /// The default value is 0.
    /// 
    /// Has effect only for floating shapes.
    ASPOSE_WORDS_SHARED_API double get_Top();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_Top
    ASPOSE_WORDS_SHARED_API void set_Top(double value);
    /// Gets the position of the right edge of the containing block of the shape.
    /// 
    /// For a top-level shape, the value is in points and relative to the shape anchor.
    /// 
    /// For shapes in a group, the value is in the coordinate space and units of the parent group.
    ASPOSE_WORDS_SHARED_API double get_Right();
    /// Gets the position of the bottom edge of the containing block of the shape.
    /// 
    /// For a top-level shape, the value is in points and relative to the shape anchor.
    /// 
    /// For shapes in a group, the value is in the coordinate space and units of the parent group.
    ASPOSE_WORDS_SHARED_API double get_Bottom();
    /// Gets or sets the width of the containing block of the shape.
    /// 
    /// For a top-level shape, the value is in points.
    /// 
    /// For shapes in a group, the value is in the coordinate space and units of the parent group.
    /// 
    /// The default value is 0.
    ASPOSE_WORDS_SHARED_API double get_Width();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_Width
    ASPOSE_WORDS_SHARED_API void set_Width(double value);
    /// Gets or sets the height of the containing block of the shape.
    /// 
    /// For a top-level shape, the value is in points.
    /// 
    /// For shapes in a group, the value is in the coordinate space and units of the parent group.
    /// 
    /// The default value is 0.
    ASPOSE_WORDS_SHARED_API double get_Height();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_Height
    ASPOSE_WORDS_SHARED_API void set_Height(double value);
    /// Returns or sets the distance (in points) between the document text and the top edge of the shape.
    /// 
    /// The default value is 0.
    /// 
    /// Has effect only for top level shapes.
    ASPOSE_WORDS_SHARED_API double get_DistanceTop();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_DistanceTop
    ASPOSE_WORDS_SHARED_API void set_DistanceTop(double value);
    /// Returns or sets the distance (in points) between the document text and the bottom edge of the shape.
    /// 
    /// The default value is 0.
    /// 
    /// Has effect only for top level shapes.
    ASPOSE_WORDS_SHARED_API double get_DistanceBottom();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_DistanceBottom
    ASPOSE_WORDS_SHARED_API void set_DistanceBottom(double value);
    /// Returns or sets the distance (in points) between the document text and the left edge of the shape.
    /// 
    /// The default value is 1/8 inch.
    /// 
    /// Has effect only for top level shapes.
    ASPOSE_WORDS_SHARED_API double get_DistanceLeft();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_DistanceLeft
    ASPOSE_WORDS_SHARED_API void set_DistanceLeft(double value);
    /// Returns or sets the distance (in points) between the document text and the right edge of the shape.
    /// 
    /// The default value is 1/8 inch.
    /// 
    /// Has effect only for top level shapes.
    ASPOSE_WORDS_SHARED_API double get_DistanceRight();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_DistanceRight
    ASPOSE_WORDS_SHARED_API void set_DistanceRight(double value);
    /// Defines the angle (in degrees) that a shape is rotated.
    /// Positive value corresponds to clockwise rotation angle.
    /// 
    /// The default value is 0.
    ASPOSE_WORDS_SHARED_API double get_Rotation();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_Rotation
    ASPOSE_WORDS_SHARED_API void set_Rotation(double value);
    /// Determines the display order of overlapping shapes.
    /// 
    /// Has effect only for top level shapes.
    /// 
    /// The default value is 0.
    /// 
    /// The number represents the stacking precedence. A shape with a higher number will be displayed
    /// as if it were overlapping (in "front" of) a shape with a lower number.
    /// 
    /// The order of overlapping shapes is independent for shapes in the header and in the main
    /// text of the document.
    /// 
    /// The display order of child shapes in a group shape is determined by their order
    /// inside the group shape.
    /// 
    /// @sa Aspose::Words::Drawing::ShapeBase::get_BehindText
    ASPOSE_WORDS_SHARED_API int32_t get_ZOrder();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_ZOrder
    ASPOSE_WORDS_SHARED_API void set_ZOrder(int32_t value);
    /// Returns the immediate parent paragraph.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Paragraph> get_ParentParagraph();
    /// Gets or sets the location and size of the containing block of the shape.
    /// 
    /// Ignores aspect ratio lock upon setting.
    /// 
    /// For a top-level shape, the value is in points and relative to the shape anchor.
    /// 
    /// For shapes in a group, the value is in the coordinate space and units of the parent group.
    ASPOSE_WORDS_SHARED_API System::Drawing::RectangleF get_Bounds();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_Bounds
    ASPOSE_WORDS_SHARED_API void set_Bounds(System::Drawing::RectangleF value);
    /// Gets the location and size of the containing block of the shape in points, relative to the anchor of the topmost shape.
    ASPOSE_WORDS_SHARED_API System::Drawing::RectangleF get_BoundsInPoints();
    /// Gets final extent that this shape object has after applying drawing effects.
    /// Value is measured in points.
    ASPOSE_WORDS_SHARED_API System::Drawing::RectangleF get_BoundsWithEffects();
    /// Gets the shape type.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::ShapeType get_ShapeType();
    /// Gets MarkupLanguage used for this graphic object.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::ShapeMarkupLanguage get_MarkupLanguage() const;
    /// Gets the size of the shape in points.
    ASPOSE_WORDS_SHARED_API System::Drawing::SizeF get_SizeInPoints();
    /// Switches the orientation of a shape.
    /// 
    /// The default value is <see cref="Aspose::Words::Drawing::FlipOrientation::None">None</see>.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::FlipOrientation get_FlipOrientation();
    /// Switches the orientation of a shape.
    /// 
    /// The default value is <see cref="Aspose::Words::Drawing::FlipOrientation::None">None</see>.
    ASPOSE_WORDS_SHARED_API void set_FlipOrientation(Aspose::Words::Drawing::FlipOrientation value);
    /// Specifies relative to what the shape is positioned horizontally.
    /// 
    /// The default value is <see cref="Aspose::Words::Drawing::RelativeHorizontalPosition::Column">Column</see>.
    /// 
    /// Has effect only for top level floating shapes.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::RelativeHorizontalPosition get_RelativeHorizontalPosition();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_RelativeHorizontalPosition
    ASPOSE_WORDS_SHARED_API void set_RelativeHorizontalPosition(Aspose::Words::Drawing::RelativeHorizontalPosition value);
    /// Specifies relative to what the shape is positioned vertically.
    /// 
    /// The default value is <see cref="Aspose::Words::Drawing::RelativeVerticalPosition::Paragraph">Paragraph</see>.
    /// 
    /// Has effect only for top level floating shapes.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::RelativeVerticalPosition get_RelativeVerticalPosition();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_RelativeVerticalPosition
    ASPOSE_WORDS_SHARED_API void set_RelativeVerticalPosition(Aspose::Words::Drawing::RelativeVerticalPosition value);
    /// Specifies how the shape is positioned horizontally.
    /// 
    /// The default value is <see cref="Aspose::Words::Drawing::HorizontalAlignment::None">None</see>.
    /// 
    /// Has effect only for top level floating shapes.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::HorizontalAlignment get_HorizontalAlignment();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_HorizontalAlignment
    ASPOSE_WORDS_SHARED_API void set_HorizontalAlignment(Aspose::Words::Drawing::HorizontalAlignment value);
    /// Specifies how the shape is positioned vertically.
    /// 
    /// The default value is <see cref="Aspose::Words::Drawing::VerticalAlignment::None">None</see>.
    /// 
    /// Has effect only for top level floating shapes.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::VerticalAlignment get_VerticalAlignment();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_VerticalAlignment
    ASPOSE_WORDS_SHARED_API void set_VerticalAlignment(Aspose::Words::Drawing::VerticalAlignment value);
    /// Defines whether the shape is inline or floating. For floating shapes defines the wrapping mode for text around the shape.
    /// 
    /// The default value is <see cref="Aspose::Words::Drawing::WrapType::None">None</see>.
    /// 
    /// Has effect only for top level shapes.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::WrapType get_WrapType();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_WrapType
    ASPOSE_WORDS_SHARED_API void set_WrapType(Aspose::Words::Drawing::WrapType value);
    /// Specifies how the text is wrapped around the shape.
    /// 
    /// The default value is <see cref="Aspose::Words::Drawing::WrapSide::Both">Both</see>.
    /// 
    /// Has effect only for top level shapes.
    ASPOSE_WORDS_SHARED_API Aspose::Words::Drawing::WrapSide get_WrapSide();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_WrapSide
    ASPOSE_WORDS_SHARED_API void set_WrapSide(Aspose::Words::Drawing::WrapSide value);
    /// The coordinates at the top-left corner of the containing block of this shape.
    /// 
    /// The default value is (0,0).
    ASPOSE_WORDS_SHARED_API System::Drawing::Point get_CoordOrigin();
    /// The coordinates at the top-left corner of the containing block of this shape.
    /// 
    /// The default value is (0,0).
    ASPOSE_WORDS_SHARED_API void set_CoordOrigin(System::Drawing::Point value);
    /// The width and height of the coordinate space inside the containing block of this shape.
    /// 
    /// The default value is (1000, 1000).
    ASPOSE_WORDS_SHARED_API System::Drawing::Size get_CoordSize();
    /// The width and height of the coordinate space inside the containing block of this shape.
    /// 
    /// The default value is (1000, 1000).
    ASPOSE_WORDS_SHARED_API void set_CoordSize(System::Drawing::Size value);
    /// Provides access to the font formatting of this object.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Font> get_Font();
    /// Indicates that shape is a SignatureLine.
    ASPOSE_WORDS_SHARED_API bool get_IsSignatureLine();
    /// Gets or sets a flag indicating whether the shape is displayed inside a table or outside of it.
    /// 
    /// The default value is <b>%true</b>.
    /// 
    /// Has effect only for top level shapes, the property <see cref="Aspose::Words::Drawing::ShapeBase::get_WrapType">WrapType</see> of which is set to value
    /// other than <see cref="Aspose::Words::Inline">Inline</see>.
    ASPOSE_WORDS_SHARED_API bool get_IsLayoutInCell();
    /// Setter for Aspose::Words::Drawing::ShapeBase::get_IsLayoutInCell
    ASPOSE_WORDS_SHARED_API void set_IsLayoutInCell(bool value);

    /// Creates and returns an object that can be used to render this shape into an image.
    /// 
    /// This method just invokes the <see cref="Aspose::Words::Rendering::ShapeRenderer">ShapeRenderer</see> constructor and passes
    /// this object as a parameter.
    /// 
    /// @return The renderer object for this shape.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Rendering::ShapeRenderer> GetShapeRenderer();
    /// Reserved for system use. IShapeAttrSource.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<System::Object> GetDirectShapeAttr(int32_t key) override;
    /// Reserved for system use. IShapeAttrSource.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<System::Object> FetchInheritedShapeAttr(int32_t key) override;
    /// Reserved for system use. IShapeAttrSource.
    ASPOSE_WORDS_SHARED_API System::SharedPtr<System::Object> FetchShapeAttr(int32_t key) override;
    /// Reserved for system use. IShapeAttrSource.
    ASPOSE_WORDS_SHARED_API void SetShapeAttr(int32_t key, System::SharedPtr<System::Object> value) override;
    /// Reserved for system use. IShapeAttrSource.
    ASPOSE_WORDS_SHARED_API void RemoveShapeAttr(int32_t key) override;
    /// Converts a value from the local coordinate space into the coordinate space of the parent shape.
    ASPOSE_WORDS_SHARED_API System::Drawing::PointF LocalToParent(System::Drawing::PointF value);
    /// Adds to the source rectangle values of the effect extent and returns the final rectangle.
    ASPOSE_WORDS_SHARED_API System::Drawing::RectangleF AdjustWithEffects(System::Drawing::RectangleF source);

protected:

    virtual bool get_IsPercentWidthInapplicable() = 0;

    ASPOSE_WORDS_SHARED_API System::SharedPtr<Aspose::Words::Node> Clone(bool , System::SharedPtr<Aspose::Words::INodeCloningListener> ) override;

    virtual ASPOSE_WORDS_SHARED_API ~ShapeBase();

private:

    System::SharedPtr<Aspose::Words::Paragraph> get_ParentParagraph_IInline() override;
    System::SharedPtr<Aspose::Words::DocumentBase> get_Document_IInline() override;
    System::SharedPtr<Aspose::Words::RunPr> get_RunPr_IInline() override;
    void set_RunPr_IInline(System::SharedPtr<Aspose::Words::RunPr> ) override;
    int32_t get_ZOrder_IShape() override;
    void set_ZOrder_IShape(int32_t ) override;
    System::SharedPtr<Aspose::Words::Revisions::EditRevision> get_InsertRevision() override;
    void set_InsertRevision(System::SharedPtr<Aspose::Words::Revisions::EditRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::EditRevision> get_DeleteRevision() override;
    void set_DeleteRevision(System::SharedPtr<Aspose::Words::Revisions::EditRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::MoveRevision> get_MoveFromRevision() override;
    void set_MoveFromRevision(System::SharedPtr<Aspose::Words::Revisions::MoveRevision> ) override;
    System::SharedPtr<Aspose::Words::Revisions::MoveRevision> get_MoveToRevision() override;
    void set_MoveToRevision(System::SharedPtr<Aspose::Words::Revisions::MoveRevision> ) override;
    System::Drawing::Color get_FilledColor() override;
    void set_FilledColor(System::Drawing::Color ) override;
    bool get_On() override;
    void set_On(bool ) override;
    double get_Opacity() override;
    void set_Opacity(double ) override;
    System::ArrayPtr<uint8_t> get_FillableImageBytes() override;
    System::Drawing::Color get_FillableForeColor() override;
    void set_FillableForeColor(System::Drawing::Color ) override;
    System::Drawing::Color get_FillableBackColor() override;
    void set_FillableBackColor(System::Drawing::Color ) override;
    bool get_FillableVisible() override;
    void set_FillableVisible(bool ) override;
    double get_FillableTransparency() override;
    void set_FillableTransparency(double ) override;
    bool get_RotateWithObject() override;
    void set_RotateWithObject(bool ) override;
    Aspose::Words::Drawing::Core::FillTypeCore get_FillType() override;
    Aspose::Words::Drawing::TextureAlignment get_TextureAlignment() override;
    void set_TextureAlignment(Aspose::Words::Drawing::TextureAlignment ) override;
    System::SharedPtr<Aspose::Words::Drawing::Core::Dml::Themes::IThemeProvider> get_FillableThemeProvider() override;
    double get_GradientAngle() override;
    void set_GradientAngle(double ) override;
    Aspose::Words::Drawing::GradientVariant get_GradientVariant() override;
    Aspose::Words::Drawing::GradientStyle get_GradientStyle() override;
    System::SharedPtr<Aspose::Words::Drawing::GradientStopCollection> get_GradientStops() override;

    System::SharedPtr<System::Object> mField0;
    System::SharedPtr<System::Object> mField1;
    System::SharedPtr<System::Object> mField2;
    System::SharedPtr<System::Object> mField3;
    System::SharedPtr<System::Object> mField4;
    System::SharedPtr<System::Object> mField5;
    System::SharedPtr<System::Object> mField6;
    __TypeStub<4,4,4,4>::type mField7;
    System::Drawing::PointF mField8;
    System::Drawing::PointF mField9;
    __TypeStub<4,4,4,4>::type mField10;
    __TypeStub<4,4,4,4>::type mField11;
    __TypeStub<4,4,4,4>::type mField12;
    __TypeStub<4,4,4,4>::type mField13;
    __TypeStub<8,8,8,8>::type mField14;
    __TypeStub<1,1,1,1>::type mField15;
    System::Drawing::Size mField16;
    System::Drawing::SizeF mField17;
    System::SharedPtr<System::Object> mField18;
    System::SharedPtr<System::Object> mField19;

    System::SharedPtr<Aspose::Words::RunPr> GetExpandedRunPr_IInline(Aspose::Words::RunPrExpandFlags ) override;
    void RemoveMoveRevisions() override;
    System::SharedPtr<System::Object> GetDirectRunAttr(int32_t ) override;
    System::SharedPtr<System::Object> FetchInheritedRunAttr(int32_t ) override;
    void SetRunAttr(int32_t , System::SharedPtr<System::Object> ) override;
    void RemoveRunAttr(int32_t ) override;
    void ClearRunAttrs() override;
    void Solid() override;
    Aspose::Words::Drawing::PresetTexture GetPresetTexture() override;
    Aspose::Words::Drawing::PatternType GetPatternType() override;
    void PresetTextured(Aspose::Words::Drawing::PresetTexture ) override;
    void Patterned(Aspose::Words::Drawing::PatternType ) override;
    void TwoColorGradient(Aspose::Words::Drawing::GradientStyle , Aspose::Words::Drawing::GradientVariant ) override;
    void OneColorGradient(Aspose::Words::Drawing::GradientStyle , Aspose::Words::Drawing::GradientVariant , double ) override;
    void SetFill(System::SharedPtr<Aspose::Words::Drawing::Core::IFill> ) override;
    double GetTransparency(System::SharedPtr<Aspose::Words::Drawing::Core::Dml::Colors::DmlColor> ) override;
    void SetTransparency(System::SharedPtr<Aspose::Words::Drawing::Core::Dml::Colors::DmlColor> , double ) override;

protected:

private:

};

}
}
}
