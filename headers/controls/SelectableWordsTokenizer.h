#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 11 member(s).
namespace Windows::Data::Text {
class SelectableWordsTokenizer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAltPhrase@SelectableWordsTokenizer@Text@Data@Windows@@UEAAJXZ
    virtual long EndAltPhrase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutAltWord@SelectableWordsTokenizer@Text@Data@Windows@@UEAAJKPEBGKK@Z
    virtual long PutAltWord(unsigned long, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutBreak@SelectableWordsTokenizer@Text@Data@Windows@@UEAAJW4tagWORDREP_BREAK_TYPE@@@Z
    virtual long PutBreak(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutWord@SelectableWordsTokenizer@Text@Data@Windows@@UEAAJKPEBGKK@Z
    virtual long PutWord(unsigned long, unsigned short const *, unsigned long, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SelectableWordsTokenizer@Text@Data@Windows@@QEAA@XZ
    SelectableWordsTokenizer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAltPhrase@SelectableWordsTokenizer@Text@Data@Windows@@UEAAJXZ
    virtual long StartAltPhrase();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SelectableWordsTokenizer@Text@Data@Windows@@UEAA@XZ
    virtual ~SelectableWordsTokenizer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBestStartProcessingPosition@SelectableWordsTokenizer@Text@Data@Windows@@CAXPEBGI_KPEA_KPEA_N@Z
    static void FindBestStartProcessingPosition(unsigned short const *, unsigned int, uint64_t, uint64_t *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAltWordEnd@SelectableWordsTokenizer@Text@Data@Windows@@AEAA_NI@Z
    bool IsAltWordEnd(unsigned int);
};
} // namespace Windows::Data::Text
