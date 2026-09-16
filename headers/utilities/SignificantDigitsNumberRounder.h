#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 41 member(s).
namespace Windows::Globalization::NumberFormatting {
class SignificantDigitsNumberRounder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundDouble@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJNPEAN@Z
    virtual long RoundDouble(double, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundInt32@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJHPEAH@Z
    virtual long RoundInt32(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundInt64@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJ_JPEA_J@Z
    virtual long RoundInt64(int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundSingle@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJMPEAM@Z
    virtual long RoundSingle(float, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundUInt32@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJIPEAI@Z
    virtual long RoundUInt32(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundUInt64@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJ_KPEA_K@Z
    virtual long RoundUInt64(uint64_t, uint64_t *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@QEAA@XZ
    SignificantDigitsNumberRounder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RoundingAlgorithm@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJPEAW4RoundingAlgorithm@234@@Z
    virtual long get_RoundingAlgorithm(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SignificantDigits@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJPEAI@Z
    virtual long get_SignificantDigits(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RoundingAlgorithm@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJW4RoundingAlgorithm@234@@Z
    virtual long put_RoundingAlgorithm(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SignificantDigits@SignificantDigitsNumberRounder@NumberFormatting@Globalization@Windows@@UEAAJI@Z
    virtual long put_SignificantDigits(unsigned int);
};
} // namespace Windows::Globalization::NumberFormatting
