#include "EnemyHeroCharacterBase.h"

AEnemyHeroCharacterBase::AEnemyHeroCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->DynamicMaterial = NULL;
    this->bEnemyHovered = false;
    this->HealthWidgetTimeout = 1.00f;
    this->bManuallyRemovedFromMapSystem = false;
    this->InstantSpawnMontage = NULL;
    this->bIgnoreDeathEffects = false;
    this->AwakenCloseByMembersRadius = 800.00f;
    this->LastDamageGroup = EDamageGroup::EDT_None;
    this->LastDamageTime = 0.00f;
    this->bDeadFromRelevancy = false;
}

void AEnemyHeroCharacterBase::TagRemoved(ASolsticeCharacterBase* Char, FGameplayTag RemovedTag) {
}

void AEnemyHeroCharacterBase::TagAdded(ASolsticeCharacterBase* Char, FGameplayTag AddedTag) {
}

void AEnemyHeroCharacterBase::SetupEnemyMarineBuffs_Implementation() {
}

void AEnemyHeroCharacterBase::NotifyFinishSpawning_Implementation() {
}

void AEnemyHeroCharacterBase::DiscoverHealthbars(AController* InController, EIndicatorType IndicatorType) {
}

void AEnemyHeroCharacterBase::CreateHealthBar() {
}


