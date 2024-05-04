#include "BrutalExplodeComponent.h"

UBrutalExplodeComponent::UBrutalExplodeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BrutalChanceThreshold = 0.00f;
    this->NumBodyPartsToSpawn = 0;
    this->BrutalDecalTimespan = 0.00f;
    this->BrutalExplodeParticleEffect = NULL;
    this->BrutalExplodeSound = NULL;
    this->BloodDecalMaterial = NULL;
    this->BrutalExplodeHitPoints = 0.00f;
    this->BodyPartHorizontalSpread = 0.00f;
    this->BodyPartVerticalAngleMin = 0.00f;
    this->BodyPartVerticalAngleMax = 0.00f;
    this->BodyPartForceMin = 0.00f;
    this->BodyPartForceMax = 0.00f;
    this->BodyPartDamageForMaxForce = 0.00f;
    this->BodyPartRotationMultiplier = 0.23f;
    this->bIsBrutalExploded = false;
    this->bCanBrutalExplode = false;
    this->CharacterOwner = NULL;
}

void UBrutalExplodeComponent::ResetDamageInfo() {
}

void UBrutalExplodeComponent::MulticastBrutalExplode_Implementation(FVector BrutalDamageVector) {
}

bool UBrutalExplodeComponent::IsBrutalExploded() const {
    return false;
}

FVector UBrutalExplodeComponent::GetDamageVector() const {
    return FVector{};
}

bool UBrutalExplodeComponent::CanBrutalExplode() const {
    return false;
}

void UBrutalExplodeComponent::BrutalExplode(FVector BrutalDamageVector) {
}


