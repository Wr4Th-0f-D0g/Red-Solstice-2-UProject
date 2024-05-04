#include "SolsticeDrivableVehicleTank.h"
#include "SolsticeVehicleMovementComponentTank.h"

ASolsticeDrivableVehicleTank::ASolsticeDrivableVehicleTank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USolsticeVehicleMovementComponentTank>(TEXT("MovementComp"))) {
    this->CmPerV = 73.29f;
    this->LeftTrackOffset = 0.00f;
    this->RightTrackOffset = 0.00f;
    this->Thrust = 0.00f;
    this->KeyThrustLeft = 0.00f;
    this->KeyThrustRight = 0.00f;
    this->TurnThrottle = 0.00f;
    this->KeyThrottle = 0.00f;
    this->KeyBrake = 0.00f;
}




USolsticeVehicleMovementComponentTank* ASolsticeDrivableVehicleTank::GetVehicleDriveTank() const {
    return NULL;
}


