#include "CharacterSkillSlotAbilityBase.h"

UCharacterSkillSlotAbilityBase::UCharacterSkillSlotAbilityBase() {
    this->SkillCooldownBar = NULL;
    this->SkillIconCooldownText = NULL;
    this->SkillIconImage = NULL;
    this->SkillKeyText = NULL;
    this->ImageSelected = NULL;
    this->SkillActivationCostText = NULL;
}





bool UCharacterSkillSlotAbilityBase::HasResourcesToActivate_Implementation() const {
    return false;
}

void UCharacterSkillSlotAbilityBase::HandleAbilityUsed(UAbilityBase* Ability, EActivationStatus Status, const FGameplayTag& AbilityTag) {
}

float UCharacterSkillSlotAbilityBase::GetActivationCost_Implementation() const {
    return 0.0f;
}

bool UCharacterSkillSlotAbilityBase::CanActivate_Implementation() const {
    return false;
}


