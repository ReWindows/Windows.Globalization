#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 24 member(s).
namespace Windows::Data::Text {
class WordsSegmenter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WordsSegmenter@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@WordsSegmenter@Text@Data@Windows@@SA?AV?$ComPtr@VWordsSegmenter@Text@Data@Windows@@@WRL@Microsoft@@PEAUHSTRING__@@@Z
    static WindissectOpaque Create(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WordsSegmenter@Text@Data@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WordsSegmenter@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenAt@WordsSegmenter@Text@Data@Windows@@UEAAJPEAUHSTRING__@@IPEAPEAUIWordSegment@234@@Z
    virtual long GetTokenAt(HSTRING__*, unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokens@WordsSegmenter@Text@Data@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVWordSegment@Text@Data@Windows@@@Collections@Foundation@4@@Z
    virtual long GetTokens(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WordsSegmenter@Text@Data@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@WordsSegmenter@Text@Data@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@WordsSegmenter@Text@Data@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WordsSegmenter@Text@Data@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WordsSegmenter@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WordsSegmenter@Text@Data@Windows@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Tokenize@WordsSegmenter@Text@Data@Windows@@UEAAJPEAUHSTRING__@@IPEAUIWordSegmentsTokenizingHandler@234@@Z
    virtual long Tokenize(HSTRING__*, unsigned int, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WordsSegmenter@Text@Data@Windows@@QEAA@XZ
    WordsSegmenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolvedLanguage@WordsSegmenter@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResolvedLanguage(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WordsSegmenter@Text@Data@Windows@@UEAA@XZ
    virtual ~WordsSegmenter();
};
} // namespace Windows::Data::Text
