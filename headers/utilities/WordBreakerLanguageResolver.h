#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 5 member(s).
namespace Windows::Data::Text {
class WordBreakerLanguageResolver {
public:
    class HKeyGuard;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBestWordBreakerForLanguage@WordBreakerLanguageResolver@Text@Data@Windows@@QEBAAEBUInstalledWordBreaker@234@PEBG@Z
    WindissectOpaque const & FindBestWordBreakerForLanguage(unsigned short const *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WordBreakerLanguageResolver@Text@Data@Windows@@QEAA@XZ
    WordBreakerLanguageResolver();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WordBreakerLanguageResolver@Text@Data@Windows@@QEAA@XZ
    ~WordBreakerLanguageResolver();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWordBreakerClassId@WordBreakerLanguageResolver@Text@Data@Windows@@CA?AU_GUID@@AEBVHKeyGuard@1234@PEBG@Z
    static _GUID GetWordBreakerClassId(WindissectOpaque const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@WordBreakerLanguageResolver@Text@Data@Windows@@AEAAXXZ
    void Initialize();
};
} // namespace Windows::Data::Text
