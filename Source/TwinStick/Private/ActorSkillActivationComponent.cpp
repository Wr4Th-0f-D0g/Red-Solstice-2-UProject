#include "ActorSkillActivationComponent.h"

UActorSkillActivationComponent::UActorSkillActivationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverrideActivationRange = false;
    this->ActivationRangeOverride = 5000.00f;
    this->bIsManuallyActivated = false;
}

void UActorSkillActivationComponent::ActivateSkill(APawn* InPawnInstigator, USkill* InSkill) {
}

void UActorSkillActivationComponent::ActivateAllSkills(APawn* InPawnInstigator) {
}


