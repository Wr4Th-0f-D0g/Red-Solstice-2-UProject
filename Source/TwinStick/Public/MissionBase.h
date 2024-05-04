#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BasicADynamicMulticastDelegateDelegate.h"
#include "ELocationDistance.h"
#include "ELocationSelectionMode.h"
#include "EMissionStatus.h"
#include "EMissionType.h"
#include "EObjectiveTimer.h"
#include "HideObjectiveArrowDelegate.h"
#include "LocationInfo.h"
#include "MissionBot.h"
#include "MissionData.h"
#include "MissionDialogRow.h"
#include "MissionLocation.h"
#include "MissionObjective.h"
#include "MissionTimer.h"
#include "MissionTimerManager.h"
#include "SavedMissionLocation.h"
#include "SelectedMissionLocation.h"
#include "SolsticeSaveInterface.h"
#include "Templates/SubclassOf.h"
#include "UI_MIssionLocation.h"
#include "MissionBase.generated.h"

class AActor;
class AMinimapActorBase;
class AMissionBase;
class AMissionManagerBase;
class ASolsticeCharacterBase;
class UBehaviorTree;
class UDataTable;
class UItem;
class UMissionObjectiveTracker;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API AMissionBase : public APawn, public ISolsticeSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRepeatableObjectiveCompleted, AMissionBase*, Mission);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMissionTimerChanged, AMissionBase*, Mission, FMissionTimerManager, TimerManager, EObjectiveTimer, TimerStatus);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMissionObjectiveChanged, AMissionBase*, Mission, EMissionStatus, Status, int32, CurrentObjectiveIndex, bool, bObjectiveCompleted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionLocationsChanged, const TArray<AMinimapActorBase*>&, Locations, int32, Index);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UMissionObjectiveTracker* ObjectiveTracker;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHideObjectiveArrow OnHideObjectiveArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HideObjectiveArrow, meta=(AllowPrivateAccess=true))
    bool bHideObjectiveArrow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicADynamicMulticastDelegate OnMissionBTReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFromLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSkipFirstDialogPostSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MissionDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMissionManagerBase> MissionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> KeepAlivePreloadedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionBT, meta=(AllowPrivateAccess=true))
    UBehaviorTree* MissionBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_MissionName, meta=(AllowPrivateAccess=true))
    FName MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRegisteredAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionData MissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EMissionStatus MissionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ActiveObjectiveIndex;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionObjectiveChanged OnMissionObjectiveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepeatableObjectiveCompleted OnRepeatableObjectiveCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionTimer Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionTimer ObjectiveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionTimerManager TimerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionTimerManager ObjectiveTimerManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionTimerChanged OnMissionTimerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionTimerChanged OnObjectiveTimerChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedMissionLocation> SavedLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMinimapActorBase*> MinimapActors;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionLocationsChanged OnMissionLocationsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionBot> MissionCivilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionBot> MissionFollowers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionBot> MissionEnemyMarines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionBot> MissionBasicMarines;
    
    AMissionBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartObjectiveTimer(FMissionTimer InTimer);
    
    UFUNCTION(BlueprintCallable)
    void StartObjective();
    
    UFUNCTION(BlueprintCallable)
    void StartMissionTimer(FMissionTimer InTimer);
    
    UFUNCTION(BlueprintCallable)
    void SaveSelectedLocation(FSelectedMissionLocation InLocation);
    
    UFUNCTION(BlueprintCallable)
    void ResetMissionFollowers();
    
    UFUNCTION(BlueprintCallable)
    void ResetMissionEnemyMarines();
    
    UFUNCTION(BlueprintCallable)
    void ResetMissionCivilians();
    
    UFUNCTION(BlueprintCallable)
    void ResetMissionBasicMarines();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionBT();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HideObjectiveArrow();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetObjectiveTracker(UMissionObjectiveTracker* InObjectiveTracker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimaryMission() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleObjectiveTimerExpired(bool bInSuccess);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionTimerExpired(bool bInSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSavedLocationByObjectiveName(FSavedMissionLocation& NamedLocation, FName ObjectiveName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetObjectiveTimerText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMissionType GetMissionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMissionTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMissionTimerText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetMissionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMissionObjective> GetMissionObjectiveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetMissionLocations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UItem> GetMissionItemClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionHoldTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASolsticeCharacterBase*> GetMissionFollowers(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASolsticeCharacterBase*> GetMissionEnemyMarines(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASolsticeCharacterBase*> GetMissionCivilians(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASolsticeCharacterBase*> GetMissionBasicMarines(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetMissionActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLastSavedLocation(FSavedMissionLocation& LastLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMissionDialogRow GetDialogRow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetActiveObjectiveText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveObjectiveIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUI_MIssionLocation> GetActiveMissionLocations() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugSkipObjective();
    
    UFUNCTION(BlueprintCallable)
    void CreateSavedItemEntry(int32 InIndex, const FLocationInfo& Location, const FVector& Point, FName InLocationName);
    
    UFUNCTION(BlueprintCallable)
    void CreateMissionLocations(const FGameplayTagContainer& LocationGameplayTags, EGameplayContainerMatchType MatchType, int32 LocationCount, ELocationDistance Range, float MinimumRange, const FVector& DistanceLocation, FName LocationName, ELocationSelectionMode ChoosingMode, bool bLockLMAAfterUse, bool bCanUseLockedLMAs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMissionLocation ConfigureMissionLocation(FMissionLocation InLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteRepeatableObjective();
    
    UFUNCTION(BlueprintCallable)
    void CompleteObjective(EMissionStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void ClearObjectiveTimer(bool bBroadcast);
    
    UFUNCTION(BlueprintCallable)
    void ClearMissionTimer();
    
    UFUNCTION(BlueprintCallable)
    void AdvanceToObjective(int32 ObjectiveIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddMissionFollower(ASolsticeCharacterBase* Follower, int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddMissionEnemyMarine(ASolsticeCharacterBase* EnemyMarine, int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddMissionCivilian(ASolsticeCharacterBase* Civilian, int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddMissionBasicMarine(ASolsticeCharacterBase* BasicMarine, int32 GroupIndex);
    

    // Fix for true pure virtual functions not being implemented
};

