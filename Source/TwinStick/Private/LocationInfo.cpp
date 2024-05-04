#include "LocationInfo.h"

FLocationInfo::FLocationInfo() {
    this->bLocationSet = false;
    this->bAlreadyUsed = false;
    this->bDisabled = false;
    this->bIsBoundary = false;
    this->bLocationHasBeenEntered = false;
    this->NumPickupsAllowed = 0;
    this->CurrentPickups = 0;
}

