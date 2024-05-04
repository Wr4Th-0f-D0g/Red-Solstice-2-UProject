#include "ProtectActorsOptions.h"

FProtectActorsOptions::FProtectActorsOptions() {
    this->bUseDuration = false;
    this->Duration = 0.00f;
    this->bStartDurationWhenPlayerInRadius = false;
    this->bCheckCombinedRadius = false;
    this->PlayerStartRadius = 0.00f;
    this->ReachLocationTolerance = 0.00f;
}

