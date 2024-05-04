#include "HeroMovementComponent.h"

UHeroMovementComponent::UHeroMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistanceToTickEveryFrame = 4000.00f;
    this->HeroOwner = NULL;
}

void UHeroMovementComponent::ServerSetMovementMode_Implementation(EMovementMode NewMode) {
}

void UHeroMovementComponent::ServerSetGravityScale_Implementation(float NewScale) {
}

void UHeroMovementComponent::NetMulticast_MovementMode_Implementation(EMovementMode NewMode) {
}

void UHeroMovementComponent::NetMulticast_GravityScale_Implementation(float NewScale) {
}


