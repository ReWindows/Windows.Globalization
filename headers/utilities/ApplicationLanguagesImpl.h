#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 2 member(s).
namespace Windows::Globalization {
class ApplicationLanguagesImpl {
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguagesImpl@ApplicationLanguagesImpl@Globalization@Windows@@IEAA?AV?$ComPtr@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@PEBG@Z
    WindissectOpaque GetLanguagesImpl(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Languages@ApplicationLanguagesImpl@Globalization@Windows@@IEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@3@@Z
    long get_Languages(WindissectOpaque * *);
};
} // namespace Windows::Globalization
