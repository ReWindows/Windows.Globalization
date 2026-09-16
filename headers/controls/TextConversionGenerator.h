#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 23 member(s).
namespace Windows::Data::Text {
class TextConversionGenerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TextConversionGenerator@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatesAsync@TextConversionGenerator@Text@Data@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@4@@Z
    virtual long GetCandidatesAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatesWithMaxCountAsync@TextConversionGenerator@Text@Data@Windows@@UEAAJPEAUHSTRING__@@IPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@4@@Z
    virtual long GetCandidatesWithMaxCountAsync(HSTRING__*, unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TextConversionGenerator@Text@Data@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TextConversionGenerator@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TextConversionGenerator@Text@Data@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TextConversionGenerator@Text@Data@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@TextConversionGenerator@Text@Data@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TextConversionGenerator@Text@Data@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TextConversionGenerator@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TextConversionGenerator@Text@Data@Windows@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextConversionGenerator@Text@Data@Windows@@QEAA@XZ
    TextConversionGenerator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LanguageAvailableButNotInstalled@TextConversionGenerator@Text@Data@Windows@@UEAAJPEAE@Z
    virtual long get_LanguageAvailableButNotInstalled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolvedLanguage@TextConversionGenerator@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResolvedLanguage(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextConversionGenerator@Text@Data@Windows@@UEAA@XZ
    virtual ~TextConversionGenerator();
};
} // namespace Windows::Data::Text
