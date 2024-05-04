#include "SolsticeVehicleMovementComponentNW.h"

USolsticeVehicleMovementComponentNW::USolsticeVehicleMovementComponentNW(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IdleRPM = 500.00f;
}

void USolsticeVehicleMovementComponentNW::SetDrivenWheel(int32 WheelIndex, bool bIsDriven) {
}

bool USolsticeVehicleMovementComponentNW::IsDrivenWheel(int32 WheelIndex) const {
    return false;
}

float USolsticeVehicleMovementComponentNW::GetThrottleInput() const {
    return 0.0f;
}

float USolsticeVehicleMovementComponentNW::GetForwardSpeedMPH() const {
    return 0.0f;
}

float USolsticeVehicleMovementComponentNW::GetForwardSpeedKMH() const {
    return 0.0f;
}


