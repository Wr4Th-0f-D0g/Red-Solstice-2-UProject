#include "WeaponSimulatedBuff.h"
#include "EBuffDuration.h"

UWeaponSimulatedBuff::UWeaponSimulatedBuff() {
    this->AttributeModifiers.AddDefaulted(1);
    this->DurationGroup = EBuffDuration::EBD_Infinite;
}


