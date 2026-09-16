#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 6 member(s).
namespace Windows::Globalization::TimeZone {
class TimeZone {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAllTransitionsOnTheHour@TimeZone@1Globalization@Windows@@UEBA_NXZ
    virtual bool AreAllTransitionsOnTheHour() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextOrThisTransition@TimeZone@1Globalization@Windows@@UEBA?AUTransition@123@AEBUFixedDate@Calendars@23@_J@Z
    virtual WindissectOpaque GetNextOrThisTransition(WindissectOpaque const &, int64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousOrThisTransition@TimeZone@1Globalization@Windows@@UEBA?AUTransition@123@AEBUFixedDate@Calendars@23@_J@Z
    virtual WindissectOpaque GetPreviousOrThisTransition(WindissectOpaque const &, int64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UtcFromLocal@TimeZone@1Globalization@Windows@@UEBA?AUDateTime@Foundation@3@AEBU453@W4DisambiguateLocalTimeStrategy@123@@Z
    virtual WindissectOpaque UtcFromLocal(WindissectOpaque const &, int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TimeZone@0Globalization@Windows@@QEAA@XZ
    ~TimeZone();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicableRules@TimeZone@1Globalization@Windows@@AEBA?AVApplicableRules@123@UFixedDate@Calendars@23@_JW4TimeZoneType@123@W4DisambiguateLocalTimeStrategy@123@@Z
    WindissectOpaque GetApplicableRules(WindissectOpaque, int64_t, int, int) const;
};
} // namespace Windows::Globalization::TimeZone
