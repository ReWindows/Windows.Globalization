#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 45 member(s).
namespace Windows::Globalization {
class Language {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Language@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionSubtags@Language@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@3@@Z
    virtual long GetExtensionSubtags(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@Language@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@Language@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Language@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@Language@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@Language@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWellFormed@Language@Globalization@Windows@@SA_NPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@3@@Z
    static bool IsWellFormed(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWellFormed@Language@Globalization@Windows@@SA_NPEAUHSTRING__@@@Z
    static bool IsWellFormed(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Language@Globalization@Windows@@QEAA@XZ
    Language();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Language@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Language@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AbbreviatedName@Language@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AbbreviatedName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@Language@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LanguageTag@Language@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_LanguageTag(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LayoutDirection@Language@Globalization@Windows@@UEAAJPEAW4LanguageLayoutDirection@23@@Z
    virtual long get_LayoutDirection(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NativeName@Language@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_NativeName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Script@Language@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Script(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Language@Globalization@Windows@@UEAA@XZ
    virtual ~Language();
};
} // namespace Windows::Globalization
