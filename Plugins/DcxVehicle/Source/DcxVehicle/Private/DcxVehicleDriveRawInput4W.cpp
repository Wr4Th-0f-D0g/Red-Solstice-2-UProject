#include "DcxVehicleDriveRawInput4W.h"

UDcxVehicleDriveRawInput4W::UDcxVehicleDriveRawInput4W() {
    this->RawAnalogControls.AddDefaulted(5);
}

void UDcxVehicleDriveRawInput4W::SetSteer(const float Steer) {
}

void UDcxVehicleDriveRawInput4W::SetHandbrake(const float Handbrake) {
}

void UDcxVehicleDriveRawInput4W::SetBrake(const float Brake) {
}

float UDcxVehicleDriveRawInput4W::GetSteer() const {
    return 0.0f;
}

float UDcxVehicleDriveRawInput4W::GetHandbrake() const {
    return 0.0f;
}

float UDcxVehicleDriveRawInput4W::GetBrake() const {
    return 0.0f;
}


