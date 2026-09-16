#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 92 member(s).
namespace Windows::Globalization::NumberFormatting {
class CurrencyFormatter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRoundingForCurrency@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJW4RoundingAlgorithm@234@@Z
    virtual long ApplyRoundingForCurrency(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CurrencyFormatter@NumberFormatting@Globalization@Windows@@SA?AV?$ComPtr@VCurrencyFormatter@NumberFormatting@Globalization@Windows@@@WRL@Microsoft@@PEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@0@Z
    static WindissectOpaque Create(HSTRING__*, WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CurrencyFormatter@NumberFormatting@Globalization@Windows@@SA?AV?$ComPtr@VCurrencyFormatter@NumberFormatting@Globalization@Windows@@@WRL@Microsoft@@PEAUHSTRING__@@@Z
    static WindissectOpaque Create(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CurrencyFormatter@NumberFormatting@Globalization@Windows@@QEAA@XZ
    CurrencyFormatter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatDouble@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJNPEAPEAUHSTRING__@@@Z
    virtual long FormatDouble(double, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatInt@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJ_JPEAPEAUHSTRING__@@@Z
    virtual long FormatInt(int64_t, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatUInt@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJ_KPEAPEAUHSTRING__@@@Z
    virtual long FormatUInt(uint64_t, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CurrencyFormatter@NumberFormatting@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CurrencyFormatter@NumberFormatting@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDouble@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@N@Foundation@4@@Z
    virtual long ParseDouble(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseInt@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@_J@Foundation@4@@Z
    virtual long ParseInt(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseUInt@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@_K@Foundation@4@@Z
    virtual long ParseUInt(HSTRING__*, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CurrencyFormatter@NumberFormatting@Globalization@Windows@@QEAAJPEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@0@Z
    long RuntimeClassInitialize(HSTRING__*, WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CurrencyFormatter@NumberFormatting@Globalization@Windows@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Currency@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Currency(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mode@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAW4CurrencyFormatterMode@234@@Z
    virtual long get_Mode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolvedGeographicRegion@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResolvedGeographicRegion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Currency@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Currency(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Mode@CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAAJW4CurrencyFormatterMode@234@@Z
    virtual long put_Mode(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CurrencyFormatter@NumberFormatting@Globalization@Windows@@UEAA@XZ
    virtual ~CurrencyFormatter();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFractionDigits@CurrencyFormatter@NumberFormatting@Globalization@Windows@@EEAAHPEBG@Z
    virtual int GetFractionDigits(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFormatString@CurrencyFormatter@NumberFormatting@Globalization@Windows@@EEAAXPEBG0@Z
    virtual void InitializeFormatString(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeNegativeFormatString@CurrencyFormatter@NumberFormatting@Globalization@Windows@@AEAAXPEBG0@Z
    void InitializeNegativeFormatString(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePositiveFormatString@CurrencyFormatter@NumberFormatting@Globalization@Windows@@AEAAXPEBG0@Z
    void InitializePositiveFormatString(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeRounding@CurrencyFormatter@NumberFormatting@Globalization@Windows@@AEAAXW4RoundingAlgorithm@234@@Z
    void InitializeRounding(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEuOverridedLocale@CurrencyFormatter@NumberFormatting@Globalization@Windows@@AEAA_NPEBG@Z
    bool IsEuOverridedLocale(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrency@CurrencyFormatter@NumberFormatting@Globalization@Windows@@AEAAXPEAUHSTRING__@@@Z
    void SetCurrency(HSTRING__*);
};
} // namespace Windows::Globalization::NumberFormatting
