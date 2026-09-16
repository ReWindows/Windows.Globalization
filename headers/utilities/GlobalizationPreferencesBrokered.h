#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 42 member(s).
namespace Windows::System::UserProfile {
class GlobalizationPreferencesBrokered {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAJPEAUIUser@34@PEAPEAUIGlobalizationPreferencesForUser@234@@Z
    virtual long GetForUser(::Windows::System::IUser *, ::Windows::System::UserProfile::IGlobalizationPreferencesForUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetHomeGeographicRegion@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long TrySetHomeGeographicRegion(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetLanguages@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAE@Z
    virtual long TrySetLanguages(WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Calendars@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Calendars(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Clocks@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Clocks(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Currencies@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Currencies(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HomeGeographicRegion@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HomeGeographicRegion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Languages@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Languages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WeekStartsOn@GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAAJPEAW4DayOfWeek@Globalization@4@@Z
    virtual long get_WeekStartsOn(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GlobalizationPreferencesBrokered@UserProfile@System@Windows@@UEAA@XZ
    virtual ~GlobalizationPreferencesBrokered();
};
} // namespace Windows::System::UserProfile
