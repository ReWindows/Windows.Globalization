#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 23 member(s).
namespace Windows::Globalization::Calendars {
class JapaneseCalendar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMonths@JapaneseCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddMonths(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddYears@JapaneseCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddYears(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEraInfo@JapaneseCalendar@Calendars@Globalization@Windows@@QEBAAEBUJapaneseEraInfo@234@HH@Z
    WindissectOpaque const & GetEraInfo(int, int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JapaneseCalendar@Calendars@Globalization@Windows@@QEAA@XZ
    JapaneseCalendar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Era@JapaneseCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_Era() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstDayInThisMonth@JapaneseCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstDayInThisMonth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstMonthInThisYear@JapaneseCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstMonthInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastDayInThisMonth@JapaneseCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_LastDayInThisMonth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastMonthInThisYear@JapaneseCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_LastMonthInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfDaysInThisMonth@JapaneseCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfDaysInThisMonth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfEras@JapaneseCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfEras() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfMonthsInThisYear@JapaneseCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfMonthsInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfYearsInThisEra@JapaneseCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfYearsInThisEra() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Year@JapaneseCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_Year() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Day@JapaneseCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void put_Day(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Era@JapaneseCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void put_Era(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Month@JapaneseCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void put_Month(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Year@JapaneseCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void put_Year(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JapaneseCalendar@Calendars@Globalization@Windows@@UEAA@XZ
    virtual ~JapaneseCalendar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDateToEra@JapaneseCalendar@Calendars@Globalization@Windows@@AEAAXAEBUJapaneseEraInfo@234@@Z
    void AdjustDateToEra(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetJapaneseEraInfoIndexForGregorianDate@JapaneseCalendar@Calendars@Globalization@Windows@@AEBAHHHH@Z
    int GetJapaneseEraInfoIndexForGregorianDate(int, int, int) const;
};
} // namespace Windows::Globalization::Calendars
