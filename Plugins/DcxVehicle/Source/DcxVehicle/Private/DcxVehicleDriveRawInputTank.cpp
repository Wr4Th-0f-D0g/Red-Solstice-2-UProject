#include "DcxVehicleDriveRawInputTank.h"

UDcxVehicleDriveRawInputTank::UDcxVehicleDriveRawInputTank() {
    this->RawAnalogControls.AddDefaulted(6);
}

void UDcxVehicleDriveRawInputTank::SetRightThrust(float Thrust) {
}

void UDcxVehicleDriveRawInputTank::SetRightBrake(float Brake) {
}

void UDcxVehicleDriveRawInputTank::SetLeftThrust(float Thrust) {
}

void UDcxVehicleDriveRawInputTank::SetLeftBrake(float Brake) {
}

float UDcxVehicleDriveRawInputTank::GetRightThrust() const {
    return 0.0f;
}

float UDcxVehicleDriveRawInputTank::GetRightBrake() const {
    return 0.0f;
}

float UDcxVehicleDriveRawInputTank::GetLeftThrust() const {
    return 0.0f;
}

float UDcxVehicleDriveRawInputTank::GetLeftBrake() const {
    return 0.0f;
}


