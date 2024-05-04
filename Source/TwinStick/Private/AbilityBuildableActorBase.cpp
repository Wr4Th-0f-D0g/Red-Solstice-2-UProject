#include "AbilityBuildableActorBase.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FMODAudioComponent.h"
#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"

AAbilityBuildableActorBase::AAbilityBuildableActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthComponentA = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponents"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("AudioComponent"));
    this->CompletedParticleSystem = NULL;
    this->UnderConstructionSound = NULL;
    this->ConstructionCompletedSound = NULL;
    this->BuildableMeshes.AddDefaulted(1);
    this->BuildRange = 500.00f;
    this->bCompleteImmediately = false;
    this->bNeedsMarineToBuildIfPreplaced = false;
    this->CurrentBuildTime = 0.00f;
    this->bBuildCompleted = false;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
    this->ParticleSystemComponent->SetupAttachment(RootComponent);
    this->AudioComponent->SetupAttachment(RootComponent);
}

void AAbilityBuildableActorBase::SetCurrentBuildTime(float BuildTime) {
}

bool AAbilityBuildableActorBase::IsDestroyed() const {
    return false;
}

bool AAbilityBuildableActorBase::HasMarineInRange() const {
    return false;
}

float AAbilityBuildableActorBase::GetTotalBuildTime_Implementation() const {
    return 0.0f;
}

float AAbilityBuildableActorBase::GetMaxHealth() const {
    return 0.0f;
}

float AAbilityBuildableActorBase::GetHealthPercent() const {
    return 0.0f;
}

float AAbilityBuildableActorBase::GetBuildProgress() const {
    return 0.0f;
}





void AAbilityBuildableActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAbilityBuildableActorBase, CurrentBuildTime);
}


