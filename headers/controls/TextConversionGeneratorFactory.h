#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 4 member(s).
namespace Windows::Data::Text {
class TextConversionGeneratorFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TextConversionGeneratorFactory@Text@Data@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUITextConversionGenerator@234@@Z
    virtual long Create(HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextConversionGeneratorFactory@Text@Data@Windows@@QEAA@XZ
    TextConversionGeneratorFactory();
};
} // namespace Windows::Data::Text
