#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 23 member(s).
namespace Windows::System::UserProfile {
class GlobalizationPreferencesForUser {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GlobalizationPreferencesForUser@UserProfile@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GlobalizationPreferencesForUser@UserProfile@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GlobalizationPreferencesForUser@UserProfile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GlobalizationPreferencesForUser@UserProfile@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GlobalizationPreferencesForUser@UserProfile@System@Windows@@QEAA@XZ
    GlobalizationPreferencesForUser();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GlobalizationPreferencesForUser@UserProfile@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GlobalizationPreferencesForUser@UserProfile@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Calendars@GlobalizationPreferencesForUser@UserProfile@System@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Calendars(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Clocks@GlobalizationPreferencesForUser@UserProfile@System@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Clocks(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Currencies@GlobalizationPreferencesForUser@UserProfile@System@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Currencies(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HomeGeographicRegion@GlobalizationPreferencesForUser@UserProfile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HomeGeographicRegion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Languages@GlobalizationPreferencesForUser@UserProfile@System@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Languages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@GlobalizationPreferencesForUser@UserProfile@System@Windows@@UEAAJPEAPEAUIUser@34@@Z
    virtual long get_User(::Windows::System::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WeekStartsOn@GlobalizationPreferencesForUser@UserProfile@System@Windows@@UEAAJPEAW4DayOfWeek@Globalization@4@@Z
    virtual long get_WeekStartsOn(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GlobalizationPreferencesForUser@UserProfile@System@Windows@@UEAA@XZ
    virtual ~GlobalizationPreferencesForUser();
};
} // namespace Windows::System::UserProfile
