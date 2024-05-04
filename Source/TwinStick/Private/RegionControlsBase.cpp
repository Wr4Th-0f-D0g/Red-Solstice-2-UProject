#include "RegionControlsBase.h"

URegionControlsBase::URegionControlsBase() : UUserWidget(FObjectInitializer::Get()) {
    this->DropshipControlsTab = NULL;
}

void URegionControlsBase::HandleInteractionChanged(AStrategyMapActor* MapActor, EStrategyInteractionState InteractionState) {
}


