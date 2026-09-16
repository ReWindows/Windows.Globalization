#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 4 member(s).
class TextSuggestionTraceLoggingTelemetry {
public:
    class TextSuggestionCallContextActivity;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiUnloaded_@TextSuggestionTraceLoggingTelemetry@@QEBAXPEBG00I@Z
    void ApiUnloaded_(unsigned short const *, unsigned short const *, unsigned short const *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@TextSuggestionTraceLoggingTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
};
