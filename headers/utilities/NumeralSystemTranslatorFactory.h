#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 5 member(s).
namespace Windows::Globalization::NumberFormatting {
class NumeralSystemTranslatorFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@NumeralSystemTranslatorFactory@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@NumeralSystemTranslatorFactory@NumberFormatting@Globalization@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAPEAUINumeralSystemTranslator@234@@Z
    virtual long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NumeralSystemTranslatorFactory@NumberFormatting@Globalization@Windows@@QEAA@XZ
    NumeralSystemTranslatorFactory();
};
} // namespace Windows::Globalization::NumberFormatting
