#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameplayTagContainer.h"
#include "BasicDynamicMulticastDelegateDelegate.h"
#include "CampaignTimeChangedDelegate.h"
#include "EDifficulty.h"
#include "EDropshipStatus.h"
#include "EPlanetCameraMode.h"
#include "EStrategyInteractionState.h"
#include "EStrategyResourceType.h"
#include "ETimeTickSpeed.h"
#include "MapInitializedDelegate.h"
#include "MarsTime.h"
#include "OutpostConstructedDelegate.h"
#include "PendingEventsChangedDelegate.h"
#include "SolsticeSaveInterface.h"
#include "StrategyMapInteractionChangedDelegate.h"
#include "StrategyTimedFlag.h"
#include "Templates/SubclassOf.h"
#include "TimeTickSpeedChangedDelegate.h"
#include "StrategyMapManager.generated.h"

class AColony;
class AExecutorHQ;
class AHASROC;
class AOutpost;
class ARegion;
class ASOLAR;
class AStrategyDropship;
class AStrategyMapActor;
class ASuperWeaponBase;
class ATerraformer;
class UCameraComponent;
class UCampaign;
class UCampaignInitializer;
class UEngineeringMapEvent;
class UMissionMapEvent;
class UOutpostMapEvent;
class UResearchMapEvent;
class USceneComponent;
class USpringArmComponent;
class UStoryMapEvent;
class UStrategyInfestationManager;
class UStrategyIntelManager;
class UStrategyMapEventBase;
class UStrategyMissionManager;
class UStrategyResourceManager;
class UStrategyStormManager;
class UStrategyViewManager;

UCLASS(Blueprintable)
class TWINSTICK_API AStrategyMapManager : public APawn, public ISolsticeSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCampaign* Campaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCampaignInitializer* CampaignInitializer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapInitialized OnMapInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PlanetCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlanetCameraMode CameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStrategyMapActor* ViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStrategyInfestationManager* InfestationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStrategyMissionManager* MissionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStrategyIntelManager* IntelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStrategyStormManager* StormManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStrategyViewManager* ViewManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStrategyResourceManager* ResourceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SolarAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExecutorHQ* ExecutorHQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AExecutorHQ> ExecutorHQ_Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStrategyDropship* Dropship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStrategyDropship> Dropship_Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASOLAR* SOLAR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASOLAR> SolarClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHASROC* HASROC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHASROC> HasrocClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExecutorStartingRegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARegion*> Regions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AColony> ColonyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATerraformer> TerraformerClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyMapInteractionChanged OnStrategyMapInteractionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EDifficulty GameDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime CampaignCurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CampaignElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ETimeTickSpeed TimeTickSpeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeTickSpeedChanged OnTimeTickSpeedChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KilometersPerUU;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignTimeChanged OnCampaignHourChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignTimeChanged OnCampaignDayChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignTimeChanged OnCampaignMonthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignTimeChanged OnCampaignYearChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 OutpostCount;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutpostConstructed OnOutpostConstructed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeTickSpeed PrePauseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStrategyMapEventBase*> PendingEvents;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPendingEventsChanged OnPendingEventsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_TimedFlags, meta=(AllowPrivateAccess=true))
    TArray<FStrategyTimedFlag> TimedFlags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnTimedFlagsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, ASuperWeaponBase*> CampaignSuperweapons;
    
    AStrategyMapManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnpauseGame();
    
    UFUNCTION(BlueprintCallable)
    void ToggleStormOverlay();
    
    UFUNCTION(BlueprintCallable)
    void ToggleIntelOverlay();
    
    UFUNCTION(BlueprintCallable)
    void ToggleInfestationOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TimeTickSpeedChanged(ETimeTickSpeed NewSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SpawnTerraformers();
    
    UFUNCTION(BlueprintCallable)
    void SpawnColonies();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeTickSpeed(ETimeTickSpeed NewSpeed);
    
    UFUNCTION(BlueprintCallable)
    void RemoveStoryEvent();
    
    UFUNCTION(BlueprintCallable)
    void RemoveResearchEvent();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOutpostEvent();
    
    UFUNCTION(BlueprintCallable)
    void RemoveMissionEvent();
    
    UFUNCTION(BlueprintCallable)
    void RemoveEngineeringEvent();
    
    UFUNCTION(BlueprintCallable)
    void PauseGame();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TimedFlags();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetTimeTickSpeed(ETimeTickSpeed NewSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamePaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTechToBuildOutpost(int32 OutpostLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasResourcesToBuildOutpost(int32 OutpostLevel) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionChanged(AStrategyMapActor* MapActor, EStrategyInteractionState InteractionState);
    
    UFUNCTION(BlueprintCallable)
    void HandleDropshipStatusChanged(EDropshipStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignYearChanged(const FMarsTime& CampaignTime);
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignProgressTagAdded(const FGameplayTag& ProgressTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignMonthChanged(const FMarsTime& CampaignTime);
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignHourChanged(const FMarsTime& CampaignTime);
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignDayChanged(const FMarsTime& CampaignTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalMissionsFailed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalMissionsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTerraformersDestroyed() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ARegion*> GetRegionsSortedByIncome(EStrategyResourceType ResourceSortType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARegion* GetRegionByName(const FString& InName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMapZoomLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficulty GetGameDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColoniesDestroyed() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteStoryEvent();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteResearchEvent();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteOutpostEvent();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteMissionEvent();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteEngineeringEvent();
    
    UFUNCTION(BlueprintCallable)
    void CancelOutpost(AOutpost* InOutpost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBuildOutpost(ARegion* TargetRegion) const;
    
    UFUNCTION(BlueprintCallable)
    AOutpost* BuildOutpost(ARegion* TargetRegion, bool bFreeConstruction, bool bIgnoreRequirements);
    
    UFUNCTION(BlueprintCallable)
    void AdjustRegionVisibility();
    
    UFUNCTION(BlueprintCallable)
    void AddTimedFlag(FStrategyTimedFlag NewTimedFlag);
    
    UFUNCTION(BlueprintCallable)
    UStoryMapEvent* AddStoryEvent();
    
    UFUNCTION(BlueprintCallable)
    UResearchMapEvent* AddResearchEvent();
    
    UFUNCTION(BlueprintCallable)
    UOutpostMapEvent* AddOutpostEvent();
    
    UFUNCTION(BlueprintCallable)
    UMissionMapEvent* AddMissionEvent();
    
    UFUNCTION(BlueprintCallable)
    UEngineeringMapEvent* AddEngineeringEvent();
    

    // Fix for true pure virtual functions not being implemented
};

