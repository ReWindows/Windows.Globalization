#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 53 member(s).
namespace Windows::Globalization::NumberFormatting {
class NumberFormatter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatDouble@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJNPEAPEAUHSTRING__@@@Z
    virtual long FormatDouble(double, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatInt@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJ_JPEAPEAUHSTRING__@@@Z
    virtual long FormatInt(int64_t, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatUInt@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJ_KPEAPEAUHSTRING__@@@Z
    virtual long FormatUInt(uint64_t, HSTRING__* *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NumberFormatter@NumberFormatting@Globalization@Windows@@QEAA@XZ
    NumberFormatter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDouble@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@N@Foundation@4@@Z
    virtual long ParseDouble(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseInt@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@_J@Foundation@4@@Z
    virtual long ParseInt(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseUInt@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@_K@Foundation@4@@Z
    virtual long ParseUInt(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateNumerals@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU5@@Z
    virtual long TranslateNumerals(HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FractionDigits@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_FractionDigits(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GeographicRegion@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_GeographicRegion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IntegerDigits@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_IntegerDigits(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDecimalPointAlwaysDisplayed@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAE@Z
    virtual long get_IsDecimalPointAlwaysDisplayed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsGrouped@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAE@Z
    virtual long get_IsGrouped(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsZeroSigned@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAE@Z
    virtual long get_IsZeroSigned(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Languages@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Languages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberRounder@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUINumberRounder@234@@Z
    virtual long get_NumberRounder(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumeralSystem@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_NumeralSystem(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolvedGeographicRegion@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResolvedGeographicRegion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolvedLanguage@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResolvedLanguage(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SignificantDigits@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAH@Z
    virtual long get_SignificantDigits(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FractionDigits@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJH@Z
    virtual long put_FractionDigits(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IntegerDigits@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJH@Z
    virtual long put_IntegerDigits(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsDecimalPointAlwaysDisplayed@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJE@Z
    virtual long put_IsDecimalPointAlwaysDisplayed(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsGrouped@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJE@Z
    virtual long put_IsGrouped(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsZeroSigned@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJE@Z
    virtual long put_IsZeroSigned(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NumberRounder@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUINumberRounder@234@@Z
    virtual long put_NumberRounder(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NumeralSystem@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_NumeralSystem(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SignificantDigits@NumberFormatter@NumberFormatting@Globalization@Windows@@UEAAJH@Z
    virtual long put_SignificantDigits(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NumberFormatter@NumberFormatting@Globalization@Windows@@QEAA@XZ
    ~NumberFormatter();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEShift@NumberFormatter@NumberFormatting@Globalization@Windows@@MEAAHXZ
    virtual int GetEShift();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFractionDigits@NumberFormatter@NumberFormatting@Globalization@Windows@@MEAAHPEBG@Z
    virtual int GetFractionDigits(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@NumberFormatter@NumberFormatting@Globalization@Windows@@MEAAXXZ
    virtual void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@NumberFormatter@NumberFormatting@Globalization@Windows@@MEAAXPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAUHSTRING__@@@Z
    virtual void Initialize(WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeNumberRounder@NumberFormatter@NumberFormatting@Globalization@Windows@@IEAA?AV?$ComPtr@VIncrementNumberRounder@NumberFormatting@Globalization@Windows@@@WRL@Microsoft@@W4RoundingAlgorithm@234@@Z
    WindissectOpaque InitializeNumberRounder(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccumulateDigit@NumberFormatter@NumberFormatting@Globalization@Windows@@AEAA_NHPEA_K@Z
    bool AccumulateDigit(int, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeGroupingRules@NumberFormatter@NumberFormatting@Globalization@Windows@@AEAAXPEBG@Z
    void InitializeGroupingRules(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroupedAt@NumberFormatter@NumberFormatting@Globalization@Windows@@AEAA_NH@Z
    bool IsGroupedAt(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDouble@NumberFormatter@NumberFormatting@Globalization@Windows@@AEAAPEAU?$IReference@N@Foundation@4@PEAUHSTRING__@@@Z
    WindissectOpaque * ParseDouble(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseInt@NumberFormatter@NumberFormatting@Globalization@Windows@@AEAAPEAU?$IReference@_J@Foundation@4@PEAUHSTRING__@@@Z
    WindissectOpaque * ParseInt(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseUInt@NumberFormatter@NumberFormatting@Globalization@Windows@@AEAAPEAU?$IReference@_K@Foundation@4@PEAUHSTRING__@@@Z
    WindissectOpaque * ParseUInt(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StringEqualSpaceAndNoBreakSpaceEquivalent@NumberFormatter@NumberFormatting@Globalization@Windows@@CA_NGG@Z
    static bool StringEqualSpaceAndNoBreakSpaceEquivalent(unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateArabic@NumberFormatter@NumberFormatting@Globalization@Windows@@CAGG_N0@Z
    static unsigned short TranslateArabic(unsigned short, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateIdentity@NumberFormatter@NumberFormatting@Globalization@Windows@@CAGG_N0@Z
    static unsigned short TranslateIdentity(unsigned short, bool, bool);
};
} // namespace Windows::Globalization::NumberFormatting
