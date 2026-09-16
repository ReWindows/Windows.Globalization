#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 2 member(s).
namespace Windows::Globalization {
class TimeZone {
public:
    class AbsoluteDateResolver;
    class ApplicableRules;
    class DstTransitionRule;
    class DstTransitionRules;
    class FirstOnOrAfterDateResolver;
    class LastDateResolver;
    class LegacyWindowsTimeZone;
    class TimeZone;
    class TimeZoneCache;
    class TimeZoneDataChangeObserver;
    class TimeZoneIdMapping;
    class TimeZoneInformation;
    class TimeZoneParser;
    class TimeZoneRule;
    class ZonedTime;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NormalizeDateTime@TimeZone@Globalization@Windows@@YAXAEAUFixedDate@Calendars@23@AEA_J@Z
    void NormalizeDateTime(WindissectOpaque &, int64_t &);
};
} // namespace Windows::Globalization
