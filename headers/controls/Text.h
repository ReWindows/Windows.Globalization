#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 19 member(s).
namespace Windows::Data {
class Text {
public:
    class AlternateWordForm;
    class InstalledWordBreaker;
    class IterableSelectableWordSegment;
    class IterableWordSegment;
    class LanguageResolutionResult;
    class MtfSuggestionPropertyHandler;
    class MtfSuggestionPropertyHandlerCHS;
    class MtfSuggestionPropertyHandlerDesktopCHS;
    class MtfSuggestionPropertyHandlerJPN;
    class MtfSuggestionPropertyHandlerMobileCHS;
    class NeutralWordBreakerUnicodeDefault;
    class ResolvedWordBreaker;
    class ReverseIterableSelectableWordSegment;
    class ReverseIterableWordSegment;
    class SelectableWordSegment;
    class SelectableWordSegmentIterator;
    class SelectableWordSegmentReverseIterator;
    class SelectableWordsSegmenter;
    class SelectableWordsSegmenterFactory;
    class SelectableWordsTokenizer;
    class TextConversionGenerator;
    class TextConversionGeneratorFactory;
    class TextPhoneme;
    class TextPredictionGenerator;
    class TextPredictionGeneratorFactory;
    class TextReverseConversionGenerator;
    class TextReverseConversionGeneratorFactory;
    class TextSource;
    class TextSourceChunkInputIterator;
    class UnicodeCharacters;
    class WordBreakStartPositionFinder;
    class WordBreakerCache;
    class WordBreakerLanguageResolver;
    class WordSegment;
    class WordSegmentIterator;
    class WordSegmentReverseIterator;
    class WordsSegmenter;
    class WordsSegmenterFactory;
    class WordsTokenizer;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CharacterHasProperty@Text@Data@Windows@@YA_NIW4UProperty@@@Z
    bool CharacterHasProperty(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CharacterHasProperty@Text@Data@Windows@@YAJIW4UProperty@@PEAE@Z
    long CharacterHasProperty(unsigned int, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertBack@Text@Data@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@AEBULanguageResolutionResult@123@PEAUHSTRING__@@@Z
    ::Microsoft::WRL::Wrappers::HString ConvertBack(WindissectOpaque const &, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDgmlResourceUri@Text@Data@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEBGPEAUHSTRING__@@@Z
    ::Microsoft::WRL::Wrappers::HString GetDgmlResourceUri(unsigned short const *, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDgmlResourceUriCHS@Text@Data@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::HString GetDgmlResourceUriCHS();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDgmlRootName@Text@Data@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::HString GetDgmlRootName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFuzzyDSMaxCorrections@Text@Data@Windows@@YAIXZ
    unsigned int GetFuzzyDSMaxCorrections();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputTypeAttributeGUID@Text@Data@Windows@@YAJGPEAU_GUID@@@Z
    long GetInputTypeAttributeGUID(unsigned short, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLangId@Text@Data@Windows@@YAGPEAUHSTRING__@@@Z
    unsigned short GetLangId(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhonemes@Text@Data@Windows@@YA?AV?$ComPtr@U?$IVectorView@PEAVTextPhoneme@Text@Data@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@AEBULanguageResolutionResult@123@PEAUHSTRING__@@@Z
    WindissectOpaque GetPhonemes(WindissectOpaque const &, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitiveProperty@Text@Data@Windows@@YAXAEBQEAUHSTRING__@@PEAU_MTF_PRIMITIVE_PROP@@@Z
    void GetPrimitiveProperty(HSTRING__* const &, _MTF_PRIMITIVE_PROP *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedLanguageTag@Text@Data@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@0@Z
    ::Microsoft::WRL::Wrappers::HString GetSupportedLanguageTag(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GuidFromString@Text@Data@Windows@@YAHPEBGPEAU_GUID@@@Z
    int GuidFromString(unsigned short const *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLangResourcesInstalled@Text@Data@Windows@@YA_NPEAUHSTRING__@@@Z
    bool IsLangResourcesInstalled(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveLanguageForPrediction@Text@Data@Windows@@YA?AULanguageResolutionResult@123@PEAUHSTRING__@@PEBG1@Z
    WindissectOpaque ResolveLanguageForPrediction(HSTRING__*, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveLanguageForTextSuggestionApi@Text@Data@Windows@@YA?AULanguageResolutionResult@123@PEAUHSTRING__@@PEBG1@Z
    WindissectOpaque ResolveLanguageForTextSuggestionApi(HSTRING__*, unsigned short const *, unsigned short const *);
};
} // namespace Windows::Data
