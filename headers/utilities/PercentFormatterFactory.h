#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 5 member(s).
namespace Windows::Globalization::NumberFormatting {
class PercentFormatterFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PercentFormatterFactory@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePercentFormatter@PercentFormatterFactory@NumberFormatting@Globalization@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAUHSTRING__@@PEAPEAUINumberFormatter@234@@Z
    virtual long CreatePercentFormatter(WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PercentFormatterFactory@NumberFormatting@Globalization@Windows@@QEAA@XZ
    PercentFormatterFactory();
};
} // namespace Windows::Globalization::NumberFormatting
