#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 7 member(s).
namespace Windows::Globalization::Calendars {
class JapaneseEraInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JapaneseEraInfo@Calendars@Globalization@Windows@@QEAA@$$QEAU0123@@Z
    JapaneseEraInfo(WindissectOpaque &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JapaneseEraInfo@Calendars@Globalization@Windows@@QEAA@AEBU0123@@Z
    JapaneseEraInfo(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JapaneseEraInfo@Calendars@Globalization@Windows@@QEAA@XZ
    ~JapaneseEraInfo();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryParseEraDate@JapaneseEraInfo@Calendars@Globalization@Windows@@CA_NPEBG_KPEAU1234@@Z
    static bool TryParseEraDate(unsigned short const *, uint64_t, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryParseEraName@JapaneseEraInfo@Calendars@Globalization@Windows@@CA_NPEBG_KPEAU1234@@Z
    static bool TryParseEraName(unsigned short const *, uint64_t, WindissectOpaque *);
};
} // namespace Windows::Globalization::Calendars
