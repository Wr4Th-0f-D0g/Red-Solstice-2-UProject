#include "VehicleDamagerComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

UVehicleDamagerComponent::UVehicleDamagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->bFront = false;
    this->PushSweepDistance = 30.00f;
    this->PushCheckInterval = 1.00f;
    this->PushDamageMultiplier = 0.30f;
    this->BaseSpeed = 50.00f;
    this->CharacterBaseDamageMultiplier = 1.00f;
    this->DamageableActorBaseMultiplier = 1.00f;
    this->BaseThornsDamage = 100.00f;
}

void UVehicleDamagerComponent::PushCheck(ASolsticeDrivableVehicle* Vehicle, bool bFrontPush) {
}

void UVehicleDamagerComponent::ImpactCheck(ASolsticeDrivableVehicle* Vehicle, float DeltaTIme, bool bFrontImpact) {
}

void UVehicleDamagerComponent::HandleEndOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* Actor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UVehicleDamagerComponent::HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}




