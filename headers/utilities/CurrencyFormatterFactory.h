#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 6 member(s).
namespace Windows::Globalization::NumberFormatting {
class CurrencyFormatterFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CurrencyFormatterFactory@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCurrencyFormatterCode@CurrencyFormatterFactory@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICurrencyFormatter@234@@Z
    virtual long CreateCurrencyFormatterCode(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCurrencyFormatterCodeContext@CurrencyFormatterFactory@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@0PEAPEAUICurrencyFormatter@234@@Z
    virtual long CreateCurrencyFormatterCodeContext(HSTRING__*, WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CurrencyFormatterFactory@NumberFormatting@Globalization@Windows@@QEAA@XZ
    CurrencyFormatterFactory();
};
} // namespace Windows::Globalization::NumberFormatting
