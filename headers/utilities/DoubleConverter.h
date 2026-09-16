#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 7 member(s).
namespace Windows::Globalization::NumberFormatting {
class DoubleConverter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DigitsToDouble@DoubleConverter@NumberFormatting@Globalization@Windows@@SANPEBDH_N@Z
    static double DigitsToDouble(char const *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpackDouble@DoubleConverter@NumberFormatting@Globalization@Windows@@SAXNW4RoundedState@234@W4IsZeroSigned@234@PEADPEAH3@Z
    static void UnpackDouble(double, int, int, char *, int *, int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DigitsToInt32@DoubleConverter@NumberFormatting@Globalization@Windows@@CAIPEBDH@Z
    static unsigned int DigitsToInt32(char const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DigitsToUnnormalizedSignificand@DoubleConverter@NumberFormatting@Globalization@Windows@@CA_KPEBDPEAH@Z
    static uint64_t DigitsToUnnormalizedSignificand(char const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NormalizeSignificand@DoubleConverter@NumberFormatting@Globalization@Windows@@CA_K_K_NH@Z
    static uint64_t NormalizeSignificand(uint64_t, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveSpecialCases@DoubleConverter@NumberFormatting@Globalization@Windows@@CA_K_KH@Z
    static uint64_t ResolveSpecialCases(uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundDigits@DoubleConverter@NumberFormatting@Globalization@Windows@@CAXPEADHW4IsZeroSigned@234@PEAH2@Z
    static void RoundDigits(char *, int, int, int *, int *);
};
} // namespace Windows::Globalization::NumberFormatting
