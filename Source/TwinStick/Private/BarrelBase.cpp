#include "BarrelBase.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Components/SplineComponent.h"
#include "DissolveComponent.h"
#include "FOWHideComponent.h"
#include "Net/UnrealNetwork.h"

ABarrelBase::ABarrelBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->BarrelDamage = 5000.00f;
    this->BarrelDamageType = EDamageGroup::EDT_Destructive;
    this->BarrelArmorShred = 1;
    this->bDissolving = false;
    this->PunctureEffectParticleSystem = NULL;
    this->PunctureEffectSound = NULL;
    this->SecondsToDetonateWhenOnFire = 2.00f;
    this->HealthPercentToSetOnFire = 0.40f;
    this->MaxNumFires = 3;
    this->DetonationEffect = NULL;
    this->DetonationSound = NULL;
    this->ExplodeRadius = 0.00f;
    this->RotationSpeedMultiplyer = 0.00f;
    this->ThrownTraceRadius = 300.00f;
    this->RootCapsule = NULL;
    this->AimOffset = CreateDefaultSubobject<UBoxComponent>(TEXT("AimOffset"));
    this->FOWHideComponent = CreateDefaultSubobject<UFOWHideComponent>(TEXT("FOWHideComponent"));
    this->ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MovementComponent"));
    this->RotationMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotationComponent"));
    this->DissolveComponent = CreateDefaultSubobject<UDissolveComponent>(TEXT("DissolveComponent"));
    this->HeldAreaClass = NULL;
    this->DroppedToGroundAreaClass = NULL;
    this->GroundPositionTolerance = 50.00f;
    this->ProjectilePathSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ProjectilePathSpline"));
    this->PunctureFireSound = NULL;
    this->BounceRotationSpeedMultiplyer = 0.00f;
    this->HitHealth = 0;
    this->ThrownByActor = NULL;
    this->bIsOnFire = false;
    this->bPickedUp = false;
    this->bIsThrown = false;
    this->AimOffset->SetupAttachment(RootComponent);
    this->ProjectilePathSpline->SetupAttachment(RootComponent);
}

void ABarrelBase::TargetReached() {
}

void ABarrelBase::SpawnParticleAtHit_Implementation(FDamage DamageInfo) {
}

void ABarrelBase::SetForcePlacedToPositionReplicated(FVector InPosition, FRotator InRotation) {
}

void ABarrelBase::SetDroppedIntoOblivion_Implementation(AActor* InThrowingActor, bool bInExplode) {
}

void ABarrelBase::SetDissolving() {
}

void ABarrelBase::ServerDorpToFloor(float InForwardSpeed) {
}

void ABarrelBase::OnRep_SetFade() {
}

void ABarrelBase::OnRep_IsPickedUp() {
}

void ABarrelBase::OnRep_BarrelPlacedPosition() {
}


void ABarrelBase::MulticastDropToFloor_Implementation(FVector DropedToFloorStartLocation, FVector DropedToFloorVelocity) {
}

void ABarrelBase::MeshOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABarrelBase::LaunchOnPath_Implementation(const TArray<FVector_NetQuantize>& InPath, FVector_NetQuantize10 InTargetLocation, float InHorizontalVelocity, AActor* InThrowingActor) {
}


bool ABarrelBase::GetIsDissolving() {
    return false;
}

UBoxComponent* ABarrelBase::GetAimOffset() {
    return NULL;
}


void ABarrelBase::DestroyMe() {
}

void ABarrelBase::CapsuleOverlap() {
}


void ABarrelBase::BarrelBounced(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void ABarrelBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABarrelBase, bDissolving);
    DOREPLIFETIME(ABarrelBase, bPickedUp);
    DOREPLIFETIME(ABarrelBase, BarrelStablePosition);
    DOREPLIFETIME(ABarrelBase, BarrelStableRotation);
}


