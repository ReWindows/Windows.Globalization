#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 7 member(s).
namespace Windows::Globalization::NumberFormatting {
class NativeDecimalDigits {
public:
    class DigitMatcher;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromId@NativeDecimalDigits@NumberFormatting@Globalization@Windows@@SA?AV1234@PEBGAEBVLocaleIdentifiers@34@@Z
    static WindissectOpaque CreateFromId(unsigned short const *, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsArabicScript@NativeDecimalDigits@NumberFormatting@Globalization@Windows@@QEBA_NXZ
    bool IsArabicScript() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NativeDecimalDigits@NumberFormatting@Globalization@Windows@@QEAA@XZ
    NativeDecimalDigits();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NativeDecimalDigits@NumberFormatting@Globalization@Windows@@QEAA@XZ
    ~NativeDecimalDigits();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUnknownNumeralSystem@NativeDecimalDigits@NumberFormatting@Globalization@Windows@@CA_NPEBG@Z
    static bool IsUnknownNumeralSystem(unsigned short const *);
};
} // namespace Windows::Globalization::NumberFormatting
