#include "PlayerTaskStatRange.h"

FPlayerTaskStatRange::FPlayerTaskStatRange() {
    this->ComparisonType = EStatComparison::EqualOrGreater;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
}

