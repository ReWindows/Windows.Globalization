#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 12 member(s).
namespace Windows::Globalization::Calendars {
class ThaiSolarCalendar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddYears@ThaiSolarCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddYears(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstMonthInThisYear@ThaiSolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstMonthInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstYearInThisEra@ThaiSolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstYearInThisEra() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastMonthInThisYear@ThaiSolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_LastMonthInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastYearInThisEra@ThaiSolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_LastYearInThisEra() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfMonthsInThisYear@ThaiSolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfMonthsInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfYearsInThisEra@ThaiSolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfYearsInThisEra() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Year@ThaiSolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_Year() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Month@ThaiSolarCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void put_Month(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Year@ThaiSolarCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void put_Year(int);
};
} // namespace Windows::Globalization::Calendars
