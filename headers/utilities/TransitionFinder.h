#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 11 member(s).
namespace Windows::Globalization::TimeZone::DstTransitionRules {
class TransitionFinder {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicableRule@TransitionFinder@DstTransitionRules@TimeZone@Globalization@Windows@@QEAAPEBVDstTransitionRule@345@AEBUFixedDate@Calendars@45@_J01W4TimeZoneType@345@HW4DisambiguateLocalTimeStrategy@345@@Z
    WindissectOpaque const * GetApplicableRule(WindissectOpaque const &, int64_t, WindissectOpaque const &, int64_t, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextOrThis@TransitionFinder@DstTransitionRules@TimeZone@Globalization@Windows@@QEAA?AUTransition@345@AEBUFixedDate@Calendars@45@_J01H@Z
    WindissectOpaque GetNextOrThis(WindissectOpaque const &, int64_t, WindissectOpaque const &, int64_t, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousOrThis@TransitionFinder@DstTransitionRules@TimeZone@Globalization@Windows@@QEAA?AUTransition@345@AEBUFixedDate@Calendars@45@_J01H@Z
    WindissectOpaque GetPreviousOrThis(WindissectOpaque const &, int64_t, WindissectOpaque const &, int64_t, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastDstOffset@TransitionFinder@DstTransitionRules@TimeZone@Globalization@Windows@@AEBAHHAEBUFixedDate@Calendars@45@_J01W4TimeZoneType@345@H@Z
    int GetLastDstOffset(int, WindissectOpaque const &, int64_t, WindissectOpaque const &, int64_t, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYear@TransitionFinder@DstTransitionRules@TimeZone@Globalization@Windows@@CAHAEBUFixedDate@Calendars@45@@Z
    static int GetYear(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicableNextTransition@TransitionFinder@DstTransitionRules@TimeZone@Globalization@Windows@@AEBA_NAEBUTransition@345@AEBUFixedDate@Calendars@45@_JH@Z
    bool IsApplicableNextTransition(WindissectOpaque const &, WindissectOpaque const &, int64_t, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicablePriorTransition@TransitionFinder@DstTransitionRules@TimeZone@Globalization@Windows@@AEBA_NAEBUTransition@345@AEBUFixedDate@Calendars@45@_J12H@Z
    bool IsApplicablePriorTransition(WindissectOpaque const &, WindissectOpaque const &, int64_t, WindissectOpaque const &, int64_t, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicableTransitionEvent@TransitionFinder@DstTransitionRules@TimeZone@Globalization@Windows@@AEBA_NAEBUTransition@345@W4DisambiguateLocalTimeStrategy@345@@Z
    bool IsApplicableTransitionEvent(WindissectOpaque const &, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIgnoredTransitionToStandard@TransitionFinder@DstTransitionRules@TimeZone@Globalization@Windows@@CA_NAEBUTransition@345@H@Z
    static bool IsIgnoredTransitionToStandard(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAsBestTransitionIfEarlier@TransitionFinder@DstTransitionRules@TimeZone@Globalization@Windows@@AEAAXAEBUTransition@345@@Z
    void SetAsBestTransitionIfEarlier(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAsBestTransitionIfLater@TransitionFinder@DstTransitionRules@TimeZone@Globalization@Windows@@AEAA_NAEBUTransition@345@@Z
    bool SetAsBestTransitionIfLater(WindissectOpaque const &);
};
} // namespace Windows::Globalization::TimeZone::DstTransitionRules
