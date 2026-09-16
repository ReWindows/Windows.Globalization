#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 1 member(s).
namespace Windows::Globalization::TimeZone {
class ZonedTime {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeInTicks@ZonedTime@TimeZone@Globalization@Windows@@QEBA_JHHW4TimeZoneType@234@@Z
    int64_t GetTimeInTicks(int, int, int) const;
};
} // namespace Windows::Globalization::TimeZone
