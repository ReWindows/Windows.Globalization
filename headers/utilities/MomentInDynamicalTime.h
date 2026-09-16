#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 9 member(s).
namespace Windows::Globalization::Calendars::CalendricalCalculations {
class MomentInDynamicalTime {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CenturiesFrom1900@MomentInDynamicalTime@CalendricalCalculations@Calendars@Globalization@Windows@@CANH@Z
    static double CenturiesFrom1900(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultEphemerisCorrection@MomentInDynamicalTime@CalendricalCalculations@Calendars@Globalization@Windows@@CANH@Z
    static double DefaultEphemerisCorrection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EphemerisCorrection@MomentInDynamicalTime@CalendricalCalculations@Calendars@Globalization@Windows@@CANN@Z
    static double EphemerisCorrection(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EphemerisCorrection1620to1699@MomentInDynamicalTime@CalendricalCalculations@Calendars@Globalization@Windows@@CANH@Z
    static double EphemerisCorrection1620to1699(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EphemerisCorrection1700to1799@MomentInDynamicalTime@CalendricalCalculations@Calendars@Globalization@Windows@@CANH@Z
    static double EphemerisCorrection1700to1799(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EphemerisCorrection1800to1899@MomentInDynamicalTime@CalendricalCalculations@Calendars@Globalization@Windows@@CANH@Z
    static double EphemerisCorrection1800to1899(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EphemerisCorrection1900to1987@MomentInDynamicalTime@CalendricalCalculations@Calendars@Globalization@Windows@@CANH@Z
    static double EphemerisCorrection1900to1987(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EphemerisCorrection1988to2019@MomentInDynamicalTime@CalendricalCalculations@Calendars@Globalization@Windows@@CANH@Z
    static double EphemerisCorrection1988to2019(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGregorianYear@MomentInDynamicalTime@CalendricalCalculations@Calendars@Globalization@Windows@@CAHN@Z
    static int GetGregorianYear(double);
};
} // namespace Windows::Globalization::Calendars::CalendricalCalculations
