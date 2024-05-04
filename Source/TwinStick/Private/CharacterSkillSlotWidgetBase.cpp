#include "CharacterSkillSlotWidgetBase.h"

UCharacterSkillSlotWidgetBase::UCharacterSkillSlotWidgetBase() {
    this->SkillIconImage = NULL;
    this->LevelUpOverlay = NULL;
    this->SkillIconKeyText = NULL;
    this->SkillActivationCostText = NULL;
    this->SkillSelectedImage = NULL;
    this->SkillVerticalBox = NULL;
    this->SkillCooldownProgress = NULL;
    this->SkillCooldownText = NULL;
    this->SkillBorder = NULL;
}






bool UCharacterSkillSlotWidgetBase::HasResourcesToActivate_Implementation() const {
    return false;
}

void UCharacterSkillSlotWidgetBase::HandleSkillLevelChanged(int32 Level) {
}

void UCharacterSkillSlotWidgetBase::HandleSkillDamagedChanged(bool NewDamaged) {
}

void UCharacterSkillSlotWidgetBase::HandleAbilityUsed(UAbilityBase* Ability, const FGameplayTag& AbilityTag) {
}

float UCharacterSkillSlotWidgetBase::GetActivationCost_Implementation() const {
    return 0.0f;
}

FLinearColor UCharacterSkillSlotWidgetBase::ChooseIconColor_Implementation() {
    return FLinearColor{};
}

bool UCharacterSkillSlotWidgetBase::CanActivate_Implementation() const {
    return false;
}


