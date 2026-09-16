#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 28 member(s).
namespace Windows::Globalization::Calendars {
class YearMonthCalendar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDays@YearMonthCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddDays(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEras@YearMonthCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddEras(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromFixedDate@YearMonthCalendar@Calendars@Globalization@Windows@@QEAAXUFixedDate@234@@Z
    void FromFixedDate(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDayOfWeek@YearMonthCalendar@Calendars@Globalization@Windows@@QEBA?AW4DayOfWeek@34@XZ
    int GetDayOfWeek() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLeapMonth@YearMonthCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int GetLeapMonth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLeapYear@YearMonthCalendar@Calendars@Globalization@Windows@@QEBA_NXZ
    bool IsLeapYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToFixedDate@YearMonthCalendar@Calendars@Globalization@Windows@@QEBA?AUFixedDate@234@XZ
    WindissectOpaque ToFixedDate() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Day@YearMonthCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_Day() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Era@YearMonthCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_Era() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstDayInThisMonth@YearMonthCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstDayInThisMonth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstEra@YearMonthCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstEra() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstMonthInThisYear@YearMonthCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstMonthInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstYearInThisEra@YearMonthCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstYearInThisEra() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastDayInThisMonth@YearMonthCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_LastDayInThisMonth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastEra@YearMonthCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_LastEra() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastMonthInThisYear@YearMonthCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_LastMonthInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastYearInThisEra@YearMonthCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_LastYearInThisEra() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Month@YearMonthCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_Month() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfEras@YearMonthCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfEras() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Year@YearMonthCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_Year() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Day@YearMonthCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void put_Day(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Era@YearMonthCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void put_Era(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Month@YearMonthCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void put_Month(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Year@YearMonthCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void put_Year(int);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLeapYear@YearMonthCalendar@Calendars@Globalization@Windows@@MEBA_NH@Z
    virtual bool IsLeapYear(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidEra@YearMonthCalendar@Calendars@Globalization@Windows@@MEBA_NH@Z
    virtual bool IsValidEra(int) const;
};
} // namespace Windows::Globalization::Calendars
