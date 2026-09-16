#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 5 member(s).
namespace Windows::Globalization::NumberFormatting {
class DecimalFormatterFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@DecimalFormatterFactory@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDecimalFormatter@DecimalFormatterFactory@NumberFormatting@Globalization@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAUHSTRING__@@PEAPEAUINumberFormatter@234@@Z
    virtual long CreateDecimalFormatter(WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DecimalFormatterFactory@NumberFormatting@Globalization@Windows@@QEAA@XZ
    DecimalFormatterFactory();
};
} // namespace Windows::Globalization::NumberFormatting
