#include "ObserverPawnBlockingVolume.h"
#include "Components/BoxComponent.h"

AObserverPawnBlockingVolume::AObserverPawnBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoundingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundingBox"));
    this->BoundsX = 2000.00f;
    this->BoundsY = 2000.00f;
    this->BoundsZ = 2000.00f;
}


