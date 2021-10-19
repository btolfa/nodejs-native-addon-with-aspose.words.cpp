/// @file drawing/drawing2d/custom_line_cap.h
#ifndef _aspose_drawing_drawing2d_custom_line_cap_h_
#define _aspose_drawing_drawing2d_custom_line_cap_h_

#include "fwd.h"
#include "drawing/drawing2d/line_cap.h"
#include "drawing/drawing2d/line_join.h"
#include "system/exceptions.h"

#ifdef ASPOSECPPLIB_BEING_BUILT
#include <core/SkScalar.h>
#include <core/SkPath.h>
#include <core/SkPathEffect.h>
#endif

/// Forward declaration of SkPaint class.
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);
/// Forward declaration of SkPath class.
ASPOSECPP_3RD_PARTY_CLASS(SkPath);
/// Ensures that SkScalar is an alias for float.
ASPOSECPP_3RD_PARTY_TYPEDEF(SkScalar, float);
/// Forward declaration of SkPathEffect class.
ASPOSECPP_3RD_PARTY_CLASS(SkPathEffect);

template <typename T> class sk_sp;

namespace System { namespace Drawing {

class Pen;

namespace Drawing2D {

class GraphicsPath;
/// Represents a user-defined line cap.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS CustomLineCap : public Object
{
    RTTI_INFO(System::Drawing::Drawing2D::CustomLineCap, ::System::BaseTypesInfo<System::Object>)

public:
    /// Constructs a new instance of CustomLineCap class that represents a user-defined line cap with the specified
    /// properties.
    /// @param fillPath Specifies a fill for the custom cap
    /// @param strokePath Specifies an outline of the custom cap
    /// @param baseCap The base line cap from which the custom cap is created
    /// @param baseInset Specifies the distance between the line and the cap
    ASPOSECPP_SHARED_API CustomLineCap(const SharedPtr<GraphicsPath>& fillPath,
                                       const SharedPtr<GraphicsPath>& strokePath,
                                       LineCap baseCap = LineCap::Flat, float baseInset = 0);

    /// Sets the start and end line caps of the custom cap represented by the current object.
    /// @param startCap The start cap to set
    /// @param endCap The end cap to set
    ASPOSECPP_SHARED_API void SetStrokeCaps(LineCap startCap, LineCap endCap);
    /// Gets the start and end line caps of the custom cap represented by the current object.
    /// @param startCap The output argument; Contains the start cap
    /// @param endCap The output argument; Contains the end cap
    ASPOSECPP_SHARED_API void GetStrokeCaps(LineCap& startCap, LineCap& endCap);
    /// Returns a copy of the current object.
    virtual ASPOSECPP_SHARED_API SharedPtr<CustomLineCap> Clone();

    /// Returns the base line cap from which this custom cap is created
    ASPOSECPP_SHARED_API LineCap get_BaseCap() const;
    /// Sets the base line cap value for this custom cap
    /// @param value New base line cap value
    ASPOSECPP_SHARED_API void set_BaseCap(LineCap value);
    /// Returns the distance between the line and the cap.
    ASPOSECPP_SHARED_API float get_BaseInset() const;
    /// Sets the distance between the line and the cap
    /// @param value New distance value
    ASPOSECPP_SHARED_API void set_BaseInset(float value);
    /// Returns the LineJoin value which determines how lines of this custom cap are joined
    ASPOSECPP_SHARED_API LineJoin get_StrokeJoin() const;
    /// Sets the LineJoin value which determines how lines of this custom cap are joined
    /// @param value New stroke join value
    ASPOSECPP_SHARED_API void set_StrokeJoin(LineJoin value);
    /// Returns the scale of this custom cap
    ASPOSECPP_SHARED_API float get_WidthScale() const;
    /// Sets the scale value of this custom cap
    /// @param value New scale value
    ASPOSECPP_SHARED_API void set_WidthScale(float value);
    /// Releases all operating system resources acquired by the current object.
    void Dispose() {};

protected:
    /// Default constructor for subclass creation
    CustomLineCap();

private:
    friend class System::Drawing::Pen;

    CustomLineCap(const SharedPtr<GraphicsPath>& fillPath,
                  const SharedPtr<GraphicsPath>& strokePath,
                  bool fit_to_line_width, LineCap baseCap, float baseInset);
    MEMBER_FUNCTION_MAKE_OBJECT(
        CustomLineCap,
        CODEPORTING_ARGS(
            const SharedPtr<GraphicsPath>& fillPath,
            const SharedPtr<GraphicsPath>& strokePath,
            bool fit_to_line_width,
            LineCap baseCap,
            float baseInset
        ),
        CODEPORTING_ARGS(
            fillPath,
            strokePath,
            fit_to_line_width,
            baseCap,
            baseInset
        )
    );

    /// Creates a custom cap from the specified line cap.
    static SharedPtr<CustomLineCap> MakeForLineCap(LineCap value);
    /// Creates a scaled path for this cap
    SkPath ScaleCapPath(SkScalar& scale_x, SkScalar& scale_y, SkScalar& width, bool fix_scale = true) const;
    /// Creates a fills SkPaint for this cap
    SkPaint BuildCapPaint(const SkPaint& base_paint, sk_sp<SkPathEffect> path_effect) const;
    /// Actually draws line cap.
    void Apply(const SkPaint& base_paint, std::vector<SkPaint>& result, SkScalar width,
               SkScalar scale_x, SkScalar scale_y, bool is_start_cap) const;
    /// Appends cap to source path by adding cap path to destination path which is a copy of source path.
    void AppendPath(const SkPath* src_path, SkPath* dest_path, SkScalar width, bool is_start_cap,
                    bool fix_scale = true) const;
    /// Indicates in this cap is filled.
    const bool m_is_filled;
    const bool m_fit_to_line_width;

    LineCap m_base_cap;
    /// A distance between the line and the cap.
    float m_inset;
    LineJoin m_stroke_join;
    float m_width_scale;
    /// A GraphicsPath object that specifies a fill for this cap.
    SharedPtr<GraphicsPath> m_path;
    /// Start cap.
    LineCap m_start_cap;
    /// End cap.
    LineCap m_end_cap;
    /// Start cap child.
    SharedPtr<CustomLineCap> m_start_cap_child;
    /// End cap child.
    SharedPtr<CustomLineCap> m_end_cap_child;
};
}}}

#endif
