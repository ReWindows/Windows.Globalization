#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 33 member(s).
namespace Windows::Data::Text {
class TextPredictionGenerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TextPredictionGenerator@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatesAsync@TextPredictionGenerator@Text@Data@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@4@@Z
    virtual long GetCandidatesAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatesWithMaxCountAsync@TextPredictionGenerator@Text@Data@Windows@@UEAAJPEAUHSTRING__@@IPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@4@@Z
    virtual long GetCandidatesWithMaxCountAsync(HSTRING__*, unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatesWithParametersAsync@TextPredictionGenerator@Text@Data@Windows@@UEAAJPEAUHSTRING__@@IW4TextPredictionOptions@234@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@94@@Z
    virtual long GetCandidatesWithParametersAsync(HSTRING__*, unsigned int, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TextPredictionGenerator@Text@Data@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextWordCandidatesAsync@TextPredictionGenerator@Text@Data@Windows@@UEAAJIPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@74@@Z
    virtual long GetNextWordCandidatesAsync(unsigned int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TextPredictionGenerator@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TextPredictionGenerator@Text@Data@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TextPredictionGenerator@Text@Data@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@TextPredictionGenerator@Text@Data@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TextPredictionGenerator@Text@Data@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TextPredictionGenerator@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TextPredictionGenerator@Text@Data@Windows@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextPredictionGenerator@Text@Data@Windows@@QEAA@XZ
    TextPredictionGenerator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputScope@TextPredictionGenerator@Text@Data@Windows@@UEAAJPEAW4CoreTextInputScope@Core@2UI@4@@Z
    virtual long get_InputScope(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LanguageAvailableButNotInstalled@TextPredictionGenerator@Text@Data@Windows@@UEAAJPEAE@Z
    virtual long get_LanguageAvailableButNotInstalled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolvedLanguage@TextPredictionGenerator@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResolvedLanguage(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InputScope@TextPredictionGenerator@Text@Data@Windows@@UEAAJW4CoreTextInputScope@Core@2UI@4@@Z
    virtual long put_InputScope(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextPredictionGenerator@Text@Data@Windows@@UEAA@XZ
    virtual ~TextPredictionGenerator();
};
} // namespace Windows::Data::Text
