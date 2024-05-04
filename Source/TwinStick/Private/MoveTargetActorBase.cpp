#include "MoveTargetActorBase.h"

AMoveTargetActorBase::AMoveTargetActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Hero = NULL;
    this->bAllowMoveTargetAdjustment = true;
}


