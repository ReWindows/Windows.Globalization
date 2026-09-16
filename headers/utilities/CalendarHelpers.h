#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 6 member(s).
namespace Windows::Globalization::Calendars {
class CalendarHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalendarIdFromCldrIdAndVariant@CalendarHelpers@Calendars@Globalization@Windows@@SAKPEBG0@Z
    static unsigned long CalendarIdFromCldrIdAndVariant(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalendarIdFromStringId@CalendarHelpers@Calendars@Globalization@Windows@@SAKPEAUHSTRING__@@@Z
    static unsigned long CalendarIdFromStringId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalendarIdFromStringIdImpl@CalendarHelpers@Calendars@Globalization@Windows@@SAKPEAUHSTRING__@@@Z
    static unsigned long CalendarIdFromStringIdImpl(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedClock@CalendarHelpers@Calendars@Globalization@Windows@@SA_NPEAUHSTRING__@@@Z
    static bool IsSupportedClock(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrototypicalLocaleFromCalendarId@CalendarHelpers@Calendars@Globalization@Windows@@SAPEBGPEAK@Z
    static unsigned short const * PrototypicalLocaleFromCalendarId(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StringIdFromCalendarId@CalendarHelpers@Calendars@Globalization@Windows@@SAPEBGK@Z
    static unsigned short const * StringIdFromCalendarId(unsigned long);
};
} // namespace Windows::Globalization::Calendars
