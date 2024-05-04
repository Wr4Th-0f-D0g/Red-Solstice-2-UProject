#include "WeaponPassiveBuffBase.h"
#include "EBuffDuration.h"

UWeaponPassiveBuffBase::UWeaponPassiveBuffBase() {
    this->DurationGroup = EBuffDuration::EBD_Infinite;
    this->InventorySize = 0;
}


