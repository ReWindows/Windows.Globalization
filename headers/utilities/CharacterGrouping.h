#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 20 member(s).
namespace Windows::Globalization::Collation {
class CharacterGrouping {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CharacterGrouping@Collation@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CharacterGrouping@Collation@Globalization@Windows@@QEAA@PEAUHSTRING__@@0@Z
    CharacterGrouping(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CharacterGrouping@Collation@Globalization@Windows@@SA?AV?$ComPtr@VCharacterGrouping@Collation@Globalization@Windows@@@WRL@Microsoft@@PEBG0@Z
    static WindissectOpaque Create(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharacterGroupDisplayName@CharacterGrouping@Collation@Globalization@Windows@@SAPEBGPEBG@Z
    static unsigned short const * GetCharacterGroupDisplayName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CharacterGrouping@Collation@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CharacterGrouping@Collation@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CharacterGrouping@Collation@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CharacterGrouping@Collation@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CharacterGrouping@Collation@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_First@CharacterGrouping@Collation@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_First(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Label@CharacterGrouping@Collation@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Label(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CharacterGrouping@Collation@Globalization@Windows@@UEAA@XZ
    virtual ~CharacterGrouping();
};
} // namespace Windows::Globalization::Collation
