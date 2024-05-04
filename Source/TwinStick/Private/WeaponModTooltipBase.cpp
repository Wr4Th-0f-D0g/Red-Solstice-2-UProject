#include "WeaponModTooltipBase.h"
#include "Templates/SubclassOf.h"

UWeaponModTooltipBase::UWeaponModTooltipBase() : UUserWidget(FObjectInitializer::Get()) {
}

FWeaponUpgrade UWeaponModTooltipBase::GetWeaponUpgradesData() const {
    return FWeaponUpgrade{};
}

int32 UWeaponModTooltipBase::GetWeaponModTypeIndex() const {
    return 0;
}

FWeaponAmmoModification UWeaponModTooltipBase::GetWeaponAmmoUpgradeData() const {
    return FWeaponAmmoModification{};
}

EWeaponUpgradeType UWeaponModTooltipBase::GetModUpgradeType() const {
    return EWeaponUpgradeType::Invalid;
}

FWeaponFireComponentModification UWeaponModTooltipBase::GetFireComponentData() const {
    return FWeaponFireComponentModification{};
}

float UWeaponModTooltipBase::GetAmmoWeaponPercentDamage_Implementation(TSubclassOf<UHitObjectBase> AmmoClass) {
    return 0.0f;
}

TArray<FSolsticeAttributeModifier> UWeaponModTooltipBase::FixBuffDisplayAttributes(TArray<FSolsticeAttributeModifier> AttributeModifiers) {
    return TArray<FSolsticeAttributeModifier>();
}






