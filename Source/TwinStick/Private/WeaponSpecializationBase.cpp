#include "WeaponSpecializationBase.h"

UWeaponSpecializationBase::UWeaponSpecializationBase() {
}

bool UWeaponSpecializationBase::ShouldModifyWeaponDamage_Implementation(AActor* Target, const FDamage& InDamageInfo) const {
    return false;
}

FDamage UWeaponSpecializationBase::ModifyWeaponDamage_Implementation(AActor* Target, const FDamage& InDamageInfo) {
    return FDamage{};
}

FText UWeaponSpecializationBase::GetModDescriptionText_Implementation() const {
    return FText::GetEmpty();
}


