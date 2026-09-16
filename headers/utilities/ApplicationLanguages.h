#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 33 member(s).
namespace Windows::Globalization {
class ApplicationLanguages {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ApplicationLanguages@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ApplicationLanguages@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationLanguages@Globalization@Windows@@QEAA@XZ
    ApplicationLanguages();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ApplicationLanguages@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguagesForUser@ApplicationLanguages@Globalization@Windows@@UEAAJPEAUIUser@System@3@PEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@3@@Z
    virtual long GetLanguagesForUser(::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ApplicationLanguages@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ApplicationLanguages@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ApplicationLanguages@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@ApplicationLanguages@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ApplicationLanguages@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ApplicationLanguages@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Languages@ApplicationLanguages@Globalization@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@3@@Z
    virtual long get_Languages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ManifestLanguages@ApplicationLanguages@Globalization@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@3@@Z
    virtual long get_ManifestLanguages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryLanguageOverride@ApplicationLanguages@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PrimaryLanguageOverride(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PrimaryLanguageOverride@ApplicationLanguages@Globalization@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PrimaryLanguageOverride(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationLanguages@Globalization@Windows@@UEAA@XZ
    virtual ~ApplicationLanguages();
};
} // namespace Windows::Globalization
