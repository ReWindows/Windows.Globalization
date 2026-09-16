#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 5 member(s).
namespace Windows::Data::Text {
class SelectableWordsSegmenterFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@SelectableWordsSegmenterFactory@Text@Data@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithLanguage@SelectableWordsSegmenterFactory@Text@Data@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUISelectableWordsSegmenter@234@@Z
    virtual long CreateWithLanguage(HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SelectableWordsSegmenterFactory@Text@Data@Windows@@QEAA@XZ
    SelectableWordsSegmenterFactory();
};
} // namespace Windows::Data::Text
