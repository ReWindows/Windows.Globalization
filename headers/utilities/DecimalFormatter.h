#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 63 member(s).
namespace Windows::Globalization::NumberFormatting {
class DecimalFormatter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DecimalFormatter@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DecimalFormatter@NumberFormatting@Globalization@Windows@@QEAA@XZ
    DecimalFormatter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatDouble@DecimalFormatter@NumberFormatting@Globalization@Windows@@UEAAJNPEAPEAUHSTRING__@@@Z
    virtual long FormatDouble(double, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatInt@DecimalFormatter@NumberFormatting@Globalization@Windows@@UEAAJ_JPEAPEAUHSTRING__@@@Z
    virtual long FormatInt(int64_t, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatUInt@DecimalFormatter@NumberFormatting@Globalization@Windows@@UEAAJ_KPEAPEAUHSTRING__@@@Z
    virtual long FormatUInt(uint64_t, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DecimalFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DecimalFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DecimalFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DecimalFormatter@NumberFormatting@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DecimalFormatter@NumberFormatting@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDouble@DecimalFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@N@Foundation@4@@Z
    virtual long ParseDouble(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseInt@DecimalFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@_J@Foundation@4@@Z
    virtual long ParseInt(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseUInt@DecimalFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@_K@Foundation@4@@Z
    virtual long ParseUInt(HSTRING__*, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DecimalFormatter@NumberFormatting@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DecimalFormatter@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFormatString@DecimalFormatter@NumberFormatting@Globalization@Windows@@EEAAXPEBG0@Z
    virtual void InitializeFormatString(unsigned short const *, unsigned short const *);
};
} // namespace Windows::Globalization::NumberFormatting
