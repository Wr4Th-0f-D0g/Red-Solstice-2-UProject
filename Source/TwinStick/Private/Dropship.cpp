#include "Dropship.h"

ADropship::ADropship(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VehicleStatus = EVehicleStatus::EVStatus_Idle;
    this->Passengers = 0;
}


