#include "DcxVehicleWheelConfiguration.h"

FDcxVehicleWheelConfiguration::FDcxVehicleWheelConfiguration() {
    this->CollisionMesh = NULL;
    this->bUsePresetShape = false;
    this->Tire = NULL;
    this->bIsDriven = false;
    this->SweepType = EDcxVehicleWheelSweep::Both;
}

