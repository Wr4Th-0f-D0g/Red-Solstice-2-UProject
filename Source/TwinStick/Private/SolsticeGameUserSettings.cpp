#include "SolsticeGameUserSettings.h"

USolsticeGameUserSettings::USolsticeGameUserSettings() {
    this->bUseVSync = true;
    this->SafeZoneScale = -1.00f;
}

void USolsticeGameUserSettings::SetSafeZone(float Value) {
}

bool USolsticeGameUserSettings::IsSafeZoneSet() const {
    return false;
}

USolsticeGameUserSettings* USolsticeGameUserSettings::GetSolsticeGameUserSettings() {
    return NULL;
}

float USolsticeGameUserSettings::GetSafeZone() const {
    return 0.0f;
}


