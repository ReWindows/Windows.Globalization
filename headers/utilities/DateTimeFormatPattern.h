#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 9 member(s).
namespace Windows::Globalization::DateTimeFormatting {
class DateTimeFormatPattern {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumeralSystem@DateTimeFormatPattern@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_NumeralSystem(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolvedLanguage@DateTimeFormatPattern@DateTimeFormatting@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResolvedLanguage(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NumeralSystem@DateTimeFormatPattern@DateTimeFormatting@Globalization@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_NumeralSystem(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DateTimeFormatPattern@DateTimeFormatting@Globalization@Windows@@QEAA@XZ
    ~DateTimeFormatPattern();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendFormattingStrategy@DateTimeFormatPattern@DateTimeFormatting@Globalization@Windows@@AEAAXW4PatternType@1234@W4PatternQualifier@1234@I@Z
    void AppendFormattingStrategy(int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendRecognizedMatch@DateTimeFormatPattern@DateTimeFormatting@Globalization@Windows@@AEAAXPEBG0@Z
    void AppendRecognizedMatch(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckJapaneseGannenEnabled@DateTimeFormatPattern@DateTimeFormatting@Globalization@Windows@@AEAAXXZ
    void CheckJapaneseGannenEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DateTimeFormatPattern@DateTimeFormatting@Globalization@Windows@@AEAAXPEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@00@Z
    void Initialize(HSTRING__*, WindissectOpaque *, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFormattingStrategyFromPattern@DateTimeFormatPattern@DateTimeFormatting@Globalization@Windows@@AEAAXPEAUHSTRING__@@@Z
    void InitializeFormattingStrategyFromPattern(HSTRING__*);
};
} // namespace Windows::Globalization::DateTimeFormatting
