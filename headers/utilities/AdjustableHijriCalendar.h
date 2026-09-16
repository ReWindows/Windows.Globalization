#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 4 member(s).
namespace Windows::Globalization::Calendars {
class AdjustableHijriCalendar {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AdjustableHijriCalendar@Calendars@Globalization@Windows@@QEAA@H@Z
    AdjustableHijriCalendar(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdvanceHijriDate@AdjustableHijriCalendar@Calendars@Globalization@Windows@@SAHXZ
    static int GetAdvanceHijriDate();
};
} // namespace Windows::Globalization::Calendars
