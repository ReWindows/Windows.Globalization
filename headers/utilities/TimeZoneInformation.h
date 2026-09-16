#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 16 member(s).
namespace Windows::Globalization::TimeZone {
class TimeZoneInformation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAllTransitionsOnTheHour@TimeZoneInformation@TimeZone@Globalization@Windows@@QEBA_NXZ
    bool AreAllTransitionsOnTheHour() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBiasForFirstMomentOfNextYear@TimeZoneInformation@TimeZone@Globalization@Windows@@QEBAHH@Z
    int GetBiasForFirstMomentOfNextYear(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBiasForFirstMomentOfYear@TimeZoneInformation@TimeZone@Globalization@Windows@@QEBAHXZ
    int GetBiasForFirstMomentOfYear() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBiasForLastMomentOfPreviousYear@TimeZoneInformation@TimeZone@Globalization@Windows@@QEBAHH@Z
    int GetBiasForLastMomentOfPreviousYear(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBiasForLastMomentOfYear@TimeZoneInformation@TimeZone@Globalization@Windows@@QEBAHXZ
    int GetBiasForLastMomentOfYear() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBiasInTicks@TimeZoneInformation@TimeZone@Globalization@Windows@@QEBA_J_JW4DisambiguateLocalTimeStrategy@234@@Z
    int64_t GetBiasInTicks(int64_t, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDynamicTimeType@TimeZoneInformation@TimeZone@Globalization@Windows@@QEBA?AW4LegacyDynamicTimeType@234@_J@Z
    int GetDynamicTimeType(int64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYearEndUtc@TimeZoneInformation@TimeZone@Globalization@Windows@@QEBA?AUDateTime@Foundation@4@H@Z
    WindissectOpaque GetYearEndUtc(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYearStartUtc@TimeZoneInformation@TimeZone@Globalization@Windows@@QEBA?AUDateTime@Foundation@4@H@Z
    WindissectOpaque GetYearStartUtc(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAmbiguousTimeBetweenRulesOnTheHour@TimeZoneInformation@TimeZone@Globalization@Windows@@QEBA_NXZ
    bool IsAmbiguousTimeBetweenRulesOnTheHour() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDaylightSavingTime@TimeZoneInformation@TimeZone@Globalization@Windows@@QEBA_N_JW4DisambiguateLocalTimeStrategy@234@@Z
    bool IsDaylightSavingTime(int64_t, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInvalidTimeBetweenRulesOnTheHour@TimeZoneInformation@TimeZone@Globalization@Windows@@QEBA_NXZ
    bool IsInvalidTimeBetweenRulesOnTheHour() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TimeZoneInformation@TimeZone@Globalization@Windows@@QEAA@$$QEAU_TIME_ZONE_INFORMATION@@HHW4IsDynamicTimeDisabled@123@@Z
    TimeZoneInformation(_TIME_ZONE_INFORMATION &&, int, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TimeZoneInformation@TimeZone@Globalization@Windows@@QEAA@AEBU_TIME_DYNAMIC_ZONE_INFORMATION@@@Z
    TimeZoneInformation(_TIME_DYNAMIC_ZONE_INFORMATION const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionFromStandardToDaylightSavingAsUtcTimeInYear@TimeZoneInformation@TimeZone@Globalization@Windows@@QEBA_JH@Z
    int64_t TransitionFromStandardToDaylightSavingAsUtcTimeInYear(int) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fixup@TimeZoneInformation@TimeZone@Globalization@Windows@@CAXAEAU_TIME_ZONE_INFORMATION@@@Z
    static void Fixup(_TIME_ZONE_INFORMATION &);
};
} // namespace Windows::Globalization::TimeZone
