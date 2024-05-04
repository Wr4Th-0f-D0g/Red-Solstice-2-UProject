#include "MechSkillBase.h"

UMechSkillBase::UMechSkillBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStickToActivationRange = false;
    this->bAlwaysActivatable = false;
}

AMechCharacterBase* UMechSkillBase::GetOwningMech() const {
    return NULL;
}

AHeroCharacterBase* UMechSkillBase::GetOwningHero() const {
    return NULL;
}


