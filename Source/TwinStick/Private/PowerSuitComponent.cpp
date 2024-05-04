#include "PowerSuitComponent.h"
#include "Net/UnrealNetwork.h"

UPowerSuitComponent::UPowerSuitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SuitIntegrityMax = 3;
    this->SuitIntegrity = 0;
    this->bRevivalInProgress = false;
    this->bDowned = false;
    this->CachedExperience = 0;
    this->CachedLevel = 0;
    this->ProgressXP = NULL;
    this->CurrentExperience = 0;
    this->SkillPointsInvested = 0;
    this->SkillPoints = 0;
    this->EnergyGainPerLevel = 5.00f;
    this->ExperienceTowardNextLevel = 0;
    this->ExperienceRequiredForNextLevel = 2000;
    this->ExperienceProgress = 0.00f;
    this->SuitLevel = 0;
    this->MaximumSuitLevel = 10;
}

void UPowerSuitComponent::SetSuitIntegrity(int32 NewIntegrity) {
}

void UPowerSuitComponent::SetSkillPoints(int32 Value) {
}

void UPowerSuitComponent::SetMaximumSuitLevel(int32 InLevel) {
}

void UPowerSuitComponent::Revive_Implementation() {
}

void UPowerSuitComponent::OnRep_SuitIntegrity() {
}

void UPowerSuitComponent::OnRep_SkillPointsInvested(int32 PreviousInvested) {
}

void UPowerSuitComponent::OnRep_SkillPoints(int32 PreviousSkillPoints) {
}

void UPowerSuitComponent::OnRep_Level(int32 PreviousLevel) {
}

void UPowerSuitComponent::OnRep_Experience(int32 PreviousExperience) {
}

void UPowerSuitComponent::IncrementMaximumSuitLevel() {
}

void UPowerSuitComponent::HandleCharacterDowned() {
}

int32 UPowerSuitComponent::GetSuitLevel() {
    return 0;
}

int32 UPowerSuitComponent::GetSuitIntegrity() {
    return 0;
}

int32 UPowerSuitComponent::GetSkillPoints() {
    return 0;
}

int32 UPowerSuitComponent::GetExperience() const {
    return 0;
}

int32 UPowerSuitComponent::GetAvailableSkillPoints() {
    return 0;
}

void UPowerSuitComponent::DrainSkillPoint() {
}

void UPowerSuitComponent::DrainLevel() {
}

void UPowerSuitComponent::AwardXP(int32 Value) {
}

void UPowerSuitComponent::AwardSkillPoints(int32 InPoints) {
}

void UPowerSuitComponent::AwardSkillPoint() {
}

void UPowerSuitComponent::AwardLevel() {
}

void UPowerSuitComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPowerSuitComponent, SuitIntegrity);
    DOREPLIFETIME(UPowerSuitComponent, CurrentExperience);
    DOREPLIFETIME(UPowerSuitComponent, SkillPointsInvested);
    DOREPLIFETIME(UPowerSuitComponent, SkillPoints);
    DOREPLIFETIME(UPowerSuitComponent, SuitLevel);
}


