#include "MissionManagerBase.h"
#include "FMODAudioComponent.h"
#include "Net/UnrealNetwork.h"

AMissionManagerBase::AMissionManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RootComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FModMissionAC"));
    this->DialogActorClass = NULL;
    this->MissionDT = NULL;
    this->bAutoSpawnEvac = true;
    this->MissionPawnClass = NULL;
    this->FModMissionAC = (UFMODAudioComponent*)RootComponent;
    this->ObjectiveAddedSound = NULL;
    this->ObjectiveCompletedSound = NULL;
    this->MissionCompletedSound = NULL;
    this->MissionFailedSound = NULL;
    this->FirstDialogDelaySeconds = 2.00f;
    this->NextMissionIndex = 100;
    this->bClientReadyToPlayMedia = false;
}

AMissionBase* AMissionManagerBase::SpawnMissionFromTag(FGameplayTag MissionTag) {
    return NULL;
}

AMissionBase* AMissionManagerBase::SpawnMission(FName MissionName) {
    return NULL;
}

void AMissionManagerBase::ShowMissionTitle(FText MissionText, EMissionStatus Status) {
}

void AMissionManagerBase::ShowMission(AMissionBase* Mission) {
}

void AMissionManagerBase::PlayMissionSound(UFMODEvent* SoundAsset) {
}

void AMissionManagerBase::PlayFirstMissionDialog(const FMissionDialog& FirstDialog) {
}

void AMissionManagerBase::PlayDialogForMission(AMissionBase* Mission, EMissionStatus Status, int32 CurrentObjectiveIndex, bool bObjectiveCompleted) {
}

void AMissionManagerBase::HandleMissionUpdated(FMissionStatus& InMission) {
}

void AMissionManagerBase::HandleMissionRemoved(const FMissionStatus& InMission) {
}

void AMissionManagerBase::HandleMissionObjectiveChanged(AMissionBase* Mission, EMissionStatus Status, int32 CurrentObjectiveIndex, bool bObjectiveCompleted) {
}


void AMissionManagerBase::HandleMissionAdded(FMissionStatus& InMission) {
}

TArray<FMissionStatus> AMissionManagerBase::GetMissionsForDisplay() const {
    return TArray<FMissionStatus>();
}

ASolsticeHUD_Base* AMissionManagerBase::GetHUD() const {
    return NULL;
}

TArray<AMissionBase*> AMissionManagerBase::GetActiveSecondaryMissions() const {
    return TArray<AMissionBase*>();
}

TArray<AMissionBase*> AMissionManagerBase::GetActivePrimaryMissions() const {
    return TArray<AMissionBase*>();
}

TArray<AMissionBase*> AMissionManagerBase::GetActiveMissions() const {
    return TArray<AMissionBase*>();
}

void AMissionManagerBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMissionManagerBase, DialogActor);
    DOREPLIFETIME(AMissionManagerBase, Missions);
}


