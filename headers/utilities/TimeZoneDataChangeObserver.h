#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 2 member(s).
namespace Windows::Globalization::TimeZone {
class TimeZoneDataChangeObserver {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TimeZoneDataChangeObserver@TimeZone@Globalization@Windows@@QEAA@XZ
    TimeZoneDataChangeObserver();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TzWnfCallBack@TimeZoneDataChangeObserver@TimeZone@Globalization@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long TzWnfCallBack(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
};
} // namespace Windows::Globalization::TimeZone
