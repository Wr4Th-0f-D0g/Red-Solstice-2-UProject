#include "MonsterMeleeSkillBase.h"

UMonsterMeleeSkillBase::UMonsterMeleeSkillBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCheckRequiredTargetTags = false;
    this->SlowBuffClass = NULL;
    this->ExecutionBuff = NULL;
    this->DamagableHealthRangeMapMin = 500.00f;
    this->DamagableHealthRangeMapMax = 20000.00f;
    this->DamagableHealthRangeMapOutMin = 1.00f;
    this->DamagableHealthRangeMapOutMax = 6.00f;
    this->MonsterWeaponRangeMapMin = 50.00f;
    this->MonsterWeaponRangeMapMax = 200.00f;
    this->MonsterWeaponRangeMapOutMin = 3.00f;
    this->MonsterWeaponRangeMapOutMax = 1.00f;
    this->bIgnoreEvade = false;
    this->TraceDebugType = ESolsticeDebugTraceType::None;
    this->TraceDebugDuration = 0.00f;
    this->MeleeMontage = NULL;
}

void UMonsterMeleeSkillBase::TryMelee(AMonsterCharacterBase* InMonster, UAnimMontage* InMeleeMontage) {
}

void UMonsterMeleeSkillBase::SetMeleeMontage(UAnimMontage* InMeleeMontage) {
}



void UMonsterMeleeSkillBase::HandleMontageNotify(FGameplayTag NotifyGameplayTag) {
}

void UMonsterMeleeSkillBase::HandleMontageInterrupted(FGameplayTag NotifyGameplayTag) {
}

void UMonsterMeleeSkillBase::HandleMontageComplete(FGameplayTag NotifyGameplayTag) {
}

void UMonsterMeleeSkillBase::HandleDamage() {
}


void UMonsterMeleeSkillBase::FinishMelee() {
}

bool UMonsterMeleeSkillBase::FindMeleeTarget(AMonsterCharacterBase* InMonster, TArray<AActor*> OverlappedActors, AActor*& OutActor) {
    return false;
}


bool UMonsterMeleeSkillBase::CheckTargetHealth(AHeroCharacterBase* Hero) const {
    return false;
}

bool UMonsterMeleeSkillBase::CheckExecutionRange(AHeroCharacterBase* Hero) const {
    return false;
}

bool UMonsterMeleeSkillBase::CheckDistanceIsSane(AActor* Actor) const {
    return false;
}

bool UMonsterMeleeSkillBase::CanTryToEvade(bool bIgnoreEvades) const {
    return false;
}

bool UMonsterMeleeSkillBase::CanExecute() const {
    return false;
}


