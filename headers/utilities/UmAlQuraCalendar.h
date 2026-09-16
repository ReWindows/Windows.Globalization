#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 15 member(s).
namespace Windows::Globalization::Calendars {
class UmAlQuraCalendar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMonths@UmAlQuraCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddMonths(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddYears@UmAlQuraCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddYears(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstYearInThisEra@UmAlQuraCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstYearInThisEra() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfDaysInThisMonth@UmAlQuraCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfDaysInThisMonth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfMonthsInThisYear@UmAlQuraCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfMonthsInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfYearsInThisEra@UmAlQuraCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfYearsInThisEra() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDate@UmAlQuraCalendar@Calendars@Globalization@Windows@@MEAAXXZ
    virtual void AdjustDate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidDay@UmAlQuraCalendar@Calendars@Globalization@Windows@@MEBA_NHHHH@Z
    virtual bool IsValidDay(int, int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidMonth@UmAlQuraCalendar@Calendars@Globalization@Windows@@MEBA_NHHH@Z
    virtual bool IsValidMonth(int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidYear@UmAlQuraCalendar@Calendars@Globalization@Windows@@MEBA_NHH@Z
    virtual bool IsValidYear(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pack@UmAlQuraCalendar@Calendars@Globalization@Windows@@MEBA?AUFixedDate@234@XZ
    virtual WindissectOpaque Pack() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unpack@UmAlQuraCalendar@Calendars@Globalization@Windows@@MEAAXUFixedDate@234@@Z
    virtual void Unpack(WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDate@UmAlQuraCalendar@Calendars@Globalization@Windows@@AEAAHHHH@Z
    int AdjustDate(int, int, int);
};
} // namespace Windows::Globalization::Calendars
