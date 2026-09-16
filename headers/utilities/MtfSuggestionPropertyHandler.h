#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 7 member(s).
namespace Windows::Data::Text {
class MtfSuggestionPropertyHandler {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReading@MtfSuggestionPropertyHandler@Text@Data@Windows@@UEAAPEBGPEBG0@Z
    virtual unsigned short const * GetReading(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextPhoneme@MtfSuggestionPropertyHandler@Text@Data@Windows@@UEAA?AV?$ComPtr@VTextPhoneme@Text@Data@Windows@@@WRL@Microsoft@@PEBG0@Z
    virtual WindissectOpaque GetTextPhoneme(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreprocessInputString@MtfSuggestionPropertyHandler@Text@Data@Windows@@UEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z
    virtual ::Microsoft::WRL::Wrappers::HString PreprocessInputString(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputString@MtfSuggestionPropertyHandler@Text@Data@Windows@@UEAAXPEAUHSTRING__@@@Z
    virtual void SetInputString(HSTRING__*);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDisplayUsedAsReading@MtfSuggestionPropertyHandler@Text@Data@Windows@@MEAA_NPEBG@Z
    virtual bool IsDisplayUsedAsReading(unsigned short const *);
};
} // namespace Windows::Data::Text
