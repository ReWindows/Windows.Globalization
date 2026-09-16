#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 39 member(s).
namespace Windows::Data::Text {
class UnicodeCharacters {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@UnicodeCharacters@Text@Data@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnicodeCharacters@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCodepointFromSurrogatePair@UnicodeCharacters@Text@Data@Windows@@UEAAJIIPEAI@Z
    virtual long GetCodepointFromSurrogatePair(unsigned int, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeneralCategory@UnicodeCharacters@Text@Data@Windows@@SA?AW4UnicodeGeneralCategory@234@I@Z
    static int GetGeneralCategory(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeneralCategory@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAW4UnicodeGeneralCategory@234@@Z
    virtual long GetGeneralCategory(unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UnicodeCharacters@Text@Data@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumericType@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAW4UnicodeNumericType@234@@Z
    virtual long GetNumericType(unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UnicodeCharacters@Text@Data@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurrogatePairFromCodepoint@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAG0@Z
    virtual long GetSurrogatePairFromCodepoint(unsigned int, unsigned short *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UnicodeCharacters@Text@Data@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@UnicodeCharacters@Text@Data@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@UnicodeCharacters@Text@Data@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAlphabetic@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAE@Z
    virtual long IsAlphabetic(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCased@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAE@Z
    virtual long IsCased(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGraphemeBase@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAE@Z
    virtual long IsGraphemeBase(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGraphemeExtend@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAE@Z
    virtual long IsGraphemeExtend(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighSurrogate@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAE@Z
    virtual long IsHighSurrogate(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIdContinue@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAE@Z
    virtual long IsIdContinue(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIdStart@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAE@Z
    virtual long IsIdStart(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLowSurrogate@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAE@Z
    virtual long IsLowSurrogate(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLowercase@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAE@Z
    virtual long IsLowercase(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNoncharacter@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAE@Z
    virtual long IsNoncharacter(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupplementary@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAE@Z
    virtual long IsSupplementary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUppercase@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAE@Z
    virtual long IsUppercase(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWhitespace@UnicodeCharacters@Text@Data@Windows@@UEAAJIPEAE@Z
    virtual long IsWhitespace(unsigned int, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnicodeCharacters@Text@Data@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnicodeCharacters@Text@Data@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnicodeCharacters@Text@Data@Windows@@QEAA@XZ
    UnicodeCharacters();
};
} // namespace Windows::Data::Text
