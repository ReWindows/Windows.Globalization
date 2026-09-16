#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 6 member(s).
namespace TextSuggestionTraceLoggingTelemetry {
class TextSuggestionCallContextActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TextSuggestionCallContextActivity@TextSuggestionTraceLoggingTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextSuggestionCallContextActivity@TextSuggestionTraceLoggingTelemetry@@QEAA@$$QEAV01@@Z
    TextSuggestionCallContextActivity(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextSuggestionCallContextActivity@TextSuggestionTraceLoggingTelemetry@@QEAA@XZ
    ~TextSuggestionCallContextActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TextSuggestionCallContextActivity@TextSuggestionTraceLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TextSuggestionCallContextActivity@TextSuggestionTraceLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TextSuggestionTraceLoggingTelemetry
