#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 6 member(s).
namespace Windows::Globalization::TimeZone {
class TimeZoneCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultGetTimeZonesStream@TimeZoneCache@TimeZone@Globalization@Windows@@SA?AV?$ComPtr@UIStream@@@WRL@Microsoft@@XZ
    static WindissectOpaque DefaultGetTimeZonesStream();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdMapper@TimeZoneCache@TimeZone@Globalization@Windows@@UEBAAEBVTimeZoneIdMapping@234@XZ
    virtual WindissectOpaque const & GetIdMapper() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TimeZoneCache@TimeZone@Globalization@Windows@@QEAA@XZ
    TimeZoneCache();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TimeZoneCache@TimeZone@Globalization@Windows@@QEAA@XZ
    ~TimeZoneCache();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitOnceCallback@TimeZoneCache@TimeZone@Globalization@Windows@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int InitOnceCallback(_RTL_RUN_ONCE *, void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTzDatabaseIds@TimeZoneCache@TimeZone@Globalization@Windows@@AEBAXPEAUIStream@@@Z
    void InitializeTzDatabaseIds(IStream *) const;
};
} // namespace Windows::Globalization::TimeZone
