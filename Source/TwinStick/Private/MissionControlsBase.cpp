#include "MissionControlsBase.h"

UMissionControlsBase::UMissionControlsBase() : UUserWidget(FObjectInitializer::Get()) {
    this->ControlsSwitcher = NULL;
    this->LaunchMissionBorder = NULL;
}


void UMissionControlsBase::HandleMissionStatusChanged(const FStrategyMissionTimer& InMissionStatus) {
}

void UMissionControlsBase::HandleInteractionChanged(AStrategyMapActor* MapActor, EStrategyInteractionState InteractionState) {
}


