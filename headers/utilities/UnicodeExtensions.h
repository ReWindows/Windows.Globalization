#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 4 member(s).
namespace Windows::Globalization {
class UnicodeExtensions {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWellFormed@UnicodeExtensions@Globalization@Windows@@SA_NPEBG@Z
    static bool IsWellFormed(unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnicodeExtensions@Globalization@Windows@@QEAA@PEBG@Z
    UnicodeExtensions(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnicodeExtensions@Globalization@Windows@@QEAA@XZ
    ~UnicodeExtensions();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextHyphen@UnicodeExtensions@Globalization@Windows@@CAQEBGPEBG@Z
    static unsigned short const * const NextHyphen(unsigned short const *);
};
} // namespace Windows::Globalization
