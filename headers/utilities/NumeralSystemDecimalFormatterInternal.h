#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 51 member(s).
namespace Windows::Globalization::NumberFormatting {
class NumeralSystemDecimalFormatterInternal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NumeralSystemDecimalFormatterInternal@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@NumeralSystemDecimalFormatterInternal@NumberFormatting@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@NumeralSystemDecimalFormatterInternal@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@NumeralSystemDecimalFormatterInternal@NumberFormatting@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NumeralSystemDecimalFormatterInternal@NumberFormatting@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NumeralSystemDecimalFormatterInternal@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFormatString@NumeralSystemDecimalFormatterInternal@NumberFormatting@Globalization@Windows@@EEAAXPEBG0@Z
    virtual void InitializeFormatString(unsigned short const *, unsigned short const *);
};
} // namespace Windows::Globalization::NumberFormatting
