#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 25 member(s).
namespace Windows::Globalization::DateTimeFormatting {
class PatternResolver {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PatternResolver@DateTimeFormatting@Globalization@Windows@@QEAA@XZ
    ~PatternResolver();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAbbreviatedDayOfWeekToken@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEBA_NXZ
    bool IsAbbreviatedDayOfWeekToken() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAbbreviatedMonthToken@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEBA_NXZ
    bool IsAbbreviatedMonthToken() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAbbreviatedYearToken@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEBA_NXZ
    bool IsAbbreviatedYearToken() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDayToken@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEBA_NXZ
    bool IsDayToken() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullDayOfWeekToken@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEBA_NXZ
    bool IsFullDayOfWeekToken() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullMonthToken@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEBA_NXZ
    bool IsFullMonthToken() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullYearToken@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEBA_NXZ
    bool IsFullYearToken() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHourToken@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEBA_NXZ
    bool IsHourToken() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIntegerMonthToken@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEBA_NXZ
    bool IsIntegerMonthToken() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMinuteToken@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEBA_NXZ
    bool IsMinuteToken() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSecondToken@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEBA_NXZ
    bool IsSecondToken() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMatchAbbreviatedDayOfWeek@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEAA?AW4PatternMatchMode@1234@XZ
    int TryMatchAbbreviatedDayOfWeek();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMatchAbbreviatedMonth@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEAA?AW4PatternMatchMode@1234@XZ
    int TryMatchAbbreviatedMonth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMatchAbbreviatedYear@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEAA?AW4PatternMatchMode@1234@XZ
    int TryMatchAbbreviatedYear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMatchDay@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEAA?AW4PatternMatchMode@1234@XZ
    int TryMatchDay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMatchFullDayOfWeek@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEAA?AW4PatternMatchMode@1234@XZ
    int TryMatchFullDayOfWeek();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMatchFullMonth@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEAA?AW4PatternMatchMode@1234@XZ
    int TryMatchFullMonth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMatchFullYear@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEAA?AW4PatternMatchMode@1234@XZ
    int TryMatchFullYear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMatchHour@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEAA?AW4PatternMatchMode@1234@XZ
    int TryMatchHour();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMatchIntegerMonth@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEAA?AW4PatternMatchMode@1234@XZ
    int TryMatchIntegerMonth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMatchLiteral@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEAA?AW4PatternMatchMode@1234@XZ
    int TryMatchLiteral();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMatchMinute@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEAA?AW4PatternMatchMode@1234@XZ
    int TryMatchMinute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMatchSecond@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEAA?AW4PatternMatchMode@1234@XZ
    int TryMatchSecond();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryProcessToken@PatternResolver@DateTimeFormatting@Globalization@Windows@@AEAA?AW4PatternMatchMode@1234@XZ
    int TryProcessToken();
};
} // namespace Windows::Globalization::DateTimeFormatting
