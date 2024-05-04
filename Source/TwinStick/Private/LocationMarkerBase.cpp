#include "LocationMarkerBase.h"
#include "Components/SceneComponent.h"
#include "MarkerBoxComponent.h"

ALocationMarkerBase::ALocationMarkerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->NumPickupsAllowed = 20;
    this->NumRandomPoints = 0;
    this->FloorZOffset = 15.00f;
    this->DistanceBetweenPoints = 10.00f;
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->MarkerBox = CreateDefaultSubobject<UMarkerBoxComponent>(TEXT("MarkerBox"));
    this->SpawnedActorClass = NULL;
    this->MarkerBox->SetupAttachment(RootComponent);
}

void ALocationMarkerBase::DrawVentiliatonLinks() {
}


