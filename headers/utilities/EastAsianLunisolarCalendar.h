#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 28 member(s).
namespace Windows::Globalization::Calendars {
class EastAsianLunisolarCalendar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMonths@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddMonths(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddYears@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void AddYears(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDate@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEAAXXZ
    virtual void AdjustDate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLeapMonth@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int GetLeapMonth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidDay@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEBA_NHHHH@Z
    virtual bool IsValidDay(int, int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidEra@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEBA_NH@Z
    virtual bool IsValidEra(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidMonth@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEBA_NHHH@Z
    virtual bool IsValidMonth(int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidYear@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEBA_NHH@Z
    virtual bool IsValidYear(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pack@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEBA?AUFixedDate@234@XZ
    virtual WindissectOpaque Pack() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unpack@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEAAXUFixedDate@234@@Z
    virtual void Unpack(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstEra@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstEra() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstYearInThisEra@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstYearInThisEra() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastEra@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_LastEra() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfDaysInThisMonth@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfDaysInThisMonth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfEras@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfEras() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfMonthsInThisYear@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfMonthsInThisYear() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfYearsInThisEra@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_NumberOfYearsInThisEra() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChineseNewYearInSui@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@CA?AUFixedDate@234@U5234@@Z
    static WindissectOpaque ChineseNewYearInSui(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChineseNewYearOnOrBefore@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@CA?AUFixedDate@234@U5234@@Z
    static WindissectOpaque ChineseNewYearOnOrBefore(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChineseNoMajorSolarTerm@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@CA_NUFixedDate@234@@Z
    static bool ChineseNoMajorSolarTerm(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChineseWinterSolsticeOnOrBefore@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@CA?AUFixedDate@234@U5234@@Z
    static WindissectOpaque ChineseWinterSolsticeOnOrBefore(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentMajorSolarTerm@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@CAHUFixedDate@234@@Z
    static int CurrentMajorSolarTerm(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNewMoonIndexBefore@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@CAHH@Z
    static int FindNewMoonIndexBefore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixedFromEastAsianLunisolar@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@CA?AUFixedDate@234@HHHH@Z
    static WindissectOpaque FixedFromEastAsianLunisolar(int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumberOfDaysInMonth@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@CAHHHH@Z
    static int GetNumberOfDaysInMonth(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MidnightInChina@EastAsianLunisolarCalendar@Calendars@Globalization@Windows@@CA?AVMomentInUniversalTime@CalendricalCalculations@234@UFixedDate@234@@Z
    static WindissectOpaque MidnightInChina(WindissectOpaque);
};
} // namespace Windows::Globalization::Calendars
