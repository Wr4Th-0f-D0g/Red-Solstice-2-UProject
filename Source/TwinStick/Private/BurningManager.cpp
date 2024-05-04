#include "BurningManager.h"
#include "Net/UnrealNetwork.h"

ABurningManager::ABurningManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NearbyDistance = 0.00f;
    this->BurningActorClass = NULL;
}

ABurningActor* ABurningManager::SetBurningAt(FVector InLocation, float InFlameAmount, AActor* InActor, APawn* InInstigator, bool bFromBot) {
    return NULL;
}

void ABurningManager::HandleBurningStopped(ABurningActor* InActor) {
}

TArray<ABurningActor*> ABurningManager::GetActiveBurningActorsInRange(FVector InLocation, float InRange, bool bSortByDistance, bool bAscending) {
    return TArray<ABurningActor*>();
}

TArray<ABurningActor*> ABurningManager::GetActiveBurningActors() {
    return TArray<ABurningActor*>();
}

void ABurningManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABurningManager, BurningActorData);
}


