#include "FollowerDirector.h"
#include "Net/UnrealNetwork.h"

UFollowerDirector::UFollowerDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxFollowersPerPlayer = 3;
    this->bFollowersDoNotAbortInteractionWhenAllMoveToLoc = false;
}

void UFollowerDirector::UnregisterFollower(AHeroCharacterBase* InFollower) {
}

bool UFollowerDirector::UnassignFollowerFromPlayer(AHeroCharacterBase* Follower) {
    return false;
}

void UFollowerDirector::StopScriptedFollowPlayer(AHeroCharacterBase* Follower) {
}

AAIMarineFormationActor* UFollowerDirector::SpawnFormationActorForPlayer(AHeroCharacterBase* PlayerChar, const FTransform& SpawnTransform) {
    return NULL;
}

void UFollowerDirector::SetFollowerScripted(AHeroCharacterBase* Follower) {
}

void UFollowerDirector::ScriptedMoveToLocation(AHeroCharacterBase* Follower, const FVector& Location) {
}

void UFollowerDirector::ScriptedFollowPlayer(AHeroCharacterBase* Follower, AHeroCharacterBase* PlayerChar) {
}

void UFollowerDirector::RegisterFollower(AHeroCharacterBase* InFollower) {
}

void UFollowerDirector::InsideVehicle(AHeroCharacterBase* PlayerChar, bool bInVehicle) {
}

void UFollowerDirector::GetScriptedFollowersInRadius(AHeroCharacterBase* PlayerChar, const FVector& position, float Radius, TArray<AHeroCharacterBase*>& OutFollowers) {
}

AAIMarineFormationActor* UFollowerDirector::GetFormationActorForPlayer(AHeroCharacterBase* PlayerChar) const {
    return NULL;
}

TArray<AHeroCharacterBase*> UFollowerDirector::GetFollowersAssignedTo(AHeroCharacterBase* PlayerChar) {
    return TArray<AHeroCharacterBase*>();
}

void UFollowerDirector::FollowerToggleSpecialSkill(AHeroCharacterBase* Follower, AHeroCharacterBase* PlayerChar, bool bStartSpecial, bool& bOutStartedSpecial, bool& bOutStoppedSpecial) {
}

void UFollowerDirector::FollowersMoveToPosition(AHeroCharacterBase* PlayerChar, const FVector& position) {
}

void UFollowerDirector::FollowersHoldPosition(AHeroCharacterBase* PlayerChar) {
}

void UFollowerDirector::FollowersFollowMe(AHeroCharacterBase* PlayerChar) {
}

void UFollowerDirector::FollowerMoveToPosition(AHeroCharacterBase* Follower, const FVector& position, AActor* InHoverTarget) {
}

void UFollowerDirector::FollowerHoldPosition(AHeroCharacterBase* Follower) {
}

void UFollowerDirector::FollowerFollowMe(AHeroCharacterBase* Follower, AHeroCharacterBase* PlayerChar) {
}

void UFollowerDirector::CheckForFollowersInProximity(AHeroCharacterBase* PlayerChar, const FVector& position, float Radius, AActor*& OutFollower, bool& bAssigned, bool& bUnAssigned) {
}

void UFollowerDirector::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFollowerDirector, FormationActors);
    DOREPLIFETIME(UFollowerDirector, Followers);
}


