#include "AICrowdFollowingComponent.h"

UAICrowdFollowingComponent::UAICrowdFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VelocityCompensationAccelAdjustmentScale = 0.00f;
    this->bPausePathfollowingVelocity = false;
}


