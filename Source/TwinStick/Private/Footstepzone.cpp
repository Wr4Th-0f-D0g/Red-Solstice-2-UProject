#include "Footstepzone.h"
#include "Components/SceneComponent.h"

AFootstepzone::AFootstepzone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}


