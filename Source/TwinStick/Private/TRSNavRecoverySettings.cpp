#include "TRSNavRecoverySettings.h"

FTRSNavRecoverySettings::FTRSNavRecoverySettings() {
    this->FailureCountUntilRecovery = 0;
    this->FailureTimeUntilRecovery = 0.00f;
    this->MaxRecoveryAttemptTime = 0.00f;
    this->SearchInnerRadius = 0.00f;
    this->SearchOuterRadius = 0.00f;
    this->SearchRadiusGrowthRateInner = 0.00f;
    this->SearchRadiusGrowthRateOuter = 0.00f;
    this->NavRecoverySkipFrames = 0;
}

