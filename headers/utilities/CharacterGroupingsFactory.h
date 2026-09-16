#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 5 member(s).
namespace Windows::Globalization::Collation {
class CharacterGroupingsFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CharacterGroupingsFactory@Collation@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CharacterGroupingsFactory@Collation@Globalization@Windows@@QEAA@XZ
    CharacterGroupingsFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CharacterGroupingsFactory@Collation@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICharacterGroupings@234@@Z
    virtual long Create(HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::Globalization::Collation
