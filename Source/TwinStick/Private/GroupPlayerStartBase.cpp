#include "GroupPlayerStartBase.h"

AGroupPlayerStartBase::AGroupPlayerStartBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentPlayerStartIndex = 0;
}

AActor* AGroupPlayerStartBase::GetNextPlayerStart(APlayerState* PlayerState) {
    return NULL;
}


