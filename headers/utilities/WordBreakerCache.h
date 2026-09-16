#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 5 member(s).
namespace Windows::Data::Text {
class WordBreakerCache {
public:
    class CreatedWordBreaker;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWordBreakerForLanguage@WordBreakerCache@Text@Data@Windows@@UEBA?AUResolvedWordBreaker@234@PEBG@Z
    virtual WindissectOpaque GetWordBreakerForLanguage(unsigned short const *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WordBreakerCache@Text@Data@Windows@@QEAA@XZ
    ~WordBreakerCache();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWordBreaker@WordBreakerCache@Text@Data@Windows@@AEBA?AUCreatedWordBreaker@1234@AEBUInstalledWordBreaker@234@@Z
    WindissectOpaque CreateWordBreaker(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultCreateSearchWordBreaker@WordBreakerCache@Text@Data@Windows@@CAJAEBUInstalledWordBreaker@234@PEAPEAUIWordBreaker@@@Z
    static long DefaultCreateSearchWordBreaker(WindissectOpaque const &, IWordBreaker * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDefaultInstance@WordBreakerCache@Text@Data@Windows@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int InitDefaultInstance(_RTL_RUN_ONCE *, void *, void * *);
};
} // namespace Windows::Data::Text
