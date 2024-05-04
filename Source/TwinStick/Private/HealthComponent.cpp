#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"

UHealthComponent::UHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetworkSyncInterval = 0.25f;
    this->bDisableDynamicHealthBar = false;
    this->DynamicHealthBarTimeout = 2.00f;
    this->DynamicHealthBarWidgetComponent = NULL;
    this->bActorDamagedFirstTime = false;
    this->Health = 0.00f;
    this->HealthMax = 0.00f;
    this->HealthRegeneration = 0.00f;
    this->bHealthRegenerating = true;
    this->TimeOfDeath = -1.00f;
    this->bSimulateDamageOnClient = false;
    this->bCanRevive = false;
    this->OutOfHealthSound = NULL;
    this->MostActualDissolveType = EDissolveType::DTNone;
    this->KillDamageValue = 0;
    this->bIsKillDamageBrutal = false;
}

void UHealthComponent::SetHealth(float NewHealth) {
}

void UHealthComponent::ProcessDamage_Implementation(FDamage& DamageInfo) {
}

void UHealthComponent::OnRep_TimeOfDeath() {
}

void UHealthComponent::OnRep_ReplicatedDamageContainer() {
}

void UHealthComponent::OnRep_Health() {
}

void UHealthComponent::OnRep_ActorDamagedFirstTime() {
}

void UHealthComponent::ModifyHealth(float Amount) {
}

bool UHealthComponent::IsKillDamageBrutal() const {
    return false;
}

bool UHealthComponent::IsDead() const {
    return false;
}

void UHealthComponent::HideDynamicHealthBar() {
}

void UHealthComponent::HandleRevived() {
}

bool UHealthComponent::GetWidgetVisibility() const {
    return false;
}

int32 UHealthComponent::GetKillDamageValue() const {
    return 0;
}

FVector UHealthComponent::GetKillDamageDirection() const {
    return FVector{};
}

float UHealthComponent::GetHealthRegeneration() const {
    return 0.0f;
}

float UHealthComponent::GetHealthPercent() const {
    return 0.0f;
}

float UHealthComponent::GetHealthMax() const {
    return 0.0f;
}

float UHealthComponent::GetHealth() const {
    return 0.0f;
}

EDissolveType UHealthComponent::GetDissolveType() const {
    return EDissolveType::DTNone;
}

void UHealthComponent::DoHeal(float Amount, APawn* HealInstigator) {
}

void UHealthComponent::DoDamage(FDamage& DamageInfo) {
}

void UHealthComponent::DisplayDamage(const FDamage& DamageInfo) {
}

void UHealthComponent::DiscoverHealthbars(AController* Controller, EIndicatorType IndicatorType) {
}

void UHealthComponent::DetermineDissolveType_Implementation(EDissolveType& OutDissolveDamageType, AActor* InInstigator, EDamageGroup InDamageType) {
}

void UHealthComponent::Client_DisplayDamage_Implementation(const FDamage& DamageInfo) {
}

void UHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHealthComponent, DeadDamage);
    DOREPLIFETIME(UHealthComponent, bActorDamagedFirstTime);
    DOREPLIFETIME(UHealthComponent, Health);
    DOREPLIFETIME(UHealthComponent, HealthMax);
    DOREPLIFETIME(UHealthComponent, bHealthRegenerating);
    DOREPLIFETIME(UHealthComponent, TimeOfDeath);
    DOREPLIFETIME(UHealthComponent, ReplicatedDamageContainer);
    DOREPLIFETIME(UHealthComponent, MostActualDissolveType);
    DOREPLIFETIME(UHealthComponent, KillDamageValue);
    DOREPLIFETIME(UHealthComponent, KillDamageDirection);
    DOREPLIFETIME(UHealthComponent, bIsKillDamageBrutal);
}


