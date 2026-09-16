#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 24 member(s).
namespace Windows::Globalization::Calendars {
class GregorianCalendar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMonths@GregorianCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddMonths(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddYears@GregorianCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddYears(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GregorianCalendar@Calendars@Globalization@Windows@@QEAA@XZ
    GregorianCalendar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pack@GregorianCalendar@Calendars@Globalization@Windows@@SA?AUFixedDate@234@HHH@Z
    static WindissectOpaque Pack(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstDayInThisMonth@GregorianCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstDayInThisMonth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfDaysInThisMonth@GregorianCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfDaysInThisMonth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfMonthsInThisYear@GregorianCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfMonthsInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfYearsInThisEra@GregorianCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfYearsInThisEra() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GregorianCalendar@Calendars@Globalization@Windows@@UEAA@XZ
    virtual ~GregorianCalendar();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDate@GregorianCalendar@Calendars@Globalization@Windows@@MEAAXXZ
    virtual void AdjustDate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDate@GregorianCalendar@Calendars@Globalization@Windows@@IEAAHHHH@Z
    int AdjustDate(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustMonth@GregorianCalendar@Calendars@Globalization@Windows@@IEAAHHH@Z
    int AdjustMonth(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDaysToMonth@GregorianCalendar@Calendars@Globalization@Windows@@IEBAPEBHH@Z
    int const * GetDaysToMonth(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDaysToMonth@GregorianCalendar@Calendars@Globalization@Windows@@IEBAPEBHXZ
    int const * GetDaysToMonth() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GregorianCalendar@Calendars@Globalization@Windows@@IEAA@HHHHHH@Z
    GregorianCalendar(int, int, int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLeapYear@GregorianCalendar@Calendars@Globalization@Windows@@MEBA_NH@Z
    virtual bool IsLeapYear(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidDay@GregorianCalendar@Calendars@Globalization@Windows@@MEBA_NHHHH@Z
    virtual bool IsValidDay(int, int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidMonth@GregorianCalendar@Calendars@Globalization@Windows@@MEBA_NHHH@Z
    virtual bool IsValidMonth(int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidYear@GregorianCalendar@Calendars@Globalization@Windows@@MEBA_NHH@Z
    virtual bool IsValidYear(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pack@GregorianCalendar@Calendars@Globalization@Windows@@MEBA?AUFixedDate@234@XZ
    virtual WindissectOpaque Pack() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unpack@GregorianCalendar@Calendars@Globalization@Windows@@MEAAXUFixedDate@234@@Z
    virtual void Unpack(WindissectOpaque);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGregorianLeapYear@GregorianCalendar@Calendars@Globalization@Windows@@CA_NH@Z
    static bool IsGregorianLeapYear(int);
};
} // namespace Windows::Globalization::Calendars
