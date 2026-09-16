#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 39 member(s).
namespace Windows::Globalization::NumberFormatting {
class IncrementNumberRounder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IncrementNumberRounder@NumberFormatting@Globalization@Windows@@QEAA@XZ
    IncrementNumberRounder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundDouble@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJNPEAN@Z
    virtual long RoundDouble(double, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundInt32@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJHPEAH@Z
    virtual long RoundInt32(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundInt64@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJ_JPEA_J@Z
    virtual long RoundInt64(int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundSingle@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJMPEAM@Z
    virtual long RoundSingle(float, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundUInt32@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJIPEAI@Z
    virtual long RoundUInt32(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundUInt64@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJ_KPEA_K@Z
    virtual long RoundUInt64(uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Increment@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJPEAN@Z
    virtual long get_Increment(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RoundingAlgorithm@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJPEAW4RoundingAlgorithm@234@@Z
    virtual long get_RoundingAlgorithm(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Increment@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJN@Z
    virtual long put_Increment(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RoundingAlgorithm@IncrementNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJW4RoundingAlgorithm@234@@Z
    virtual long put_RoundingAlgorithm(int);
};
} // namespace Windows::Globalization::NumberFormatting
