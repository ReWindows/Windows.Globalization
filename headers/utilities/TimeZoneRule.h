#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 5 member(s).
namespace Windows::Globalization::TimeZone {
class TimeZoneRule {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAllTransitionsOnTheHour@TimeZoneRule@TimeZone@Globalization@Windows@@QEBA_NXZ
    bool AreAllTransitionsOnTheHour() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicableRules@TimeZoneRule@TimeZone@Globalization@Windows@@QEBA?AVApplicableRules@234@AEBUFixedDate@Calendars@34@_J01W4TimeZoneType@234@W4DisambiguateLocalTimeStrategy@234@@Z
    WindissectOpaque GetApplicableRules(WindissectOpaque const &, int64_t, WindissectOpaque const &, int64_t, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@TimeZoneRule@TimeZone@Globalization@Windows@@QEBA_NUFixedDate@Calendars@34@_JW4TimeZoneType@234@@Z
    bool IsValid(WindissectOpaque, int64_t, int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TimeZoneRule@TimeZone@Globalization@Windows@@QEAA@$$QEAV0123@@Z
    TimeZoneRule(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TimeZoneRule@TimeZone@Globalization@Windows@@QEAA@XZ
    ~TimeZoneRule();
};
} // namespace Windows::Globalization::TimeZone
