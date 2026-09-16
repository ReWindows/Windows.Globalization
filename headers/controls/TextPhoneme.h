#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 18 member(s).
namespace Windows::Data::Text {
class TextPhoneme {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TextPhoneme@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TextPhoneme@Text@Data@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TextPhoneme@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TextPhoneme@Text@Data@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TextPhoneme@Text@Data@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TextPhoneme@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextPhoneme@Text@Data@Windows@@QEAA@XZ
    TextPhoneme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayText@TextPhoneme@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReadingText@TextPhoneme@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ReadingText(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextPhoneme@Text@Data@Windows@@UEAA@XZ
    virtual ~TextPhoneme();
};
} // namespace Windows::Data::Text
