#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 20 member(s).
namespace Windows::Globalization {
class CurrencyAmountFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CurrencyAmountFactory@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CurrencyAmountFactory@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CurrencyAmountFactory@Globalization@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUICurrencyAmount@23@@Z
    virtual long Create(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CurrencyAmountFactory@Globalization@Windows@@QEAA@XZ
    CurrencyAmountFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CurrencyAmountFactory@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CurrencyAmountFactory@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CurrencyAmountFactory@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CurrencyAmountFactory@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CurrencyAmountFactory@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Globalization
