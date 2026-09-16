#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 20 member(s).
namespace Windows::Data::Text {
class AlternateWordForm {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AlternateWordForm@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AlternateWordForm@Text@Data@Windows@@SA?AV?$ComPtr@VAlternateWordForm@Text@Data@Windows@@@WRL@Microsoft@@PEAUHSTRING__@@IIW4AlternateNormalizationFormat@234@@Z
    static WindissectOpaque Create(HSTRING__*, unsigned int, unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AlternateWordForm@Text@Data@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AlternateWordForm@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AlternateWordForm@Text@Data@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AlternateWordForm@Text@Data@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AlternateWordForm@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlternateTextBasedOnOriginalText@AlternateWordForm@Text@Data@Windows@@QEAAXPEBG@Z
    void SetAlternateTextBasedOnOriginalText(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlternateText@AlternateWordForm@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AlternateText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NormalizationFormat@AlternateWordForm@Text@Data@Windows@@UEAAJPEAW4AlternateNormalizationFormat@234@@Z
    virtual long get_NormalizationFormat(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceTextSegment@AlternateWordForm@Text@Data@Windows@@UEAAJPEAUTextSegment@234@@Z
    virtual long get_SourceTextSegment(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlternateWordForm@Text@Data@Windows@@UEAA@XZ
    virtual ~AlternateWordForm();
};
} // namespace Windows::Data::Text
