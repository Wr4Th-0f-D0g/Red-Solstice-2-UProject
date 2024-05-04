#include "MonsterSkillBase.h"

UMonsterSkillBase::UMonsterSkillBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Monster = NULL;
    this->bCheckRequiredTargetTags = true;
    this->bPullGoalActorForTargetTagCheck = true;
    this->bIgnoreDefaultCanActivateChecks = false;
    this->TargetActor = NULL;
    this->bDisableMonsterSkillUseCheck = false;
    this->bSkillActive = false;
}

bool UMonsterSkillBase::TargetTagsAreValidForSkill(AActor* Target) const {
    return false;
}

void UMonsterSkillBase::SetTargetActor(AActor* InTargetActor) const {
}




void UMonsterSkillBase::HandleTagRemoved(ASolsticeCharacterBase* Char, FGameplayTag AddedTag) {
}

void UMonsterSkillBase::HandleTagAdded(ASolsticeCharacterBase* Char, FGameplayTag AddedTag) {
}


float UMonsterSkillBase::GetWeaponDamage_Implementation() const {
    return 0.0f;
}

UAnimMontage* UMonsterSkillBase::GetMontageForSkill() const {
    return NULL;
}

void UMonsterSkillBase::DebugsActivated(bool bEnabled) {
}

bool UMonsterSkillBase::CanContinueSkill() const {
    return false;
}



