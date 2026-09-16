#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 4 member(s).
namespace Windows::Data::Text {
class TextPredictionGeneratorFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TextPredictionGeneratorFactory@Text@Data@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUITextPredictionGenerator@234@@Z
    virtual long Create(HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextPredictionGeneratorFactory@Text@Data@Windows@@QEAA@XZ
    TextPredictionGeneratorFactory();
};
} // namespace Windows::Data::Text
