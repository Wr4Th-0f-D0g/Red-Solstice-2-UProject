#include "DcxVehicleWheelState.h"

FDcxVehicleWheelState::FDcxVehicleWheelState() {
    this->SuspensionLineLength = 0.00f;
    this->bIsInAir = false;
    this->TireContactActor = NULL;
    this->TireSurfaceMaterial = NULL;
    this->TireFriction = 0.00f;
    this->SuspensionJounce = 0.00f;
    this->SuspensionSpringForce = 0.00f;
    this->LongitudinalSlip = 0.00f;
    this->LateralSlip = 0.00f;
    this->SteerAngle = 0.00f;
}

