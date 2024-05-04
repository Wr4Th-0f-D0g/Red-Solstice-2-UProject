#include "BurrowingComponent.h"

UBurrowingComponent::UBurrowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UnburrowParticle = NULL;
    this->BurrowParticle = NULL;
    this->OriginalZ = 0.00f;
    this->bGrabClosestBiomass = false;
    this->bDebugBurrowing = false;
    this->TraceDebugType = ESolsticeDebugTraceType::Duration;
    this->DebugLineDuration = 1.00f;
    this->UnburrowZOffset = 0.00f;
    this->BurrowMontage = NULL;
    this->UnburrowMontage = NULL;
    this->BottomFloorDist = 0.00f;
    this->bSpawnUnderground = false;
    this->bCanBurrowUnburrow = false;
    this->MontageFinishTime = 0.00f;
    this->HomeBiomass = NULL;
}

bool UBurrowingComponent::Unburrow() {
    return false;
}



void UBurrowingComponent::PlayUnburrowMontage(const FVector& UnburrowLoc) {
}

void UBurrowingComponent::PlayBurrowMontage() {
}

void UBurrowingComponent::NetMulticast_ToggleParticles_Implementation(bool bEnabled) {
}

void UBurrowingComponent::NetMulticast_ShowHoleParticle_Implementation(bool bUnburrow, const FVector& HoleLocation) {
}





bool UBurrowingComponent::CanUnburrowSafely() {
    return false;
}

bool UBurrowingComponent::Burrow() {
    return false;
}


