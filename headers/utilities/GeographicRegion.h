#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 34 member(s).
namespace Windows::Globalization {
class GeographicRegion {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GeographicRegion@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GeographicRegion@Globalization@Windows@@QEAA@XZ
    GeographicRegion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GeographicRegion@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GeographicRegion@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GeographicRegion@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserGeoIdDefaultImpl@GeographicRegion@Globalization@Windows@@SAJXZ
    static long GetUserGeoIdDefaultImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@GeographicRegion@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@GeographicRegion@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GeographicRegion@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GeographicRegion@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Code@GeographicRegion@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Code(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CodeThreeDigit@GeographicRegion@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CodeThreeDigit(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CodeThreeLetter@GeographicRegion@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CodeThreeLetter(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CodeTwoLetter@GeographicRegion@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CodeTwoLetter(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrenciesInUse@GeographicRegion@Globalization@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@3@@Z
    virtual long get_CurrenciesInUse(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrenciesInUseImpl@GeographicRegion@Globalization@Windows@@QEAA?AV?$ComPtr@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@XZ
    WindissectOpaque get_CurrenciesInUseImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@GeographicRegion@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NativeName@GeographicRegion@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_NativeName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GeographicRegion@Globalization@Windows@@UEAA@XZ
    virtual ~GeographicRegion();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGeoId@GeographicRegion@Globalization@Windows@@CAHJ@Z
    static int AddGeoId(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGeoIdsInitialized@GeographicRegion@Globalization@Windows@@CAXXZ
    static void EnsureGeoIdsInitialized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescendentGeoIds@GeographicRegion@Globalization@Windows@@CAHJ@Z
    static int GetDescendentGeoIds(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeoInfoDefaultImpl@GeographicRegion@Globalization@Windows@@CAHJKPEAGH@Z
    static int GetGeoInfoDefaultImpl(long, unsigned long, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitGeoIds@GeographicRegion@Globalization@Windows@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int InitGeoIds(_RTL_RUN_ONCE *, void *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrivateUse@GeographicRegion@Globalization@Windows@@CA_NPEAUHSTRING__@@@Z
    static bool IsPrivateUse(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupGeoIdDefaultImpl@GeographicRegion@Globalization@Windows@@CAJPEBGK@Z
    static long LookupGeoIdDefaultImpl(unsigned short const *, unsigned long);
};
} // namespace Windows::Globalization
