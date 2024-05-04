#include "BotSkillOverrideBase.h"

UBotSkillOverrideBase::UBotSkillOverrideBase() {
    this->bIsFriendlyUseSkill = false;
    this->CooldownMultiplier = 1.00f;
    this->bRequiresManualMoveToPosition = false;
    this->bManualMoveToGoalActor = false;
    this->bSkillUsageSelf = false;
    this->bRequiresDoubleActivation = false;
    this->RadiusOverride = 0.00f;
    this->RangeOverride = 0.00f;
}

void UBotSkillOverrideBase::SetSkillUsageSelf(bool bInSkillUsageSelf) const {
}














void UBotSkillOverrideBase::CheckForValidSkillUsage_Implementation(APawn* OwningPawn, USkill* Skill) {
}


