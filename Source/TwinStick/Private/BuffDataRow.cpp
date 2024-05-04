#include "BuffDataRow.h"

FBuffDataRow::FBuffDataRow() {
    this->bIsAilment = false;
    this->bShouldSkipOnBatchRemove = false;
    this->MaximumStacks = 0;
    this->Duration = 0.00f;
    this->DurationGroup = EBuffDuration::EBD_Instant;
    this->bDoNotRemoveGrantedTags = false;
    this->bDisplayOverrideShowPerStackCount = false;
}

