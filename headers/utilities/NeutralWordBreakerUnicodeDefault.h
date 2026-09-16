#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 12 member(s).
namespace Windows::Data::Text {
class NeutralWordBreakerUnicodeDefault {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BreakText@NeutralWordBreakerUnicodeDefault@Text@Data@Windows@@UEAAJPEAUtagTEXT_SOURCE@@PEAUIWordSink@@PEAUIPhraseSink@@@Z
    virtual long BreakText(tagTEXT_SOURCE *, IWordSink *, IPhraseSink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComposePhrase@NeutralWordBreakerUnicodeDefault@Text@Data@Windows@@UEAAJPEBGK0KKPEAGPEAK@Z
    virtual long ComposePhrase(unsigned short const *, unsigned long, unsigned short const *, unsigned long, unsigned long, unsigned short *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFeatureFlags@NeutralWordBreakerUnicodeDefault@Text@Data@Windows@@UEAAJPEAK@Z
    virtual long GetFeatureFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentifier@NeutralWordBreakerUnicodeDefault@Text@Data@Windows@@UEAAJPEAPEAG@Z
    virtual long GetIdentifier(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLicenseToUse@NeutralWordBreakerUnicodeDefault@Text@Data@Windows@@UEAAJPEAPEBG@Z
    virtual long GetLicenseToUse(unsigned short const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@NeutralWordBreakerUnicodeDefault@Text@Data@Windows@@UEAAJHKPEAH@Z
    virtual long Init(int, unsigned long, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NeutralWordBreakerUnicodeDefault@Text@Data@Windows@@QEAA@XZ
    NeutralWordBreakerUnicodeDefault();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NeutralWordBreakerUnicodeDefault@Text@Data@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NeutralWordBreakerUnicodeDefault@Text@Data@Windows@@UEAA@XZ
    virtual ~NeutralWordBreakerUnicodeDefault();
};
} // namespace Windows::Data::Text
