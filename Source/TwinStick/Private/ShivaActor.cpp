#include "ShivaActor.h"
#include "Net/UnrealNetwork.h"

AShivaActor::AShivaActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DelayShiva = 14.00f;
    this->BonusDamage = 0.00f;
}

void AShivaActor::GatherStaticDamageableActors(float Range) {
}

void AShivaActor::DamageGatheredActors(float Range, float Damage) {
}

void AShivaActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShivaActor, DelayShiva);
}


