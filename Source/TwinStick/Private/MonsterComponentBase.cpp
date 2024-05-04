#include "MonsterComponentBase.h"

UMonsterComponentBase::UMonsterComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningMonster = NULL;
}

void UMonsterComponentBase::StopBeginPlayTimers() {
}

void UMonsterComponentBase::StartBeginPlayTimers() {
}

AMonsterCharacterBase* UMonsterComponentBase::GetOwningMonster() const {
    return NULL;
}


