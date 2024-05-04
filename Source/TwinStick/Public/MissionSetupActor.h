#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AirSupportLevelChangedDelegate.h"
#include "ArtillerySupportLevelChangedDelegate.h"
#include "BasicDynamicMulticastDelegateDelegate.h"
#include "CombatLayerMissionSpawnParameters.h"
#include "EAirSupportLevel.h"
#include "EArtillerySupportLevel.h"
#include "EDifficulty.h"
#include "EHordeArrivalTime.h"
#include "ESecondaryMissionFrequency.h"
#include "ESkirmishGenerationType.h"
#include "EStormSeverity.h"
#include "EStrategyMissionGameType.h"
#include "GameDifficultyChangedDelegate.h"
#include "HordeArrivalTimeChangedDelegate.h"
#include "MarsTime.h"
#include "MissionChangedDelegate.h"
#include "MissionDataChangedDelegate.h"
#include "MissionGenerationData.h"
#include "MissionInfestationLevelChangedDelegate.h"
#include "MissionXPModifierChangedDelegate.h"
#include "PrimaryMissionChangedDelegate.h"
#include "SecondaryMissionFrequencyChangedDelegate.h"
#include "SelectedCombatLevelChangedDelegate.h"
#include "SolsticeDeployedVehicle.h"
#include "StrategyMissionData.h"
#include "StrategyMissionLocation.h"
#include "StrategyMissionSettings.h"
#include "Templates/SubclassOf.h"
#include "TotalDeploymentCostChangedDelegate.h"
#include "VehicleAvailableChangedDelegate.h"
#include "MissionSetupActor.generated.h"

class ARegion;
class AStrategyMission;
class UCombatReportComponent;
class UDataTable;
class ULogisticsComponent;
class UPrefabManagerComponent;
class UPrefabricatorAsset;
class USolsticeBuffBase;
class USolsticePrefabData;
class USolsticeSession_HostSessionRequest;
class USpawnGeneratorComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AMissionSetupActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DeployedVehicles, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeDeployedVehicle> DeployedVehicles;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleAvailableChanged OnVehicleAvailableChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CustomVehicleCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpawnGeneratorComponent* SpawnGeneratorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameModeAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCombatReportComponent> CombatReportComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatReportComponent* CombatReportComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULogisticsComponent* LogisticsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ZeroDeploymentMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrefabManagerComponent* PrefabManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionChanged OnMissionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Mission, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyMission> Mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyMissionData MissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionGenerationData, meta=(AllowPrivateAccess=true))
    FMissionGenerationData MissionGenerationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionGenerationSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectedCombatLevelName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelectedCombatLevelChanged OnSelectedCombatLevelChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseMissionDeploymentCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalMissionDeploymentCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InfestationLevel, meta=(AllowPrivateAccess=true))
    int32 InfestationLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionInfestationLevelChanged OnInfestationLevelChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 IntelLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarsTime CampaignTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTotalDeploymentCostChanged OnTotalDeploymentCostChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissionXPModifier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionXPModifierChanged OnMissionXPModifierChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDifficultySettingsAdjusted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionDataChanged OnMissionDataChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESecondaryMissionFrequency DefaultSecondaryMissionFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecondaryMissionFrequency, meta=(AllowPrivateAccess=true))
    ESecondaryMissionFrequency SecondaryMissionFrequency;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSecondaryMissionFrequencyChanged OnSecondaryMissionFrequencyChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAirSupportLevel DefaultAirSupportLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AirSupportLevel, meta=(AllowPrivateAccess=true))
    EAirSupportLevel AirSupportLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirSupportLevelChanged OnAirSupportLevelChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHordeArrivalTime DefaultHordeArrivalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HordeArrivalTime, meta=(AllowPrivateAccess=true))
    EHordeArrivalTime HordeArrivalTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHordeArrivalTimeChanged OnHordeArrivalTimeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArtillerySupportLevel DefaultArtillerySupportLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ArtillerySupportLevel, meta=(AllowPrivateAccess=true))
    EArtillerySupportLevel ArtillerySupportLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArtillerySupportLevelChanged OnArtillerySupportLevelChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStrategyMissionGameType GameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SkirmishGenerationType, meta=(AllowPrivateAccess=true))
    ESkirmishGenerationType SkirmishGenerationType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnSkirmishGenerationTypeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameDifficulty, meta=(AllowPrivateAccess=true))
    EDifficulty GameDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficulty, FStrategyMissionSettings> SkirmishDifficultyDefaults;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameDifficultyChanged OnGameDifficultyChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<USolsticeBuffBase>, int32> ActiveCombatLayerBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStrategyMissionLocation> MissionLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MissionLocationsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SkirmishMissionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CampaignMissionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StrategyMissionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticePrefabData* PrefabData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> MissionDescriptionTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AllMissionDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PrimaryMissionChain;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryMissionChanged OnPrimaryMissionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SelectedLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStrategyMissionLocation> DisqualifiedLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCombatLayerMissionSpawnParameters> BonusEngineeringMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EStormSeverity StormSeverity;
    
    AMissionSetupActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateSessionNameFromSetupActor();
    
    UFUNCTION(BlueprintCallable)
    void UpdateRegionInfo(ARegion* Region);
    
    UFUNCTION(BlueprintCallable)
    void SpawnCombatReportComponent(AStrategyMission* InMission);
    
    UFUNCTION(BlueprintCallable)
    void SetStormSeverity(EStormSeverity NewSeverity);
    
    UFUNCTION(BlueprintCallable)
    void SetSkirmishGenerationType(ESkirmishGenerationType InGenerationType);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryMissionFrequency(ESecondaryMissionFrequency InFrequency);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionGenerationData(const FMissionGenerationData& InData);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionData(const FStrategyMissionData& InData, const FGameplayTag& SelectedMissionTag);
    
    UFUNCTION(BlueprintCallable)
    void SetInfestationLevel(int32 NewInfestationLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetHordeArrivalTime(EHordeArrivalTime InArrivalTime);
    
    UFUNCTION(BlueprintCallable)
    void SetGameDifficulty(EDifficulty InDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstPrimaryMission(FGameplayTag SelectedPrimaryMissionTag);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultSecondaryMissionFrequency(ESecondaryMissionFrequency InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultHordeArrivalTime(EHordeArrivalTime InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultArtillerySupportLevel(EArtillerySupportLevel InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultAirSupportLevel(EAirSupportLevel InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomVehicleCap(int32 CustomCap);
    
    UFUNCTION(BlueprintCallable)
    void SetBotCount(int32 BotCount);
    
    UFUNCTION(BlueprintCallable)
    void SetArtillerySupportLevel(EArtillerySupportLevel InSupportLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetAirSupportLevel(EAirSupportLevel InSupportLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SkirmishGenerationType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecondaryMissionFrequency(ESecondaryMissionFrequency OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionGenerationData(const FMissionGenerationData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Mission();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InfestationLevel(int32 OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HordeArrivalTime(EHordeArrivalTime OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameDifficulty(EDifficulty OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DeployedVehicles(const TArray<FSolsticeDeployedVehicle>& OldVehicleArray);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ArtillerySupportLevel(EArtillerySupportLevel OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AirSupportLevel(EAirSupportLevel OldValue);
    
    UFUNCTION(BlueprintCallable)
    void LoadMissionSettings(const FStrategyMissionSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void HandleFailedToSpawnPrefab(TSoftObjectPtr<UPrefabricatorAsset> FailedPrefab);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetSecondaryMissionSliderFreedomSteps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetSecondaryMissionPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRegionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARegion* GetRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfDeployedVehiclesByTag(FGameplayTag VehicleTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionXPModifier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMissionLevelName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionIntelLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMissionDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMissionDisplayDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStrategyMission* GetMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumDeployedVehicles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USolsticeSession_HostSessionRequest* GetHostingRequest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetHordeArrivalSliderFreedomSteps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficulty GetGameDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExperienceModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEndingHQ_HitPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEffectiveVehicleCap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FStrategyMissionData> GetCombatLevelData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCombatLayerMissionSpawnParameters> GetBonusSecondaryMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAvailableStrategyCombatMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAvailableStartingPrimaryMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EDifficulty> GetAvailableGameDifficulties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAvailableCombatLevels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetArtillerySupportSliderFreedomSteps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetAirSupportSliderFreedomSteps() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateWaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDeployToMission() const;
    
};

