#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CombatLayerMissionSpawnParameters.h"
#include "ECorporation.h"
#include "EDifficulty.h"
#include "EStrategyMissionResult.h"
#include "MissionManagerBase.h"
#include "PlayerStatsPair.h"
#include "SecondaryMissionParameters.h"
#include "StrategyMissionLocation.h"
#include "CombatMissionManager.generated.h"

class AMissionBase;
class AMissionSetupActor;
class UDataTable;
class ULocationManager;
class URequisitionData;

UCLASS(Blueprintable)
class TWINSTICK_API ACombatMissionManager : public AMissionManagerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MissionLocationsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URequisitionData* RequisitionDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatLayerMissionSpawnParameters TutorialMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TutorialMissionStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PrimaryTestMissionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> SecondaryTestMissionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePrimaryMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSecondaryMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle StrategyCombatMissionRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCombatLayerMissionSpawnParameters> PrimaryMissionSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivePrimaryMissionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMissionBase* ActivePrimaryMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalPrimaryMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 PrimaryMissionsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCampaignMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMissionBase*> ActiveSecondaryMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SpawnedSecondaryMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondaryMissionsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficulty, FSecondaryMissionParameters> SecondaryMissionParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CrisisMissionsSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECorporation, FGameplayTagContainer> CampaignEvacMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaveGenerationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaveGenOverride_IsSkirmish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty WaveGenOverride_Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveGenOverride_Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveGenOverride_Infest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveGenOverride_Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveGenOverride_Seed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CachedEvacLocation;
    
public:
    ACombatMissionManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartSecondaryMission(const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable)
    void StartPrimaryMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkirmishMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCampaignMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveEvacMission() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleNewWave(int32 WaveNumber);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleMatchEnded(bool bVictory, const TArray<FPlayerStatsPair>& PlayerStats, float MatchTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleLocationsMapped(ULocationManager* LocationManager);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWaveCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpawnedSecondaryMissionCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCombatLayerMissionSpawnParameters> GetSecondaryMissionPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetPrimaryMissionTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPrimaryMissionStartDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCombatLayerMissionSpawnParameters> GetPrimaryMissionSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrimaryMissionCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetNextSecondaryMissionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetNextPrimaryMissionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetNextCrisisMissionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetNextBonusMissionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMissionSetupActor* GetMissionSetupActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStrategyMissionResult GetMissionResult(int32& PlayersEvacuated) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSimultaneousSecondaryMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetMaxSecondaryMissionsPerDeployment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStrategyMissionLocation> GetLevelLocations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficulty GetGameDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentWaveProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag FindNextSecondaryMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartNextPrimaryMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpawnSecondaryMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpawnPrimaryMissions() const;
    
};

