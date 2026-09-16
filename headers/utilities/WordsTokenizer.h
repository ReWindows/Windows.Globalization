#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 10 member(s).
namespace Windows::Data::Text {
class WordsTokenizer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAltPhrase@WordsTokenizer@Text@Data@Windows@@UEAAJXZ
    virtual long EndAltPhrase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutAltWord@WordsTokenizer@Text@Data@Windows@@UEAAJKPEBGKK@Z
    virtual long PutAltWord(unsigned long, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutBreak@WordsTokenizer@Text@Data@Windows@@UEAAJW4tagWORDREP_BREAK_TYPE@@@Z
    virtual long PutBreak(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutWord@WordsTokenizer@Text@Data@Windows@@UEAAJKPEBGKK@Z
    virtual long PutWord(unsigned long, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAltPhrase@WordsTokenizer@Text@Data@Windows@@UEAAJXZ
    virtual long StartAltPhrase();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WordsTokenizer@Text@Data@Windows@@QEAA@XZ
    WordsTokenizer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WordsTokenizer@Text@Data@Windows@@UEAA@XZ
    virtual ~WordsTokenizer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAsAlternate@WordsTokenizer@Text@Data@Windows@@AEAAXIPEBGII@Z
    void AddAsAlternate(unsigned int, unsigned short const *, unsigned int, unsigned int);
};
} // namespace Windows::Data::Text
