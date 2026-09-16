#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 4 member(s).
namespace Windows::Globalization::LanguageTraceLoggingProvider {
class TrySetInputMethodLanguageTagActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TrySetInputMethodLanguageTagActivity@LanguageTraceLoggingProvider@Globalization@Windows@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TrySetInputMethodLanguageTagActivity@LanguageTraceLoggingProvider@Globalization@Windows@@QEAA@XZ
    ~TrySetInputMethodLanguageTagActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TrySetInputMethodLanguageTagActivity@LanguageTraceLoggingProvider@Globalization@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TrySetInputMethodLanguageTagActivity@LanguageTraceLoggingProvider@Globalization@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Globalization::LanguageTraceLoggingProvider
