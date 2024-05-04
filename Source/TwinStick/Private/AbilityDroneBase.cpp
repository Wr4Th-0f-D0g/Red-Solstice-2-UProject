#include "AbilityDroneBase.h"
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"

AAbilityDroneBase::AAbilityDroneBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FollowingHero = NULL;
    this->LandActor = NULL;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("MovementSpline"));
    this->DestinationActor = NULL;
    this->VerticalMovementCurve = NULL;
    this->HorizontalMovementCurve = NULL;
    this->HorizontalMovementRandFactor = 1.00f;
    this->HorizontalMovementRandDirection = 1.00f;
    this->FadeSpeed = 1.00f;
    this->bDrawDebug = false;
    this->DynamicMaterial = NULL;
    this->AcceptableArriveDistToTarget = 200.00f;
    this->PeriodicPathUpdateTime = 0.50f;
    this->FollowTargetActorDelayTime = 0.50f;
    this->TrackTargetPeriod = 0.20f;
    this->DroneSpeedMax = 500.00f;
    this->DroneAcceleration = 500.00f;
    this->DroneRotSpeed = 1.50f;
    this->FloorTraceUpdateFreq = 0.10f;
    this->DroneHoverHeight = 50.00f;
    this->DroneVerticalSpeed = 200.00f;
    this->VerticalWobbleMultiplier = 50.00f;
    this->NavigationPathUpdateTriggerDistance = 50.00f;
    this->AproachSpeed = 200.00f;
    this->bUseFloorHeightWhenAttached = false;
    this->TargetVelocityConsideredMoving = 10.00f;
    this->ArriveLocationVectorInterpSpeed = 80.00f;
    this->ActorFollowingAngle = 90.00f;
    this->RotationMovementNegativeRand = 0.75f;
    this->RotationMovementPositiveRand = 1.50f;
    this->bRotateArriveVector = true;
    this->NavFilterUsed = NULL;
    this->bTargetFloorForActorSeek = false;
    this->SplineComponent->SetupAttachment(RootComponent);
}


void AAbilityDroneBase::UpdateFade(float InDeltaTime) {
}

void AAbilityDroneBase::TrackTargetLocation() {
}

void AAbilityDroneBase::TakeoffFromTarget() {
}


void AAbilityDroneBase::StopMovement() {
}

void AAbilityDroneBase::SetFollowingHero(AHeroCharacterBase* NewHero) {
}

void AAbilityDroneBase::SetFadeParameter(float InValue) const {
}

void AAbilityDroneBase::RequestPathToTarget(const AActor* InCurrentlyFollowingActor) {
}

void AAbilityDroneBase::RequestFloorTraceUpdate() {
}

void AAbilityDroneBase::PathFindTimeout() {
}





void AAbilityDroneBase::OnRep_FollowingHero() {
}

void AAbilityDroneBase::MoveToTargetActor(AActor* InTarget, bool bInCanFollowDead) {
}

void AAbilityDroneBase::MoveToLocation(FVector InLocation) {
}

void AAbilityDroneBase::LandToTarget() {
}


void AAbilityDroneBase::InitLandedAtTarget(AActor* InDestinationActor) {
}

void AAbilityDroneBase::InitFollowingActor(AActor* InDestinationActor, bool bInCanFollowDead) {
}

EAbilityDroneMovementState AAbilityDroneBase::GetMovementState() {
    return EAbilityDroneMovementState::EDroneNone;
}

float AAbilityDroneBase::GetFadeParameter() const {
    return 0.0f;
}

void AAbilityDroneBase::FadeOut() {
}

void AAbilityDroneBase::FadeIn() {
}

void AAbilityDroneBase::CreateDynamicMaterial() {
}

void AAbilityDroneBase::CheckDestinationTargetValidity() {
}

void AAbilityDroneBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAbilityDroneBase, FollowingHero);
    DOREPLIFETIME(AAbilityDroneBase, HorizontalMovementRandFactor);
    DOREPLIFETIME(AAbilityDroneBase, HorizontalMovementRandDirection);
}


