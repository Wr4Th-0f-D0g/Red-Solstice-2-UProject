#include "WeaponStatsPanelBase.h"
#include "Templates/SubclassOf.h"

UWeaponStatsPanelBase::UWeaponStatsPanelBase() : UUserWidget(FObjectInitializer::Get()) {
    this->TooltipWeapon = NULL;
    this->WeaponDataTable = NULL;
    this->FiringModeDataTable = NULL;
    this->WeaponSkillDefinitionTable = NULL;
    this->SpecializedWeaponBaseClass = NULL;
    this->SpecializedFireComponentBaseClass = NULL;
    this->SuppressionComponentClass = NULL;
    this->PrimaryFireModeText = NULL;
    this->SecondaryFireModeText = NULL;
    this->PrimaryDamageImage = NULL;
    this->SecondaryDamageImage = NULL;
    this->PrimaryDamageText = NULL;
    this->SecondaryDamageText = NULL;
    this->PrimaryRPMText = NULL;
    this->SecondaryRPMText = NULL;
    this->TitleSpreadText = NULL;
    this->PrimarySpreadText = NULL;
    this->SecondarySpreadText = NULL;
    this->TitleSpreadIncreaseText = NULL;
    this->PrimarySpreadIncreaseText = NULL;
    this->SecondarySpreadIncreaseText = NULL;
    this->PrimaryRangeText = NULL;
    this->SecondaryRangeText = NULL;
    this->TitleCritChanceText = NULL;
    this->PrimaryCritChanceText = NULL;
    this->SecondaryCritChanceText = NULL;
    this->TitleCritMultiplierText = NULL;
    this->PrimaryCritMultiplierText = NULL;
    this->SecondaryCritMultiplierText = NULL;
    this->PrimarySuppressionText = NULL;
    this->SecondarySuppressionText = NULL;
    this->TitleProjectileCountText = NULL;
    this->PrimaryProjectileCountText = NULL;
    this->SecondaryProjectileCountText = NULL;
    this->TitleArmorShredText = NULL;
    this->PrimaryArmorShredText = NULL;
    this->SecondaryArmorShredText = NULL;
    this->TitleEnergyShotCostText = NULL;
    this->PrimaryEnergyShotCostText = NULL;
    this->SecondaryEnergyShotCostText = NULL;
    this->TitleRadiusText = NULL;
    this->PrimaryRadiusText = NULL;
    this->SecondaryRadiusText = NULL;
    this->AmmoDamageText = NULL;
    this->PrimaryAmmoDamageText = NULL;
    this->SecondaryAmmoDamageText = NULL;
    this->TitlePenetrationMode = NULL;
    this->PrimaryPenetrationModeText = NULL;
    this->SecondaryPenetrationModeText = NULL;
    this->TitleOverwatchRetarget = NULL;
    this->PrimaryOverwatchRetargetText = NULL;
    this->SecondaryOverwatchRetargetText = NULL;
    this->TitleShotsPerBurst = NULL;
    this->PrimaryShotsPerBurstText = NULL;
    this->SecondaryShotsPerBurstText = NULL;
    this->TitleManualAimTime = NULL;
    this->PrimaryManualAimTimeText = NULL;
    this->SecondaryManualAimTimeText = NULL;
    this->TitleAmmoCostPerShot = NULL;
    this->PrimaryAmmoCostPerShotText = NULL;
    this->SecondaryAmmoCostPerShotText = NULL;
    this->BorderPrimary = NULL;
    this->BorderSecondary = NULL;
}




void UWeaponStatsPanelBase::SetWeaponNameContext(FName NewWeaponName) {
}

void UWeaponStatsPanelBase::SetWeaponContext(ASolsticeWeaponBase* NewWeapon) {
}

bool UWeaponStatsPanelBase::PrimaryFireComponentIsSpecialized() const {
    return false;
}

bool UWeaponStatsPanelBase::HasAnyEnergyCostPerShot() const {
    return false;
}

EDamageGroup UWeaponStatsPanelBase::GetWeaponDamageGroup(bool bForSecondary) const {
    return EDamageGroup::EDT_None;
}

float UWeaponStatsPanelBase::GetAmmoWeaponDamagePercent_Implementation(TSubclassOf<UHitObjectBase> AmmoClass) {
    return 0.0f;
}


