#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 186 member(s).
namespace Windows::Globalization {
class Calendar {
public:
    class HoursInPeriodCounter;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDays@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long AddDays(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEras@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long AddEras(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHours@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long AddHours(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMinutes@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long AddMinutes(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMonths@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long AddMonths(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNanoseconds@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long AddNanoseconds(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPeriods@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long AddPeriods(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Calendar@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSeconds@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long AddSeconds(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWeeks@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long AddWeeks(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddYears@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long AddYears(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeCalendarSystem@Calendar@Globalization@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long ChangeCalendarSystem(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeClock@Calendar@Globalization@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long ChangeClock(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTimeZone@Calendar@Globalization@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long ChangeTimeZone(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@Calendar@Globalization@Windows@@QEAA?AV?$ComPtr@VCalendar@Globalization@Windows@@@WRL@Microsoft@@UDateTime@Foundation@3@@Z
    WindissectOpaque Clone(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@Calendar@Globalization@Windows@@UEAAJPEAPEAUICalendar@23@@Z
    virtual long Clone(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@Calendar@Globalization@Windows@@UEAAJPEAUICalendar@23@PEAH@Z
    virtual long Compare(WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareDateTime@Calendar@Globalization@Windows@@UEAAJUDateTime@Foundation@3@PEAH@Z
    virtual long CompareDateTime(WindissectOpaque, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@Calendar@Globalization@Windows@@UEAAJPEAUICalendar@23@@Z
    virtual long CopyTo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Calendar@Globalization@Windows@@SA?AV?$ComPtr@VCalendar@Globalization@Windows@@@WRL@Microsoft@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@3@PEAUHSTRING__@@1@Z
    static WindissectOpaque Create(WindissectOpaque *, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Calendar@Globalization@Windows@@SA?AV?$ComPtr@VCalendar@Globalization@Windows@@@WRL@Microsoft@@XZ
    static WindissectOpaque Create();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Calendar@Globalization@Windows@@SA?AV?$ComPtr@VCalendar@Globalization@Windows@@@WRL@Microsoft@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@3@@Z
    static WindissectOpaque Create(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Calendar@Globalization@Windows@@SA?AV?$ComPtr@VCalendar@Globalization@Windows@@@WRL@Microsoft@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@3@PEAUHSTRING__@@11@Z
    static WindissectOpaque Create(WindissectOpaque *, HSTRING__*, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DayAsPaddedString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long DayAsPaddedString(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DayAsString@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long DayAsString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DayOfWeekAsFullSoloString@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long DayOfWeekAsFullSoloString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DayOfWeekAsFullString@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long DayOfWeekAsFullString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DayOfWeekAsSoloString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long DayOfWeekAsSoloString(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DayOfWeekAsString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long DayOfWeekAsString(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EraAsFullString@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long EraAsFullString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EraAsString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long EraAsString(int, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCalendarSystem@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetCalendarSystem(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClock@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClock(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDateTime@Calendar@Globalization@Windows@@UEAAJPEAUDateTime@Foundation@3@@Z
    virtual long GetDateTime(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@Calendar@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeZone@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetTimeZone(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Calendar@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HourAsPaddedString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long HourAsPaddedString(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HourAsString@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long HourAsString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@Calendar@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@Calendar@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinuteAsPaddedString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long MinuteAsPaddedString(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinuteAsString@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long MinuteAsString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonthAsFullSoloString@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long MonthAsFullSoloString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonthAsFullString@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long MonthAsFullString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonthAsNumericString@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long MonthAsNumericString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonthAsPaddedNumericString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long MonthAsPaddedNumericString(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonthAsSoloString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long MonthAsSoloString(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonthAsString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long MonthAsString(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NanosecondAsPaddedString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long NanosecondAsPaddedString(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NanosecondAsString@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long NanosecondAsString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeriodAsFullString@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long PeriodAsFullString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeriodAsString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long PeriodAsString(int, HSTRING__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Calendar@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Calendar@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Calendar@Globalization@Windows@@QEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@3@PEAUHSTRING__@@1@Z
    long RuntimeClassInitialize(WindissectOpaque *, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Calendar@Globalization@Windows@@QEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@3@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Calendar@Globalization@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Calendar@Globalization@Windows@@QEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@3@PEAUHSTRING__@@11@Z
    long RuntimeClassInitialize(WindissectOpaque *, HSTRING__*, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondAsPaddedString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long SecondAsPaddedString(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondAsString@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long SecondAsString(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDateTime@Calendar@Globalization@Windows@@UEAAJUDateTime@Foundation@3@@Z
    virtual long SetDateTime(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToMax@Calendar@Globalization@Windows@@UEAAJXZ
    virtual long SetToMax();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToMin@Calendar@Globalization@Windows@@UEAAJXZ
    virtual long SetToMin();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToNow@Calendar@Globalization@Windows@@UEAAJXZ
    virtual long SetToNow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimeZoneAsFullString@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long TimeZoneAsFullString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimeZoneAsString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long TimeZoneAsString(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?YearAsPaddedString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long YearAsPaddedString(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?YearAsString@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long YearAsString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?YearAsTruncatedString@Calendar@Globalization@Windows@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long YearAsTruncatedString(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Day@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_Day(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DayOfWeek@Calendar@Globalization@Windows@@UEAAJPEAW4DayOfWeek@23@@Z
    virtual long get_DayOfWeek(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Era@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_Era(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstDayInThisMonth@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_FirstDayInThisMonth(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstEra@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_FirstEra(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstHourInThisPeriod@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_FirstHourInThisPeriod(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstMinuteInThisHour@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_FirstMinuteInThisHour(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstMonthInThisYear@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_FirstMonthInThisYear(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstPeriodInThisDay@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_FirstPeriodInThisDay(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstSecondInThisMinute@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_FirstSecondInThisMinute(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstYearInThisEra@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_FirstYearInThisEra(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Hour@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_Hour(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDaylightSavingTime@Calendar@Globalization@Windows@@UEAAJPEAE@Z
    virtual long get_IsDaylightSavingTime(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Languages@Calendar@Globalization@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@3@@Z
    virtual long get_Languages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastDayInThisMonth@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_LastDayInThisMonth(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastEra@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_LastEra(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastHourInThisPeriod@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_LastHourInThisPeriod(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastMinuteInThisHour@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_LastMinuteInThisHour(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastMonthInThisYear@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_LastMonthInThisYear(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastPeriodInThisDay@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_LastPeriodInThisDay(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastSecondInThisMinute@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_LastSecondInThisMinute(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastYearInThisEra@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_LastYearInThisEra(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Minute@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_Minute(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Month@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_Month(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Nanosecond@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_Nanosecond(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfDaysInThisMonth@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_NumberOfDaysInThisMonth(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfEras@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_NumberOfEras(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfHoursInThisPeriod@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_NumberOfHoursInThisPeriod(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfMinutesInThisHour@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_NumberOfMinutesInThisHour(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfMonthsInThisYear@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_NumberOfMonthsInThisYear(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfPeriodsInThisDay@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_NumberOfPeriodsInThisDay(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfSecondsInThisMinute@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_NumberOfSecondsInThisMinute(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfYearsInThisEra@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_NumberOfYearsInThisEra(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumeralSystem@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_NumeralSystem(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Period@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_Period(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolvedLanguage@Calendar@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResolvedLanguage(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Second@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_Second(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Year@Calendar@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_Year(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Day@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long put_Day(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Era@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long put_Era(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Hour@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long put_Hour(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Minute@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long put_Minute(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Month@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long put_Month(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Nanosecond@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long put_Nanosecond(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NumeralSystem@Calendar@Globalization@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_NumeralSystem(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Period@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long put_Period(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Second@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long put_Second(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Year@Calendar@Globalization@Windows@@UEAAJH@Z
    virtual long put_Year(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Calendar@Globalization@Windows@@UEAA@XZ
    virtual ~Calendar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDaysImpl@Calendar@Globalization@Windows@@AEAAXH@Z
    void AddDaysImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHoursImpl@Calendar@Globalization@Windows@@AEAAXH@Z
    void AddHoursImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLocalNanoseconds@Calendar@Globalization@Windows@@AEAAXH_J@Z
    void AddLocalNanoseconds(int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNegativeDays@Calendar@Globalization@Windows@@AEAAXH@Z
    void AddNegativeDays(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPositiveDays@Calendar@Globalization@Windows@@AEAAXH@Z
    void AddPositiveDays(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUnits@Calendar@Globalization@Windows@@AEAAXH_J@Z
    void AddUnits(int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustForDaylightSavings@Calendar@Globalization@Windows@@AEAAXHW4UnitType@123@@Z
    void AdjustForDaylightSavings(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustInvalidLocalTimeToValid@Calendar@Globalization@Windows@@AEAAXHW4UnitType@123@@Z
    void AdjustInvalidLocalTimeToValid(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustTimeToNextValid@Calendar@Globalization@Windows@@AEAAX_J@Z
    void AdjustTimeToNextValid(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustTimeToPreviousValid@Calendar@Globalization@Windows@@AEAAX_J@Z
    void AdjustTimeToPreviousValid(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeCalendarSystemImpl@Calendar@Globalization@Windows@@AEAAXPEAUHSTRING__@@@Z
    void ChangeCalendarSystemImpl(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeCalendarSystemImpl@Calendar@Globalization@Windows@@AEAAXKPEAUHSTRING__@@@Z
    void ChangeCalendarSystemImpl(unsigned long, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeCalendarSystemImpl@Calendar@Globalization@Windows@@AEAAXK@Z
    void ChangeCalendarSystemImpl(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeClockImpl@Calendar@Globalization@Windows@@AEAAXPEAUHSTRING__@@@Z
    void ChangeClockImpl(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTimeZoneImpl@Calendar@Globalization@Windows@@AEAAXPEAUHSTRING__@@@Z
    void ChangeTimeZoneImpl(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@Calendar@Globalization@Windows@@AEAAHUDateTime@Foundation@3@@Z
    int Compare(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@Calendar@Globalization@Windows@@AEAAHPEAUICalendar@23@@Z
    int Compare(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyInto@Calendar@Globalization@Windows@@AEAAXPEAV123@@Z
    void CopyInto(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatDecimal@Calendar@Globalization@Windows@@CA?AVHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@UINumberFormatter@NumberFormatting@Globalization@Windows@@@67@HH@Z
    static ::Microsoft::WRL::Wrappers::HString FormatDecimal(WindissectOpaque &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatUnitAsDecimalNumber@Calendar@Globalization@Windows@@AEAA?AVHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@UINumberFormatter@NumberFormatting@Globalization@Windows@@@67@HH@Z
    ::Microsoft::WRL::Wrappers::HString FormatUnitAsDecimalNumber(WindissectOpaque &, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestValidTimeWithinBounds@Calendar@Globalization@Windows@@AEBA_JUFixedDate@Calendars@23@_JH11@Z
    int64_t GetClosestValidTimeWithinBounds(WindissectOpaque, int64_t, int, int64_t, int64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDateTimeImpl@Calendar@Globalization@Windows@@AEAA?AUDateTime@Foundation@3@XZ
    WindissectOpaque GetDateTimeImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstDayInThisMonth@Calendar@Globalization@Windows@@AEAAHXZ
    int GetFirstDayInThisMonth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstHourInThisPeriod@Calendar@Globalization@Windows@@AEAAHXZ
    int GetFirstHourInThisPeriod();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstMinuteInThisHour@Calendar@Globalization@Windows@@AEAAHXZ
    int GetFirstMinuteInThisHour();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstPeriodInThisDay@Calendar@Globalization@Windows@@AEAAHXZ
    int GetFirstPeriodInThisDay();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastDayInThisMonth@Calendar@Globalization@Windows@@AEAAHXZ
    int GetLastDayInThisMonth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastHourInThisPeriod@Calendar@Globalization@Windows@@AEAAHXZ
    int GetLastHourInThisPeriod();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastMinuteInThisHour@Calendar@Globalization@Windows@@AEAAHXZ
    int GetLastMinuteInThisHour();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonth@Calendar@Globalization@Windows@@AEAAHXZ
    int GetMonth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumberOfHoursInThisPeriod@Calendar@Globalization@Windows@@AEAAHXZ
    int GetNumberOfHoursInThisPeriod();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumberOfMinutesInThisHour@Calendar@Globalization@Windows@@AEAAHXZ
    int GetNumberOfMinutesInThisHour();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnderlyingThisPointer@Calendar@Globalization@Windows@@EEAAPEAV123@XZ
    virtual WindissectOpaque * GetUnderlyingThisPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYear@Calendar@Globalization@Windows@@AEAAHXZ
    int GetYear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeState@Calendar@Globalization@Windows@@AEAAXPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@3@AEBVLocaleIdentifiers@23@K@Z
    void InitializeState(WindissectOpaque *, WindissectOpaque const &, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDaylightSavingTime@Calendar@Globalization@Windows@@AEAA_NXZ
    bool IsDaylightSavingTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDateTimeImpl@Calendar@Globalization@Windows@@AEAAXUDateTime@Foundation@3@@Z
    void SetDateTimeImpl(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHour@Calendar@Globalization@Windows@@AEAAXH@Z
    void SetHour(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinute@Calendar@Globalization@Windows@@AEAAXH@Z
    void SetMinute(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNumeralSystem@Calendar@Globalization@Windows@@AEAAXPEAUHSTRING__@@@Z
    void SetNumeralSystem(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNumeralSystemToHebrew@Calendar@Globalization@Windows@@AEAAXXZ
    void SetNumeralSystemToHebrew();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPeriod@Calendar@Globalization@Windows@@AEAAXH@Z
    void SetPeriod(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTimeZone@Calendar@Globalization@Windows@@AEAAXPEAUHSTRING__@@@Z
    void SetTimeZone(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToNowImpl@Calendar@Globalization@Windows@@AEAAXXZ
    void SetToNowImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?YearAsPaddedStringImpl@Calendar@Globalization@Windows@@AEAA?AVHString@Wrappers@WRL@Microsoft@@H@Z
    ::Microsoft::WRL::Wrappers::HString YearAsPaddedStringImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?YearAsTruncatedStringImpl@Calendar@Globalization@Windows@@AEAA?AVHString@Wrappers@WRL@Microsoft@@H@Z
    ::Microsoft::WRL::Wrappers::HString YearAsTruncatedStringImpl(int);
};
} // namespace Windows::Globalization
