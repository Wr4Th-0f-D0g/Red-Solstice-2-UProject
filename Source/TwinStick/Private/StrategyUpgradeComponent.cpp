#include "StrategyUpgradeComponent.h"
#include "Net/UnrealNetwork.h"

UStrategyUpgradeComponent::UStrategyUpgradeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConstructionObjectClass = NULL;
    this->bConstructionPaused = false;
    this->UpgradeData = NULL;
}

void UStrategyUpgradeComponent::Upgrade(const FGameplayTag& InTag) {
}

void UStrategyUpgradeComponent::OnRep_UpgradeTags() {
}

bool UStrategyUpgradeComponent::MeetsUpgradeRequirements(const FGameplayTag& InTag) const {
    return false;
}

bool UStrategyUpgradeComponent::IsBuildingUpgrade(const FGameplayTag& InTag) const {
    return false;
}

bool UStrategyUpgradeComponent::HasUpgrade(const FGameplayTag& InTag) const {
    return false;
}

bool UStrategyUpgradeComponent::HasResourcesToUpgrade(const FGameplayTag& InTag) const {
    return false;
}

bool UStrategyUpgradeComponent::HasAllUpgrades() const {
    return false;
}

bool UStrategyUpgradeComponent::HasAllAvailableUpgrades() const {
    return false;
}

int32 UStrategyUpgradeComponent::GetUpgradeLevelFor(const FGameplayTag& InTag) {
    return 0;
}

int32 UStrategyUpgradeComponent::GetRemainingTimeHours(FGameplayTag QueryItemUpgradeTag) {
    return 0;
}

FGameplayTag UStrategyUpgradeComponent::GetCurrentUpgradeTagForTree(const FGameplayTag& InTag) const {
    return FGameplayTag{};
}

float UStrategyUpgradeComponent::GetConstructionSpeed() const {
    return 0.0f;
}

UConstructionObject* UStrategyUpgradeComponent::GetConstructionObjectFor(const FGameplayTag& InTag) const {
    return NULL;
}

UBaseUpgradeData* UStrategyUpgradeComponent::GetBaseUpgradeData() const {
    return NULL;
}

void UStrategyUpgradeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStrategyUpgradeComponent, ActiveConstructionObjects);
    DOREPLIFETIME(UStrategyUpgradeComponent, UpgradeTags);
}


