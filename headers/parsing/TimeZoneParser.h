#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 7 member(s).
namespace Windows::Globalization::TimeZone {
class TimeZoneParser {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TimeZoneParser@TimeZone@Globalization@Windows@@QEAA@PEAUIStream@@@Z
    TimeZoneParser(IStream *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TimeZoneParser@TimeZone@Globalization@Windows@@QEAA@XZ
    ~TimeZoneParser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TimeZoneParser@TimeZone@Globalization@Windows@@AEAAXPEAUIStream@@@Z
    void Initialize(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadDst@TimeZoneParser@TimeZone@Globalization@Windows@@AEAA?AVDstTransitionRule@234@PEAUIXmlReader@@@Z
    WindissectOpaque ReadDst(IXmlReader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadTimeZoneInfo@TimeZoneParser@TimeZone@Globalization@Windows@@AEAAXPEAUIXmlReader@@@Z
    void ReadTimeZoneInfo(IXmlReader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadTzi@TimeZoneParser@TimeZone@Globalization@Windows@@AEAA?AVTimeZoneRule@234@PEAUIXmlReader@@@Z
    WindissectOpaque ReadTzi(IXmlReader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondsFromDurationString@TimeZoneParser@TimeZone@Globalization@Windows@@AEAAHPEBG@Z
    int SecondsFromDurationString(unsigned short const *);
};
} // namespace Windows::Globalization::TimeZone
