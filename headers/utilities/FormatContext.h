#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 11 member(s).
namespace Windows::Globalization {
class FormatContext {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBestSystemSupportedCalendarLocale@FormatContext@Globalization@Windows@@SA?AVLocaleIdentifiers@23@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@3@K@Z
    static WindissectOpaque GetBestSystemSupportedCalendarLocale(WindissectOpaque *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBestSystemSupportedLocale@FormatContext@Globalization@Windows@@SA?AVLocaleIdentifiers@23@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@3@@Z
    static WindissectOpaque GetBestSystemSupportedLocale(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClockFromFormat@FormatContext@Globalization@Windows@@SAPEBGPEBGK@Z
    static unsigned short const * GetClockFromFormat(unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultCalendarIdForLocale@FormatContext@Globalization@Windows@@SAKAEBVLocaleIdentifiers@23@@Z
    static unsigned long GetDefaultCalendarIdForLocale(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalePropertyAsInt@FormatContext@Globalization@Windows@@SAJPEBGKAEAH@Z
    static long GetLocalePropertyAsInt(unsigned short const *, unsigned long, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserDefaultCalendar@FormatContext@Globalization@Windows@@SAKXZ
    static unsigned long GetUserDefaultCalendar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocaleSupportsCalendar@FormatContext@Globalization@Windows@@SA_NPEBGK@Z
    static bool LocaleSupportsCalendar(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NormalizeResolvedLanguage@FormatContext@Globalization@Windows@@SA?AVHString@Wrappers@WRL@Microsoft@@AEBVLocaleIdentifiers@23@KPEBG@Z
    static ::Microsoft::WRL::Wrappers::HString NormalizeResolvedLanguage(WindissectOpaque const &, unsigned long, unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumLocalesProcEx@FormatContext@Globalization@Windows@@CAHPEAGK_J@Z
    static int EnumLocalesProcEx(unsigned short *, unsigned long, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitLocaleNames@FormatContext@Globalization@Windows@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int InitLocaleNames(_RTL_RUN_ONCE *, void *, void * *);
};
} // namespace Windows::Globalization
