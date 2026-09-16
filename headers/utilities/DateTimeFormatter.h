#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 74 member(s).
namespace Windows::Globalization::DateTimeFormatting {
class DateTimeFormatter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@SA?AV?$ComPtr@UIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@WRL@Microsoft@@PEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    static WindissectOpaque Create(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@SA?AV?$ComPtr@UIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@WRL@Microsoft@@PEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@000@Z
    static WindissectOpaque Create(HSTRING__*, WindissectOpaque *, HSTRING__*, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@SA?AV?$ComPtr@UIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@WRL@Microsoft@@PEAUHSTRING__@@@Z
    static WindissectOpaque Create(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@SA?AV?$ComPtr@UIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@WRL@Microsoft@@W4YearFormat@234@W4MonthFormat@234@W4DayFormat@234@W4DayOfWeekFormat@234@W4HourFormat@234@W4MinuteFormat@234@W4SecondFormat@234@@Z
    static WindissectOpaque Create(int, int, int, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@SA?AV?$ComPtr@UIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@WRL@Microsoft@@W4YearFormat@234@W4MonthFormat@234@W4DayFormat@234@W4DayOfWeekFormat@234@W4HourFormat@234@W4MinuteFormat@234@W4SecondFormat@234@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    static WindissectOpaque Create(int, int, int, int, int, int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@SA?AV?$ComPtr@UIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@WRL@Microsoft@@W4YearFormat@234@W4MonthFormat@234@W4DayFormat@234@W4DayOfWeekFormat@234@W4HourFormat@234@W4MinuteFormat@234@W4SecondFormat@234@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAUHSTRING__@@88@Z
    static WindissectOpaque Create(int, int, int, int, int, int, int, WindissectOpaque *, HSTRING__*, HSTRING__*, HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@QEAA@XZ
    DateTimeFormatter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJUDateTime@Foundation@4@PEAPEAUHSTRING__@@@Z
    virtual long Format(WindissectOpaque, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatUsingTimeZone@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJUDateTime@Foundation@4@PEAUHSTRING__@@PEAPEAU7@@Z
    virtual long FormatUsingTimeZone(WindissectOpaque, HSTRING__*, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@QEAAJPEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@000@Z
    long RuntimeClassInitialize(HSTRING__*, WindissectOpaque *, HSTRING__*, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@QEAAJPEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    long RuntimeClassInitialize(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@QEAAJW4YearFormat@234@W4MonthFormat@234@W4DayFormat@234@W4DayOfWeekFormat@234@W4HourFormat@234@W4MinuteFormat@234@W4SecondFormat@234@@Z
    long RuntimeClassInitialize(int, int, int, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@QEAAJW4YearFormat@234@W4MonthFormat@234@W4DayFormat@234@W4DayOfWeekFormat@234@W4HourFormat@234@W4MinuteFormat@234@W4SecondFormat@234@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    long RuntimeClassInitialize(int, int, int, int, int, int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@QEAAJW4YearFormat@234@W4MonthFormat@234@W4DayFormat@234@W4DayOfWeekFormat@234@W4HourFormat@234@W4MinuteFormat@234@W4SecondFormat@234@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAUHSTRING__@@88@Z
    long RuntimeClassInitialize(int, int, int, int, int, int, int, WindissectOpaque *, HSTRING__*, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Calendar@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Calendar(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Clock@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Clock(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GeographicRegion@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_GeographicRegion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncludeDay@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAW4DayFormat@234@@Z
    virtual long get_IncludeDay(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncludeDayOfWeek@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAW4DayOfWeekFormat@234@@Z
    virtual long get_IncludeDayOfWeek(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncludeHour@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAW4HourFormat@234@@Z
    virtual long get_IncludeHour(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncludeMinute@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAW4MinuteFormat@234@@Z
    virtual long get_IncludeMinute(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncludeMonth@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAW4MonthFormat@234@@Z
    virtual long get_IncludeMonth(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncludeSecond@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAW4SecondFormat@234@@Z
    virtual long get_IncludeSecond(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncludeYear@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAW4YearFormat@234@@Z
    virtual long get_IncludeYear(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Languages@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Languages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumeralSystem@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_NumeralSystem(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Patterns@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Patterns(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolvedGeographicRegion@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResolvedGeographicRegion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolvedLanguage@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResolvedLanguage(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Template@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Template(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NumeralSystem@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_NumeralSystem(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@UEAA@XZ
    virtual ~DateTimeFormatter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendDateDayOfWeekPatterns@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAXAEAV?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    void AppendDateDayOfWeekPatterns(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendHourPatterns@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAXAEAV?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@_N@Z
    void AppendHourPatterns(WindissectOpaque &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendLongTimePatterns@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAXAEAV?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@_N@Z
    void AppendLongTimePatterns(WindissectOpaque &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendPatterns@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAXKAEAV?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    void AppendPatterns(unsigned long, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendPermutationsOfDateAndTimePatterns@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAXAEAV?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@00@Z
    void AppendPermutationsOfDateAndTimePatterns(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendShortTimePatterns@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAXAEAV?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@_N@Z
    void AppendShortTimePatterns(WindissectOpaque &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePatterns@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAXXZ
    void ComputePatterns();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTimeFormat@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAKPEAUHSTRING__@@@Z
    unsigned long ComputeTimeFormat(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeContext@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAXPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@K@Z
    void InitializeContext(WindissectOpaque *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeContext@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAXPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAUHSTRING__@@11@Z
    void InitializeContext(WindissectOpaque *, HSTRING__*, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDefaultContext@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAXK@Z
    void InitializeDefaultContext(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePattern@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAXPEAUHSTRING__@@@Z
    void InitializePattern(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTemplate@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAXW4YearFormat@234@W4MonthFormat@234@W4DayFormat@234@W4DayOfWeekFormat@234@W4HourFormat@234@W4MinuteFormat@234@W4SecondFormat@234@@Z
    void InitializeTemplate(int, int, int, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTopPattern@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAXXZ
    void InitializeTopPattern();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Is24HourClock@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAA_NXZ
    bool Is24HourClock();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHebrewCalendar@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAA_NXZ
    bool IsHebrewCalendar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHebrewLocale@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAA_NXZ
    bool IsHebrewLocale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAAXW4DateConstituent@234@@Z
    void Set(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInitializeTemplate@DateTimeFormatter@DateTimeFormatting@Globalization@Windows@@AEAA_NPEAUHSTRING__@@@Z
    bool TryInitializeTemplate(HSTRING__*);
};
} // namespace Windows::Globalization::DateTimeFormatting
