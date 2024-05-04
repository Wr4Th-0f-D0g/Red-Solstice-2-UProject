#include "SkillButtonBase.h"

USkillButtonBase::USkillButtonBase() : UUserWidget(FObjectInitializer::Get()) {
    this->Skill = NULL;
    this->SkillIndex = 0;
    this->SkillSlot = ESkillSlot::Invalid;
    this->bIsDragDroppable = false;
}

void USkillButtonBase::SetSkillSlot(ESkillSlot InSlot) {
}

void USkillButtonBase::SetSkillIndex(int32 InIndex) {
}

void USkillButtonBase::SetSkill_Implementation(USkill* NewSkill) {
}


void USkillButtonBase::HandleCooldownValueChanged(float TimeRemaining, float CooldownPercent) {
}

void USkillButtonBase::HandleCooldownChanged(UAbilityBase* Item, bool bReady, const FGameplayTag& AbilityTag) {
}


