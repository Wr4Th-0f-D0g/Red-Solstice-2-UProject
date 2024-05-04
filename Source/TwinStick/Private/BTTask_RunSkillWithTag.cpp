#include "BTTask_RunSkillWithTag.h"

UBTTask_RunSkillWithTag::UBTTask_RunSkillWithTag() {
    this->NodeName = TEXT("Activate Ability with Tag");
    this->MyOwnerComp = NULL;
    this->TimeoutTime = 5.00f;
    this->SelectedSkill = NULL;
}

void UBTTask_RunSkillWithTag::HandleSkillFinished(UAbilityBase* Ability, const FGameplayTag& AbilityTag) {
}


