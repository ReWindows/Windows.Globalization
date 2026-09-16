#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 5 member(s).
namespace Windows::Globalization::Calendars {
class KoreanDangiCalendar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstYearInThisEra@KoreanDangiCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_FirstYearInThisEra() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Year@KoreanDangiCalendar@Calendars@Globalization@Windows@@UEBAHXZ
    virtual int get_Year() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Year@KoreanDangiCalendar@Calendars@Globalization@Windows@@UEAAXH@Z
    virtual void put_Year(int);
};
} // namespace Windows::Globalization::Calendars
