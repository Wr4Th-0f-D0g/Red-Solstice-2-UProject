#include "HunterQueenComponent.h"

UHunterQueenComponent::UHunterQueenComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentState = EHunterQueenState::PatrollingNest;
    this->NestActor = NULL;
    this->LocationMarker = NULL;
    this->NestClass = NULL;
    this->EggClass = NULL;
}

ADestructibleActorBase* UHunterQueenComponent::SpawnEgg(const FVector& EggLocation) {
    return NULL;
}





void UHunterQueenComponent::HandleLocationsMapped(ULocationManager* LocManager) {
}

void UHunterQueenComponent::HandleEggDestroyed(ADestructibleActorBase* DestroyedEgg, const FDamage& DamageInfo) {
}

void UHunterQueenComponent::HandleALlEggsDestroyed(ANestBase* DestroyedNest) {
}

void UHunterQueenComponent::GotoState(EHunterQueenState InState) {
}

void UHunterQueenComponent::CreateNest(const FVector& NestLocation) {
}


