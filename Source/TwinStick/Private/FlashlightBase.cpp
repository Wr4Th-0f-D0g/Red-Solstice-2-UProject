#include "FlashlightBase.h"
#include "Components/SceneComponent.h"
#include "Components/SpotLightComponent.h"

AFlashlightBase::AFlashlightBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SpotLightTop = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightTop"));
    this->SpotLightForward = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightForward"));
    this->Hero = NULL;
    this->HeroController = NULL;
    this->SpotLightTop->SetupAttachment(RootComponent);
    this->SpotLightForward->SetupAttachment(RootComponent);
}


void AFlashlightBase::HandleFiringModeChanged(FFiringMode FiringMode) {
}


