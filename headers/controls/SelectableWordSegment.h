#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 19 member(s).
namespace Windows::Data::Text {
class SelectableWordSegment {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SelectableWordSegment@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SelectableWordSegment@Text@Data@Windows@@SA?AV?$ComPtr@VSelectableWordSegment@Text@Data@Windows@@@WRL@Microsoft@@PEBGII@Z
    static WindissectOpaque Create(unsigned short const *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SelectableWordSegment@Text@Data@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SelectableWordSegment@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SelectableWordSegment@Text@Data@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SelectableWordSegment@Text@Data@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SelectableWordSegment@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SelectableWordSegment@Text@Data@Windows@@QEAAJPEBGII@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceTextSegment@SelectableWordSegment@Text@Data@Windows@@UEAAJPEAUTextSegment@234@@Z
    virtual long get_SourceTextSegment(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Text@SelectableWordSegment@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Text(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SelectableWordSegment@Text@Data@Windows@@UEAA@XZ
    virtual ~SelectableWordSegment();
};
} // namespace Windows::Data::Text
