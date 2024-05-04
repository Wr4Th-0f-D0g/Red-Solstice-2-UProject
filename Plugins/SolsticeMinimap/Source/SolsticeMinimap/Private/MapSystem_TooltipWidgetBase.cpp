#include "MapSystem_TooltipWidgetBase.h"

UMapSystem_TooltipWidgetBase::UMapSystem_TooltipWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->ParentActor = NULL;
    this->DistanceFromPlayer = 0.00f;
    this->bShowDistance = false;
    this->HorizontalAlignment = 0.00f;
    this->VerticalAlignment = 0.00f;
    this->PlayerCharacter = NULL;
}



