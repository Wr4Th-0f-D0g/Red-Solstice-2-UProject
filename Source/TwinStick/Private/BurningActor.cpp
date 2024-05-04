#include "BurningActor.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "FMODAudioComponent.h"

ABurningActor::ABurningActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->IsBurning = false;
    this->BurningAmount = 0.00f;
    this->BurningAmountMin = 0.00f;
    this->BurningAmountMax = 0.00f;
    this->BurningDecayPerSec = 0.00f;
    this->IsPermanent = false;
    this->RadialEffectTime = 0.00f;
    this->RadialEffectRadius = 0.00f;
    this->BurningBuffClass = NULL;
    this->BiomassBurnRadiusMin = 0.00f;
    this->BiomassBurnRadiusMax = 0.00f;
    this->BiomassBurnCenterIntensity = 255.00f;
    this->BiomassBurnFalloutCurveOverride = NULL;
    this->BiomassBurnRandomness = 0;
    this->BiomassDamageIncreasePerSecond = 0.00f;
    this->ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticleSystem"));
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FireAudioSystem"));
    this->BiomassDamageRadiusActual = 0.00f;
    this->ParticleComponent->SetupAttachment(RootComponent);
    this->AudioComponent->SetupAttachment(RootComponent);
}


