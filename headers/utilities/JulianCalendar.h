#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 5 member(s).
namespace Windows::Globalization::Calendars {
class JulianCalendar {
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLeapYear@JulianCalendar@Calendars@Globalization@Windows@@MEBA_NH@Z
    virtual bool IsLeapYear(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pack@JulianCalendar@Calendars@Globalization@Windows@@MEBA?AUFixedDate@234@XZ
    virtual WindissectOpaque Pack() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unpack@JulianCalendar@Calendars@Globalization@Windows@@MEAAXUFixedDate@234@@Z
    virtual void Unpack(WindissectOpaque);
};
} // namespace Windows::Globalization::Calendars
