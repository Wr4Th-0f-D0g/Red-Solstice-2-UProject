#include "DcxVehicleEngineData.h"

FDcxVehicleEngineData::FDcxVehicleEngineData() {
    this->MOI = 0.00f;
    this->IdleRPM = 0.00f;
    this->MaxRPM = 0.00f;
    this->DampingRateFullThrottle = 0.00f;
    this->DampingRateZeroThrottleClutchEngaged = 0.00f;
    this->DampingRateZeroThrottleClutchDisengaged = 0.00f;
}

