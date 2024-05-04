#include "OutpostControlsBase.h"

UOutpostControlsBase::UOutpostControlsBase() : UUserWidget(FObjectInitializer::Get()) {
    this->DropshipControlsTab = NULL;
}

void UOutpostControlsBase::HandleInteractionChanged(AStrategyMapActor* MapActor, EStrategyInteractionState InteractionState) {
}


