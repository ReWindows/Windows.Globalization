#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 10 member(s).
namespace Windows::System::UserProfile {
class GlobalizationPreferencesBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWeekStartsOnImpl@GlobalizationPreferencesBase@UserProfile@System@Windows@@QEAA?AW4DayOfWeek@Globalization@4@XZ
    int GetWeekStartsOnImpl();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GlobalizationPreferencesBase@UserProfile@System@Windows@@QEAA@XZ
    GlobalizationPreferencesBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Calendars@GlobalizationPreferencesBase@UserProfile@System@Windows@@QEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    long get_Calendars(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Clocks@GlobalizationPreferencesBase@UserProfile@System@Windows@@QEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    long get_Clocks(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Currencies@GlobalizationPreferencesBase@UserProfile@System@Windows@@QEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    long get_Currencies(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HomeGeographicRegion@GlobalizationPreferencesBase@UserProfile@System@Windows@@QEAAJPEAPEAUHSTRING__@@@Z
    long get_HomeGeographicRegion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Languages@GlobalizationPreferencesBase@UserProfile@System@Windows@@QEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    long get_Languages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WeekStartsOn@GlobalizationPreferencesBase@UserProfile@System@Windows@@QEAAJPEAW4DayOfWeek@Globalization@4@@Z
    long get_WeekStartsOn(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GlobalizationPreferencesBase@UserProfile@System@Windows@@QEAA@XZ
    ~GlobalizationPreferencesBase();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserWeekStartsOnDefaultImpl@GlobalizationPreferencesBase@UserProfile@System@Windows@@CAHXZ
    static int GetUserWeekStartsOnDefaultImpl();
};
} // namespace Windows::System::UserProfile
