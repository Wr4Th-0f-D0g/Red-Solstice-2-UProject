#include "SingleShotFireComponent.h"

USingleShotFireComponent::USingleShotFireComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FireModeSuffix = TEXT("_Single");
}

float USingleShotFireComponent::GetShotCooldown() const {
    return 0.0f;
}


