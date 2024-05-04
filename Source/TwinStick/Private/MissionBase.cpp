#include "MissionBase.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AMissionBase::AMissionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->ObjectiveTracker = NULL;
    this->bHideObjectiveArrow = false;
    this->bFromLoad = false;
    this->bSkipFirstDialogPostSave = false;
    this->MissionDT = NULL;
    this->MissionBT = NULL;
    this->bRegisteredAnalytics = false;
    this->MissionStatus = EMissionStatus::Active;
    this->ActiveObjectiveIndex = 0;
}

void AMissionBase::StartObjectiveTimer(FMissionTimer InTimer) {
}

void AMissionBase::StartObjective() {
}

void AMissionBase::StartMissionTimer(FMissionTimer InTimer) {
}

void AMissionBase::SaveSelectedLocation(FSelectedMissionLocation InLocation) {
}

void AMissionBase::ResetMissionFollowers() {
}

void AMissionBase::ResetMissionEnemyMarines() {
}

void AMissionBase::ResetMissionCivilians() {
}

void AMissionBase::ResetMissionBasicMarines() {
}

void AMissionBase::OnRep_MissionName() {
}

void AMissionBase::OnRep_MissionBT() {
}

void AMissionBase::OnRep_HideObjectiveArrow() {
}

void AMissionBase::NetMulticast_SetObjectiveTracker_Implementation(UMissionObjectiveTracker* InObjectiveTracker) {
}

bool AMissionBase::IsPrimaryMission() const {
    return false;
}

void AMissionBase::HandleObjectiveTimerExpired(bool bInSuccess) {
}

void AMissionBase::HandleMissionTimerExpired(bool bInSuccess) {
}

bool AMissionBase::GetSavedLocationByObjectiveName(FSavedMissionLocation& NamedLocation, FName ObjectiveName) const {
    return false;
}

FText AMissionBase::GetObjectiveTimerText() const {
    return FText::GetEmpty();
}

EMissionType AMissionBase::GetMissionType() const {
    return EMissionType::Invalid;
}

FText AMissionBase::GetMissionTitle() const {
    return FText::GetEmpty();
}

FText AMissionBase::GetMissionTimerText() const {
    return FText::GetEmpty();
}

FGameplayTag AMissionBase::GetMissionTag() const {
    return FGameplayTag{};
}

TArray<FMissionObjective> AMissionBase::GetMissionObjectiveData() const {
    return TArray<FMissionObjective>();
}

TArray<FVector> AMissionBase::GetMissionLocations() const {
    return TArray<FVector>();
}

TSubclassOf<UItem> AMissionBase::GetMissionItemClass() const {
    return NULL;
}

float AMissionBase::GetMissionHoldTime() const {
    return 0.0f;
}

TArray<ASolsticeCharacterBase*> AMissionBase::GetMissionFollowers(int32 Index) const {
    return TArray<ASolsticeCharacterBase*>();
}

TArray<ASolsticeCharacterBase*> AMissionBase::GetMissionEnemyMarines(int32 Index) const {
    return TArray<ASolsticeCharacterBase*>();
}

TArray<ASolsticeCharacterBase*> AMissionBase::GetMissionCivilians(int32 Index) const {
    return TArray<ASolsticeCharacterBase*>();
}

TArray<ASolsticeCharacterBase*> AMissionBase::GetMissionBasicMarines(int32 Index) const {
    return TArray<ASolsticeCharacterBase*>();
}

TArray<AActor*> AMissionBase::GetMissionActors() const {
    return TArray<AActor*>();
}

bool AMissionBase::GetLastSavedLocation(FSavedMissionLocation& LastLocation) const {
    return false;
}

FMissionDialogRow AMissionBase::GetDialogRow() const {
    return FMissionDialogRow{};
}

FText AMissionBase::GetActiveObjectiveText() const {
    return FText::GetEmpty();
}

int32 AMissionBase::GetActiveObjectiveIndex() const {
    return 0;
}

TArray<FUI_MIssionLocation> AMissionBase::GetActiveMissionLocations() const {
    return TArray<FUI_MIssionLocation>();
}

void AMissionBase::DebugSkipObjective() {
}

void AMissionBase::CreateSavedItemEntry(int32 InIndex, const FLocationInfo& Location, const FVector& Point, FName InLocationName) {
}

void AMissionBase::CreateMissionLocations(const FGameplayTagContainer& LocationGameplayTags, EGameplayContainerMatchType MatchType, int32 LocationCount, ELocationDistance Range, float MinimumRange, const FVector& DistanceLocation, FName LocationName, ELocationSelectionMode ChoosingMode, bool bLockLMAAfterUse, bool bCanUseLockedLMAs) {
}

FMissionLocation AMissionBase::ConfigureMissionLocation(FMissionLocation InLocation) const {
    return FMissionLocation{};
}

void AMissionBase::CompleteRepeatableObjective() {
}

void AMissionBase::CompleteObjective(EMissionStatus Status) {
}

void AMissionBase::ClearObjectiveTimer(bool bBroadcast) {
}

void AMissionBase::ClearMissionTimer() {
}

void AMissionBase::AdvanceToObjective(int32 ObjectiveIndex) {
}

void AMissionBase::AddMissionFollower(ASolsticeCharacterBase* Follower, int32 GroupIndex) {
}

void AMissionBase::AddMissionEnemyMarine(ASolsticeCharacterBase* EnemyMarine, int32 GroupIndex) {
}

void AMissionBase::AddMissionCivilian(ASolsticeCharacterBase* Civilian, int32 GroupIndex) {
}

void AMissionBase::AddMissionBasicMarine(ASolsticeCharacterBase* BasicMarine, int32 GroupIndex) {
}

void AMissionBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMissionBase, ObjectiveTracker);
    DOREPLIFETIME(AMissionBase, bHideObjectiveArrow);
    DOREPLIFETIME(AMissionBase, bSkipFirstDialogPostSave);
    DOREPLIFETIME(AMissionBase, MissionManager);
    DOREPLIFETIME(AMissionBase, MissionBT);
    DOREPLIFETIME(AMissionBase, MissionName);
}


