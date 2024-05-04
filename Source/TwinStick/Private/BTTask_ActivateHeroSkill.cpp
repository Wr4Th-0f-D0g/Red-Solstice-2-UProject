#include "BTTask_ActivateHeroSkill.h"

UBTTask_ActivateHeroSkill::UBTTask_ActivateHeroSkill() {
    this->NodeName = TEXT("Activate Hero Skill");
    this->bUseKeyTargetLocation = true;
    this->bUseCachedTargetLoc = false;
    this->bDisableRangeAndPathCheck = false;
    this->bUseAIBotDoActivate = false;
    this->MyOwnerComp = NULL;
    this->MyPawn = NULL;
}

void UBTTask_ActivateHeroSkill::HandleSkillFinished(UAbilityBase* Ability, const FGameplayTag& AbilityTag) {
}


