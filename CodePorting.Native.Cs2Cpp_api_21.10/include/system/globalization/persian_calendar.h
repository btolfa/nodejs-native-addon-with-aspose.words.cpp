/// @file system/globalization/persian_calendar.h
#pragma once

#include <system/globalization/calendar.h>

namespace System { namespace Globalization {

class PersianCalendar;
/// PersianCalendar pointer type.
typedef SharedPtr<PersianCalendar> PersianCalendarPtr;

/// Persian calendar.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS PersianCalendar : public Calendar
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::PersianCalendar, ::System::BaseTypesInfo<System::Globalization::Calendar>)

public:
    using Calendar::GetDaysInMonth;
    using Calendar::GetDaysInYear;
    using Calendar::GetMonthsInYear;
    using Calendar::GetLeapMonth;
    using Calendar::IsLeapDay;
    using Calendar::IsLeapMonth;
    using Calendar::IsLeapYear;

    /// Current persian era.
    static constexpr int PersianEra = 1;

    /// Constructor.
    ASPOSECPP_SHARED_API PersianCalendar();

    ASPOSECPP_SHARED_API CalendarAlgorithmType get_AlgorithmType() const override;
    ASPOSECPP_SHARED_API DateTime get_MinSupportedDateTime() const override;
    ASPOSECPP_SHARED_API DateTime get_MaxSupportedDateTime() const override;
    ASPOSECPP_SHARED_API ArrayPtr<int> get_Eras() const override;
    ASPOSECPP_SHARED_API int GetDaysInMonth(int year, int month, int era) const override;
    ASPOSECPP_SHARED_API int GetDaysInYear(int year, int era) const override;
    ASPOSECPP_SHARED_API int GetMonthsInYear(int year, int era) const override;
    ASPOSECPP_SHARED_API DayOfWeek GetDayOfWeek(DateTime time) const override;
    ASPOSECPP_SHARED_API int GetLeapMonth(int year, int era) const override;
    ASPOSECPP_SHARED_API bool IsLeapYear(int year, int era) const override;
    ASPOSECPP_SHARED_API bool IsLeapDay(int year, int month, int day, int era) const override;
    ASPOSECPP_SHARED_API bool IsLeapMonth(int year, int month, int era) const override;
    
    ASPOSECPP_SHARED_API SharedPtr<Object> Clone() override;

protected:
    Details::CalendarId get_ID() const override;

private:
    void VerifyYear(int year, int era) const override;
    void VerifyMonth(int year, int month, int era) const override;
    void VerifyDate(int year, int month, int day, int era) const override;

    int EraToIcuEra(int era) const override;
    int IcuEraToEra(int icu_era) const override;
};

}} // namespace System::Globalization
