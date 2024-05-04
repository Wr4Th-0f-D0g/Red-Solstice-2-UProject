#include "StrategyInfestationManager.h"
#include "Net/UnrealNetwork.h"

UStrategyInfestationManager::UStrategyInfestationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaximumGlobalInfestation = 0;
    this->GlobalInfestation = 0.00f;
    this->CurrentRevolution = 100.00f;
    this->LockAmountPerTag = 20.00f;
    this->MaxRevolutionValue = 200.00f;
    this->RevolutionBonusPerTag = 0.00f;
    this->RevolutionMitigationPerTag = 0.00f;
}

void UStrategyInfestationManager::TickInfestation(int32 Days) {
}

void UStrategyInfestationManager::SaveDecals() {
}

void UStrategyInfestationManager::OnRep_GlobalInfestation(float OldInfestation) {
}

void UStrategyInfestationManager::OnRep_EndGameTime() {
}

void UStrategyInfestationManager::ModifyGlobalInfestation(float DeltaInfestation) {
}

void UStrategyInfestationManager::HandleCampaignDayChanged(const FMarsTime& CampaignTime) {
}

float UStrategyInfestationManager::GetInfestationGrowthSpeed(ARegion* InRegion) const {
    return 0.0f;
}

float UStrategyInfestationManager::GetInfestationGrowthMultiplier(ARegion* InRegion) const {
    return 0.0f;
}

bool UStrategyInfestationManager::CanUseRevolution() {
    return false;
}

void UStrategyInfestationManager::AdjustDecals() {
}

void UStrategyInfestationManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStrategyInfestationManager, MaximumGlobalInfestation);
    DOREPLIFETIME(UStrategyInfestationManager, GlobalInfestation);
    DOREPLIFETIME(UStrategyInfestationManager, EndGameTime);
}


