#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 24 member(s).
namespace Windows::Data::Text {
class SelectableWordsSegmenter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SelectableWordsSegmenter@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SelectableWordsSegmenter@Text@Data@Windows@@SA?AV?$ComPtr@VSelectableWordsSegmenter@Text@Data@Windows@@@WRL@Microsoft@@PEAUHSTRING__@@@Z
    static WindissectOpaque Create(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SelectableWordsSegmenter@Text@Data@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SelectableWordsSegmenter@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenAt@SelectableWordsSegmenter@Text@Data@Windows@@UEAAJPEAUHSTRING__@@IPEAPEAUISelectableWordSegment@234@@Z
    virtual long GetTokenAt(HSTRING__*, unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokens@SelectableWordsSegmenter@Text@Data@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVSelectableWordSegment@Text@Data@Windows@@@Collections@Foundation@4@@Z
    virtual long GetTokens(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SelectableWordsSegmenter@Text@Data@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SelectableWordsSegmenter@Text@Data@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SelectableWordsSegmenter@Text@Data@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SelectableWordsSegmenter@Text@Data@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SelectableWordsSegmenter@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SelectableWordsSegmenter@Text@Data@Windows@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SelectableWordsSegmenter@Text@Data@Windows@@QEAA@XZ
    SelectableWordsSegmenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Tokenize@SelectableWordsSegmenter@Text@Data@Windows@@UEAAJPEAUHSTRING__@@IPEAUISelectableWordSegmentsTokenizingHandler@234@@Z
    virtual long Tokenize(HSTRING__*, unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolvedLanguage@SelectableWordsSegmenter@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResolvedLanguage(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SelectableWordsSegmenter@Text@Data@Windows@@UEAA@XZ
    virtual ~SelectableWordsSegmenter();
};
} // namespace Windows::Data::Text
