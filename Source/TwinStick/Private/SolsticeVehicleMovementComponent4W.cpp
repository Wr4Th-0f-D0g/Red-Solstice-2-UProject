#include "SolsticeVehicleMovementComponent4W.h"

USolsticeVehicleMovementComponent4W::USolsticeVehicleMovementComponent4W(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WheelSetups.AddDefaulted(4);
    this->IdleRPM = 500.00f;
}

float USolsticeVehicleMovementComponent4W::GetThrottleInput() const {
    return 0.0f;
}

float USolsticeVehicleMovementComponent4W::GetForwardSpeedMPH() const {
    return 0.0f;
}

float USolsticeVehicleMovementComponent4W::GetForwardSpeedKMH() const {
    return 0.0f;
}


