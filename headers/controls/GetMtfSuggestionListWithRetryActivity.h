#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 8 member(s).
namespace Windows::Globalization::LanguageTraceLoggingProvider {
class GetMtfSuggestionListWithRetryActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailedByTaskFlush@GetMtfSuggestionListWithRetryActivity@LanguageTraceLoggingProvider@Globalization@Windows@@QEAAXI@Z
    void FailedByTaskFlush(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailedByTimeout@GetMtfSuggestionListWithRetryActivity@LanguageTraceLoggingProvider@Globalization@Windows@@QEAAXXZ
    void FailedByTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Retrying@GetMtfSuggestionListWithRetryActivity@LanguageTraceLoggingProvider@Globalization@Windows@@QEAAXH@Z
    void Retrying(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetMtfSuggestionListWithRetryActivity@LanguageTraceLoggingProvider@Globalization@Windows@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SucceededByRetry@GetMtfSuggestionListWithRetryActivity@LanguageTraceLoggingProvider@Globalization@Windows@@QEAAXI@Z
    void SucceededByRetry(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetMtfSuggestionListWithRetryActivity@LanguageTraceLoggingProvider@Globalization@Windows@@QEAA@XZ
    ~GetMtfSuggestionListWithRetryActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetMtfSuggestionListWithRetryActivity@LanguageTraceLoggingProvider@Globalization@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetMtfSuggestionListWithRetryActivity@LanguageTraceLoggingProvider@Globalization@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Globalization::LanguageTraceLoggingProvider
