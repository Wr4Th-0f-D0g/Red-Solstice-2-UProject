#include "WeaponClip.h"

FWeaponClip::FWeaponClip() {
    this->AvailableShots = 0;
    this->AmmoType = EAmmoType::EAT_None;
    this->MaxAmmoClips = 0;
    this->ShotsPerClip = 0;
}

