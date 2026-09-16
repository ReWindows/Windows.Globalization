#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 9 member(s).
namespace Windows::Globalization {
class LanguageFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@LanguageFactory@Globalization@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLanguage@LanguageFactory@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUILanguage@23@@Z
    virtual long CreateLanguage(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMuiCompatibleLanguageListFromLanguageTags@LanguageFactory@Globalization@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@3@PEAPEAU?$IVector@PEAUHSTRING__@@@563@@Z
    virtual long GetMuiCompatibleLanguageListFromLanguageTags(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWellFormed@LanguageFactory@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsWellFormed(HSTRING__*, unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LanguageFactory@Globalization@Windows@@QEAA@XZ
    LanguageFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetInputMethodLanguageTag@LanguageFactory@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long TrySetInputMethodLanguageTag(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentInputMethodLanguageTag@LanguageFactory@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CurrentInputMethodLanguageTag(HSTRING__* *);
};
} // namespace Windows::Globalization
