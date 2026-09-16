#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 40 member(s).
namespace Windows::Globalization::Collation {
class CharacterGroupings {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CharacterGroupings@Collation@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CharacterGroupings@Collation@Globalization@Windows@@QEAA@XZ
    CharacterGroupings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CharacterGroupings@Collation@Globalization@Windows@@SA?AV?$ComPtr@VCharacterGroupings@Collation@Globalization@Windows@@@WRL@Microsoft@@QEAUHSTRING__@@PEBUGroupingLetters@234@@Z
    static WindissectOpaque Create(HSTRING__* const, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@CharacterGroupings@Collation@Globalization@Windows@@UEAAJPEAPEAU?$IIterator@PEAVCharacterGrouping@Collation@Globalization@Windows@@@Collections@Foundation@4@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CharacterGroupings@Collation@Globalization@Windows@@UEAAJIPEAPEAUICharacterGrouping@234@@Z
    virtual long GetAt(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CharacterGroupings@Collation@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@CharacterGroupings@Collation@Globalization@Windows@@UEAAJIIPEAPEAUICharacterGrouping@234@PEAI@Z
    virtual long GetMany(unsigned int, unsigned int, WindissectOpaque * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CharacterGroupings@Collation@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CharacterGroupings@Collation@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@CharacterGroupings@Collation@Globalization@Windows@@UEAAJPEAUICharacterGrouping@234@PEAIPEAE@Z
    virtual long IndexOf(WindissectOpaque *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CharacterGroupings@Collation@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CharacterGroupings@Collation@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@CharacterGroupings@Collation@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU5@@Z
    virtual long Lookup(HSTRING__*, HSTRING__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CharacterGroupings@Collation@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CharacterGroupings@Collation@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CharacterGroupings@Collation@Globalization@Windows@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CharacterGroupings@Collation@Globalization@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CharacterGroupings@Collation@Globalization@Windows@@UEAA@XZ
    virtual ~CharacterGroupings();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCharacterGroupingVector@CharacterGroupings@Collation@Globalization@Windows@@CA?AV?$ComPtr@V?$AgileVector@PEAVCharacterGrouping@Collation@Globalization@Windows@@U?$DefaultEqualityPredicate@PEAVCharacterGrouping@Collation@Globalization@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCharacterGrouping@Collation@Globalization@Windows@@@6784@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@AEBUGroupingLetters@234@@Z
    static WindissectOpaque CreateCharacterGroupingVector(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupingLettersDefaultImpl@CharacterGroupings@Collation@Globalization@Windows@@CA?AUGroupingLetters@234@PEBG@Z
    static WindissectOpaque GetGroupingLettersDefaultImpl(unsigned short const *);
};
} // namespace Windows::Globalization::Collation
