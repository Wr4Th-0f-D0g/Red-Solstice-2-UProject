#include "HarvestManagerAbilityActor.h"
#include "Net/UnrealNetwork.h"

AHarvestManagerAbilityActor::AHarvestManagerAbilityActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllowedOverlapClass = NULL;
    this->bRemoveAllHarvestItemsAndDestroyWhenDestroyed = true;
}



void AHarvestManagerAbilityActor::NetMulticast_PlayEffectsOverlapped_Implementation(const FVector& Location) {
}

void AHarvestManagerAbilityActor::NetMulticast_PlayEffectsExpired_Implementation(const FVector& Location) {
}


void AHarvestManagerAbilityActor::CreateHarvestItem(FReplicatedHarvestItem& ItemData) {
}


void AHarvestManagerAbilityActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHarvestManagerAbilityActor, ReplicatedHarvestItems);
}


