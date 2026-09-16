#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 5 member(s).
namespace Windows::Globalization::NumberFormatting {
class PermilleFormatterFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PermilleFormatterFactory@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePermilleFormatter@PermilleFormatterFactory@NumberFormatting@Globalization@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAUHSTRING__@@PEAPEAUINumberFormatter@234@@Z
    virtual long CreatePermilleFormatter(WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PermilleFormatterFactory@NumberFormatting@Globalization@Windows@@QEAA@XZ
    PermilleFormatterFactory();
};
} // namespace Windows::Globalization::NumberFormatting
