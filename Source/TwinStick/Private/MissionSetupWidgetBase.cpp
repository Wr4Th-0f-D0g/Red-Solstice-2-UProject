#include "MissionSetupWidgetBase.h"

UMissionSetupWidgetBase::UMissionSetupWidgetBase() {
    this->MapSelectionComboBox = NULL;
    this->DifficultyComboBox = NULL;
    this->WaveGenerationComboBox = NULL;
    this->MissionSelectionComboBox = NULL;
    this->MissionSetupText = NULL;
    this->XPModifierText = NULL;
    this->BorderMission = NULL;
    this->MissionSetupActor = NULL;
    this->MissionTable = NULL;
    this->AllMissionDescriptions = NULL;
    this->bPopulatingMissions = false;
}

void UMissionSetupWidgetBase::UpdateWaveDataAndGraph() {
}

void UMissionSetupWidgetBase::UpdateMissionXPText() {
}


void UMissionSetupWidgetBase::UpdateMissionNameText() {
}


void UMissionSetupWidgetBase::UpdateMissionDataAndMapSelection() {
}

void UMissionSetupWidgetBase::UpdateDifficultySetting(const EDifficulty NewDifficulty) {
}


void UMissionSetupWidgetBase::UpdateComboBoxValues() {
}

void UMissionSetupWidgetBase::UpdateComboBoxEnabledState() {
}

void UMissionSetupWidgetBase::TrySetupForChallenge(FMSAChallengeRequirements ChallengeRequirements) {
}

bool UMissionSetupWidgetBase::ShouldLockControlsForGenerationType() const {
    return false;
}

void UMissionSetupWidgetBase::SetupMissionData(const FName& MissionLookupName) {
}

void UMissionSetupWidgetBase::SetMissionSetupActorForServer(AMissionSetupActor* NewMissionSetupActor, bool SkipInitialization) {
}

void UMissionSetupWidgetBase::SetMissionSetupActorForClient(AMissionSetupActor* NewMissionSetupActor) {
}

void UMissionSetupWidgetBase::SetMissionSetupActor(AMissionSetupActor* MissionSetup) {
}


void UMissionSetupWidgetBase::SetDifficultyDropdown(EDifficulty NewDifficulty) {
}

void UMissionSetupWidgetBase::RerollWaves() {
}



void UMissionSetupWidgetBase::PostGenerationTypeChanged() {
}

void UMissionSetupWidgetBase::PopulateWaveGenerationCombobox() {
}

void UMissionSetupWidgetBase::PopulateMissionsComboBox() {
}

void UMissionSetupWidgetBase::PopulateMapSelectionComboBox() {
}

void UMissionSetupWidgetBase::PopulateDifficultiesComboBox() {
}

void UMissionSetupWidgetBase::OnWaveGenerationSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UMissionSetupWidgetBase::OnMissionSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UMissionSetupWidgetBase::OnMapSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UMissionSetupWidgetBase::OnDifficultySelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}


void UMissionSetupWidgetBase::InitializeMissionSetupWidget() {
}


void UMissionSetupWidgetBase::HandleSkirmishGenerationChanged() {
}

void UMissionSetupWidgetBase::HandleNewPlayerRankReceived() {
}

void UMissionSetupWidgetBase::HandleMissionSetupActorSet(AMissionSetupActor* MissionSetup) {
}

void UMissionSetupWidgetBase::HandleMissionDataChanged(const FStrategyMissionData& NewData) {
}

void UMissionSetupWidgetBase::HandleMissionChanged(AStrategyMission* NewMission) {
}

void UMissionSetupWidgetBase::HandleGameDifficultyChanged(EDifficulty NewDifficulty) {
}

ARegion* UMissionSetupWidgetBase::GetRegion() const {
    return NULL;
}

FStrategyMissionData UMissionSetupWidgetBase::GetMissionDataTableRow(FName InRowName) const {
    return FStrategyMissionData{};
}

AStrategyMission* UMissionSetupWidgetBase::GetMission() const {
    return NULL;
}

EDifficulty UMissionSetupWidgetBase::GetGameDifficulty() {
    return EDifficulty::None;
}


