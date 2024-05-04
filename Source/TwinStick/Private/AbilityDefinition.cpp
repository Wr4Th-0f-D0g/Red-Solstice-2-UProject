#include "AbilityDefinition.h"

FAbilityDefinition::FAbilityDefinition() {
    this->ActivationObjectClass = NULL;
    this->ActivationLocationMode = EActivationLocation::EAL_None;
    this->EndPolicy = EAbilityEndPolicy::Automatic;
    this->DamageType = EDamageGroup::EDT_None;
    this->EnterCooldownCondition = EActivationStatus::EAS_Inactive;
    this->bInitialCooldown = false;
    this->bForceStopMovementOnFire = false;
    this->BotRadiusMultiplier = 0.00f;
    this->bResourceRechargeAllowed = false;
    this->ResourceRechargeReactivationDelay = 0.00f;
    this->AreaMarkerParticleSystem = NULL;
}

