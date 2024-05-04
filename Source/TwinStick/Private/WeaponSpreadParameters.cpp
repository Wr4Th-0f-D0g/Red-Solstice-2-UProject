#include "WeaponSpreadParameters.h"

FWeaponSpreadParameters::FWeaponSpreadParameters() {
    this->MinimumWeaponSpread = 0.00f;
    this->MaximumWeaponSpread = 0.00f;
    this->SpreadPerShotMultiplier = 0.00f;
    this->SpreadPerShot = 0.00f;
    this->SpreadRegeneration = 0.00f;
    this->bRegenerateSpreadWhileActive = false;
    this->SpreadRegenerationDelay = 0.00f;
}

