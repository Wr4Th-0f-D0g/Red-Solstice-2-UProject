#include "FollowerHeroCharacterBase.h"

AFollowerHeroCharacterBase::AFollowerHeroCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->BotIdleTime = 0.00f;
    this->OverwatchTarget = NULL;
    this->HighThreatToAvoid = NULL;
    this->BackPeddleDistance = 0.00f;
    this->CachedFollowerComp = NULL;
    this->bOverrideFireSecondaryShot = false;
    this->bFollowerScriptedByDefault = false;
    this->SecondaryWeaponTarget = NULL;
    this->InitialFireMode = EFiringMode::EFS_Idle;
    this->bIsScriptedBot = false;
}

void AFollowerHeroCharacterBase::OverwatchTargetChanged(AActor* InNewTarget) {
}

void AFollowerHeroCharacterBase::MeleeTimerTick() {
}

AActor* AFollowerHeroCharacterBase::GetSecondaryWeaponTarget() const {
    return NULL;
}

void AFollowerHeroCharacterBase::CheckForSecondaryWeaponTargeted() {
}

void AFollowerHeroCharacterBase::CheckForCloseHighThreat() {
}


void AFollowerHeroCharacterBase::AssignedPlayerFireModeChanged(FFiringMode FiringMode) {
}

void AFollowerHeroCharacterBase::AssignedPlayerAttackTargetChanged(AActor* OldTarget, AActor* NewTarget) {
}

void AFollowerHeroCharacterBase::AssignedHeroChanged(AHeroCharacterBase* NewAssignedHero, AHeroCharacterBase* OldAssignedHero) {
}


