#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 47 member(s).
namespace Windows::Globalization {
class CalendarIdentifiers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CalendarIdentifiers@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CalendarIdentifiers@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CalendarIdentifiers@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CalendarIdentifiers@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CalendarIdentifiers@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChineseLunar@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ChineseLunar(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Gregorian@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Gregorian(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Hebrew@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Hebrew(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Hijri@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Hijri(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Japanese@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Japanese(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_JapaneseLunar@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_JapaneseLunar(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Julian@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Julian(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Korean@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Korean(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KoreanLunar@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_KoreanLunar(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Persian@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Persian(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Taiwan@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Taiwan(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaiwanLunar@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TaiwanLunar(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Thai@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Thai(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UmAlQura@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UmAlQura(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VietnameseLunar@CalendarIdentifiers@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_VietnameseLunar(HSTRING__* *);
};
} // namespace Windows::Globalization
