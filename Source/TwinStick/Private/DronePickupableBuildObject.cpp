#include "DronePickupableBuildObject.h"

ADronePickupableBuildObject::ADronePickupableBuildObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectClassToConstruct = NULL;
}

bool ADronePickupableBuildObject::TestCollision(FVector aLocation, FRotator aRotation, AHeroCharacterBase* aCallingHero) {
    return false;
}


