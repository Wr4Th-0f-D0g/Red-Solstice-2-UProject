#include "DcxVehicleDriveRawInput.h"

UDcxVehicleDriveRawInput::UDcxVehicleDriveRawInput() {
    this->ClutchIndex = -1;
    this->bGearUp = false;
    this->bGearDown = false;
}

void UDcxVehicleDriveRawInput::SetGearUp(const bool bGearUpPressed) {
}

void UDcxVehicleDriveRawInput::SetGearDown(const bool bGearDownPressed) {
}

void UDcxVehicleDriveRawInput::SetClutch(const float Clutch) {
}

bool UDcxVehicleDriveRawInput::GetGearUp() const {
    return false;
}

bool UDcxVehicleDriveRawInput::GetGearDown() const {
    return false;
}

float UDcxVehicleDriveRawInput::GetClutch() const {
    return 0.0f;
}


