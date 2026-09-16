#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 8 member(s).
namespace Windows::Globalization::TimeZone {
class LegacyWindowsTimeZone {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAllTransitionsOnTheHour@LegacyWindowsTimeZone@TimeZone@Globalization@Windows@@UEBA_NXZ
    virtual bool AreAllTransitionsOnTheHour() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextOrThisTransition@LegacyWindowsTimeZone@TimeZone@Globalization@Windows@@UEBA?AUTransition@234@AEBUFixedDate@Calendars@34@_J@Z
    virtual WindissectOpaque GetNextOrThisTransition(WindissectOpaque const &, int64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousOrThisTransition@LegacyWindowsTimeZone@TimeZone@Globalization@Windows@@UEBA?AUTransition@234@AEBUFixedDate@Calendars@34@_J@Z
    virtual WindissectOpaque GetPreviousOrThisTransition(WindissectOpaque const &, int64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeZoneInformationForLocalGregorianYear@LegacyWindowsTimeZone@TimeZone@Globalization@Windows@@QEBAAEBVTimeZoneInformation@234@H@Z
    WindissectOpaque const & GetTimeZoneInformationForLocalGregorianYear(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTimeZone@LegacyWindowsTimeZone@TimeZone@Globalization@Windows@@QEAAXAEAU_TIME_DYNAMIC_ZONE_INFORMATION@@@Z
    void InitializeTimeZone(_TIME_DYNAMIC_ZONE_INFORMATION &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UtcFromLocal@LegacyWindowsTimeZone@TimeZone@Globalization@Windows@@UEBA?AUDateTime@Foundation@4@AEBU564@W4DisambiguateLocalTimeStrategy@234@@Z
    virtual WindissectOpaque UtcFromLocal(WindissectOpaque const &, int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LegacyWindowsTimeZone@TimeZone@Globalization@Windows@@QEAA@XZ
    ~LegacyWindowsTimeZone();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitOnceCallback@LegacyWindowsTimeZone@TimeZone@Globalization@Windows@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int InitOnceCallback(_RTL_RUN_ONCE *, void *, void * *);
};
} // namespace Windows::Globalization::TimeZone
