#include "DesignationManager.h"
#include "Net/UnrealNetwork.h"

UDesignationManager::UDesignationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UDesignationManager::RemoveDesignatedCharacter(AActor* InRemovedActor, const AActor* InDesignatingActor) {
}

bool UDesignationManager::IsActorValidClassForDesignation(AActor* InActor) {
    return false;
}

TArray<AActor*> UDesignationManager::GetDesignatedCharactersInRange(FVector InLocation, float InRange, const AActor* InQueryingActor) {
    return TArray<AActor*>();
}

TArray<AActor*> UDesignationManager::GetDesignatedCharacters(const AActor* InQueryingActor) {
    return TArray<AActor*>();
}

void UDesignationManager::AddDesignatedCharacter(AActor* InNewActor, const AActor* InDesignatingActor) {
}

void UDesignationManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDesignationManager, DesignatedActorsFriendlyMarine);
    DOREPLIFETIME(UDesignationManager, DesignatedActorsEnemyMarine);
    DOREPLIFETIME(UDesignationManager, DesignatedActorsMonster);
}


