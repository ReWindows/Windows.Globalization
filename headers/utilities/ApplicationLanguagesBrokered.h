#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 25 member(s).
namespace Windows::Globalization {
class ApplicationLanguagesBrokered {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ApplicationLanguagesBrokered@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ApplicationLanguagesBrokered@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationLanguagesBrokered@Globalization@Windows@@QEAA@XZ
    ApplicationLanguagesBrokered();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ApplicationLanguagesBrokered@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ApplicationLanguagesBrokered@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ApplicationLanguagesBrokered@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ApplicationLanguagesBrokered@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@ApplicationLanguagesBrokered@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ApplicationLanguagesBrokered@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ApplicationLanguagesBrokered@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Languages@ApplicationLanguagesBrokered@Globalization@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@3@@Z
    virtual long get_Languages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ManifestLanguages@ApplicationLanguagesBrokered@Globalization@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@3@@Z
    virtual long get_ManifestLanguages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryLanguageOverride@ApplicationLanguagesBrokered@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PrimaryLanguageOverride(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PrimaryLanguageOverride@ApplicationLanguagesBrokered@Globalization@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PrimaryLanguageOverride(HSTRING__*);
};
} // namespace Windows::Globalization
