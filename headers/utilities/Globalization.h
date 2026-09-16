#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 3 member(s).
namespace Windows {
class Globalization {
public:
    class ApplicationLanguages;
    class ApplicationLanguagesBrokered;
    class ApplicationLanguagesImpl;
    class Calendar;
    class CalendarFactory;
    class CalendarIdentifiers;
    class ClockIdentifiers;
    class Currency;
    class CurrencyAmountFactory;
    class CurrencyAmountServer;
    class CurrencyIdentifiers;
    class DateTimeDecimalFormatter;
    class DateTimeFormatting;
    class FormatContext;
    class GeographicRegion;
    class GeographicRegionFactory;
    class Language;
    class LanguageFactory;
    class LanguageTraceLoggingProvider;
    class LocaleIdentifiers;
    class NumberFormatting;
    class NumeralSystemIdentifiers;
    class Strategies;
    class TimeZone;
    class UnicodeExtensions;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext2CharacterSubTag@Globalization@Windows@@YAPEBGPEBG@Z
    unsigned short const * FindNext2CharacterSubTag(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCalendarPropertyCallback@Globalization@Windows@@YAHPEAGK0_J@Z
    int GetCalendarPropertyCallback(unsigned short *, unsigned long, unsigned short *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimeAsNanosecondsFromTimeAsTicks@Globalization@Windows@@YA_J_J@Z
    int64_t TimeAsNanosecondsFromTimeAsTicks(int64_t);
};
} // namespace Windows
