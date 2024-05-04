#include "WeaponSounds.h"

FWeaponSounds::FWeaponSounds() {
    this->AimSound = NULL;
    this->StartFireSound = NULL;
    this->FireSound = NULL;
    this->FireSoundAlt = NULL;
    this->EndFireSound = NULL;
    this->FireEffectSound = NULL;
    this->LoopedFireSound = NULL;
    this->OutOfAmmoSound = NULL;
    this->ReloadSound = NULL;
    this->ReloadSoundLooped = NULL;
    this->ReloadCompleteSound = NULL;
    this->SoundType = EWeaponSoundType::Unset;
}

