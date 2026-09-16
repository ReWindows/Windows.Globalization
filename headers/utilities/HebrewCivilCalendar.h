#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 22 member(s).
namespace Windows::Globalization::Calendars {
class HebrewCivilCalendar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMonths@HebrewCivilCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddMonths(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddYears@HebrewCivilCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddYears(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstDayInThisMonth@HebrewCivilCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstDayInThisMonth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstMonthInThisYear@HebrewCivilCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstMonthInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstYearInThisEra@HebrewCivilCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstYearInThisEra() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfDaysInThisMonth@HebrewCivilCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfDaysInThisMonth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfMonthsInThisYear@HebrewCivilCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfMonthsInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfYearsInThisEra@HebrewCivilCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfYearsInThisEra() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDate@HebrewCivilCalendar@Calendars@Globalization@Windows@@MEAAXXZ
    virtual void AdjustDate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLeapYear@HebrewCivilCalendar@Calendars@Globalization@Windows@@MEBA_NH@Z
    virtual bool IsLeapYear(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidDay@HebrewCivilCalendar@Calendars@Globalization@Windows@@MEBA_NHHHH@Z
    virtual bool IsValidDay(int, int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidMonth@HebrewCivilCalendar@Calendars@Globalization@Windows@@MEBA_NHHH@Z
    virtual bool IsValidMonth(int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidYear@HebrewCivilCalendar@Calendars@Globalization@Windows@@MEBA_NHH@Z
    virtual bool IsValidYear(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pack@HebrewCivilCalendar@Calendars@Globalization@Windows@@MEBA?AUFixedDate@234@XZ
    virtual WindissectOpaque Pack() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unpack@HebrewCivilCalendar@Calendars@Globalization@Windows@@MEAAXUFixedDate@234@@Z
    virtual void Unpack(WindissectOpaque);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDayDifference@HebrewCivilCalendar@Calendars@Globalization@Windows@@AEBAHHHHHH@Z
    int GetDayDifference(int, int, int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHebrewMonthDayOfGregorianJan1@HebrewCivilCalendar@Calendars@Globalization@Windows@@AEBAXHPEAH0@Z
    void GetHebrewMonthDayOfGregorianJan1(int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonthsInYear@HebrewCivilCalendar@Calendars@Globalization@Windows@@AEBAHH@Z
    int GetMonthsInYear(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidDay@HebrewCivilCalendar@Calendars@Globalization@Windows@@AEBA_NHHH@Z
    bool IsValidDay(int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidMonth@HebrewCivilCalendar@Calendars@Globalization@Windows@@AEBA_NHH@Z
    bool IsValidMonth(int, int) const;
};
} // namespace Windows::Globalization::Calendars
