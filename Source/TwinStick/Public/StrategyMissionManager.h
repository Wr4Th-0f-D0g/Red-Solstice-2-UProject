#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "CampaignMissionGenerationData.h"
#include "EDropshipStatus.h"
#include "EStrategyMissionLocationAdjustment.h"
#include "EStrategyMissionToken.h"
#include "MissionSpawnRequestContainer.h"
#include "QueuedStrategyMission.h"
#include "SolsticeSaveInterface.h"
#include "StrategyMissionAddedDelegate.h"
#include "StrategyMissionGroupData.h"
#include "StrategyMissionRemovedDelegate.h"
#include "StrategyMissionStatusChangedDelegate.h"
#include "StrategyMissionTimer.h"
#include "StrategyMissionManager.generated.h"

class AMissionBase;
class ARegion;
class AStrategyMission;
class UDataTable;
class UFMODAudioComponent;
class UFMODEvent;
class UMissionSpawnTrigger;
class UStrategyCampaignData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UStrategyMissionManager : public UActorComponent, public ISolsticeSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionSpawnTrigger*> MissionTriggerObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMissionSpawnRequestContainer MissionRequestContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<EStrategyMissionToken, int32> UsedTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FQueuedStrategyMission> QueuedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MissionsSpawnedThisWeek;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARegion*> Regions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CombatMissionCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SupplyMissionCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CampaignMissionCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName LastStrategyMissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StrategyMissionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StrategyMissionGroupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* MissionManagerAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MissionAddedSound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyMissionAdded OnStrategyMissionAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyMissionRemoved OnStrategyMissionRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyMissionStatusChanged OnStrategyMissionStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStrategyMission*> MissionsPendingCleanup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStrategyMission*> ActiveMissions;
    
    UStrategyMissionManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void QueueStrategyMission(float InDelayHours, const FGameplayTag& InMissionTag, ARegion* InTargetRegion);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SpawnStrategyMissionFromTag(ARegion* InRegion, FGameplayTag InTag, AStrategyMission*& OutMission, bool bAutoDetect);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SpawnStrategyMission(ARegion* InRegion, FName MissionName, AStrategyMission*& OutMission, bool bAutoDetect);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SpawnCampaignMission(ARegion* InRegion, AMissionBase* ForMission, const FCampaignMissionGenerationData& InData, AStrategyMission*& OutMission);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionStatusChanged(const FStrategyMissionTimer& InMissionStatus);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionRequested(ARegion* HomeRegion, const FStrategyMissionGroupData& GroupData);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionNuked(AStrategyMission* TargetMission);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionExpired(AStrategyMission* TargetMission);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionCompleted(AStrategyMission* TargetMission, bool Success);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionAborted(AStrategyMission* TargetMission);
    
    UFUNCTION(BlueprintCallable)
    void HandleDropshipStatusChanged(EDropshipStatus InStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AStrategyMission*> GetMissionsInRegion(ARegion* InRegion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AStrategyMission*> GetMissionsForDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EStrategyMissionToken, int32> GetFilteredMissionTokens() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStrategyCampaignData* GetCampaignData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EStrategyMissionToken, int32> GetAvailableMissionTokens() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AStrategyMission*> GetAllMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AStrategyMission*> GetActiveMissionsInRegion(ARegion* HomeRegion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AStrategyMission*> GetActiveMissions() const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustStrategyMission(AStrategyMission* InMission, EStrategyMissionLocationAdjustment AdjustmentType);
    

    // Fix for true pure virtual functions not being implemented
};

