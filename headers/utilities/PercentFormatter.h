#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 66 member(s).
namespace Windows::Globalization::NumberFormatting {
class PercentFormatter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PercentFormatter@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatDouble@PercentFormatter@NumberFormatting@Globalization@Windows@@UEAAJNPEAPEAUHSTRING__@@@Z
    virtual long FormatDouble(double, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatInt@PercentFormatter@NumberFormatting@Globalization@Windows@@UEAAJ_JPEAPEAUHSTRING__@@@Z
    virtual long FormatInt(int64_t, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatUInt@PercentFormatter@NumberFormatting@Globalization@Windows@@UEAAJ_KPEAPEAUHSTRING__@@@Z
    virtual long FormatUInt(uint64_t, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PercentFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PercentFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PercentFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PercentFormatter@NumberFormatting@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PercentFormatter@NumberFormatting@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDouble@PercentFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@N@Foundation@4@@Z
    virtual long ParseDouble(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseInt@PercentFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@_J@Foundation@4@@Z
    virtual long ParseInt(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseUInt@PercentFormatter@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IReference@_K@Foundation@4@@Z
    virtual long ParseUInt(HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PercentFormatter@NumberFormatting@Globalization@Windows@@QEAA@XZ
    PercentFormatter();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PercentFormatter@NumberFormatting@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PercentFormatter@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEShift@PercentFormatter@NumberFormatting@Globalization@Windows@@EEAAHXZ
    virtual int GetEShift();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFormatString@PercentFormatter@NumberFormatting@Globalization@Windows@@EEAAXPEBG0@Z
    virtual void InitializeFormatString(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeNegativeFormatString@PercentFormatter@NumberFormatting@Globalization@Windows@@AEAAXPEBG@Z
    void InitializeNegativeFormatString(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePositiveFormatString@PercentFormatter@NumberFormatting@Globalization@Windows@@AEAAXPEBG@Z
    void InitializePositiveFormatString(unsigned short const *);
};
} // namespace Windows::Globalization::NumberFormatting
