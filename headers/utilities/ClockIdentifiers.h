#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 23 member(s).
namespace Windows::Globalization {
class ClockIdentifiers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ClockIdentifiers@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ClockIdentifiers@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ClockIdentifiers@Globalization@Windows@@QEAA@XZ
    ClockIdentifiers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ClockIdentifiers@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ClockIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ClockIdentifiers@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ClockIdentifiers@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@ClockIdentifiers@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ClockIdentifiers@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ClockIdentifiers@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TwelveHour@ClockIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TwelveHour(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TwentyFourHour@ClockIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TwentyFourHour(HSTRING__* *);
};
} // namespace Windows::Globalization
