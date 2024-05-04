#include "StateFire.h"
#include "EFiringState.h"

UStateFire::UStateFire() {
    this->ObjectFiringState = EFiringState::EFS_Fire;
}

void UStateFire::TransitionsToWindup(ASolsticeWeaponBase* Weapon) {
}


