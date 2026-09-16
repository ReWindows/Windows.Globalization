#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 29 member(s).
namespace Windows::Data::Text {
class TextReverseConversionGenerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TextReverseConversionGenerator@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertBackAsync@TextReverseConversionGenerator@Text@Data@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@4@@Z
    virtual long ConvertBackAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TextReverseConversionGenerator@Text@Data@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhonemesAsync@TextReverseConversionGenerator@Text@Data@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTextPhoneme@Text@Data@Windows@@@Collections@Foundation@Windows@@@Foundation@4@@Z
    virtual long GetPhonemesAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TextReverseConversionGenerator@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TextReverseConversionGenerator@Text@Data@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TextReverseConversionGenerator@Text@Data@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@TextReverseConversionGenerator@Text@Data@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TextReverseConversionGenerator@Text@Data@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TextReverseConversionGenerator@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TextReverseConversionGenerator@Text@Data@Windows@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextReverseConversionGenerator@Text@Data@Windows@@QEAA@XZ
    TextReverseConversionGenerator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LanguageAvailableButNotInstalled@TextReverseConversionGenerator@Text@Data@Windows@@UEAAJPEAE@Z
    virtual long get_LanguageAvailableButNotInstalled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolvedLanguage@TextReverseConversionGenerator@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResolvedLanguage(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextReverseConversionGenerator@Text@Data@Windows@@UEAA@XZ
    virtual ~TextReverseConversionGenerator();
};
} // namespace Windows::Data::Text
