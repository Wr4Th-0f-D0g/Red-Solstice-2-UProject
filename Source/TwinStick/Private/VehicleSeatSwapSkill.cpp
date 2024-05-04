#include "VehicleSeatSwapSkill.h"
#include "Net/UnrealNetwork.h"

UVehicleSeatSwapSkill::UVehicleSeatSwapSkill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssignedSeatIndex = -1;
}

void UVehicleSeatSwapSkill::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVehicleSeatSwapSkill, AssignedSeatIndex);
}


