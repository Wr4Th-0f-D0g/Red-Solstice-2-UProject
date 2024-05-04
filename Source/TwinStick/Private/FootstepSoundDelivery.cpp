#include "FootstepSoundDelivery.h"
#include "Components/SceneComponent.h"
#include "FMODAudioComponent.h"

AFootstepSoundDelivery::AFootstepSoundDelivery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->FootstepSoundCompA = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FootstepSoundCompA"));
    this->FootstepSoundCompB = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FootstepSoundCompB"));
    this->FootstepSoundCompA->SetupAttachment(RootComponent);
    this->FootstepSoundCompB->SetupAttachment(RootComponent);
}


