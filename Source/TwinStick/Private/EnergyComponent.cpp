#include "EnergyComponent.h"
#include "Net/UnrealNetwork.h"

UEnergyComponent::UEnergyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Energy = 0.00f;
    this->EnergyMax = 0.00f;
    this->OverwatchEnergyReserved = 0.00f;
    this->EnergyRegenerationBase = 0.00f;
    this->EnergyRegeneration = 0.00f;
    this->bEnergyRegenerationAllowed = true;
    this->HalfRegenerationVelocity = 300.00f;
    this->MovementEnergyBuff = NULL;
    this->OutOfEnergySound = NULL;
}

void UEnergyComponent::ToggleEnergyRegeneration(bool Value) {
}

void UEnergyComponent::SuspendEnergyRegeneration_Implementation(float Time) {
}

void UEnergyComponent::SetEnergyReserved(float Value) {
}

void UEnergyComponent::SetEnergyRegeneration(float Value) {
}

void UEnergyComponent::SetEnergyMax(float Value) {
}

void UEnergyComponent::SetEnergy(float Value) {
}

void UEnergyComponent::OnRep_Energy() {
}

float UEnergyComponent::GetEnergyRegeneration() const {
    return 0.0f;
}

float UEnergyComponent::GetEnergyPercent() const {
    return 0.0f;
}

float UEnergyComponent::GetEnergyMax() const {
    return 0.0f;
}

float UEnergyComponent::GetEnergyAvailablePercent() const {
    return 0.0f;
}

float UEnergyComponent::GetEnergyAvailable() const {
    return 0.0f;
}

float UEnergyComponent::GetEnergy() const {
    return 0.0f;
}

bool UEnergyComponent::GetCharacterOwner(ASolsticeCharacterBase*& Character) {
    return false;
}

void UEnergyComponent::DeltaEnergy(float Value) {
}

void UEnergyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEnergyComponent, Energy);
    DOREPLIFETIME(UEnergyComponent, EnergyMax);
    DOREPLIFETIME(UEnergyComponent, OverwatchEnergyReserved);
}


