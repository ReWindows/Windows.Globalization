#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 3 member(s).
class BrokeredActivationBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BrokeredActivationBase@@QEAA@PEBG@Z
    BrokeredActivationBase(unsigned short const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrokeredIdentity@BrokeredActivationBase@@IEAAJAEBU_GUID@@PEAPEAX@Z
    long GetBrokeredIdentity(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrokeredIdentityForUser@BrokeredActivationBase@@IEAAJPEAUIUser@System@Windows@@AEBU_GUID@@PEAPEAX@Z
    long GetBrokeredIdentityForUser(::Windows::System::IUser *, _GUID const &, void * *);
};
