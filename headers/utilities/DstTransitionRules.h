#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 3 member(s).
namespace Windows::Globalization::TimeZone {
class DstTransitionRules {
public:
    class TransitionFinder;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicableRules@DstTransitionRules@TimeZone@Globalization@Windows@@QEBA?AVApplicableRules@234@AEBUFixedDate@Calendars@34@_J01W4TimeZoneType@234@HW4DisambiguateLocalTimeStrategy@234@@Z
    WindissectOpaque GetApplicableRules(WindissectOpaque const &, int64_t, WindissectOpaque const &, int64_t, int, int, int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DstTransitionRules@TimeZone@Globalization@Windows@@QEAA@XZ
    ~DstTransitionRules();
};
} // namespace Windows::Globalization::TimeZone
