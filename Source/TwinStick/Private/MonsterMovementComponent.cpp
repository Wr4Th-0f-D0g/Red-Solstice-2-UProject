#include "MonsterMovementComponent.h"

UMonsterMovementComponent::UMonsterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MonsterOwner = NULL;
    this->bNegateRotation = false;
    this->DistanceTowardsStartingToTickEveryFrame = 100000000.00f;
    this->DistanceToTickMovementEveryFrameSq = 25000000.00f;
    this->TickOptimizationTimeMax = 0.15f;
    this->TickOptimizationTimeMin = 0.80f;
    this->FramesUntilNextTrace = 1;
}


