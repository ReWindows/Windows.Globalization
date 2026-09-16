#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 48 member(s).
namespace Windows::System::UserProfile {
class GlobalizationPreferences {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@GlobalizationPreferences@UserProfile@System@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GlobalizationPreferences@UserProfile@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClocksImpl@GlobalizationPreferences@UserProfile@System@Windows@@SA?AV?$ComPtr@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@XZ
    static WindissectOpaque GetClocksImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultLanguages@GlobalizationPreferences@UserProfile@System@Windows@@SA?AV?$ComPtr@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@XZ
    static WindissectOpaque GetDefaultLanguages();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@GlobalizationPreferences@UserProfile@System@Windows@@UEAAJPEAUIUser@34@PEAPEAUIGlobalizationPreferencesForUser@234@@Z
    virtual long GetForUser(::Windows::System::IUser *, ::Windows::System::UserProfile::IGlobalizationPreferencesForUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GlobalizationPreferences@UserProfile@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GlobalizationPreferences@UserProfile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GlobalizationPreferences@UserProfile@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GlobalizationPreferences@UserProfile@System@Windows@@QEAA@XZ
    GlobalizationPreferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@GlobalizationPreferences@UserProfile@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@GlobalizationPreferences@UserProfile@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GlobalizationPreferences@UserProfile@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GlobalizationPreferences@UserProfile@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetHomeGeographicRegion@GlobalizationPreferences@UserProfile@System@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long TrySetHomeGeographicRegion(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetLanguages@GlobalizationPreferences@UserProfile@System@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAE@Z
    virtual long TrySetLanguages(WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Calendars@GlobalizationPreferences@UserProfile@System@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Calendars(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Clocks@GlobalizationPreferences@UserProfile@System@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Clocks(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Currencies@GlobalizationPreferences@UserProfile@System@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Currencies(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HomeGeographicRegion@GlobalizationPreferences@UserProfile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HomeGeographicRegion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Languages@GlobalizationPreferences@UserProfile@System@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Languages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WeekStartsOn@GlobalizationPreferences@UserProfile@System@Windows@@UEAAJPEAW4DayOfWeek@Globalization@4@@Z
    virtual long get_WeekStartsOn(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GlobalizationPreferences@UserProfile@System@Windows@@UEAA@XZ
    virtual ~GlobalizationPreferences();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeoIdEnumProc@GlobalizationPreferences@UserProfile@System@Windows@@CAHJ@Z
    static int GeoIdEnumProc(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSystemManagementCapability@GlobalizationPreferences@UserProfile@System@Windows@@CAJPEAE@Z
    static long HasSystemManagementCapability(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetMuiLanguage@GlobalizationPreferences@UserProfile@System@Windows@@CAJV?$ComPtr@U?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    static long TrySetMuiLanguage(WindissectOpaque);
};
} // namespace Windows::System::UserProfile
