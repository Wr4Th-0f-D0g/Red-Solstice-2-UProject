#include "ArmoryPlayerStart.h"

AArmoryPlayerStart::AArmoryPlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerStartIndex = -1;
    this->AttachedCamera = NULL;
    this->LeftPlayerStart = NULL;
    this->RightPlayerStart = NULL;
}

AStrategyPlayerState* AArmoryPlayerStart::GetRightPlayer() const {
    return NULL;
}

AStrategyPlayerState* AArmoryPlayerStart::GetLeftPlayer() const {
    return NULL;
}


