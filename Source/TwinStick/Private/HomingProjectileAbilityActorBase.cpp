#include "HomingProjectileAbilityActorBase.h"

AHomingProjectileAbilityActorBase::AHomingProjectileAbilityActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileParticleSystem = NULL;
    this->ProjectileLaunchParticleSystem = NULL;
    this->ProjectileFlightSound = NULL;
    this->ProjectileLaunchSound = NULL;
    this->TargetLocationHistoryUpdateTime = 0.20f;
    this->CollisionTestUpdateTime = 0.03f;
    this->MaxNumHistoryTargetLocations = 15;
    this->ObstructionCheckTime = 0.20f;
    this->TargetLocationHistoryLocationValidity = 0.10f;
    this->DefaultHomingMagnitude = 0.00f;
    this->MaxHomingMagnitude = 0.00f;
    this->FloorCheckTime = 0.20f;
    this->bHomeToNonTargetable = true;
    this->ProjectileSelfDestructTime = -1.00f;
    this->TargetTriggerDistance = 50.00f;
    this->TargetTriggerDeltaZ = 200.00f;
    this->TargetOvershootHomingMagnitudeMultiplier = 4.00f;
    this->ReachedHistoryLocationActivateDelay = 0.50f;
    this->bAttemptToNetworkSyncMovement = false;
    this->bDebugDrawCollisionTraces = false;
}

void AHomingProjectileAbilityActorBase::TriggerProjectileAction_Implementation(const FGameplayTag& InReason, USceneComponent*& InTriggeringComponent, FHomingProjectileStruct& InProjectile) {
}

bool AHomingProjectileAbilityActorBase::TestForActionTrigger_Implementation(FGameplayTag& OutReason, USceneComponent*& OutTriggeringComponent, FHomingProjectileStruct& InProjectile) const {
    return false;
}

bool AHomingProjectileAbilityActorBase::ShouldRemoveProjectile_Implementation(const FGameplayTag& InReason, const USceneComponent* InTriggeringComponent, const FHomingProjectileStruct& InProjectile) const {
    return false;
}

bool AHomingProjectileAbilityActorBase::IsProjectileTargetObstructed(FHomingProjectileStruct& InProjectile) const {
    return false;
}

bool AHomingProjectileAbilityActorBase::GetProjectileByIndex(FHomingProjectileStruct& OutProjectileStruct, int32 InIndex) {
    return false;
}

int32 AHomingProjectileAbilityActorBase::GetNumMissilesToPregenerate_Implementation() const {
    return 0;
}

float AHomingProjectileAbilityActorBase::GetMaxSpeed_Implementation() const {
    return 0.0f;
}

float AHomingProjectileAbilityActorBase::GetInitSpeed_Implementation() const {
    return 0.0f;
}

float AHomingProjectileAbilityActorBase::GetHomingMagnitude_Implementation(const FHomingProjectileStruct& InProjectile) const {
    return 0.0f;
}

int32 AHomingProjectileAbilityActorBase::FireProjectileInternal(const FTransform& InInitTransform, USceneComponent* InTargetComponent, FVector InTargetLocation) {
    return 0;
}


