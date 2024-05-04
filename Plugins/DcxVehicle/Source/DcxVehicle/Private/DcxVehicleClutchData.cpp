#include "DcxVehicleClutchData.h"

FDcxVehicleClutchData::FDcxVehicleClutchData() {
    this->BitePoint = 0.00f;
    this->Strength = 0.00f;
    this->AccuracyMode = EDcxVehicleClutchAccuracyMode::Estimate;
    this->EstimateIterations = 0;
}

