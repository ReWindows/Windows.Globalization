#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 2 member(s).
namespace Windows::Data::Text {
class WordBreakStartPositionFinder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@WordBreakStartPositionFinder@Text@Data@Windows@@SA_KPEBG_K@Z
    static uint64_t Find(unsigned short const *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKnownWordBoundary@WordBreakStartPositionFinder@Text@Data@Windows@@SA_NPEBG_K@Z
    static bool IsKnownWordBoundary(unsigned short const *, uint64_t);
};
} // namespace Windows::Data::Text
