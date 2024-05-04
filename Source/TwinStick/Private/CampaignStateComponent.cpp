#include "CampaignStateComponent.h"
#include "Net/UnrealNetwork.h"

UCampaignStateComponent::UCampaignStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CampaignData = NULL;
    this->CampaignCorporation = ECorporation::Elysium;
    this->StoriesDatatable = NULL;
    this->DocumentsDatatable = NULL;
    this->CharactersDatatable = NULL;
    this->BestiaryDatatable = NULL;
}

void UCampaignStateComponent::UpdateNewSetupSlidersStateFromResearch(UTechObject* InResearch) {
}

void UCampaignStateComponent::SetResearchEntryViewed(FGameplayTag InTechTag) {
}

void UCampaignStateComponent::SetMissionSlidersViewed(bool HordeArrival, bool AirSupport, bool Artillery) {
}

void UCampaignStateComponent::SetEngineeringEntryViewed(FGameplayTag InTechTag) {
}

void UCampaignStateComponent::SetDocumentEntryViewed(FName InDocumentName) {
}

void UCampaignStateComponent::SetBestiaryEntryViewed(FName InBeastName) {
}

void UCampaignStateComponent::OnRep_UpgradeTags(const FGameplayTagContainer& OldTags) {
}

void UCampaignStateComponent::OnRep_TechTags(const FGameplayTagContainer& OldTags) {
}

void UCampaignStateComponent::OnRep_SelectedCampaign() {
}

void UCampaignStateComponent::OnRep_SavedVehicles() {
}

void UCampaignStateComponent::OnRep_MiscellaneousTags(const FGameplayTagContainer& OldTags) {
}

void UCampaignStateComponent::OnRep_Corporation() {
}

void UCampaignStateComponent::OnRep_CampaignWeaponTemplates() {
}

void UCampaignStateComponent::OnRep_CampaignTags(const FGameplayTagContainer& OldTags) {
}

bool UCampaignStateComponent::HasViewedResearch(FGameplayTag InTechTag) const {
    return false;
}

bool UCampaignStateComponent::HasViewedEngineeringItem(FGameplayTag InTechTag) const {
    return false;
}

bool UCampaignStateComponent::HasViewedDocumentsEntry(FName DocumentName) const {
    return false;
}

bool UCampaignStateComponent::HasViewedBestiaryEntry(FName InBeastName) const {
    return false;
}

bool UCampaignStateComponent::HasProgressTag(FGameplayTag InTag, bool bExact) const {
    return false;
}

bool UCampaignStateComponent::HasAnyProgressTags(const FGameplayTagContainer& InTagContainer, bool bExact) const {
    return false;
}

bool UCampaignStateComponent::HasAllProgressTags(const FGameplayTagContainer& InTagContainer, bool bExact) const {
    return false;
}

int32 UCampaignStateComponent::GetNumberOfNewStoryEntries() const {
    return 0;
}

int32 UCampaignStateComponent::GetNumberOfNewResearchEntries() const {
    return 0;
}

int32 UCampaignStateComponent::GetNumberOfNewEntries(bool Story, bool Documents, bool Characters, bool Bestiary, bool Research, bool Engineering) const {
    return 0;
}

int32 UCampaignStateComponent::GetNumberOfNewEngineeringEntries() const {
    return 0;
}

int32 UCampaignStateComponent::GetNumberOfNewDocumentEntries() const {
    return 0;
}

int32 UCampaignStateComponent::GetNumberOfNewCharacterEntries() const {
    return 0;
}

int32 UCampaignStateComponent::GetNumberOfNewBestiaryEntries() const {
    return 0;
}

void UCampaignStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCampaignStateComponent, CampaignProgressTags);
    DOREPLIFETIME(UCampaignStateComponent, TechProgressTags);
    DOREPLIFETIME(UCampaignStateComponent, UpgradeProgressTags);
    DOREPLIFETIME(UCampaignStateComponent, MiscellaneousProgressTags);
    DOREPLIFETIME(UCampaignStateComponent, CampaignData);
    DOREPLIFETIME(UCampaignStateComponent, SelectedCampaign);
    DOREPLIFETIME(UCampaignStateComponent, CampaignCorporation);
    DOREPLIFETIME(UCampaignStateComponent, CampaignWeaponTemplates);
    DOREPLIFETIME(UCampaignStateComponent, SavedVehicles);
}


