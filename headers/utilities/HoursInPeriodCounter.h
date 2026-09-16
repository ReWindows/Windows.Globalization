#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 5 member(s).
namespace Windows::Globalization::Calendar {
class HoursInPeriodCounter {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustHoursForAmbiguousTimeAtEndOfPeriod@HoursInPeriodCounter@Calendar@Globalization@Windows@@AEAAXAEAUTransition@TimeZone@34@@Z
    void AdjustHoursForAmbiguousTimeAtEndOfPeriod(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustHoursForAmbiguousTimeEndingInPeriod@HoursInPeriodCounter@Calendar@Globalization@Windows@@AEAAXAEBUTransition@TimeZone@34@0@Z
    void AdjustHoursForAmbiguousTimeEndingInPeriod(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustHoursForInvalidTimeEndingInPeriod@HoursInPeriodCounter@Calendar@Globalization@Windows@@AEAAXAEBUTransition@TimeZone@34@0@Z
    void AdjustHoursForInvalidTimeEndingInPeriod(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustHoursForTransitionEndingInPeriod@HoursInPeriodCounter@Calendar@Globalization@Windows@@AEAAXAEAUTransition@TimeZone@34@@Z
    void AdjustHoursForTransitionEndingInPeriod(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustHoursIfTimeZoneChangesInThisPeriod@HoursInPeriodCounter@Calendar@Globalization@Windows@@AEAAXXZ
    void AdjustHoursIfTimeZoneChangesInThisPeriod();
};
} // namespace Windows::Globalization::Calendar
