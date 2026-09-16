#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 4 member(s).
namespace Windows::Globalization::Calendars::CalendricalCalculations {
class SolarLongitude {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimatePrior@SolarLongitude@CalendricalCalculations@Calendars@Globalization@Windows@@SANVLongitude@2345@VMomentInUniversalTime@2345@@Z
    static double EstimatePrior(WindissectOpaque, WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compute@SolarLongitude@CalendricalCalculations@Calendars@Globalization@Windows@@CA?AVLongitude@2345@VMomentInUniversalTime@2345@@Z
    static WindissectOpaque Compute(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Nutation@SolarLongitude@CalendricalCalculations@Calendars@Globalization@Windows@@CANN@Z
    static double Nutation(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SumLongSequenceOfPeriodicTerms@SolarLongitude@CalendricalCalculations@Calendars@Globalization@Windows@@CANN@Z
    static double SumLongSequenceOfPeriodicTerms(double);
};
} // namespace Windows::Globalization::Calendars::CalendricalCalculations
