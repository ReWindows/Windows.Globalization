#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 15 member(s).
namespace Windows::Globalization::Calendars {
class HijriCalendar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMonths@HijriCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddMonths(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddYears@HijriCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddYears(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfDaysInThisMonth@HijriCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfDaysInThisMonth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfMonthsInThisYear@HijriCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfMonthsInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfYearsInThisEra@HijriCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfYearsInThisEra() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HijriCalendar@Calendars@Globalization@Windows@@UEAA@XZ
    virtual ~HijriCalendar();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDate@HijriCalendar@Calendars@Globalization@Windows@@MEAAXXZ
    virtual void AdjustDate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidDay@HijriCalendar@Calendars@Globalization@Windows@@MEBA_NHHHH@Z
    virtual bool IsValidDay(int, int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidMonth@HijriCalendar@Calendars@Globalization@Windows@@MEBA_NHHH@Z
    virtual bool IsValidMonth(int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidYear@HijriCalendar@Calendars@Globalization@Windows@@MEBA_NHH@Z
    virtual bool IsValidYear(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pack@HijriCalendar@Calendars@Globalization@Windows@@MEBA?AUFixedDate@234@XZ
    virtual WindissectOpaque Pack() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unpack@HijriCalendar@Calendars@Globalization@Windows@@MEAAXUFixedDate@234@@Z
    virtual void Unpack(WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDate@HijriCalendar@Calendars@Globalization@Windows@@AEAAHHHH@Z
    int AdjustDate(int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDaysInMonth@HijriCalendar@Calendars@Globalization@Windows@@AEBAHHH@Z
    int GetDaysInMonth(int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLeapYear@HijriCalendar@Calendars@Globalization@Windows@@EEBA_NH@Z
    virtual bool IsLeapYear(int) const;
};
} // namespace Windows::Globalization::Calendars
