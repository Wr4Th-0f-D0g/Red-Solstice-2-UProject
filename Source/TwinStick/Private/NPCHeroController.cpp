#include "NPCHeroController.h"
#include "GameFramework/Actor.h"
#include "AICrowdFollowingComponent.h"

ANPCHeroController::ANPCHeroController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAICrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->bWantsPlayerState = true;
    this->bShouldUseNavRecovery = true;
    this->WaypointActor = NULL;
    this->GuardActor = NULL;
    this->bRandomLocationForAuto = false;
    this->WeaponTargetActorClass = AActor::StaticClass();
    this->WeaponTargetActor = NULL;
}

void ANPCHeroController::UnequipWeapon(ASolsticeWeaponBase* Weapon) {
}

void ANPCHeroController::StartDefaultBehaviorTree() {
}

void ANPCHeroController::SetGuardActor(AActor* InGuardActor) {
}

void ANPCHeroController::HandleTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void ANPCHeroController::HandlePerceptionUpdated(const TArray<AActor*>& PerceptionActors) {
}

AActor* ANPCHeroController::GetWeaponTargetActor() const {
    return NULL;
}

TArray<FPerceivedActor> ANPCHeroController::GetHostilesPerceivedActors() const {
    return TArray<FPerceivedActor>();
}

TArray<FPerceivedActor> ANPCHeroController::GetFriendlyPerceivedActors() const {
    return TArray<FPerceivedActor>();
}

void ANPCHeroController::EqupWeapon(ASolsticeWeaponBase* Weapon) {
}

void ANPCHeroController::DropActiveWeapon() {
}

bool ANPCHeroController::CanFireSecondaryShot(const FVector& ShotLoc) const {
    return false;
}


