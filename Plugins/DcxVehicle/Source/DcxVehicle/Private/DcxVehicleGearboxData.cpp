#include "DcxVehicleGearboxData.h"

FDcxVehicleGearboxData::FDcxVehicleGearboxData() {
    this->Type = EDcxVehicleGearbox::Automatic;
    this->FinalRatio = 0.00f;
    this->SwitchTime = 0.00f;
    this->ReverseGearRatio = 0.00f;
    this->Latency = 0.00f;
    this->NeutralGearUpRatio = 0.00f;
}

