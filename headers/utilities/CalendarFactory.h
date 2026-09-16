#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 7 member(s).
namespace Windows::Globalization {
class CalendarFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CalendarFactory@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CalendarFactory@Globalization@Windows@@QEAA@XZ
    CalendarFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCalendar@CalendarFactory@Globalization@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@3@PEAUHSTRING__@@1PEAPEAUICalendar@23@@Z
    virtual long CreateCalendar(WindissectOpaque *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCalendarDefaultCalendarAndClock@CalendarFactory@Globalization@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@3@PEAPEAUICalendar@23@@Z
    virtual long CreateCalendarDefaultCalendarAndClock(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCalendarWithTimeZone@CalendarFactory@Globalization@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@3@PEAUHSTRING__@@11PEAPEAUICalendar@23@@Z
    virtual long CreateCalendarWithTimeZone(WindissectOpaque *, HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::Globalization
