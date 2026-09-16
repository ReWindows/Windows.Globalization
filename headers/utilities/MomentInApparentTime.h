#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 3 member(s).
namespace Windows::Globalization::Calendars::CalendricalCalculations {
class MomentInApparentTime {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsLocalTime@MomentInApparentTime@CalendricalCalculations@Calendars@Globalization@Windows@@QEAA?AVMomentInLocalTime@2345@VLongitude@2345@@Z
    WindissectOpaque AsLocalTime(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Midday@MomentInApparentTime@CalendricalCalculations@Calendars@Globalization@Windows@@SA?AVMomentInUniversalTime@2345@NVLongitude@2345@@Z
    static WindissectOpaque Midday(double, WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EquationOfTime@MomentInApparentTime@CalendricalCalculations@Calendars@Globalization@Windows@@CANN@Z
    static double EquationOfTime(double);
};
} // namespace Windows::Globalization::Calendars::CalendricalCalculations
