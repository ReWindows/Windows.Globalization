#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 1 member(s).
namespace Windows::Globalization {
class DateTimeFormatting {
public:
    class DateTimeFormatPattern;
    class DateTimeFormatter;
    class DateTimeFormatterFactory;
    class NlsDateTimeFormatPatternParser;
    class PatternResolver;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumTimeFormatsCallback@DateTimeFormatting@Globalization@Windows@@YAHPEAG_J@Z
    int EnumTimeFormatsCallback(unsigned short *, int64_t);
};
} // namespace Windows::Globalization
