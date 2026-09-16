#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 59 member(s).
namespace Windows::Globalization {
class DateTimeDecimalFormatter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DateTimeDecimalFormatter@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@DateTimeDecimalFormatter@Globalization@Windows@@UEAA?AV?$ComPtr@UICloneable@Globalization@Windows@@@WRL@Microsoft@@XZ
    virtual WindissectOpaque Clone();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DateTimeDecimalFormatter@Globalization@Windows@@QEAA@XZ
    DateTimeDecimalFormatter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DateTimeDecimalFormatter@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DateTimeDecimalFormatter@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DateTimeDecimalFormatter@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DateTimeDecimalFormatter@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DateTimeDecimalFormatter@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFormatString@DateTimeDecimalFormatter@Globalization@Windows@@EEAAXPEBG0@Z
    virtual void InitializeFormatString(unsigned short const *, unsigned short const *);
};
} // namespace Windows::Globalization
