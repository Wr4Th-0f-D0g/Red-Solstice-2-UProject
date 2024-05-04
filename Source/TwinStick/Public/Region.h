#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BasicDynamicMulticastDelegateDelegate.h"
#include "BlackOpsChangedInRegionDelegate.h"
#include "ContactStatusChangedDelegate.h"
#include "EArtillerySupportLevel.h"
#include "EHordeArrivalTime.h"
#include "ERegionContactStatus.h"
#include "ERegionOverlay.h"
#include "ESecondaryMissionFrequency.h"
#include "EStormSeverity.h"
#include "InfestationLevelChangedDelegate.h"
#include "IntelLevelChangedDelegate.h"
#include "MarsTime.h"
#include "RegionScanTimer.h"
#include "RegionScanTimerCompletedDelegate.h"
#include "RegionStatusTagsChangedDelegate.h"
#include "RegionalInfestationTracker.h"
#include "RegionalIntelTracker.h"
#include "RegionalMissionTracker.h"
#include "RegionalStormTracker.h"
#include "SolsticeSavedAttributeContainer.h"
#include "StormLevelChangedDelegate.h"
#include "StrategyMapActor.h"
#include "Templates/SubclassOf.h"
#include "Region.generated.h"

class AColony;
class AMarsSplineActor;
class AOutpost;
class ARegion;
class AStrategyMission;
class ATerraformer;
class UBotStatus;
class USceneComponent;
class USolsticeBuffBase;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ARegion : public AStrategyMapActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RegionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RegionCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HQ_Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Outpost_Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Terraformer_Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ContactStatus, meta=(AllowPrivateAccess=true))
    ERegionContactStatus ContactStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FRegionalInfestationTracker InfestationTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InfestationLevel, meta=(AllowPrivateAccess=true))
    int32 InfestationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FRegionalIntelTracker IntelTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IntelLevel, meta=(AllowPrivateAccess=true))
    int32 IntelLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_StormTracker, meta=(AllowPrivateAccess=true))
    FRegionalStormTracker StormTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStormSeverity StormLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FRegionScanTimer RegionScanTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERegionOverlay RegionOverlay;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FString> BlackOpsOperativeNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBotStatus*> BlackOpsOperatives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowRegionInfoWhenClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInfestationLevelChanged OnInfestationLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntelLevelChanged OnIntelLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStormLevelChanged OnStormLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContactStatusChanged OnContactStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegionScanTimerCompleted OnRegionScanTimeCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackOpsChangedInRegion OnRegionBlackOpsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMarsSplineActor> RegionLinkSplineActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ARegion*, AMarsSplineActor*> AdjacentRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ARegion*, AMarsSplineActor*> AdjacentRegionsPreEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FRegionalMissionTracker MissionTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CompletedMissionBuffStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 FailedMissionBuffStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> CompletedMissionBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> FailedMissionBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> BlackOpsBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_RegionStatusTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RegionStatusTags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegionStatusTagsChanged OnRegionStatusTagsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOutpost* Outpost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnOutpostUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AColony* Colony;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATerraformer* Terraformer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnTerraformerStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime OutpostConstructionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime OutpostDestructionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime ColonyDestructionTIme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime TerraformerDestructionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedAttributes, meta=(AllowPrivateAccess=true))
    FSolsticeSavedAttributeContainer ReplicatedAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExcludeSpawnLocationsDistanceFromRegionWidget;
    
    ARegion(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ToggleStormOverlay();
    
    UFUNCTION(BlueprintCallable)
    void ToggleIntelOverlay();
    
    UFUNCTION(BlueprintCallable)
    void ToggleInfestationOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TerraformerDestroyed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StormChanged(EStormSeverity OldSeverity, EStormSeverity NewSeverity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StatusTagsChanged(const FGameplayTagContainer& StatusTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SolarFiredOnRegion(bool bJustFired);
    
    UFUNCTION(BlueprintCallable)
    void SetRegionContactStatus(ERegionContactStatus InContactStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetIntelLevel(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInfestationLevel(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void RemoveStatusTag(const FGameplayTag& StatusTag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegionOverlayChanged(ERegionOverlay ActiveOverlay);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OutpostDestroyed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StormTracker();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAttributes();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RegionStatusTags();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IntelLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InfestationLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ContactStatus();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutpostUnderConstruction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyInfested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyAdjacentRegionContacted() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IntelChanged(int32 OldIntel, int32 NewIntel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InfestationChanged(int32 OldInfestation, int32 NewInfestation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUpgradeableOutpost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTerraformer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecentlyLostColony() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRandomRegionalColonyBuffFromOutpost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRandomRegionalColonyBuffFromHQ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRandomRegionalColonyBuff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOutpostUnderConstruction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOutpost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOperationalTerraformer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOperationalOutpost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLostColony() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHQ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFullyUpgradedOutpost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasColony() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyAdjacentContactedRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveStorm() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleRegionScanTimerFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleMaximumIntelLevelReached();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWidgetComponentPlacement(FVector& OutLocation, FVector& OutNormal, FRotator& OutRotator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeLevelFor(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTerraformerNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTerraformerLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetTerraformerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSupplyIncome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStormValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRegionalStormTracker GetStormTracker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStormSeverity GetStormLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStormIntensityModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStormDissipationChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpecialistIncome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRegionNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetRegionDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERegionContactStatus GetRegionContactStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRegionCenterLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetRegionCenter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRandomSpawnLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRandomPointInRegion(FVector& OutPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARegion* GetRandomAdjacentRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOutpostNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOutpostLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOutpostLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOutpostConstructionSupplyCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOutpostConstructionSpecialistCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOutpostConstructionDeploymentCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOutpostConstructionBuildTimeHours() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetOutpostComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetModifiedSupplyIncome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetModifiedSpecialistIncome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetModifiedDeploymentIncome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EArtillerySupportLevel GetMinumumArtillerySupportLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESecondaryMissionFrequency GetMinimumSecondaryMissionFrequency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumIntelLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHordeArrivalTime GetMinimumHordeArrivalTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESecondaryMissionFrequency GetMaximumSecondaryMissionFrequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHordeArrivalTime GetMaximumHordeArrivalTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EArtillerySupportLevel GetMaximumArtillerySupportLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntelValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRegionalIntelTracker GetIntelTracker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntelLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInfestationValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRegionalInfestationTracker GetInfestationTracker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInfestationLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHQ_Normal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHQ_Location() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetHQ_Component() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeploymentIncome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeploymentCostModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseSupplyIncome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseSpecialistIncome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseDeploymentIncome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARegion*> GetAdjacentRegions(int32 SearchDepth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AStrategyMission*> GetActiveMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveMissionCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GenerateVectorGrid() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyTerraformer(bool bFromSolar);
    
    UFUNCTION(BlueprintCallable)
    void DestroyOutpost(bool bFromSolar);
    
    UFUNCTION(BlueprintCallable)
    void DestroyColony(bool bFromSolar);
    
    UFUNCTION(BlueprintCallable)
    void DeployBlackOps(UBotStatus* BotStatus);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ContactStatusChanged(ERegionContactStatus NewContactStatus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ColonyDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBuildOrUpgradeOutpost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAnyAdjacentRegionsInfested() const;
    
    UFUNCTION(BlueprintCallable)
    void AddStatusTag(const FGameplayTag& StatusTag);
    
    UFUNCTION(BlueprintCallable)
    void AddIntel(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddInfestation(int32 Value);
    
};

