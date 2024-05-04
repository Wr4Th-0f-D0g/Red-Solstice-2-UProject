#include "UsableSkillComponent.h"
#include "NavAreas/NavArea_Obstacle.h"
#include "EInteractionAbortPolicy.h"
#include "EInteractionCount.h"

UUsableSkillComponent::UUsableSkillComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->bInteractionEnabled = true;
    this->InteractionCountPolicy = EInteractionCount::EIC_UseOncePerReset;
    this->AbortPolicy = EInteractionAbortPolicy::EIAP_Move;
    this->bCanBeManuallyTargeted = true;
    this->ActivationRangeOverride = -1.00f;
}

void UUsableSkillComponent::MulticastStartCooldown_Implementation() {
}

void UUsableSkillComponent::HandleCooldownReadyChanged(UAbilityBase* OwnedAbility, bool bCooldownReady, const FGameplayTag& AbilityTag) {
}

void UUsableSkillComponent::HandleAbilityReset(UAbilityBase* OwnedAbility, const FGameplayTag& AbilityTag) {
}

TArray<USkill*> UUsableSkillComponent::GetSkills() const {
    return TArray<USkill*>();
}


