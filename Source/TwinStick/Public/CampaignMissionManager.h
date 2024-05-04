#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActiveMission.h"
#include "CampaignCinematic.h"
#include "CampaignMissionGenerationData.h"
#include "CampaignMissionLocation.h"
#include "ECampaignCinematicPlayMode.h"
#include "EStrategyMissionStatus.h"
#include "MarsTime.h"
#include "MissionManagerBase.h"
#include "SolsticeSaveInterface.h"
#include "StrategyWaitTracker.h"
#include "Templates/SubclassOf.h"
#include "CampaignMissionManager.generated.h"

class AMapBeacon;
class AMissionBase;
class AStrategyMission;

UCLASS(Blueprintable)
class TWINSTICK_API ACampaignMissionManager : public AMissionManagerBase, public ISolsticeSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStrategyMission* RespawnableMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString RespawnableMissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkippedCampaignMissionsPIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMapBeacon* StrategyMapBeacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString StrategyMapBeaconName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FStrategyWaitTracker> ActiveWaitTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FActiveMission> ActiveMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FMarsTime> QueuedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime LastCampaignMissionCompletionTime;
    
    ACampaignMissionManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryPlayCinematics(const FGameplayTag MissionTag, ECampaignCinematicPlayMode PlayMode);
    
    UFUNCTION(BlueprintCallable)
    void TrackStrategyMissionForCampaign(AStrategyMission* InStrategyMission, AMissionBase* InCampaignMission);
    
    UFUNCTION(BlueprintCallable)
    AMissionBase* StartMission(FName InMissionName);
    
    UFUNCTION(BlueprintCallable)
    void StartCampaignMission(FGameplayTag InMissionTag);
    
    UFUNCTION(BlueprintCallable)
    AMapBeacon* SpawnBeacon(TSubclassOf<AMapBeacon> BeaconActorClass, FCampaignMissionLocation BeaconLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetRespawnableMission(AStrategyMission* InMission);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseStrategyMission(AMissionBase* WorldMission);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MeetsRequirementsForQueuingCampaignMission(TArray<FCampaignMissionGenerationData>& AvailableMissions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MeetsRequirementsForNextCampaignMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MeetsRequirementsForCampaignMission(const FCampaignMissionGenerationData& MissionData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitTaskCompletedFor(AMissionBase* InMission, bool bTrackerFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrategyMissionCompletedFor(AMissionBase* InMission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCampaignMission(AMissionBase* InMission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCampaignMissionActiveOrQueued() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleClientPostStartupMedia();
    
    UFUNCTION(BlueprintCallable)
    void HandleCinematicsFinished(const FCampaignCinematic& Cinematic);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCampaignStateFirstReplication();
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignHourChanged(const FMarsTime& CurrentTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStrategyWaitTracker GetWaitTrackerFor(AMissionBase* InMission, bool& bTrackerFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStrategyMissionStatus GetStrategyMissionStatusFor(AMissionBase* InMission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStrategyMission* GetStrategyMissionFor(AMissionBase* InMission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCampaignMissionGenerationData GetNextCampaignMissionData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetMissionTagFor(AMissionBase* InMission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCampaignMissionGenerationData> GetAvailableCampaignMissions() const;
    
    UFUNCTION(BlueprintCallable)
    void AddWaitTrackerByDate(AMissionBase* InCampaignMission, FMarsTime WaitEndTime);
    
    UFUNCTION(BlueprintCallable)
    void AddWaitTracker(AMissionBase* InCampaignMission, int32 WaitHours);
    

    // Fix for true pure virtual functions not being implemented
};

