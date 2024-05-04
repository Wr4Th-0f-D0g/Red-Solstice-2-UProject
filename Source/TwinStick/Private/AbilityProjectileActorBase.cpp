#include "AbilityProjectileActorBase.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AAbilityProjectileActorBase::AAbilityProjectileActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileMovement = NULL;
    this->ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
    this->ProjectilePathSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ProjectilePathSpline"));
    this->HorizontalVelocity = 0.00f;
    this->FlightTime = 1.00f;
    this->CurrentFlightTime = 0.00f;
    this->CurrentSplineKey = 0.00f;
    this->AccelerationMode = EProjectileAccelerationMode::None;
    this->RotationMode = EProjectileRotationMode::AlignX;
    this->RotationInterpSpeed = 180.00f;
    this->TraceOption = ESuggestProjVelocityTraceOption::TraceFullPath;
    this->bDrawDebug = false;
    this->ProjectileMesh->SetupAttachment(RootComponent);
    this->ProjectilePathSpline->SetupAttachment(RootComponent);
}


void AAbilityProjectileActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAbilityProjectileActorBase, ProjectilePath);
    DOREPLIFETIME(AAbilityProjectileActorBase, HorizontalVelocity);
}


