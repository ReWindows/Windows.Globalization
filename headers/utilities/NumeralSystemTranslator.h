#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 25 member(s).
namespace Windows::Globalization::NumberFormatting {
class NumeralSystemTranslator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@QEAA@XZ
    NumeralSystemTranslator();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@QEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateNumerals@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU5@@Z
    virtual long TranslateNumerals(HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Languages@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_Languages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumeralSystem@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_NumeralSystem(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolvedLanguage@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResolvedLanguage(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NumeralSystem@NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_NumeralSystem(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NumeralSystemTranslator@NumberFormatting@Globalization@Windows@@UEAA@XZ
    virtual ~NumeralSystemTranslator();
};
} // namespace Windows::Globalization::NumberFormatting
