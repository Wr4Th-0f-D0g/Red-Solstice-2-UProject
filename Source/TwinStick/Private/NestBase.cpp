#include "NestBase.h"

ANestBase::ANestBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->OwningMonster = NULL;
    this->bNestOccupied = false;
}

void ANestBase::SetNestOccupied(bool bNewOccupied) {
}

void ANestBase::OnEggKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

bool ANestBase::IsOccupied() const {
    return false;
}

FVector ANestBase::GetNestLocation_Implementation() const {
    return FVector{};
}

TArray<ADestructibleActorBase*> ANestBase::GetEggs() const {
    return TArray<ADestructibleActorBase*>();
}

void ANestBase::AddSpawnedEgg(ADestructibleActorBase* SpawnedEgg) {
}


