#include "FindItemTaskParameters.h"

FFindItemTaskParameters::FFindItemTaskParameters() {
    this->ItemsToSpawn = 0;
    this->RequiredInteractions = 0;
    this->bReturnSuccessImmediately = false;
    this->bDisallowUseOnPickup = false;
    this->bCanBeDestoryedByExplosion = false;
}

