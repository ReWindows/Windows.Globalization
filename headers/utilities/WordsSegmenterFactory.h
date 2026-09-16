#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 5 member(s).
namespace Windows::Data::Text {
class WordsSegmenterFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@WordsSegmenterFactory@Text@Data@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithLanguage@WordsSegmenterFactory@Text@Data@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIWordsSegmenter@234@@Z
    virtual long CreateWithLanguage(HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WordsSegmenterFactory@Text@Data@Windows@@QEAA@XZ
    WordsSegmenterFactory();
};
} // namespace Windows::Data::Text
