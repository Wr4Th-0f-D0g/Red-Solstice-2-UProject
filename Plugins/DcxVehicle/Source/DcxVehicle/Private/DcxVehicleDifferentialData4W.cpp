#include "DcxVehicleDifferentialData4W.h"

FDcxVehicleDifferentialData4W::FDcxVehicleDifferentialData4W() {
    this->DifferentialType = EDcxVehicleDifferential4W::LS_4WD;
    this->FrontRearSplit = 0.00f;
    this->FrontLeftRightSplit = 0.00f;
    this->RearLeftRightSplit = 0.00f;
    this->CenterBias = 0.00f;
    this->FrontBias = 0.00f;
    this->RearBias = 0.00f;
}

