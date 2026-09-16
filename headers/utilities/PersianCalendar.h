#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 22 member(s).
namespace Windows::Globalization::Calendars {
class PersianCalendar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMonths@PersianCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddMonths(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddYears@PersianCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddYears(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDate@PersianCalendar@Calendars@Globalization@Windows@@UEAAXXZ
    virtual void AdjustDate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidDay@PersianCalendar@Calendars@Globalization@Windows@@UEBA_NHHHH@Z
    virtual bool IsValidDay(int, int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidEra@PersianCalendar@Calendars@Globalization@Windows@@UEBA_NH@Z
    virtual bool IsValidEra(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidMonth@PersianCalendar@Calendars@Globalization@Windows@@UEBA_NHHH@Z
    virtual bool IsValidMonth(int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidYear@PersianCalendar@Calendars@Globalization@Windows@@UEBA_NHH@Z
    virtual bool IsValidYear(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pack@PersianCalendar@Calendars@Globalization@Windows@@UEBA?AUFixedDate@234@XZ
    virtual WindissectOpaque Pack() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unpack@PersianCalendar@Calendars@Globalization@Windows@@UEAAXUFixedDate@234@@Z
    virtual void Unpack(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfDaysInThisMonth@PersianCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfDaysInThisMonth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfMonthsInThisYear@PersianCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfMonthsInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfYearsInThisEra@PersianCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfYearsInThisEra() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDate@PersianCalendar@Calendars@Globalization@Windows@@AEAAHHHH@Z
    int AdjustDate(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustMonth@PersianCalendar@Calendars@Globalization@Windows@@AEAAHHH@Z
    int AdjustMonth(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixedFromPersian@PersianCalendar@Calendars@Globalization@Windows@@CA?AUFixedDate@234@HHH@Z
    static WindissectOpaque FixedFromPersian(int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDaysInMonth@PersianCalendar@Calendars@Globalization@Windows@@AEBAHHH@Z
    int GetDaysInMonth(int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLeapYear@PersianCalendar@Calendars@Globalization@Windows@@EEBA_NH@Z
    virtual bool IsLeapYear(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MiddayAtPersianObservationSite@PersianCalendar@Calendars@Globalization@Windows@@CA?AVMomentInUniversalTime@CalendricalCalculations@234@N@Z
    static WindissectOpaque MiddayAtPersianObservationSite(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonthFromOrdinalDay@PersianCalendar@Calendars@Globalization@Windows@@CAHH@Z
    static int MonthFromOrdinalDay(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersianNewYearOnOrBefore@PersianCalendar@Calendars@Globalization@Windows@@CA?AUFixedDate@234@U5234@@Z
    static WindissectOpaque PersianNewYearOnOrBefore(WindissectOpaque);
};
} // namespace Windows::Globalization::Calendars
