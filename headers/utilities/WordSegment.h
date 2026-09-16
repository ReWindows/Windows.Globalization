#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 18 member(s).
namespace Windows::Data::Text {
class WordSegment {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WordSegment@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WordSegment@Text@Data@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WordSegment@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WordSegment@Text@Data@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WordSegment@Text@Data@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WordSegment@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlternateForms@WordSegment@Text@Data@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAlternateWordForm@Text@Data@Windows@@@Collections@Foundation@4@@Z
    virtual long get_AlternateForms(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceTextSegment@WordSegment@Text@Data@Windows@@UEAAJPEAUTextSegment@234@@Z
    virtual long get_SourceTextSegment(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Text@WordSegment@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Text(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WordSegment@Text@Data@Windows@@UEAA@XZ
    virtual ~WordSegment();
};
} // namespace Windows::Data::Text
