#include "BotAbilityDefinition.h"

FBotAbilityDefinition::FBotAbilityDefinition() {
    this->bIsFriendlyUseSkill = false;
    this->CooldownMultiplier = 0.00f;
    this->bRequiresManualMoveToPosition = false;
    this->bManualMoveToGoalActor = false;
    this->bRequiresDoubleActivation = false;
    this->RadiusOverride = 0.00f;
    this->ActivationRangeOverride = 0.00f;
}

