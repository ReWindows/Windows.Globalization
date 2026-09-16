#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 21 member(s).
namespace Windows::Globalization {
class CurrencyAmountServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CurrencyAmountServer@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CurrencyAmountServer@Globalization@Windows@@QEAA@XZ
    CurrencyAmountServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CurrencyAmountServer@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CurrencyAmountServer@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CurrencyAmountServer@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CurrencyAmountServer@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CurrencyAmountServer@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CurrencyAmountServer@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CurrencyAmountServer@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Amount@CurrencyAmountServer@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Amount(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Currency@CurrencyAmountServer@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Currency(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CurrencyAmountServer@Globalization@Windows@@UEAA@XZ
    virtual ~CurrencyAmountServer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCurrencyAmount@CurrencyAmountServer@Globalization@Windows@@AEAAJPEAUHSTRING__@@0@Z
    long ValidateCurrencyAmount(HSTRING__*, HSTRING__*);
};
} // namespace Windows::Globalization
