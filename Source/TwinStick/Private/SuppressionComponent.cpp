#include "SuppressionComponent.h"
#include "Net/UnrealNetwork.h"

USuppressionComponent::USuppressionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DestructiveSuppression = 1.00f;
    this->EnergySuppression = 1.00f;
    this->KineticSuppression = 3.00f;
    this->DestructiveSuppressionMultiplier = 0.00f;
    this->EnergySuppressionMultiplier = 0.00f;
    this->KineticSuppressionMultiplier = 0.00f;
    this->InitialRegenerationMultiplier = 0.00f;
    this->SuppressionMax = 100.00f;
    this->SuppressionRegeneration = 0.00f;
    this->SuppressionRegenerationMultiplier = 1.00f;
    this->SuppressionThreshold = 0.50f;
    this->StunDamage = 0.00f;
    this->StunDamageThreshold = 1000.00f;
    this->Suppression = 0.00f;
    this->bIsSuppressed = false;
    this->bIsStunned = false;
    this->SuppressedBuff = NULL;
    this->StunnedBuff = NULL;
    this->DestructiveDamageOverflowToSuppressionMultiplier = 0.01f;
}

void USuppressionComponent::SetSuppressionToMaximum() {
}

void USuppressionComponent::ProcessDamage_Implementation(FDamage& DamageInfo) {
}

bool USuppressionComponent::IsSuppressed() const {
    return false;
}

bool USuppressionComponent::IsStunned() const {
    return false;
}

void USuppressionComponent::HandleDamageOverflow(const FDamage& DamageInfo) {
}

float USuppressionComponent::GetSuppressionRegenerationMultiplier() const {
    return 0.0f;
}

float USuppressionComponent::GetSuppressionRegeneration() const {
    return 0.0f;
}

float USuppressionComponent::GetSuppressionPercent() const {
    return 0.0f;
}

float USuppressionComponent::GetSuppressionMax() const {
    return 0.0f;
}

float USuppressionComponent::GetSuppression() const {
    return 0.0f;
}

void USuppressionComponent::ClearSuppression() {
}

void USuppressionComponent::ClearStun() {
}

void USuppressionComponent::ApplySuppression() {
}

void USuppressionComponent::ApplyStun(APawn* StunInstigator) {
}

void USuppressionComponent::AddSuppression(float Amount, APawn* SuppressionInstigator, UClass* DamageSourceClass) {
}

void USuppressionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USuppressionComponent, Suppression);
    DOREPLIFETIME(USuppressionComponent, bIsSuppressed);
    DOREPLIFETIME(USuppressionComponent, bIsStunned);
}


