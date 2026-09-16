#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 5 member(s).
namespace Windows::Globalization::TimeZone {
class DstTransitionRule {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppliesToYear@DstTransitionRule@TimeZone@Globalization@Windows@@QEBA_NH@Z
    bool AppliesToYear(int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DstTransitionRule@TimeZone@Globalization@Windows@@QEAA@$$QEAV0123@@Z
    DstTransitionRule(WindissectOpaque &&);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBeginTransition@DstTransitionRule@TimeZone@Globalization@Windows@@QEBA?AUTransition@234@HW4TimeZoneType@234@HH@Z
    WindissectOpaque GetBeginTransition(int, int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndTransition@DstTransitionRule@TimeZone@Globalization@Windows@@QEBA?AUTransition@234@HW4TimeZoneType@234@HH@Z
    WindissectOpaque GetEndTransition(int, int, int, int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DstTransitionRule@TimeZone@Globalization@Windows@@QEAA@XZ
    ~DstTransitionRule();
};
} // namespace Windows::Globalization::TimeZone
