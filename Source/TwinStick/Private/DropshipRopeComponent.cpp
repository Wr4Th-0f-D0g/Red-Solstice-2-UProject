#include "DropshipRopeComponent.h"

UDropshipRopeComponent::UDropshipRopeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RopeRiseMontage = NULL;
    this->RopeDropMontage = NULL;
}

bool UDropshipRopeComponent::SetCharacterAtRope(ASolsticeCharacterBase* InCharacter, uint8 OptionalRopeID) {
    return false;
}

void UDropshipRopeComponent::RiseRopeForCharacter(ASolsticeCharacterBase* InCharacter, bool bDropRopeAgain) {
}

void UDropshipRopeComponent::RiseAllRopes() {
}

void UDropshipRopeComponent::MulticastPlayMontage_Implementation(const FEvacRope& Rope, UAnimMontage* SelectedMontage) {
}

void UDropshipRopeComponent::HideAllRopes_Implementation() {
}

FEvacRope UDropshipRopeComponent::GetRopeByID(const uint8 RopeID) const {
    return FEvacRope{};
}

void UDropshipRopeComponent::DropAllRopes() {
}


