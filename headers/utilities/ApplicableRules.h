#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 2 member(s).
namespace Windows::Globalization::TimeZone {
class ApplicableRules {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCombinedBaseAndDstOffsetInTicks@ApplicableRules@TimeZone@Globalization@Windows@@QEBA_JXZ
    int64_t GetCombinedBaseAndDstOffsetInTicks() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSaveInSeconds@ApplicableRules@TimeZone@Globalization@Windows@@QEBAHXZ
    int GetSaveInSeconds() const;
};
} // namespace Windows::Globalization::TimeZone
