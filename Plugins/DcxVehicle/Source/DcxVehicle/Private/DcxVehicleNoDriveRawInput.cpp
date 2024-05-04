#include "DcxVehicleNoDriveRawInput.h"

UDcxVehicleNoDriveRawInput::UDcxVehicleNoDriveRawInput() {
    this->RawAnalogControls.AddDefaulted(3);
}

void UDcxVehicleNoDriveRawInput::SetSteer(const float NewSteer) {
}

void UDcxVehicleNoDriveRawInput::SetBrake(const float NewBrake) {
}

float UDcxVehicleNoDriveRawInput::GetSteer() const {
    return 0.0f;
}

float UDcxVehicleNoDriveRawInput::GetBrake() const {
    return 0.0f;
}


