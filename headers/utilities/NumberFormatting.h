#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.dll by Windissect. 15 member(s).
namespace Windows::Globalization {
class NumberFormatting {
public:
    class CurrencyFormatter;
    class CurrencyFormatterFactory;
    class DecimalFormatter;
    class DecimalFormatterFactory;
    class DoubleConverter;
    class HebrewNumeralFormatter;
    class IncrementNumberRounder;
    class NativeDecimalDigits;
    class NumberFormatter;
    class NumberRounder;
    class NumeralSystemDecimalFormatterInternal;
    class NumeralSystemTranslator;
    class NumeralSystemTranslatorFactory;
    class PercentFormatter;
    class PercentFormatterFactory;
    class PermilleFormatter;
    class PermilleFormatterFactory;
    class SignificantDigitsNumberRounder;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSpecialCoefficientOfOne@NumberFormatting@Globalization@Windows@@YA_NN@Z
    bool IsSpecialCoefficientOfOne(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LowerBound1Nth@NumberFormatting@Globalization@Windows@@YANN@Z
    double LowerBound1Nth(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?pow10@NumberFormatting@Globalization@Windows@@YANH@Z
    double pow10(int);
};
} // namespace Windows::Globalization
