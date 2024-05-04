#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/Pawn.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMissionStatus.h"
#include "MissionContainer.h"
#include "MissionDialog.h"
#include "MissionStatus.h"
#include "QueuedMissionTitle.h"
#include "Templates/SubclassOf.h"
#include "MissionManagerBase.generated.h"

class ADialogActor;
class AMediaPlayerActor;
class AMissionBase;
class ASolsticeHUD_Base;
class UDataTable;
class UFMODAudioComponent;
class UFMODEvent;

UCLASS(Blueprintable)
class TWINSTICK_API AMissionManagerBase : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADialogActor> DialogActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADialogActor> DialogActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMediaPlayerActor> MediaPlayerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MissionDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CompletedTextHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle FailedTextHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueuedMissionTitle> QueuedMissionTitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSpawnEvac;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMissionBase> MissionPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMissionContainer Missions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FModMissionAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ObjectiveAddedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ObjectiveCompletedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MissionCompletedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MissionFailedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstDialogDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MissionLocationsPIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMissionBase*> MissionsPendingAddToHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NextMissionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientReadyToPlayMedia;
    
    AMissionManagerBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    AMissionBase* SpawnMissionFromTag(FGameplayTag MissionTag);
    
    UFUNCTION(BlueprintCallable)
    AMissionBase* SpawnMission(FName MissionName);
    
    UFUNCTION(BlueprintCallable)
    void ShowMissionTitle(FText MissionText, EMissionStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void ShowMission(AMissionBase* Mission);
    
    UFUNCTION(BlueprintCallable)
    void PlayMissionSound(UFMODEvent* SoundAsset);
    
    UFUNCTION(BlueprintCallable)
    void PlayFirstMissionDialog(const FMissionDialog& FirstDialog);
    
    UFUNCTION(BlueprintCallable)
    void PlayDialogForMission(AMissionBase* Mission, EMissionStatus Status, int32 CurrentObjectiveIndex, bool bObjectiveCompleted);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionUpdated(FMissionStatus& InMission);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionRemoved(const FMissionStatus& InMission);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionObjectiveChanged(AMissionBase* Mission, EMissionStatus Status, int32 CurrentObjectiveIndex, bool bObjectiveCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMissionCompleted(AMissionBase* Mission, EMissionStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionAdded(FMissionStatus& InMission);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMissionStatus> GetMissionsForDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeHUD_Base* GetHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMissionBase*> GetActiveSecondaryMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMissionBase*> GetActivePrimaryMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMissionBase*> GetActiveMissions() const;
    
};

