#include "ZiplineMovementComponent.h"
#include "Templates/SubclassOf.h"

UZiplineMovementComponent::UZiplineMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Hero = NULL;
    this->Zipline = NULL;
}

void UZiplineMovementComponent::ToggleZiplineEndpointCollisions(UBoxComponent* InBoxComp, TSubclassOf<UNavAreaBase> NavClass) {
}

void UZiplineMovementComponent::StartZipline(AActor* InZipline, const FVector& StartLocation, const FVector& EndLocation, float SpeedFactor) {
}

void UZiplineMovementComponent::ServerStartZipline_Implementation(AActor* InZipline, const FVector& StartLocation, const FVector& EndLocation, float SpeedFactor) {
}



void UZiplineMovementComponent::HandleCharacterDied(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void UZiplineMovementComponent::ForcePlayerForward(const FVector& WorldDirection, float Strength, float Duration) {
}

void UZiplineMovementComponent::ClientStartZipline_Implementation(AActor* InZipline, const FVector& StartLocation, const FVector& EndLocation, float SpeedFactor) {
}

void UZiplineMovementComponent::ClientFinishZipline_Implementation(AHeroCharacterBase* InHero) {
}


