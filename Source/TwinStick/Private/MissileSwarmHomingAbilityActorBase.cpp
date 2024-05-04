#include "MissileSwarmHomingAbilityActorBase.h"
#include "Net/UnrealNetwork.h"

AMissileSwarmHomingAbilityActorBase::AMissileSwarmHomingAbilityActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreferedPitch = 15.00f;
    this->MaximumPitch = 45.00f;
    this->SafeDistance = 50.00f;
    this->MissileParticleSystem = NULL;
    this->FizzleEffectParticle = NULL;
    this->MissileFlightSound = NULL;
    this->MissileLaunchSound = NULL;
    this->MissileMaxSpeed = 0.00f;
    this->MissileHomingMagnitude = 0.00f;
    this->MissileHomingCurve = NULL;
    this->MissileLaunchPitch = 75.00f;
    this->MissileLaunchPitchLowered = 60.00f;
    this->MissileLaunchSpeed = 1500.00f;
    this->MissileScale = 0.30f;
    this->RemoveTargetOnMissileHit = true;
    this->MissileSelfDestructTime = 10.00f;
    this->UpdateTargetsDelay = 0.30f;
    this->DesignatedTarget = NULL;
    this->bLaunchInProgress = false;
    this->bLaunchInProgressOnServer = false;
}

void AMissileSwarmHomingAbilityActorBase::UpdateLaunchedMissiles(float InDeltaTime) {
}

void AMissileSwarmHomingAbilityActorBase::UpdateHomedTargets() {
}

void AMissileSwarmHomingAbilityActorBase::StartLaunchingMissilesLocal() {
}

void AMissileSwarmHomingAbilityActorBase::StartLaunchingMissiles() {
}

void AMissileSwarmHomingAbilityActorBase::SetLaunchInProgress(bool bInProgress) {
}

void AMissileSwarmHomingAbilityActorBase::SetDesignatedTarget(AActor* InTarget) {
}

void AMissileSwarmHomingAbilityActorBase::ServerStartFiringMissiles_Implementation(const TArray<AActor*>& InTargets) {
}

void AMissileSwarmHomingAbilityActorBase::ServerRemoveTarget_Implementation(AActor* InTarget) {
}

void AMissileSwarmHomingAbilityActorBase::ServerClearTargetArray_Implementation() {
}

void AMissileSwarmHomingAbilityActorBase::ServerAddTarget_Implementation(AActor* InTarget) {
}

void AMissileSwarmHomingAbilityActorBase::RemoveTarget(AActor* InTarget) {
}

void AMissileSwarmHomingAbilityActorBase::NetMulticast_StartLaunchingMissiles_Implementation(const TArray<AActor*>& InTargets) {
}

void AMissileSwarmHomingAbilityActorBase::MulticastRemoveTarget_Implementation(AActor* InTarget) {
}

void AMissileSwarmHomingAbilityActorBase::MulticastClearTargetArray_Implementation() {
}

void AMissileSwarmHomingAbilityActorBase::MulticastAddTarget_Implementation(AActor* InTarget) {
}

void AMissileSwarmHomingAbilityActorBase::LaunchMissile() {
}

void AMissileSwarmHomingAbilityActorBase::LaunchInProgressFailsafe() {
}

bool AMissileSwarmHomingAbilityActorBase::IsOwnerValidForFire_Implementation() {
    return false;
}

bool AMissileSwarmHomingAbilityActorBase::IsLaunchInProgress() {
    return false;
}

bool AMissileSwarmHomingAbilityActorBase::IsActorStateAndDistanceValidForTarget_Implementation(const AActor* InActor) {
    return false;
}

bool AMissileSwarmHomingAbilityActorBase::IsActorPathValidForTarget(const AActor* InActor) {
    return false;
}

void AMissileSwarmHomingAbilityActorBase::ForceFireMissile(FTransform InTransform, AActor* InPawn) {
}

bool AMissileSwarmHomingAbilityActorBase::FindLaunchTransform_Implementation(FTransform& OutTransform) {
    return false;
}

AActor* AMissileSwarmHomingAbilityActorBase::FindDesignatedActor() {
    return NULL;
}

bool AMissileSwarmHomingAbilityActorBase::ConstructSpline(AActor* InPawnToAim, UParticleSystemComponent* InMissileParticle) {
    return false;
}

int32 AMissileSwarmHomingAbilityActorBase::ConstructMissileWithPathToTarget(AActor* InPawn) {
    return 0;
}

void AMissileSwarmHomingAbilityActorBase::ClearTargetArray() {
}

bool AMissileSwarmHomingAbilityActorBase::CanStartFiring() {
    return false;
}

void AMissileSwarmHomingAbilityActorBase::AddTarget(AActor* InTarget) {
}

void AMissileSwarmHomingAbilityActorBase::AddIgnoredTarget(AActor* InIgnoredTarget) {
}

void AMissileSwarmHomingAbilityActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMissileSwarmHomingAbilityActorBase, DesignatedTarget);
    DOREPLIFETIME(AMissileSwarmHomingAbilityActorBase, bLaunchInProgressOnServer);
}


