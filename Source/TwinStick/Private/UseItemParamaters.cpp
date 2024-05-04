#include "UseItemParamaters.h"

FUseItemParamaters::FUseItemParamaters() {
    this->bCanEvenExpire = false;
    this->InteractionSeconds = 0.00f;
    this->InteractionSecondsElapsed = 0.00f;
    this->RequiredItems = 0;
    this->PossibleItems = 0;
    this->bAllInteractionsCountForCompletion = false;
    this->bForceClosestItem = false;
    this->GameplayContainerMatchingType = EGameplayContainerMatchType::Any;
    this->Range = ELocationDistance::ELD_Any;
    this->bUseAreaMarker = false;
    this->AreaMarkerRadius = 0.00f;
}

