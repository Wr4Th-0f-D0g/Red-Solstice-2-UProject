#include "MinefieldAbilityActor.h"
#include "Net/UnrealNetwork.h"

AMinefieldAbilityActor::AMinefieldAbilityActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMesh = NULL;
    this->Radius = 200.00f;
    this->OverlapTimerInterval = 0.30f;
    this->ActivateMineTime = 4.00f;
    this->AllowedOverlapClass = NULL;
    this->SpawnTime = 0.00f;
}





void AMinefieldAbilityActor::DetonateAllMines() {
}

void AMinefieldAbilityActor::DeleteMineFromArray(FGuid ItemGuid) {
}

void AMinefieldAbilityActor::CreateMinefieldMine(FReplicatedMineFieldItem& ItemData) {
}

void AMinefieldAbilityActor::CheckForOverlaps() {
}

TArray<FVector> AMinefieldAbilityActor::ChangeMinesActivationRadiusMultiplier(const FVector& WorldLocation, float WorldRadius, float NewMultiplier) {
    return TArray<FVector>();
}

bool AMinefieldAbilityActor::CanActorDetonate_Implementation(AActor* Actor) {
    return false;
}

void AMinefieldAbilityActor::ActivateMines() {
}

void AMinefieldAbilityActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMinefieldAbilityActor, ReplicatedMinefieldContainer);
    DOREPLIFETIME(AMinefieldAbilityActor, SpawnTime);
}


