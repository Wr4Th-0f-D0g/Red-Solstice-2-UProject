#include "UseItemStatus.h"

FUseItemStatus::FUseItemStatus() {
    this->ActivatedItemCount = 0;
    this->RequiredItemCount = 0;
    this->PossibleItemCount = 0;
    this->LastActivatedItem = NULL;
    this->bCanEvenExpire = false;
}

