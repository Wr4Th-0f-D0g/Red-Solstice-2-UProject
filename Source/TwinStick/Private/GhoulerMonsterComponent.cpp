#include "GhoulerMonsterComponent.h"

UGhoulerMonsterComponent::UGhoulerMonsterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDontRespawnRevivedMonsters = true;
    this->GhoulerSpawnMonsterMontage = NULL;
    this->GhoulerReviveMonsterMontage = NULL;
    this->GhoulerReviveMonsterParticlesRevivingMonster = NULL;
    this->SpawnMonsterTimer = 5.00f;
    this->ReviveCooldownTime = 0.00f;
    this->RepositionCooldownTime = 0.00f;
    this->GhoulerReviveRadius = 0.00f;
    this->GhoulerMaxMonstersInRadius = 0.00f;
    this->GhoulerMonsterCheckRadius = 0.00f;
    this->GhoulerMaxSpawnedAndRevivedMonsters = 0.00f;
    this->ReviveMonsterTime = 0.00f;
    this->ReviveMonsterNumber = 0;
    this->GhoulerState = EGhoulerState::EGS_Idle;
    this->PrevGhoulerState = EGhoulerState::EGS_Idle;
}

void UGhoulerMonsterComponent::SpawnMonster(const FGhoulerReviveMonsters& MonsInfo) {
}

void UGhoulerMonsterComponent::SpawnedMonsterDied(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDead) {
}


void UGhoulerMonsterComponent::HandleAICharDied(ASolsticeCharacterBase* DeadChar) {
}

void UGhoulerMonsterComponent::GotoState(EGhoulerState NewState) {
}

void UGhoulerMonsterComponent::GhoulerDied() {
}

EGhoulerState UGhoulerMonsterComponent::GetGhoulerState() const {
    return EGhoulerState::EGS_Idle;
}

void UGhoulerMonsterComponent::CooldownReposition() {
}


