#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 6 member(s).
namespace Windows::Globalization {
class GeographicRegionFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@GeographicRegionFactory@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGeographicRegion@GeographicRegionFactory@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIGeographicRegion@23@@Z
    virtual long CreateGeographicRegion(HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GeographicRegionFactory@Globalization@Windows@@QEAA@XZ
    GeographicRegionFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@GeographicRegionFactory@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsSupported(HSTRING__*, unsigned char *);
};
} // namespace Windows::Globalization
