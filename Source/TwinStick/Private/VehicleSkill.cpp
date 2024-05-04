#include "VehicleSkill.h"
#include "Net/UnrealNetwork.h"

UVehicleSkill::UVehicleSkill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStickToActivationRange = false;
    this->bAlwaysActivatable = false;
    this->ControllingCharacter = NULL;
    this->DrivableVehicle = NULL;
    this->NextCooldownFinishedTime = -1.00f;
}

ASolsticeCharacterBase* UVehicleSkill::GetSkillCharacter() const {
    return NULL;
}

ASolsticeDrivableVehicle* UVehicleSkill::GetOwningVehicle() const {
    return NULL;
}

void UVehicleSkill::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVehicleSkill, ControllingCharacter);
    DOREPLIFETIME(UVehicleSkill, DrivableVehicle);
    DOREPLIFETIME(UVehicleSkill, NextCooldownFinishedTime);
}


