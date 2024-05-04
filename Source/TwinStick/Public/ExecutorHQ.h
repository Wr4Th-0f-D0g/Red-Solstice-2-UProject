#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EAttribute.h"
#include "EHQStatus.h"
#include "EProductionStatus.h"
#include "EventListInterface.h"
#include "HQ_StatusChangedDelegate.h"
#include "MarsTime.h"
#include "MissionEffect.h"
#include "MissionEffectContainer.h"
#include "SpecialistsChangedDelegate.h"
#include "StrategyMapActor.h"
#include "StrategyMapActorReplicationHelper.h"
#include "StrategyResourceChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "ExecutorHQ.generated.h"

class AMarsSplineActor;
class AOutpost;
class ARegion;
class AStrategyDropship;
class UEngineeringObject;
class UEventWidgetBase;
class UHealthComponent;
class UNotificationWidgetBase;
class USolsticeBuffBase;
class UStrategyEngineeringManager;
class UStrategyMapDefinitions;
class UStrategyResearchManager;
class UStrategyUpgradeComponent;
class UTechObject;
class UTexture2D;

UCLASS(Blueprintable)
class TWINSTICK_API AExecutorHQ : public AStrategyMapActor, public IEventListInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStrategyResearchManager* ResearchManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStrategyEngineeringManager* EngineeringManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStrategyUpgradeComponent* UpgradeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyDropship> Dropship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNotificationWidgetBase> LowDeploymentNotificationWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNotificationWidgetBase* LowDeploymentNotificationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNotificationWidgetBase> InTransitNotificationWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNotificationWidgetBase* InTransitNotificationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEventWidgetBase> InTransitEventWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventWidgetBase* InTransitEventWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float SavedHQ_HitPoints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMissionEffectContainer ActiveStrategyLayerBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMissionEffectContainer ActiveCombatLayerBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Supplies, meta=(AllowPrivateAccess=true))
    int32 supplies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Deployment, meta=(AllowPrivateAccess=true))
    int32 deployment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Specialists, meta=(AllowPrivateAccess=true))
    int32 Specialists;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHQStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARegion> Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARegion> NewRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString RegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString NewRegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMarsSplineActor> HQ_SplineActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMarsSplineActor* HQ_SplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMarsSplineActor* HQ_PreviewSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HQ_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float DistanceTravelled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CampaignSelectionRequiredForMovement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHQ_StatusChanged OnHQ_StatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOutpost*> Outposts;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyResourceChanged OnSuppliesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyResourceChanged OnDeploymentChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialistsChanged OnSpecialistsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NetworkMovementHelper, meta=(AllowPrivateAccess=true))
    FStrategyMapActorReplicationHelper NetworkMovementHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* InTransitEventIcon;
    
    AExecutorHQ(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryAddColonyBonuses();
    
    UFUNCTION(BlueprintCallable)
    void ShowLowDeploymentNotificationWidget();
    
    UFUNCTION(BlueprintCallable)
    void ShowInTransitNotificationWidget();
    
    UFUNCTION(BlueprintCallable)
    void ShowInTransitEventWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetSupplies(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialists(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDeployment(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void RemoveStrategyLayerBuff(const FMissionEffect& BuffEffect);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveReplicatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass, int32 NumberOfStacks);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMissionEffect(const FMissionEffectContainer& EffectContainer, ARegion* InRegion);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLowDeploymentNotificationWidget();
    
    UFUNCTION(BlueprintCallable)
    void RemoveInTransitNotificationWidget();
    
    UFUNCTION(BlueprintCallable)
    void RemoveInTransitEventWidget();
    
    UFUNCTION(BlueprintCallable)
    void RemoveCombatLayerBuff(const FMissionEffect& BuffEffect);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Supplies();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Specialists();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_NetworkMovementHelper();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Deployment();
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveToRegion(ARegion* InRegion, bool bResetDistance, bool bIgnoreChecks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HQGrantsColonyBonus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HQ_Undeploying(float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HQ_Deploying(float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReplicatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass, int32& OutStacks, USolsticeBuffBase*& OutBuff);
    
    UFUNCTION(BlueprintCallable)
    void HandleResearchChanged(UTechObject* TechObject);
    
    UFUNCTION(BlueprintCallable)
    void HandleProductionStatusChanged(UEngineeringObject* EngineeringObject, EProductionStatus ProductionStatus);
    
    UFUNCTION(BlueprintCallable)
    void HandleProductionChanged(UEngineeringObject* EngineeringObject);
    
    UFUNCTION(BlueprintCallable)
    void HandleOutpostLevelChanged(AOutpost* Outpost, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleHQDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignDayChanged(const FMarsTime& CampaignTime);
    
    UFUNCTION(BlueprintCallable)
    void HandleAttributeValueChanged(EAttribute Attribute, float OldValue, float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeLevelFor(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSupplies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<TSubclassOf<USolsticeBuffBase>, int32> GetStrategyLayerBuffs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpecialists() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreviewPathLength(ARegion* InRegion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumIntelAdjacentRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumIntel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStrategyMapDefinitions* GetMapDefinitions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntelPerHourAdjacentRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntelGeneratedPerHour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFreeSpecialists() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDropshipIntelPerHour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeployment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<TSubclassOf<USolsticeBuffBase>, int32> GetCombatLayerBuffs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttributeValue(EAttribute InAttribute) const;
    
    UFUNCTION(BlueprintCallable)
    void ExpendSupplies(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void ExpendSpecialists(int32 Value, bool bPauseAllEngineering);
    
    UFUNCTION(BlueprintCallable)
    void ExpendDeployment(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTakeDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMoveToRegion(ARegion* InRegion) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyMissionEffects(const FMissionEffectContainer& EffectContainer, ARegion* InRegion);
    
    UFUNCTION(BlueprintCallable)
    void AddSupplies(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddStrategyLayerBuff(const FMissionEffect& BuffEffect);
    
    UFUNCTION(BlueprintCallable)
    void AddSpecialists(int32 Value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddReplicatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass, int32 Stacks);
    
    UFUNCTION(BlueprintCallable)
    void AddDeployment(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddCombatLayerBuff(const FMissionEffect& BuffEffect);
    

    // Fix for true pure virtual functions not being implemented
};

