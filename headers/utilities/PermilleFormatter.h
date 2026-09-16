#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 65 member(s).
namespace Windows::Globalization::NumberFormatting {
class PermilleFormatter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PermilleFormatter@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatDouble@PermilleFormatter@NumberFormatting@Globalization@Windows@@UEAAJNPEAPEAUHSTRING__@@@Z
    virtual long FormatDouble(double, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatInt@PermilleFormatter@NumberFormatting@Globalization@Windows@@UEAAJ_JPEAPEAUHSTRING__@@@Z
    virtual long FormatInt(int64_t, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatUInt@PermilleFormatter@NumberFormatting@Globalization@Windows@@UEAAJ_KPEAPEAUHSTRING__@@@Z
    virtual long FormatUInt(uint64_t, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PermilleFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PermilleFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PermilleFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PermilleFormatter@NumberFormatting@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PermilleFormatter@NumberFormatting@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDouble@PermilleFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@N@Foundation@4@@Z
    virtual long ParseDouble(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseInt@PermilleFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@_J@Foundation@4@@Z
    virtual long ParseInt(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseUInt@PermilleFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@_K@Foundation@4@@Z
    virtual long ParseUInt(HSTRING__*, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PermilleFormatter@NumberFormatting@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PermilleFormatter@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEShift@PermilleFormatter@NumberFormatting@Globalization@Windows@@EEAAHXZ
    virtual int GetEShift();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFormatString@PermilleFormatter@NumberFormatting@Globalization@Windows@@EEAAXPEBG0@Z
    virtual void InitializeFormatString(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeNegativeFormatString@PermilleFormatter@NumberFormatting@Globalization@Windows@@AEAAXPEBG@Z
    void InitializeNegativeFormatString(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePositiveFormatString@PermilleFormatter@NumberFormatting@Globalization@Windows@@AEAAXPEBG@Z
    void InitializePositiveFormatString(unsigned short const *);
};
} // namespace Windows::Globalization::NumberFormatting
