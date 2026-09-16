#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 15 member(s).
namespace Windows::Globalization::DateTimeFormatting {
class DateTimeFormatterFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@DateTimeFormatterFactory@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDateTimeFormatter@DateTimeFormatterFactory@DateTimeFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIDateTimeFormatter@234@@Z
    virtual long CreateDateTimeFormatter(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDateTimeFormatterContext@DateTimeFormatterFactory@DateTimeFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@000PEAPEAUIDateTimeFormatter@234@@Z
    virtual long CreateDateTimeFormatterContext(HSTRING__*, WindissectOpaque *, HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDateTimeFormatterDate@DateTimeFormatterFactory@DateTimeFormatting@Globalization@Windows@@UEAAJW4YearFormat@234@W4MonthFormat@234@W4DayFormat@234@W4DayOfWeekFormat@234@PEAPEAUIDateTimeFormatter@234@@Z
    virtual long CreateDateTimeFormatterDate(int, int, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDateTimeFormatterDateTimeContext@DateTimeFormatterFactory@DateTimeFormatting@Globalization@Windows@@UEAAJW4YearFormat@234@W4MonthFormat@234@W4DayFormat@234@W4DayOfWeekFormat@234@W4HourFormat@234@W4MinuteFormat@234@W4SecondFormat@234@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAUHSTRING__@@88PEAPEAUIDateTimeFormatter@234@@Z
    virtual long CreateDateTimeFormatterDateTimeContext(int, int, int, int, int, int, int, WindissectOpaque *, HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDateTimeFormatterDateTimeLanguages@DateTimeFormatterFactory@DateTimeFormatting@Globalization@Windows@@UEAAJW4YearFormat@234@W4MonthFormat@234@W4DayFormat@234@W4DayOfWeekFormat@234@W4HourFormat@234@W4MinuteFormat@234@W4SecondFormat@234@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAPEAUIDateTimeFormatter@234@@Z
    virtual long CreateDateTimeFormatterDateTimeLanguages(int, int, int, int, int, int, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDateTimeFormatterLanguages@DateTimeFormatterFactory@DateTimeFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAPEAUIDateTimeFormatter@234@@Z
    virtual long CreateDateTimeFormatterLanguages(HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDateTimeFormatterTime@DateTimeFormatterFactory@DateTimeFormatting@Globalization@Windows@@UEAAJW4HourFormat@234@W4MinuteFormat@234@W4SecondFormat@234@PEAPEAUIDateTimeFormatter@234@@Z
    virtual long CreateDateTimeFormatterTime(int, int, int, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DateTimeFormatterFactory@DateTimeFormatting@Globalization@Windows@@QEAA@XZ
    DateTimeFormatterFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LongDate@DateTimeFormatterFactory@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUIDateTimeFormatter@234@@Z
    virtual long get_LongDate(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LongTime@DateTimeFormatterFactory@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUIDateTimeFormatter@234@@Z
    virtual long get_LongTime(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShortDate@DateTimeFormatterFactory@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUIDateTimeFormatter@234@@Z
    virtual long get_ShortDate(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShortTime@DateTimeFormatterFactory@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUIDateTimeFormatter@234@@Z
    virtual long get_ShortTime(WindissectOpaque * *);
};
} // namespace Windows::Globalization::DateTimeFormatting
